#include "nomenuwnd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NoMenuWnd w;
    w.show();

    return a.exec();
}
