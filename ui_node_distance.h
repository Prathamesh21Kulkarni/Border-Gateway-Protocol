/********************************************************************************
** Form generated from reading UI file 'node_distance.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODE_DISTANCE_H
#define UI_NODE_DISTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Node_distance
{
public:
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Node_distance)
    {
        if (Node_distance->objectName().isEmpty())
            Node_distance->setObjectName(QString::fromUtf8("Node_distance"));
        Node_distance->resize(800, 600);
        centralwidget = new QWidget(Node_distance);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Node_distance->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Node_distance);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Node_distance->setStatusBar(statusbar);

        retranslateUi(Node_distance);

        QMetaObject::connectSlotsByName(Node_distance);
    } // setupUi

    void retranslateUi(QMainWindow *Node_distance)
    {
        Node_distance->setWindowTitle(QCoreApplication::translate("Node_distance", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Node_distance: public Ui_Node_distance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODE_DISTANCE_H
