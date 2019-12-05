#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include "Move.h"
#include "Checker.h"

using namespace std;


class Board {
public:
	vector<vector<Checker> > board;
    static const map<string , string> opponent;
	int col, row, k, blackCount,whiteCount;
	Board();
	Board(int col, int row,int k);
    void initializeGame ();
    bool isInBoard(int pos_x,int pos_y);
    bool isValidMove(int chess_row, int chess_col, int target_row, int target_col, string turn);
    void checkInitialVariable();
    vector<vector<Move>> getAllPossibleMoves(string color);
    vector<vector<Move>> getAllPossibleMoves(int player);
    void makeMove(const Move& move,int player);
	int isWin();
	void showBoard();
};








class InvalidMoveError : public exception
{

};

class InvalidParameterError : public exception
{

};



#endif
