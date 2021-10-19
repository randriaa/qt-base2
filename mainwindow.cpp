#include "mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Bonjour") ;
    //m_customWidget = new CustomWidget(this) ;

    m_vLayout = new QVBoxLayout(this);
    m_central = new QWidget(this) ;
    m_central->setLayout(m_vLayout) ;

    for( int i = 0 ; i < 4 ; i++){
        m_customWidget = new CustomWidget(i * 1000 , this) ;
       m_vLayout->addWidget(m_customWidget) ;
    }
    setCentralWidget(m_central);

}

MainWindow::~MainWindow()
{
}

