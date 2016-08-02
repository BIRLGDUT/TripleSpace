#include "setrobotwgt.h"
#include "ui_setrobotwgt.h"
#include "globalmacro.h"

SetRobotWgt::SetRobotWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetRobotWgt),INITROBOTBTN(1),CHANGELANGUAGEBTN(2),
    UPDATEROBOTBTN(3),SETPASSWORDBTN(4),CORRECTSCREENBTN(5),
    SETWEBBTN(6),SETTIMEBTN(7),RETURNBTN(8)
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
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        emit setPageNum(BEGINWGTPAGE);
        break;
    }
}

void SetRobotWgt::on_returnBtn_clicked()
{
    btnAction(RETURNBTN);
}
