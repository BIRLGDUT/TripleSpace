#include "editcodewgt.h"
#include "ui_editcodewgt.h"

EditCodeWgt::EditCodeWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditCodeWgt)
{
    ui->setupUi(this);
}

EditCodeWgt::~EditCodeWgt()
{
    delete ui;
}
