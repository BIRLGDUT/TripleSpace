#include "iowgt.h"
#include "ui_iowgt.h"

IOWgt::IOWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IOWgt)
{
    ui->setupUi(this);
}

IOWgt::~IOWgt()
{
    delete ui;
}
