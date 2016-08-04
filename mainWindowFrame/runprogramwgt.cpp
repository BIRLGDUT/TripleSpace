#include "runprogramwgt.h"
#include "ui_runprogramwgt.h"

RunProgramWgt::RunProgramWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RunProgramWgt)
{
    ui->setupUi(this);
}

RunProgramWgt::~RunProgramWgt()
{
    delete ui;
}
