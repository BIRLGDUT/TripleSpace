#ifndef MOVEWGT_H
#define MOVEWGT_H

#include <QWidget>

namespace Ui {
class MoveWgt;
}

class MoveWgt : public QWidget
{
    Q_OBJECT

public:
    explicit MoveWgt(QWidget *parent = 0);
    ~MoveWgt();

private:
    Ui::MoveWgt *ui;
};

#endif // MOVEWGT_H
