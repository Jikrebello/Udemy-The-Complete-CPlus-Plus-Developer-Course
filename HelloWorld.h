#pragma once
#include <iostream>
#include <string>	// needed for getline().
#include <cstdlib>	// needed for srand and rand.
#include <ctime>	// needed for time(nullptr).
#include <array>	// needed for the array class.
#include <vector>	// needed for the vector class.
#include <cmath>	// needed to access math functions.
using namespace std;

class HelloWorld
{
	public:
		void AskName();
		void AverageOfThreeNumbers();
		void MadLibsClone();
		void OddOrEven();
		void RandomNumberGenerator();
		void DiceRoller();
		void JamOfTheMonth();
		void OddsOrEvenLoop();
		void GuessTheNumber();
		void CStyleArrays();
		void NamesAndWeights();
		void ClassArrays();
		void ClassVectors();
		void NumberVectorMultiplier();
		void ClassArrayMultiplier();
		void GetSquare();
		int Square(int _square);
		void ThreeTimesN(int _multiplyBy3, int& _answer);
		void CMathFunctions();
		void RecurrsionCountDown(int _num);
		int RecurrsionSumValues(int _num);
		int FactorialRecurrsion(int _num);
		int ProductOfThree(int _num1, int _num2, int _num3);
		int SumArray(int _array[], int _size);
		int SumArray(array<int, 10> _array);
		int SumArrayObject(array<int, 10> _array);
		void FunctionOverloadingSumArray();
};

