#include "menuwnd.h"
#include "ui_menuwnd.h"

MenuWnd::MenuWnd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWnd)
{
    ui->setupUi(this);
}

MenuWnd::~MenuWnd()
{
    delete ui;
}

void MenuWnd::changeStack(int index)
{
    switch(index)
    {
    case 0:
        ui->stackedWidget->setCurrentIndex(0);
        break;
    case 1:
        ui->stackedWidget->setCurrentIndex(1);
        break;
    }
}

void MenuWnd::on_actionExit_E_triggered()
{
    emit menuWndStatus(true);
    close();
}
