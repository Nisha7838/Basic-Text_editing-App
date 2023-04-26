#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionBold_triggered();

    void on_actionUnBold_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionSuperscript_triggered();

    void on_actionSubScript_triggered();

    void on_actionPaste_triggered();

    void on_actionAboutMe_triggered();

private:
    Ui::MainWindow *ui;
    QString MyFileName;
};
#endif // MAINWINDOW_H
