#include "buttonssliders.h"
#include "ui_buttonssliders.h"

ButtonsSliders::ButtonsSliders(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ButtonsSliders)
{
    ui->setupUi(this);
    connect(ui->volSlider,SIGNAL(valueChanged(int)),ui->volDisp,SLOT(setValue(int)));
    connect(ui->lightDialMain,SIGNAL(valueChanged(int)),ui->lightDispMain,SLOT(display(int)));
}

ButtonsSliders::~ButtonsSliders()
{
    delete ui;
}
