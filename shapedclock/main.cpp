#include "shapedclock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    shapedclock w;
    w.show();

    return a.exec();
}
