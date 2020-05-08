#include "processwidget.h"

ProcessWidget::ProcessWidget(QWidget* parent): QGroupBox(parent)
{
    //-------------------------------GUI Init Pointers------------------------------------------
    mainLayout = new QVBoxLayout();
    btnsLayout = new QHBoxLayout();
    btnAddSeg= new QPushButton("Add Segment");
    btnDelSeg= new QPushButton ("Delete Segment");
    btnNextSeg = new QPushButton("Next Process");
    btnPrev = new QPushButton("Previous Process");
    pStackWidget = new QStackedWidget();
    pStack = new ProcessStack();
    processList = new QGroupBox("Processes");
    lay= new QGridLayout();
    processesList = new QListWidget();
    //----------------------------------Ordering Layouts------------------------------------------
    this->setTitle(" ");
    this->setLayout(mainLayout);
    mainLayout->addWidget(pStackWidget);
    pStackWidget->addWidget(pStack);
    pStackWidget->setCurrentWidget(pStack);

    mainLayout->addLayout(btnsLayout);
    btnsLayout->addWidget(btnAddSeg);
    btnsLayout->addWidget(btnDelSeg);
    btnsLayout->addWidget(btnPrev);
    btnsLayout->addWidget(btnNextSeg);
    /*in GUICONTROLLER
        pStackWidget->setCurrentIndex(processesList.currentIndex());
    */
    mainLayout->addWidget(processList);
    processList->setLayout(lay);
    lay->addWidget(processesList,0,0,1,1);
    QStringList p = {"P1","P2"};
     processesList->addItems(p);
     //    QVector<Process> processes;
     //    QStringList p;
     //    processes = Process::all();
     //    qDebug()<<processes[0].getName();
     //    for (Process i: processes){
     //         qDebug()<<i.getName();
     //         p.append(i.getName());
     //     }
}
