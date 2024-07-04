#include "mainwindow.h"

class Book {
public:
    QString isbn;
    QString title;
    QString author;

    Book() {}

    Book(const QString &isbn, const QString &title, const QString &author) :
        isbn(isbn), title(title), author(author) {}

    QString toString() const {
        return isbn + ";" + title + ";" + author;
    }

    void fromString(const QString &str) {
        QStringList parts = str.split(';');
        isbn = parts[0];
        title = parts[1];
        author = parts[2];
    }
};

QHash<QString, Book> bookHash;

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    QLabel *isbnLabel = new QLabel("ISBN:");
    isbnLineEdit = new QLineEdit;
    QLabel *titleLabel = new QLabel("Title:");
    titleLineEdit = new QLineEdit;
    QLabel *authorLabel = new QLabel("Author:");
    authorLineEdit = new QLineEdit;
    addButton = new QPushButton("Add");
    deleteButton = new QPushButton("Remove");
    searchButton = new QPushButton("Search");
    showAllButton = new QPushButton("View all");
    saveButton = new QPushButton("Save");
    loadButton = new QPushButton("Load");
    resultLabel = new QLabel("");
    bookTable = new QTableWidget;

    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow(isbnLabel, isbnLineEdit);
    formLayout->addRow(titleLabel, titleLineEdit);
    formLayout->addRow(authorLabel, authorLineEdit);
    QHBoxLayout *buttonLayout1 = new QHBoxLayout;
    buttonLayout1->addWidget(addButton);
    buttonLayout1->addWidget(deleteButton);
    buttonLayout1->addWidget(searchButton);
    buttonLayout1->addWidget(showAllButton);
    QHBoxLayout *buttonLayout2 = new QHBoxLayout;
    buttonLayout2->addWidget(saveButton);
    buttonLayout2->addWidget(loadButton);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(formLayout);
    mainLayout->addLayout(buttonLayout1);
    mainLayout->addLayout(buttonLayout2);
    mainLayout->addWidget(resultLabel);
    mainLayout->addWidget(bookTable);
    setLayout(mainLayout);

    bookTable->setColumnCount(3);
    QStringList headers = {"ISBN", "Title", "Author"};
    bookTable->setHorizontalHeaderLabels(headers);
    bookTable->horizontalHeader()->setStretchLastSection(true);
    bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(addButton, &QPushButton::clicked, this, &MainWindow::addBook);
    connect(deleteButton, &QPushButton::clicked, this, &MainWindow::deleteBook);
    connect(searchButton, &QPushButton::clicked, this, &MainWindow::searchBook);
    connect(showAllButton, &QPushButton::clicked, this, &MainWindow::showAllBooks);
    connect(saveButton, &QPushButton::clicked, this, &MainWindow::saveBooks);
    connect(loadButton, &QPushButton::clicked, this, &MainWindow::loadBooks);
}

void MainWindow::addBook() {
    QString isbn = isbnLineEdit->text();
    QString title = titleLineEdit->text();
    QString author = authorLineEdit->text();

    if (isbn.isEmpty() && title.isEmpty() && author.isEmpty()) {
        QMessageBox::warning(this, "Error", "Add all strs");
        return;
    }

    if (bookHash.contains(isbn)) {
        QMessageBox::warning(this, "Error", "ISBN doesn't exist");
        return;
    }

    bookHash[isbn] = Book(isbn, title, author);
    resultLabel->setText("Added");

    isbnLineEdit->clear();
    titleLineEdit->clear();
    authorLineEdit->clear();

    updateTable();
}

void MainWindow::deleteBook() {
    QString isbn = isbnLineEdit->text();

    if (isbn.isEmpty()) {
        QMessageBox::warning(this, "Error", "Enter ISBN");
        return;
    }

    if (!bookHash.contains(isbn)) {
        QMessageBox::warning(this, "Error", "ISBN not found");
        return;
    }

    bookHash.remove(isbn);
    resultLabel->setText("Removed");

    isbnLineEdit->clear();

    updateTable();
}

void MainWindow::searchBook() {
    QString isbn = isbnLineEdit->text();

    if (isbn.isEmpty()) {
        QMessageBox::warning(this, "Error", "Enter ISBN");
        return;
    }

    if (bookHash.contains(isbn)) {
        Book book = bookHash[isbn];
        resultLabel->setText("Title: " + book.title + ", Author: " + book.author);
    } else {
        resultLabel->setText("ISBN not found");
    }
}

void MainWindow::showAllBooks() {
    bookTable->setRowCount(0);

    int row = 0;
    foreach (QString key, bookHash.keys()) {
        Book book = bookHash[key];
        bookTable->insertRow(row);
        bookTable->setItem(row, 0, new QTableWidgetItem(key));
        bookTable->setItem(row, 1, new QTableWidgetItem(book.title));
        bookTable->setItem(row, 2, new QTableWidgetItem(book.author));
        row++;
    }
}

void MainWindow::saveBooks() {
    QString fileName = QFileDialog::getSaveFileName(this, "Save", "", "Txt files (*.txt)");
    if (fileName.isEmpty()) {
        return;
    }
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        foreach (QString key, bookHash.keys()) {
            Book book = bookHash[key];
            out << book.toString() << '\n';
        }
        file.close();
        resultLabel->setText("Saved");
    } else {
        QMessageBox::warning(this, "Error", "Not saved");
    }
}

void MainWindow::loadBooks() {
    QString fileName = QFileDialog::getOpenFileName(this, "Load", "", "Txt files (*.txt)");
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        bookHash.clear();
        while (!in.atEnd()) {
            QString line = in.readLine();
            Book book;
            book.fromString(line);
            bookHash[book.isbn] = book;
        }
        file.close();
        resultLabel->setText("Loaded");
        updateTable();
    } else {
        QMessageBox::warning(this, "Error", "Not load");
    }
}

void MainWindow::updateTable() {
    showAllBooks();
    resultLabel->setText("");
}
