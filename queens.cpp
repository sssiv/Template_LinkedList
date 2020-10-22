#include "queens.h"

// Default Constructor
Queens::Queens() : _numOfQueens(0) {}

// int param Constructor
Queens::Queens(int queens) : _numOfQueens(queens) 
{
    chessTable.resize(_numOfQueens);
    for (auto &v : chessTable) v.resize(_numOfQueens);
    setQueens(0);   // Set at 0 to start at the beginning 
}

// Deconstructor
Queens::~Queens() {for (auto &A : chessTable) std::fill(A.begin(), A.end(), false);}

// Returns true is Queen is placed
bool Queens::setQueens(int columIndex) 
{
    // All columns and rows up,down and all are clear
    if (columIndex == _numOfQueens)
        return true;
    for (int rowIndex = 0; rowIndex < _numOfQueens; ++rowIndex)
    {
        if (validPlacement(rowIndex, columIndex))
        {   // Valid Placement is set 
            chessTable[rowIndex][columIndex] = true;
            if (setQueens(columIndex + 1)) // <- recursive
                return true;
        
            // Placment set to default
            chessTable[rowIndex][columIndex] = false;
        }
    }
    // Backtracks until recusion is false
    return false;
}

// validPlacement - returns True if there's no placement conflict
bool Queens::validPlacement(int row, int col) const
{
    // Up, Down, Left, or Right Conflict 
    for (int i = 0; i < col; ++i)
        if (chessTable[row][i]) return false;

    // Top-Left Angle Conflict
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
        if (chessTable[i][j]) return false;

    // Top-Right Angle Conflict
    for (int i = row, j = col; i < _numOfQueens && j >= 0; i++, --j)
        if (chessTable[i][j]) return false;

    // No conflicts, placment is valid
    return true;
}

// << operator overload
std::ostream& operator<<(std::ostream &out, const Queens &Q)
{
    out << std::endl;
    for (int i = 0; i < Q._numOfQueens; ++i)
    {
        for (int j = 0; j < Q._numOfQueens; ++j)
        {
            Q.chessTable[i][j] ? out << " Q " : out << " * ";
        }
    out << std::endl;
    }
    return out;
}