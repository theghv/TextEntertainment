/**
 * @file HigherLower.h
 * @author Mark Judy
 */

#ifndef HIGHERLOWER_H

#include <string>

using namespace std;

class HigherLower
{
   public:
      HigherLower ();
		void playGame ();
   private:
		void description ();
      string input;
		int guess;
		int guessCount;
      int value;
};

#define HIGHERLOWER_H
#endif

//end HigherLower class definition