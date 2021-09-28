#pragma once
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

class NoughtAndCrosses
{
	public:
		NoughtAndCrosses();
	
	private:
		void RunGame();
		void InitializeBoard(string _board[3][3]);
		void DisplayCurrentBoard(string _board[3][3]);
		void GetUserInput(bool& _gamerOver, bool& _player1Turn, string _board[3][3]);
		void CheckAndPrintWinner(bool& _gameOver, string _board[3][3]);
		bool CellOccupied(int _row, int _column, string _board[3][3]);
		bool IsBoardFull(string _board[3][3]);
};