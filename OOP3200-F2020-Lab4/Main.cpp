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

	// create a my_deck_
	StandardDeck
	// Show the my_deck_ object as initialized
	Pause();
	
	// Draw the next card and show it

	// Draw a random card and show it
	
	// Show the my_deck_ with the remaining cards

	// Shuffle the my_deck_ and show the result

	// Reset the my_deck_ and show the result
}


