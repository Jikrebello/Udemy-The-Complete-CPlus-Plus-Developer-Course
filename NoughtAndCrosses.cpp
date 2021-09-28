#include "NoughtAndCrosses.h"

NoughtAndCrosses::NoughtAndCrosses()
{
	RunGame();
}


void NoughtAndCrosses::RunGame()
{
	string board[3][3];
	bool gameOver = false;
	bool playerCrossesTurn;
	int turnDecider;
	srand(time(NULL));

	// Generate a number thats either 1 or 2
	turnDecider = rand() % 2 + 1;


	if (turnDecider == 1)
	{
		playerCrossesTurn = true;
		cout << "Crosses goes first. Please enter the row and column of where you'd like to place a X." << endl;
	}
	else
	{
		playerCrossesTurn = false;
		cout << "Noughts goes first. PLease enter the row and column of where you'd like to place a O." << endl;
	}

	InitializeBoard(board);
	DisplayCurrentBoard(board);
	GetUserInput(gameOver, playerCrossesTurn, board);

}

/// <summary>
/// Fills the board with '#'.
/// </summary>
/// <param name="_board"> Takes a 2D string array representing the game board.</param>
void NoughtAndCrosses::InitializeBoard(string _board[3][3])
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			_board[row][column] = "#";
		}
	}
}

/// <summary>
/// Displays the board to the console screen in its current state.
/// </summary>
/// <param name="_board">Takes a 2D string array representing the game board.</param>
void NoughtAndCrosses::DisplayCurrentBoard(string _board[3][3])
{
	cout << endl << "    (0) (1) (2)" << endl;
	cout << "(0)  " << _board[0][0] << " | " << _board[0][1] << " | " << _board[0][2] << endl;
	cout << "     " << "---------" << endl;
	cout << "(1)  " << _board[1][0] << " | " << _board[1][1] << " | " << _board[1][2] << endl;
	cout << "     " << "---------" << endl;
	cout << "(2)  " << _board[2][0] << " | " << _board[2][1] << " | " << _board[2][2] << endl << endl;
}

void NoughtAndCrosses::GetUserInput(bool& _gamerOver, bool& _playerCrossesTurn, string _board[3][3])
{
	while (_gamerOver == false)
	{
		if (_playerCrossesTurn && !IsBoardFull(_board))
		{
			cout << "Crosses turn." << endl << "Please select a row and column." << endl;
			int row;
			int column;
			cout << "Row: ";
			cin >> row;
			cout << "Column: ";
			cin >> column;

			if (CellOccupied(row, column, _board))
			{
				cout << "Cannot place an X there, please select another coordinate." << endl;
				continue; // go back to the top of the loop and try again.
			}
			else
			{
				_board[row][column] = "X";
				DisplayCurrentBoard(_board);


				CheckAndPrintWinner(_gamerOver, _board);
				_playerCrossesTurn = false;
			}
		}
		else if (!_playerCrossesTurn && !IsBoardFull(_board))
		{
			cout << "Noughts turn." << endl << "Please select a row and column." << endl;
			int row;
			int column;
			cout << "Row: ";
			cin >> row;
			cout << "Column: ";
			cin >> column;

			if (CellOccupied(row, column, _board))
			{
				cout << "Cannot place an O there, please select another coordinate." << endl;
				continue; // go back to the top of the loop and try again.
			}
			else
			{
				_board[row][column] = "O";
				DisplayCurrentBoard(_board);
				CheckAndPrintWinner(_gamerOver, _board);
				_playerCrossesTurn = true;
			}
		}
		else
		{
			_gamerOver = true;
			cout << "No one wins :(" << endl;
		}
	}

}

void NoughtAndCrosses::CheckAndPrintWinner(bool& _gameOver, string _board[3][3])
{
	// --- WIN CONDITIONS FOR CROSSES PLAYER ---
	if (_board[0][0] == "X" && _board[0][1] == "X" && _board[0][2] == "X" ||	// TOP ROW.
		_board[1][0] == "X" && _board[1][1] == "X" && _board[1][2] == "X" ||	// MIDDLE ROW.
		_board[2][0] == "X" && _board[2][1] == "X" && _board[2][2] == "X" ||	// BOTTOM ROW.
		_board[0][0] == "X" && _board[1][0] == "X" && _board[2][0] == "X" ||	// LEFT COLUMN.
		_board[0][1] == "X" && _board[1][1] == "X" && _board[2][1] == "X" ||	// MIDDLE COLUMN.
		_board[0][0] == "X" && _board[1][2] == "X" && _board[2][2] == "X" ||	// RIGHT COLUMN.
		_board[0][2] == "X" && _board[1][1] == "X" && _board[2][0] == "X" ||	// DIAGONAL TOP RIGHT BOTTOM LEFT.
		_board[0][0] == "X" && _board[1][1] == "X" && _board[2][2] == "X")		// DIAGONAL TOP LEFT BOTTOM RIGHT.
	{
		cout << "Crosses wins!" << endl;
		_gameOver = true;
	}


	// --- WIN CONDITIONS FOR NOUGHTS PLAYER ---
	else if (_board[0][0] == "O" && _board[0][1] == "O" && _board[0][2] == "O" ||	// TOP ROW.
		_board[1][0] == "O" && _board[1][1] == "O" && _board[1][2] == "O" ||		// MIDDLE ROW.
		_board[2][0] == "O" && _board[2][1] == "O" && _board[2][2] == "O" ||		// BOTTOM ROW.
		_board[0][0] == "O" && _board[1][0] == "O" && _board[2][0] == "O" ||		// LEFT COLUMN.
		_board[0][1] == "O" && _board[1][1] == "O" && _board[2][1] == "O" ||		// MIDDLE COLUMN.
		_board[0][0] == "O" && _board[1][2] == "O" && _board[2][2] == "O" ||		// RIGHT COLUMN.
		_board[0][2] == "O" && _board[1][1] == "O" && _board[2][0] == "O" ||		// DIAGONAL TOP RIGHT BOTTOM LEFT.
		_board[0][0] == "O" && _board[1][1] == "O" && _board[2][2] == "O")			// DIAGONAL TOP LEFT BOTTOM RIGHT.
	{
		cout << "Noughts wins!" << endl;
		_gameOver = true;
	}

}

/// <summary>
/// Checks if the given cell coordinate is occupied by either an "X" or a "0".
/// </summary>
/// <param name="_row">-	The row number for the board.</param>
/// <param name="_column">-	The column number for the board.</param>
/// <param name="_board">-	The 2D string array representing the game board.</param>
/// <returns>Returns false if the cell value is "#", otherwise returns true.</returns>
bool NoughtAndCrosses::CellOccupied(int _row, int _column, string _board[3][3])
{
	if (_board[_row][_column] == "#")
		return false;
	else
		return true;
}

/// <summary>
/// Checks if there are no "#" left.
/// </summary>
/// <param name="_board"></param>
/// <returns></returns>
bool NoughtAndCrosses::IsBoardFull(string _board[3][3])
{
	int cellCounter = 0;

	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			if (_board[row][column] == "X" || _board[row][column] == "O")
			{
				cellCounter++;
			}
		}
	}

	if (cellCounter == 9)
		return true;
	else
		return false;
}


