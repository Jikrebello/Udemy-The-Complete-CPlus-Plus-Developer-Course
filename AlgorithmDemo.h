#pragma once
#include <algorithm>
#include <random>
#include <ctime>
#include <vector>
#include <iostream>
using namespace std;

class AlgorithmDemo
{
	public:
		AlgorithmDemo(int _specificNum, int _replaceNum, int _numberSize);
		void CountSpecificNumber(int _specificNum);
		void ReplaceNumbers();
		void SortVector();
		void PrintVector();

	private:
		int specificNum;
		int replaceNum;
		int numbersSize;
		vector <int> numbers;
		void FillVector();

};

