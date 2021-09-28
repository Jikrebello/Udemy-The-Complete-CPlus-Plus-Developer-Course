#include "HelloWorld.h"

void HelloWorld::AskName()
{
	string fullName;
	int age;
	string greetingMessage = "Hello, what is your name?";
	string nameMessage = "Nice to meet you, ";

	cout << greetingMessage << endl;
	getline(cin, fullName);		// Use getline() when there’s input that has possible white-spaces.
	cout << "How old are you " << fullName << "?" << endl;
	cin >> age;					// Use cin when you don't have to worry about possible white-space issues.
	cout << nameMessage << fullName << " who is " << age << " years old." << endl;

	//bool isRaining = false;
	//cout << isRaining << endl;	// Prints the int value (0,1) of the bool.
	//cout << boolalpha << isRaining << endl; // Prints the string value (true/false) of the bool.
}

void HelloWorld::AverageOfThreeNumbers()
{
	float num1;
	float num2;
	float num3;
	float meanAverage;

	cout << "Please input 3 numbers for averaging." << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	meanAverage = (num1 + num2 + num3) / 3;
	cout << "The average mean of 3 numbers is " << meanAverage << endl;
}

void HelloWorld::MadLibsClone()
{
	string colour;
	string girlName;
	string adjective1;
	string occupation1;
	string nameOfPlace;
	string itemOfClothingInPlural;
	string hobby;
	string adjective2;
	string occupation2;
	string boyName;
	string manName;

	cout << "Enter a colour." << endl;
	getline(cin, colour);

	cout << "Enter a Girls name." << endl;
	getline(cin, girlName);

	cout << "Enter an adjective." << endl;
	getline(cin, adjective1);

	cout << "Enter an occupation." << endl;
	getline(cin, occupation1);

	cout << "Enter a name of a place." << endl;
	getline(cin, nameOfPlace);

	cout << "Enter an item of clothing in the plural." << endl;
	getline(cin, itemOfClothingInPlural);

	cout << "Enter a hobby." << endl;
	getline(cin, hobby);

	cout << "Enter another adjective." << endl;
	getline(cin, adjective2);

	cout << "Enter another occupation." << endl;
	getline(cin, occupation2);

	cout << "Enter a boys name." << endl;
	getline(cin, boyName);

	cout << "Enter another boys name." << endl;
	getline(cin, manName);

	cout << "There once was a/an " << colour << " girl named " << girlName << " who was a " << adjective1 << " " << occupation1 << " in the Kingdom of "
		<< nameOfPlace << "." << " She loved to wear " << itemOfClothingInPlural << " and " << hobby << ". She wanted to marry the " <<
		adjective2 << " " << occupation2 << " named " << boyName << " but her father, King " << manName << " forbid her from seeing him." << endl;
}

void HelloWorld::OddOrEven()
{
	int count = 0;

	while (count < 10)
	{
		if (count % 2 != 0) /// Determines if a value is even and only prints the even values.
		{
			count++;
			continue;
		}
		cout << count << endl;
		count++;
	}
}

void HelloWorld::RandomNumberGenerator()
{
	srand(time(nullptr));

	int value1 = rand() % 10; // value1 = >= 0  and < 10.

	// shift it over by 1.
	int value2 = rand() % 10 + 1; // value2 = >= 1 and <= 10.

	cout << value1 << endl;
	cout << value2 << endl;
}

void HelloWorld::DiceRoller()
{
	srand(time(nullptr));
	int dice = 0;

	for (int i = 0; i < 10; i++)
	{
		dice = rand() % 6 + 1;
		cout << dice << endl;
	}
}

void HelloWorld::JamOfTheMonth()
{
	char package;

	cout << "Which Jam Package are you subscribed to?" << endl;
	cin >> package; // Can't use getline() for chars apparently.

	switch (package)
	{
	case 'A':
	case 'a':
		cout << "Package A Details:" << endl;
		cout << "$8/month." << endl;
		cout << "Includes 2 jams per month" << endl;
		cout << "Additional jams costs $5 each.";
		break;

	case 'B':
	case 'b':
		cout << "Package B Details:" << endl;
		cout << "$12/month." << endl;
		cout << "Includes 4 jams per month" << endl;
		cout << "Additional jams costs $4 each.";
		break;

	case 'C':
	case 'c':
		cout << "Package C Details:" << endl;
		cout << "$15/month." << endl;
		cout << "Includes 6 jams per month" << endl;
		cout << "Additional jams costs $3 each.";
		break;

	default:
		cout << "Please enter a valid package of A,B or C";
		break;
	}

	int jamAmount;
	int totalCost;
	cout << endl;
	cout << endl;
	cout << "Please enter the amount of jams purchased this month." << endl;
	cin >> jamAmount;

	if (package == 'A' || package == 'a')
	{
		if (jamAmount == 0)
			cout << "You owe $8 this month" << endl;
		else
		{
			totalCost = (jamAmount * 5) + 8;
			cout << "You owe $" << totalCost << " this month." << endl;
		}
	}
	else if (package == 'B' || package == 'b')
	{
		if (jamAmount == 0)
			cout << "You owe $12 this month" << endl;
		else
		{
			totalCost = (jamAmount * 4) + 12;
			cout << "You owe $" << totalCost << " this month." << endl;
		}
	}
	else if (package == 'C' || package == 'c')
	{
		if (jamAmount == 0)
			cout << "You owe $15 this month" << endl;
		else
		{
			totalCost = (jamAmount * 3) + 15;
			cout << "You owe $" << totalCost << " this month." << endl;
		}
	}
}

