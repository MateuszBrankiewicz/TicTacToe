
#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <QMessageBox>
#include<iostream>
TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
{
    kolej = O;
    ui->setupUi(this);
    for(int i = 0 ; i<9; i++){
        wybory[i] = " ";}
    QObject::connect(ui->p1, SIGNAL(clicked()), this, SLOT(pushButton1()));
    QObject::connect(ui->p2, SIGNAL(clicked()), this, SLOT(pushButton2()));
    QObject::connect(ui->p3, SIGNAL(clicked()), this, SLOT(pushButton3()));
    QObject::connect(ui->p4, SIGNAL(clicked()), this, SLOT(pushButton4()));
    QObject::connect(ui->p5, SIGNAL(clicked()), this, SLOT(pushButton5()));
    QObject::connect(ui->p6, SIGNAL(clicked()), this, SLOT(pushButton6()));
    QObject::connect(ui->p7, SIGNAL(clicked()), this, SLOT(pushButton7()));
    QObject::connect(ui->p8, SIGNAL(clicked()), this, SLOT(pushButton8()));
    QObject::connect(ui->p9, SIGNAL(clicked()), this, SLOT(pushButton9()));

    QObject::connect(ui->startButton, SIGNAL(clicked()), this, SLOT(clear()));
}

TicTacToe::~TicTacToe()
{
    delete ui;
}

void TicTacToe::pushButton1()
{
    if(wybory[0] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p1 ->setIcon(kolko);
            wybory[0]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            ui -> p1 ->setIcon(krzyzyk);
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[0] = "x";
            isWin();
            kolej = O;
        }}
}

void TicTacToe::pushButton2()
{
    if(wybory[1]==" "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p2 ->setIcon(kolko);
            wybory[1]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui -> p2 ->setIcon(krzyzyk);
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[1] = "x";
            isWin();
            kolej = O;
        }
    }}
void TicTacToe::pushButton3()
{
    if(wybory[2] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p3 ->setIcon(kolko);
            wybory[2]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui -> p3 ->setIcon(krzyzyk);
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[2] = "x";
            isWin();
            kolej = O;
        }}
}
void TicTacToe::pushButton4()
{
    if(wybory[3] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p4 ->setIcon(kolko);
            wybory[3]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui -> p4 ->setIcon(krzyzyk);
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[3] = "x";
            isWin();
            kolej = O;
        }}
}
void TicTacToe::pushButton5()
{
    if(wybory[4] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p5 ->setIcon(kolko);
            wybory[4]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui -> p5 ->setIcon(krzyzyk);
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[4] = "x";
            isWin();
            kolej = O;
        }}
}
void TicTacToe::pushButton6()
{
    if(wybory[5] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p6 ->setIcon(kolko);
            wybory[5]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            ui -> p6 ->setIcon(krzyzyk);
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[5] = "x";
            isWin();
            kolej = O;
        }
    }}
void TicTacToe::pushButton7()
{
    if(wybory[6]== " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            wybory[6]="o";
            ui -> p7 ->setIcon(kolko);
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            ui -> p7 ->setIcon(krzyzyk);
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[6] = "x";
            isWin();
            kolej = O;
        }}
}
void TicTacToe::pushButton8()
{
    if(wybory[7] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");
            ui -> p8 ->setIcon(kolko);
            wybory[7]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui -> p8 ->setIcon(krzyzyk);
            wybory[7]="x";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = O;
        }}
}

void TicTacToe::pushButton9()
{
    if(wybory[8] == " "){
        if (kolej == O){
            QIcon kolko(":/img/img/kolko.bmp");
            QPixmap changePlayer(":/img/img/xsmall.bmp");

            ui -> p9 ->setIcon(kolko);
            wybory[8]="o";
            ui->currentPlayer->setPixmap(changePlayer);
            isWin();
            kolej = X;
        }
        else{
            QIcon krzyzyk(":/img/img/krzyzyk.bmp");
            QPixmap changePlayer(":/img/img/osmall.bmp");
            ui -> p9 ->setIcon(krzyzyk);
            ui->currentPlayer->setPixmap(changePlayer);
            wybory[8] = "x";
            isWin();
            kolej = O;
        }}
}

void TicTacToe::clear()
{
    restart();
}

