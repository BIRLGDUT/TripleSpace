#include "nomenuwnd.h"
#include "ui_nomenuwnd.h"
#include "globalmacro.h"

NoMenuWnd::NoMenuWnd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoMenuWnd)
{
    ui->setupUi(this);
    connect(ui->beginPage,SIGNAL(setPageNum(int)),this,SLOT(setStackPage(int)));
    connect(ui->setRobotPage,SIGNAL(setPageNum(int)),this,SLOT(setStackPage(int)));
}

NoMenuWnd::~NoMenuWnd()
{
    delete ui;
}

void NoMenuWnd::setStackPage(int index)
{
    if(SETROBOTWGTPAGE == index)
        ui->stackedWidget->setCurrentIndex(SETROBOTWGTPAGE);
    if(BEGINWGTPAGE == index)
        ui->stackedWidget->setCurrentIndex(BEGINWGTPAGE);
}
