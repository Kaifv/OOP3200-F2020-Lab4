/** OOP3200. F2020. StandardDeck.h
 *
 *  In this lab you will create your own collection class called StandardDeck, which
 *	will 'contain' objects of the PlayingCard class.  The intent of the class is to
 *	represent a standard my_deck_ of 52 cards that might be useful in a card game type
 *	application.  
 *
 *	@author		Thom MacDonald
 *	@author		Tom Tsiliopoulos
 *  @author     Kaifkhan vakil
 *  @author		Michai Pryce
 *	@version	2020.10
 *	@since		Jul 2018
 *	@see		Bronson, G. (2012). A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__

#include "PlayingCard.h"
#include <vector>

class StandardDeck
{
public:
	// Initialization:
	//default constructor
	StandardDeck();
	
	//Method
	virtual void Initialize();
	
	int CardRemaining() const;
	
	void DrawNextCard();
	
	int DrawRandomCard() const;
	
	void Shuffle();
	
	// Rule of three:
	//Destructor
	~StandardDeck();
	
	//Copy constructor
	StandardDeck(const StandardDeck& copy_card);
	
	//Assignment operator
	StandardDeck& operator=(const StandardDeck& copy_card);

	// Accessors:
	const std::vector<PlayingCard> GetDeck() const;
	
	// Mutators:
	void SetDeck(std::vector<PlayingCard> otherdeck);
	
private:
	
	std::vector<PlayingCard> my_deck_;
};

#endif /* defined (__STANDARD_DECK__) */

