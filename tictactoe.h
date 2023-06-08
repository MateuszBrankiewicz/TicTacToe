
#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToe; }
QT_END_NAMESPACE

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();

private slots:
    void pushButton1();
    void pushButton2();
    void pushButton3();
    void pushButton4();
    void pushButton5();
    void pushButton6();
    void pushButton7();
    void pushButton8();
    void pushButton9();
    void clear();
//    void pushButton(int nr);

private:
    Ui::TicTacToe *ui;
    enum tura {O, X};
    tura kolej;
    std::string wybory[9];
    void isWin();
    void restart();
    };


#endif // TICTACTOE_H
