#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "custonbutoon.h"
#include <QVBoxLayout>  // Vertical
#include <QHBoxLayout>
#include <QDebug>

#include "customwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :


private:
    CustomWidget* m_customWidget ;
    QVBoxLayout* m_vLayout ;
    QWidget* m_central ;
};
#endif // MAINWINDOW_H


