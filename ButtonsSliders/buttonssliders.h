#ifndef BUTTONSSLIDERS_H
#define BUTTONSSLIDERS_H

#include <QMainWindow>

namespace Ui {
class ButtonsSliders;
}

class ButtonsSliders : public QMainWindow
{
    Q_OBJECT

public:
    explicit ButtonsSliders(QWidget *parent = 0);
    ~ButtonsSliders();

private:
    Ui::ButtonsSliders *ui;
};

#endif // BUTTONSSLIDERS_H
