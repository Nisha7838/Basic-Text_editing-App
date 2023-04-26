#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionBold_triggered()
{

     ui->textEdit->setFontWeight(QFont::Bold);

}


void MainWindow::on_actionUnBold_triggered()
{

     ui->textEdit->setFontWeight(QFont::Normal);
}


void MainWindow::on_actionCopy_triggered()
{
     ui->textEdit->copy();
}


void MainWindow::on_actionCut_triggered()
{
     ui->textEdit->cut();
}


void MainWindow::on_actionUndo_triggered()
{
     ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
     ui->textEdit->redo();
}


void MainWindow::on_actionSuperscript_triggered()
{
    QTextCharFormat format;
      format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
      if(ui->textEdit->hasFocus())
         ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_actionSubScript_triggered()
{
    QTextCharFormat format;
      format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
      if(ui->textEdit->hasFocus())
         ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_actionPaste_triggered()
{
     ui->textEdit->paste();
}


void MainWindow::on_actionAboutMe_triggered()
{
    QFile file("C:\\Users\\hp\\Downloads\\Nisha's Resume (4).pdf");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);

    ui->textEdit->setText(in.readAll());
}
