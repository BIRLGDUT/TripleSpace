#include "setrobotwgt.h"
#include "ui_setrobotwgt.h"
#include "globalmacro.h"

SetRobotWgt::SetRobotWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetRobotWgt)
{
    ui->setupUi(this);
}

SetRobotWgt::~SetRobotWgt()
{
    delete ui;
}

void SetRobotWgt::btnAction(int index)
{
    switch(index)
    {
    case INITROBOTBTN:
        break;
    case CHANGELANGUAGEBTN:
        break;
    case UPDATEROBOTBTN:
        break;
    case SETPASSWORDBTN:
        break;
    case CORRECTSCREENBTN:
        break;
    case SETWEBBTN:
        break;
    case SETTIMEBTN:
        break;
    case RETURNBTN:
        emit setPageNum(BEGINWGTPAGE);
        break;
    }
}

void SetRobotWgt::on_returnBtn_clicked()
{
    btnAction(RETURNBTN);
}
