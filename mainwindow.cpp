#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <ui_fileanalyzewindow.h>

#include <UI/FileAnalyze/fileanalyzewindow.h>





MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->FileAnalyze,SIGNAL(click()),this,SLOT(on_FileAnalyze_clicked()));
    setWindowTitle("Dtools");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_FileAnalyze_clicked()
{
    FileAnalyzeWindow* fileAnlyzeWindow =  new FileAnalyzeWindow(this);
    fileAnlyzeWindow->show();
//    QMessageBox::information(this,"点击了按钮","你好");
}
