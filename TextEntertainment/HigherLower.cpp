/**
 * @file HigherLower.cpp
 * @author Mark Judy
 */

#include "HigherLower.h"
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

HigherLower::HigherLower ()
{
	srand (time (0));
}//end constructor

void HigherLower::description ()
{
	cout << "\n\n\tWelcome to Higher or Lower!" << endl << endl;
	cout << "\n\tThe computer will generate a random number that" << endl
	<< "you must guess! The game will tell you if your guess is" << endl
	<< "higher or lower than the number that the computer generated." << endl 
	<< "The range for guesses is between 1 and 1000." << endl << endl
	<< "Press Enter to continue:";
	getline (cin, input);
}//end description ()

void HigherLower::playGame ()
{
	description ();
	guessCount = 0;
	value = rand () % 1001;
	while (guess != value)
	{
		cout << "\n\n\tEnter a guess (numbers only):";
		getline (cin, input);
		guess = atoi (input.c_str());
		
		if (guess < value)
		{
			cout << "\n\tYou guessed: " << guess;
			cout << "\n\tGuess higher.";
		}//end if
		else if (guess > value)
		{
			cout << "\n\tYou guessed: " << guess;
			cout << "\n\tGuess lower.";
		}//end elif
		
		guessCount++;
	}//end while
	
	cout << "\n\tYou guessed: " << guess << endl;
	cout << "\tYou guessed " << guessCount << " times." << endl;
	cout << "\tThe number was: " << value << endl << endl;
	cout << "\tYou win nothing! \n\tCongratulations!" << endl;
	cout << "\n\tPress Enter to return to the main menu." << endl;
	getline (cin, input);
	cout << endl << endl << endl;
}//end playGame ()