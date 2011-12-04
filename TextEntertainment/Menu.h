/**
 * @file Menu.h
 * @author Mark Judy
 */
 
#ifndef MENU_H

#include "HigherLower.h"
#include <fstream>
#include <string>

using namespace std;

const string QUESTIONS = "questions.txt";

class Menu
{
   public:
      Menu ();
      void menu (void);
   private:
      void description (void);
      void confirmExit (void);
      string input;
      char choice;
      bool display;
      fstream questionFile;
		HigherLower guessingGame;
};

#define MENU_H
#endif

//end Menu.h