#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("default");
    Widget w;
    w.show();
    return a.exec();
}
