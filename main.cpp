#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
     w.show();
     w.setWindowIcon(QIcon(":/files/thumbnail_delta.ico"));

    return a.exec();
}
