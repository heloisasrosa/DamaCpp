#ifndef MANUALAI_H
#define MANUALAI_H
#include "AI.h"
#pragma once


class ManualAI : public AI
{
public:
    Board board;
	ManualAI(int col, int row, int k);
	virtual Move GetMove(Move board);
};

#endif