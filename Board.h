#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();
    void print() const;
    bool makeMove(int row, int col, char symbol);
    bool isFull() const;
    char checkWinner() const;

private:
    static const int SIZE = 3;
    char board[SIZE][SIZE];

    bool isMoveValid(int row, int col) const;
};

#endif 

