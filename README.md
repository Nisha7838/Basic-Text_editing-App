# Basic-Text_editing-App


A Basic text-editing app which allows you to Bold / Unbold an individual text.

Also implemented the superscript like this and subscript like this functionality.

Added the 'About Me' section to the application: By clicking on this button it should display My resume in a dialogue box.

Windows and QT Version :-

Windows 11 and QT 6.0.4

Installation:-

Installation Link -> https://www.youtube.com/watch?v=EkjaiDsiM-Q&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA

Code for bold / unbold a particular text :-

Bold text Code -

void MainWindow::on_actionBold_triggered()
{
    QFont font = ui -> textEdit -> currentFont();
    font.bold() == true ? font.setBold(false) : font.setBold(true);
    ui -> textEdit -> setCurrentFont(font);
}

UnBold text Code :-
void MainWindow::on_actionUnBold_triggered() {

 ui->textEdit->setFontWeight(QFont::Normal);
}

Code for Subscript and Superscript :-

Subscript Code :-

void MainWindow::on_actionSuperscript_triggered() {

QTextCharFormat format;

format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);

if(ui->textEdit->hasFocus())

   ui->textEdit->mergeCurrentCharFormat(format);
}

Subscript Code :-
void MainWindow::on_actionSubScript_triggered() {

   QTextCharFormat format;
  
   format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
  
   if(ui->textEdit->hasFocus())
  
      ui->textEdit->mergeCurrentCharFormat(format);
}

Code for ABOUT ME Section :-

ABOUT ME Code :-
void MainWindow::on_actionAboutMe_triggered() {

QFile file("C:\\Users\\hp\\Downloads\\Nisha's Resume (4) (3).txt");

if(!file.open(QIODevice::ReadOnly))

    QMessageBox::information(0,"info",file.errorString());
    
QTextStream in(&file);


ui->textEdit->setText(in.readAll());
}

Issues / Challenges ? :-

Installing QT Creator in Ubuntu is really hard , so that is why I installed in Windows Itself.
Features:-

Can bold / unbold a particular text.

Also implemented the superscript like this and subscript like this functionality.

Added the 'About Me' section to the application: By clicking on this button it should display My resume in a dialogue box.
