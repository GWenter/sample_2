#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->blue_btn,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    QObject::connect(ui->red_btn,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    QObject::connect(ui->black_btn,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_underline_box_clicked(bool checked)
{
    QFont font=ui->text_in->font();
    font.setUnderline(checked);
    ui->text_in->setFont(font);
}

void Dialog::on_Italic_box_clicked(bool checked)
{
    QFont font=ui->text_in->font();
    font.setItalic(checked);
    ui->text_in->setFont(font);
}

void Dialog::on_boold_box_clicked(bool checked)
{
    QFont font=ui->text_in->font();
    font.setBold(checked);
    ui->text_in->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette palet =ui->text_in->palette();
    if(ui->black_btn->isChecked())
        palet.setColor(QPalette::Text,Qt::black);
    else if(ui->red_btn->isChecked())
        palet.setColor(QPalette::Text,Qt::red);
    else if(ui->blue_btn->isChecked())
        palet.setColor(QPalette::Text,Qt::blue);
    ui->text_in->setPalette(palet);
}

void Dialog::on_pushButton_clicked(bool checked)
{

}
