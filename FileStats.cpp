#include "FileStats.h"
FileStats::FileStats()
{
	ifstream validScores;
	vector<int> scores;
	int minScore = 100;
	int maxScore = 0;
	int averageScore;
	double scoreSum = 0;
	double totalScores = 0;

	validScores.open("scores.txt");
	while (!validScores.eof() )
	{
		int tempNum = 0;
		validScores >> tempNum;

		if (tempNum >= 0 && tempNum <= 100) // filters out invalid scores.
		{
			scores.push_back(tempNum);
			totalScores++;
		}
	}
	validScores.close();

	// Getting the Min, Max and Average.
	for (int i = 0; i < scores.size (); i++)
	{
		if (scores[i] > maxScore)	// Determine the Max score.
			maxScore = scores[i];

		if (scores[i] < minScore)	// Determine the Min score.
			minScore = scores[i];

		scoreSum += scores[i];		// Sum all the scores together.

		cout << scores[i] << endl;	// Print for sanity check.
	}

	cout << endl;
	cout << "Max Score: " << maxScore << endl;
	cout << "Min Score: " << minScore << endl;
	cout << "Average Score: " << scoreSum / totalScores << endl;
}
