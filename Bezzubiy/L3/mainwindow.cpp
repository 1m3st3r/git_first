#include "mainwindow.h"
#include <QPainter>
#include <QDateTime>
#include <QScreen>
#include <QGuiApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QScreen *screen = QGuiApplication::screens().at(0);
    QRect screenGeometry = screen->geometry();
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();

    background.load(":/img/Background.jpg");

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClock);
    timer->start(1000);
    showMaximized();
}

MainWindow::~MainWindow()
{
    delete timer;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    // Фон
    QPainter painter(this);
    painter.drawPixmap(0, 0, width(), height(), background);

    // Часы
    painter.setRenderHint(QPainter::Antialiasing);
    QPoint center(width() / 2, height() / 2);
    int radius = qMin(width(), height()) * 0.4; // Уменьшаем радиус на 60%
    int side = radius * 2;
    QPen pen(Qt::white);
    pen.setWidth(3);
    painter.setPen(pen);
    painter.setBrush(QColor(255, 255, 255, 128)); // Прозрачность 50%
    painter.drawEllipse(center, radius, radius);

    int num1 = 1;
    // Деления на часах
    for (int i = 0; i < 12; ++i) {
        painter.save();
        painter.translate(center);
        painter.rotate(30.0 * i);

        // деление
        painter.drawLine(radius * 0.9, 0, radius, 0);

        // Цифры
        painter.setFont(QFont("Arial", 12));
        painter.drawText(radius * 0.75, 0, QString::number((num1 + 1) % 12 + 1));
        painter.restore();
        num1++;
    }

    //Текущее время
    QDateTime currentTime = QDateTime::currentDateTime();
    int hour = currentTime.time().hour();
    int minute = currentTime.time().minute();
    int second = currentTime.time().second();

    // Часовая стрелка
    painter.save();
    painter.translate(center);
    painter.setPen(QColor(0, 0, 0, 128)); // Прозрачность 50%
    painter.setBrush(QColor(0, 0, 0, 128)); // Прозрачность 50%
    painter.rotate(180.0 + 30.0 * (hour + minute / 60.0)); // Поворачиваем на 180 градусов
    painter.drawConvexPolygon(QPolygonF(QRectF(-7, -7, 14, radius * 0.4)));
    painter.restore();

    //Минутная стрелка
    painter.save();
    painter.translate(center);
    painter.setPen(QColor(0, 0, 0, 128));
    painter.setBrush(QColor(0, 0, 0, 128));
    painter.rotate(180.0 + 6.0 * (minute + second / 60.0));
    painter.drawConvexPolygon(QPolygonF(QRectF(-5, -5, 10, radius * 0.6)));
    painter.restore();

    //Секундная стрелка
    painter.save();
    painter.translate(center);
    painter.setPen(QColor(255, 0, 0, 128));
    painter.setBrush(QColor(255, 0, 0, 128));
    painter.rotate(180.0 + 6.0 * second);
    painter.drawConvexPolygon(QPolygonF(QRectF(-2, -2, 4, radius * 0.8)));
    painter.restore();
}

void MainWindow::updateClock()
{
    update();
}
