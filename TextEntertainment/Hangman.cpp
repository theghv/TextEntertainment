/**
 * @file Hangman.cpp
 * @author Mark Judy
 */

#include "Hangman.h"
#include <iostream>
#include <string>

using namespace std;

Hangman::Hangman ()
{
}//end constructor

void Hangman::playGame ()
{
	
}//end playGame ()

void Hangman::description ()
{
	cout << "\n\n\n\tThis is text based version of the game Hangman!" << endl
	<< "One player will provide a word for another player to guess. As" << endl
	<< "the guessing player makes guesses, their guesses will be recorded" << endl
	<< "as either correct guesses or incorrect guesses. Incorrect guesses" << endl
	<< "will also deduct parts from the Hangman's body. When all parts are" << endl
	<< "gone, the guessing player loses the game. Correct guesses will be " << endl
	<< "shown on the screen in their correct location in the unknown word." << endl
	<< endl << "\tPress Enter to continue...";
	getline (cin, input);
	cout << endl << endl << endl;
}//end description ()