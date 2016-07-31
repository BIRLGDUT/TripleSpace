#include "nomenuwnd.h"
#include "ui_nomenuwnd.h"

NoMenuWnd::NoMenuWnd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoMenuWnd)
{
    ui->setupUi(this);
}

NoMenuWnd::~NoMenuWnd()
{
    delete ui;
}
