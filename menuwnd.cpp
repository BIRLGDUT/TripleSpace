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
