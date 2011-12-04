/**
 * @file Menu.cpp
 * @author Mark Judy
 */

#include "Menu.h"
#include "HigherLower.h"
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

Menu::Menu ()
{
   input = "";
   choice = ' ';
   cout << "\n\n\tWelcome to the Text Entertainment Suite!" << endl
      << "\t\tProgrammed By: Mark Judy" << endl << endl << endl;
}//end constructor

void Menu::menu ()
{
   display = true;
   while (display)
   {
      cout << "\tTEXT ENTERTAINMENT MENU" << endl << endl;
      cout << "\tD: Program Description" << endl;
      cout << "\tG: Play Higher or Lower!" << endl;
		cout << "\tH: Play Hangman!" << endl;
      cout << "\tQ: Play 20 Questions!" << endl;
      cout << "\tX: Exit the program." << endl;
      cout << "\n\nEnter a menu choice: ";
      
      getline (cin, input);
      
      if (input.length () > 0)
      {
         choice = (char) toupper (input.at (0));
      }
      
      switch (choice)
      {
         case 'D':
            description ();
            break;
         case 'G':
				guessingGame.playGame ();
            break;
			case 'H':
				break;
         case 'Q':
            questionFile.open (QUESTIONS.c_str());
            break;
         case 'X':
            questionFile.close ();
            exit (0);
            break;
         default:
            cout << "\n\nInvalid Option." << endl;
            break;
      }//end switch
   }//end while
}//end menu ()

void Menu::description ()
{
   cout << "\n\n\nThis program provides the user with some mindless fun" << endl
   << "in the form of some text based games. Games available are " << endl
   << "listed in the program menu which is displayed when the" << endl
   << "program starts. User may enter menu choices as either lower" << endl
   << "or upper case characters. Please enjoy the games contained" << endl
   << "in this program... or else." << endl << endl << endl 
   << "Just kidding! Nothing bad will happen to you if you don't" << endl
   << "enjoy these games. Some people might judge you though." << endl
   << endl << endl << "\tHave a nice day!\n\n" << endl << endl;
   
   cout << "Press Enter to continue..." << endl << endl;
   getline (cin, input);
}

