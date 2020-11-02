//
// Created by SamSS
//
#ifndef QUEENS_H_
#define QUEENS_H_
#include <iostream>

class Queens
{
public:
    Queens();
    Queens(int);
    ~Queens();
    // check spot
private:
    bool** chessTable;
    unsigned int _numOfQueens;
    bool setQueens(int);
    bool validPlacement(int, int) const;

friend std::ostream& operator<<(std::ostream&, const Queens&);
};

#endif    // QUEENS_H_