#include "beginwgt.h"
#include "ui_beginwgt.h"
#include "commoninterfacefunction.h"
#include "menuwnd.h"

BeginWgt::BeginWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BeginWgt)
{
    menuwnd = NULL;
    ui->setupUi(this);
}

BeginWgt::~BeginWgt()
{
    if(menuwnd != NULL)
        delete menuwnd;
    delete ui;
}

void BeginWgt::on_runProgramBtn_clicked()
{
    if(menuwnd != NULL)
        delete menuwnd;
    menuwnd = new MenuWnd();

    int windowWidth = 960, windowHeight = 720;
    CommonInterfaceFunction *p = new CommonInterfaceFunction();
    p->getWindowspixel(windowWidth, windowHeight);
    menuwnd->resize(windowWidth, windowHeight);

    menuwnd->show();
}

void BeginWgt::on_editCodeBtn_clicked()
{

}
