#include "beginwgt.h"
#include "ui_beginwgt.h"
#include "commoninterfacefunction.h"
#include "menuwnd.h"
#include "globalmacro.h"

BeginWgt::BeginWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BeginWgt),RUNPROGRAMBTN(1),EDITCODEBTN(2),
    SETROBOTBTN(3),SHUTDOWNBTN(4)
{
    ui->setupUi(this);
    menuwnd = NULL;
}

BeginWgt::~BeginWgt()
{
    if(menuwnd != NULL)
        delete menuwnd;
    delete ui;
}

void BeginWgt::windowShow(int index)
{
    if(RUNPROGRAMBTN == index || EDITCODEBTN == index)
    {
        if(menuwnd != NULL);//delete menuwnd;
        else
        {
            int windowWidth = 960, windowHeight = 720;   //获取显示器分辨率
            CommonInterfaceFunction *p = new CommonInterfaceFunction();
            p->getWindowspixel(windowWidth, windowHeight);
            menuwnd = new MenuWnd();      //构造MenuWnd对象指针
            menuwnd->resize(windowWidth, windowHeight);//设置窗口大小
            delete p;
            connect(menuwnd,SIGNAL(menuWndStatus(bool)),this,SIGNAL(setNoMenuWndStatus(bool)));
        }

        menuwnd->show();
    }
    else
    {
        if(menuwnd != NULL)
        {
            delete menuwnd;
            menuwnd = NULL;
        }
    }

    switch(index)
    {
    case 1:    //进入运行程序窗口
        menuwnd->changeStack(RUNPROGRAMWGTPAGE);   //进入对应的窗口stack
        menuwnd->setWindowTitle("Run Program");
        emit setNoMenuWndStatus(false);
        break;
    case 2:    //进入编辑程序窗口
        menuwnd->changeStack(EDITCODEWGTPAGE);
        menuwnd->setWindowTitle("Edit Code");
        emit setNoMenuWndStatus(false);
        break;
    case 3:
        emit setPageNum(SETROBOTWGTPAGE);//change the stack of the nomenuwnd to setrobot page
        break;
    case 4:
        emit setPageNum(SHUTDOWNPAGE);//关闭机器人，退出程序
        break;
    }
}

void BeginWgt::on_runProgramBtn_clicked()
{
    windowShow(RUNPROGRAMBTN); //调用私有函数，弹出运行程序窗口
}

void BeginWgt::on_editCodeBtn_clicked()
{
    windowShow(EDITCODEBTN);  //调用私有函数，弹出编辑程序窗口
}

void BeginWgt::on_setRobotBtn_clicked()
{
    windowShow(SETROBOTBTN);
}

void BeginWgt::on_shutDownBtn_clicked()
{
    windowShow(SHUTDOWNBTN);
}

