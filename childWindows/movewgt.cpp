#include "movewgt.h"
#include "ui_movewgt.h"

MoveWgt::MoveWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoveWgt)
{
    ui->setupUi(this);
}

MoveWgt::~MoveWgt()
{
    delete ui;
}
