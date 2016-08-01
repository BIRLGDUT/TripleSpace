#ifndef EDITCODEWGT_H
#define EDITCODEWGT_H

#include <QWidget>

namespace Ui {
class EditCodeWgt;
}

class EditCodeWgt : public QWidget
{
    Q_OBJECT

public:
    explicit EditCodeWgt(QWidget *parent = 0);
    ~EditCodeWgt();

private:
    Ui::EditCodeWgt *ui;
};

#endif // EDITCODEWGT_H