void HelloWorld::OddsOrEvenLoop()
{
	for (int i = 0; i < 50; i++)
	{
		if (i % 2 == 0)
			cout << i << " is an even number." << endl;
		else
			cout << i << " is an odd number." << endl;
	}
}

void HelloWorld::GuessTheNumber()
{
	srand(time(nullptr));

	int currentGuess = 0;
	int numberOfGuesses = 0;

	cout << "I'm thinking of a number between 0 and 100, try and guess what it is." << endl;
	int randNumberGen = rand() % 100 + 1;	// Generates a number between 1 and 100 including.

	if (randNumberGen == 0) // Make sure it doesn't get set to zero.
		randNumberGen = 1;
	// DEBUG
	//cout << randNumberGen << endl;
	// DEBUG

	while (currentGuess != randNumberGen)
	{
		cin >> currentGuess;

		// --- TERMINATION CONDITIONS ---
		if (currentGuess == randNumberGen && numberOfGuesses == 0)
		{
			cout << "Well done!, you guessed correct on the first try! Are you sure you're not cheating?" << endl;
			break;
		}
		else if (currentGuess == randNumberGen && numberOfGuesses >= 1) // if they guess correctly on the second or third try.
		{
			cout << "Well done!, you guessed the correct number '" << randNumberGen << "' after " << numberOfGuesses << " tries!" << endl;
			break;
		}

		// --- HELPING CONDITIONS ---
		if (currentGuess <= 0 || currentGuess > 100) // Tells the player the correct range in which the number is in.
		{
			cout << "That was a wasted guess, my number is between 1 and 100 remember?" << endl;
			numberOfGuesses;
		}
		else if (currentGuess > randNumberGen)
		{
			cout << "My number is smaller than that." << endl;
			numberOfGuesses++;
		}
		else if (currentGuess < randNumberGen)
		{
			cout << "My number is bigger than that." << endl;
			numberOfGuesses++;
		}
	}
}

void HelloWorld::CStyleArrays()
{
	string names[4]{ "Bob", "John", "Edward", "Joe" };


	//for (int i = 0; i < names->length (); i++)
	//{
	//	cout << names[i] << endl;
	//}

	//for (string name: names) // Flavor way of doing a for loop with arrays.
	//{
	//	cout << name << endl;
	//}

	//for (auto name: names) // Flavor way of doing a for loop with arrays.
	//{
	//	cout << name << endl;
	//}

	int num = 0;
	int numbers[10];

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = i + 1;
	}

	for (auto num : numbers)
	{
		cout << num << endl;
	}

}

void HelloWorld::ClassArrays()
{
	array<int, 10> numbersArray{}; // the curly braces after creating the Array will get rid of any garbage data and set everything to 0.

	for (int i = 0; i < numbersArray.size(); i++)
	{
		numbersArray[i] = (i + 1) * 2;
	}

	for (int a : numbersArray)
	{
		cout << a << endl;
	}

	cout << "Please input 5 values, I will multiply each value by 2.";
	cout << endl;
}

void HelloWorld::ClassVectors()
{
	vector<int> numberVector;
	//vector<int> numberVector(3);		

	//numberVector[0] = 100; // CAN'T DO THIS if the size isn't allocated beforehand.
	numberVector.push_back(1); // can only populate an int vector with the push_back() method.
	numberVector.push_back(2);
	numberVector.push_back(3);

	for (auto num : numberVector)
	{
		cout << num << endl;
	}

	cout << "The size of the numberVector is: " << numberVector.size() << endl;


	vector<string> stringVector(5);

	stringVector[0] = "John";	// can use the [] to directly access the element and populate it.

	stringVector.push_back("Karen");	// can use push back to send a string right to the end of the vectors declared range.
	stringVector.push_back("Billy");	// if the last element in the vector is already populated, then create a new element to the vector and place it at the end.

	stringVector[1] = "Bob";
	stringVector[2] = "Joe";
	stringVector[3] = ".";
	stringVector[4] = ".";

	for (auto name : stringVector)
	{
		cout << name << endl;
	}

	cout << "The amount of elements in the string vector is: " << stringVector.size() << endl;
	cout << "The string vector value at stringVector[5] is " << stringVector[5] << endl;
	cout << "The string vector value at stringVector[6] is " << stringVector[6] << endl;

	cout << endl;
	cout << endl;

	cout << "front() and back() methods in the vector class." << endl;
	cout << "front() on stringVector: " << stringVector.front() << endl;
	cout << "back() on stringVector: " << stringVector.back() << endl;

	cout << endl;
	cout << endl;

	cout << "pop_back() on stringVector" << endl;
	stringVector.pop_back(); // removes the element AND the data in the element in the vector.

	stringVector.insert(stringVector.begin() + 3, "Donald");

	for (auto name : stringVector)
	{
		cout << name << endl;
	}

	cout << "Please input 5 values, I will multiply each value by 2.";
	cout << endl;
}

