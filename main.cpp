#include "nomenuwnd.h"
#include <QApplication>
#include <commoninterfacefunction.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NoMenuWnd w;

    int windowsWidth=960, windowsHeight=720;      //获取，并重新设置窗口像素值
    CommonInterfaceFunction *p = new CommonInterfaceFunction();
    p->getWindowspixel(windowsWidth, windowsHeight);
    w.resize(windowsWidth, windowsHeight);
    delete p;
    p = NULL;

    w.setWindowTitle("TripleSpace");
    w.show();

    return a.exec();
}
