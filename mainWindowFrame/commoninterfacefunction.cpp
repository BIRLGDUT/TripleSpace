#include "commoninterfacefunction.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QRect>

CommonInterfaceFunction::CommonInterfaceFunction()
{

}

void CommonInterfaceFunction::getWindowspixel(int &width, int &height)
{
    QDesktopWidget* desktopWidget = QApplication::desktop();//获取显示器分辨率，并设置界面相应比例
    QRect screenRect = desktopWidget->screenGeometry();
    width = screenRect.width()*0.6;
    height = screenRect.height()*0.8;
}