void HelloWorld::ClassArrayMultiplier()
{
	array<int, 6> numbersArray{};
	int i = 0;

	for (int i = 0; i < numbersArray.size(); i++)
	{
		cout << "Enter an int." << endl;
		cin >> numbersArray[i];
	}

	cout << endl;

	for (auto number : numbersArray)
	{
		cout << number * 2 << endl;
	}
}

void HelloWorld::NumberVectorMultiplier()
{
	vector<int> numberVector;
	int input = 0;

	cin >> input;

	while (input >= 0)
	{
		numberVector.push_back(input);
		cin >> input;
	}

	cout << endl;

	for (auto number : numberVector)
	{
		cout << number * 2 << endl;
	}
}

void HelloWorld::NamesAndWeights()
{
	vector<string> namesVector(5);
	vector<int> weightVector(5);
	string name = "";
	int weight = 0;

	cout << "Enter 5 names and 5 weights." << endl;
	cout << endl;

	for (int i = 0; i < namesVector.size(); i++)
	{
		cout << "Please enter a name.(" << i + 1 << ")" << endl;
		cin >> name;
		namesVector[i] = name;
		name = "";
	}

	for (int i = 0; i < weightVector.size(); i++)
	{
		cout << "Please enter weight. (" << i + 1 << ")" << endl;
		cin >> weight;
		weightVector[i] = weight;
		weight = 0;
	}

	for (int i = 0; i < namesVector.size(); i++)
	{
		cout << namesVector[i] << " weighs " << weightVector[i] << " kgs." << endl;
	}
}

void HelloWorld::GetSquare()
{
	int input = 0;
	cout << "Enter a number that you want to square." << endl;
	cin >> input;
	cout << input << " squared is " << Square(input) << endl;
}

int HelloWorld::Square(int _square)
{
	return _square * _square;
}

void HelloWorld::ThreeTimesN(int _multiplyBy3, int& _answer)
{
	//int multipliedBy3 = _multiplyBy3 * 3;
	//_answer = multipliedBy3;

	_answer = _multiplyBy3 * 3;
}

void HelloWorld::CMathFunctions()
{
	int powerResult = pow(2, 9);
	int squareRootResult = sqrt(25);
	int ceilingResult = ceil(4.2);
	int floorResult = floor(4.2);
	double log2Result = log2(512);

	cout << "2^9 = " << powerResult << endl;
	cout << "The square root of 25 is " << squareRootResult << endl;
	cout << "The Ceiling of 4.2 is " << ceilingResult << endl;
	cout << "The Floor of 4.2 is " << floorResult << endl;
	cout << "The binary log of 512 is " << log2Result << endl;

}

void HelloWorld::RecurrsionCountDown(int _num)
{
	if (_num >= 0)
	{
		cout << _num << endl;

		RecurrsionCountDown(_num - 1);
	}
}

int HelloWorld::RecurrsionSumValues(int _num)
{
	if (_num >= 1)
	{
		return _num + RecurrsionSumValues(_num - 1);
	}

	return _num;
}

int HelloWorld::FactorialRecurrsion(int _num)
{
	if (_num <= 1)
		return _num;
	else
		return _num * FactorialRecurrsion(_num - 1);

}

int HelloWorld::ProductOfThree(int _num1, int _num2, int _num3)
{
	return _num1 * _num2 * _num3;
}

void HelloWorld::FunctionOverloadingSumArray()
{
	array<int, 10> arrayobject{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int referenceArray[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int total1 = SumArray(arrayobject);
	int total2 = SumArray(referenceArray, 10);

	cout << "the total of the array objects elements is " << total1 << endl;
	cout << "the total of the array objects elements is " << total2 << endl;
}

int HelloWorld::SumArray(int _array[], int _size)
{
	int total = 0;

	for (int i = 0; i < _size; i++)
	{
		total += _array[i];
	}

	return total;
}

int HelloWorld::SumArray(array<int, 10> _array)
{
	int total = 0;

	for (int i = 0; i < _array.size(); i++)
	{
		total += _array[i];
	}

	return total;
}

int HelloWorld::SumArrayObject(array<int, 10> _array)
{
	int total = 0;

	for (int i = 0; i < _array.size(); i++)
	{
		total += _array[i];
	}

	return total;
}