void TicTacToe::isWin()
{
    if((wybory[0]== "x"&& wybory[1] == "x"&&wybory[2]=="x")|| (wybory[0]== "o"&& wybory[1] == "o"&&wybory[2]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[3]== "x"&& wybory[4] == "x"&&wybory[5]=="x")|| (wybory[3]== "o"&& wybory[4] == "o"&&wybory[5]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[6]== "x"&& wybory[7] == "x"&&wybory[8]=="x")|| (wybory[6]== "o"&& wybory[7] == "o"&&wybory[8]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[0]== "x"&& wybory[3] == "x"&&wybory[6]=="x")|| (wybory[0]== "o"&& wybory[3] == "o"&&wybory[6]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[1]== "x"&& wybory[4] == "x"&&wybory[7]=="x")|| (wybory[1]== "o"&& wybory[4] == "o"&&wybory[7]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[2]== "x"&& wybory[5] == "x"&&wybory[8]=="x")|| (wybory[2]== "o"&& wybory[5] == "o"&&wybory[8]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[0]== "x"&& wybory[4] == "x"&&wybory[8]=="x")|| (wybory[0]== "o"&& wybory[4] == "o"&&wybory[8]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
    else if((wybory[2]== "x"&& wybory[4] == "x"&&wybory[6]=="x")|| (wybory[2]== "o"&& wybory[4] == "o"&&wybory[6]=="o")){
        QMessageBox msgBox;
        if(kolej == O){
        msgBox.setText("Wygral gracz kółko");
        msgBox.exec();
        restart();}
        else {
        msgBox.setText("Wygral gracz krzyzyk");
                       msgBox.exec();
                       restart();
        }
    }
}
//void TicTacToe::pushButton(int nr){
//    if(kolej == O){
//    QIcon kolko(":/img/img/kolko.bmp");
//    QPixmap changePlayer(":/img/img/xsmall.bmp");
//    switch (nr)
//    {
//    case 0: ui->p1->setIcon(kolko); break;
//    case 1: ui->p2->setIcon(kolko); break;
//    case 2: ui->p3->setIcon(kolko); break;
//    case 3: ui->p4->setIcon(kolko); break;
//    case 4: ui->p5->setIcon(kolko); break;
//    case 5: ui->p6->setIcon(kolko); break;
//    case 6: ui->p7->setIcon(kolko); break;
//    case 7: ui->p8->setIcon(kolko); break;
//    case 8: ui->p9->setIcon(kolko); break;

//    }
//    wybory[nr] = "o";
//    ui->currentPlayer->setPixmap(changePlayer);
//    isWin();
//    kolej = X;
//    }
//    else{
//    QIcon krzyzyk(":/img/img/krzyzyk.bmp");
//    QPixmap changePlayer(":/img/img/osmall.bmp");
//    switch (nr)
//    {
//    case 0: ui->p1->setIcon(krzyzyk); break;
//    case 1: ui->p2->setIcon(krzyzyk); break;
//    case 2: ui->p3->setIcon(krzyzyk); break;
//    case 3: ui->p4->setIcon(krzyzyk); break;
//    case 4: ui->p5->setIcon(krzyzyk); break;
//    case 5: ui->p6->setIcon(krzyzyk); break;
//    case 6: ui->p7->setIcon(krzyzyk); break;
//    case 7: ui->p8->setIcon(krzyzyk); break;
//    case 8: ui->p9->setIcon(krzyzyk); break;

//    }
//    wybory[nr] = "o";
//    ui->currentPlayer->setPixmap(changePlayer);
//    isWin();
//    kolej = O;
//    }
//    }

void TicTacToe::restart()
{
    for(int i = 0 ; i<9; i++){
        wybory[i] = " ";
    }
    QIcon nic(":/img/img/nic.bmp");
    ui -> p1 ->setIcon(nic);
    ui -> p2 ->setIcon(nic);
    ui -> p3 ->setIcon(nic);
    ui -> p4 ->setIcon(nic);
    ui -> p5 ->setIcon(nic);
    ui -> p6 ->setIcon(nic);
    ui -> p7 ->setIcon(nic);
    ui -> p8 ->setIcon(nic);
    ui -> p9 ->setIcon(nic);
    kolej = O;
}
