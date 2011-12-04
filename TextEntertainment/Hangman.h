/**
 * @file Hangman.h
 * @author Mark Judy
 */

#ifndef HANGMAN_H

#include <iostream>
#include <string>

using namespace std;

class Hangman
{
	public:
		Hangman ();
		void playGame ();
	private:
		void description ();
		int strikes;
		string guesses;
		string usedLetters;
		string wrongLetters;
		string input;
		string word;
};

#define HANGMAN_H
#endif

//end Hangman.h