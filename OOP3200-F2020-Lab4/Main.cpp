#include <ctime>
#include <iostream>
#include "StandardDeck.h"

void Pause() {
	std::cout << "\nPress \'ENTER\' to continue..." << std::endl;
	std::cin.ignore();	fflush(stdin);
}

int main()
{
	/*	Your main() function should demonstrate each of the features of the StandardDeck class*/
	srand(time(nullptr)); // seed the random number generator

	// create a deck_
	StandardDeck deck;
	// Show the deck object as initialized
	deck.Initialize();
	std::cout << "Number of cards in the deck " << deck.CardRemaining() << std::endl;
	Pause();
	
	// Draw the next card and show it
	//deck.DrawNextCard();
	// Draw a random card and show it
	deck.DrawRandomCard();
	// Show the deck with the remaining cards
	std::cout << "Number of cards remaining in the deck" << deck.CardRemaining() << std::endl;
	// Shuffle the deck and show the result
	deck.Shuffle();
	// Reset the deck and show the result
	deck.Initialize();
}


