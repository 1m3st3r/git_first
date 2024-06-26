#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QPainter>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QTimer *timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(10);

    ui->setupUi(this);
    ui->dateEdit2->setDate(QDate::currentDate());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionHow_does_it_work_triggered()
{
    QMessageBox::information(this, "How does this program work", "This program calculates biorithms. Human's life, "
"like everything in nature, is influensed by cyclical changes. The seccess of a particular type of activity "
"at any given time is determined by the balance of the inflow and outflow of its internal energy. This balance changes in accordance "
"with the cecles of human biorhythms... bla bla bla");
}

void MainWindow::on_CalculateButton_clicked()
{
    QDate currentDate = QDate::currentDate();
    QDate date1 = ui->dateEdit1->date();
    QDate date2 = ui->dateEdit2->date();
    int daysFromCurrent = qAbs(currentDate.daysTo(date1));
    int days = qAbs(date1.daysTo(date2));

    ui->labelNumDays->setText(QString("Number of days: %1").arg(days));

    double physical = 100 * sin(2 * M_PI * daysFromCurrent / 23);
    double emotional = 100 * sin(2 * M_PI * daysFromCurrent / 28);
    double intellectual = 100 * sin(2 * M_PI * daysFromCurrent / 33);

    ui->labelPhysical->setText(QString("Physical: %1").arg(physical));
    ui->labelEmotional->setText(QString("Emotional: %1").arg(emotional));
    ui->labelIntellectual->setText(QString("Intellectual: %1").arg(intellectual));

    QPixmap pixmap(781, 291);
    pixmap.fill(Qt::white);
    QPainter painter(&pixmap);
    painter.setRenderHint(QPainter::Antialiasing);

    // Оси координат
    int centerX = pixmap.width() / 2;
    int centerY = pixmap.height() / 2;
    painter.drawLine(0, centerY, pixmap.width(), centerY);
    painter.drawLine(centerX, 0, centerX, pixmap.height());

    // Графики
    QPoint point;
    for (double i = -daysFromCurrent / 60; i < daysFromCurrent / 60; i += 0.01) {
        physical = 100 * sin(2 * M_PI * (i + daysFromCurrent) / 23);
        emotional = 100 * sin(2 * M_PI * (i + daysFromCurrent) / 28);
        intellectual = 100 * sin(2 * M_PI * (i + daysFromCurrent) / 33);

        QPen linepen(Qt::red);
        linepen.setWidth(3);
        painter.setPen(linepen);
        point.setX(centerX + i * 10);
        point.setY(centerY - physical);
        painter.drawPoint(point);

        linepen.setColor(Qt::blue);
        painter.setPen(linepen);
        point.setY(centerY - emotional);
        painter.drawPoint(point);

        linepen.setColor(QColor(64, 38, 52));
        painter.setPen(linepen);
        point.setY(centerY - intellectual);
        painter.drawPoint(point);
    }

    for (int j=-width()/30; j <= width()/30; j++){
        if(j == 0){
            painter.save();
            QPen linepen(Qt::black);
            linepen.setWidth(3);
            painter.setPen(linepen);
            QFont font = painter.font();
            font.setPointSize(10);
            painter.setFont(font);
            painter.drawLine(j*30,-20, j*30,20);
            painter.rotate(90);
            QString date= ui->dateEdit2->date().addDays(-j).toString();
            painter.drawText(10, j*30, date);
            painter.restore();
        }
        else{

            painter.drawLine(j*30,-10, j*30,10);

            painter.save();
            painter.rotate(90);
            QString date= ui->dateEdit2->date().addDays(-j).toString();
            painter.drawText(10, j*30, date);
            painter.restore();
        }
    }
    painter.end();
    ui->labelGraphic->setPixmap(pixmap);
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Text Files (*.txt);;All Files (*)"));
    if (!fileName.isEmpty())
    {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);
            out << "Date 1: " << ui->dateEdit1->date().toString("dd.MM.yyyy") << "\n";
            out << "Date 2: " << ui->dateEdit2->date().toString("dd.MM.yyyy") << "\n";
            int numberOfDays = ui->dateEdit1->date().daysTo(ui->dateEdit2->date());
            out << "Number of days between: " << abs(numberOfDays) << "\n";
            file.close();
        }
        else
        {
            QMessageBox::warning(this, tr("Error"), tr("Could not save the file"));
        }
    }
        else
        {
            QMessageBox::information(this, tr("Information"), tr("Saving canceled"));
        }
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Text Files (*.txt);;All Files (*)"));

    if (!fileName.isEmpty())
    {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file);
            QString line;
            while (!in.atEnd())
            {
                line = in.readLine();
                if (line.startsWith("Date 1: "))
                {
                    ui->dateEdit1->setDate(QDate::fromString(line.mid(8), "dd.MM.yyyy"));
                }
                else if (line.startsWith("Date 2: "))
                {
                    ui->dateEdit2->setDate(QDate::fromString(line.mid(8), "dd.MM.yyyy"));
                }
                else if (line.startsWith("Number of days between: "))
                {
                    int numberOfDays = line.mid(24).toInt();
                }
            }
            file.close();
        }
        else
        {
            QMessageBox::warning(this, tr("Error"), tr("Could not open the file"));
        }
    }
}
