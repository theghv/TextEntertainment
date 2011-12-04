#This is the makefile for the TextEntertainment program
a.out: TextEntertainment.o Menu.o HigherLower.o Hangman.o
	g++ -o a.out TextEntertainment.o Menu.o HigherLower.o Hangman.o
TextEntertainment.o: TextEntertainment.cpp
	g++ -ggdb -c TextEntertainment.cpp
Menu.o: Menu.cpp Menu.h
	g++ -ggdb -c Menu.cpp
HigherLower.o: HigherLower.cpp HigherLower.h
	g++ -ggdb -c HigherLower.cpp
Hangman.o: Hangman.cpp Hangman.h
	g++ -ggdb -c Hangman.cpp