#include "StandardDeck.h"

#include <iostream>


// Default constructor
StandardDeck::StandardDeck()
{
	std::vector<PlayingCard*> my_deck_;
	StandardDeck::Initialize();
}

//initialize method
void StandardDeck::Initialize()
{
	if (my_deck_.empty())
	{
		
		for (int suit = 0; suit < PlayingCard::SUITS; suit++)
		{
			for (int rank = 1; rank < PlayingCard::RANKS + 1; rank++)
			{
				PlayingCard newCard(rank, suit);
				my_deck_.push_back(newCard);
			}
		}
	}
	if(!my_deck_.empty())
	{
		my_deck_.clear();
		for (int suit = 0; suit < PlayingCard::SUITS; suit++)
		{
			for (int rank = 1; rank < PlayingCard::RANKS + 1; rank++)
			{
				PlayingCard newCard(rank, suit);
				my_deck_.push_back(newCard);
			}
		}
	}
}

//Card remaining method to check the number of cards in the deck.
int StandardDeck::CardRemaining() const
{
	return  my_deck_.size();
}

void StandardDeck::DrawNextCard()
{
	my_deck_.erase(my_deck_.begin());
}

int StandardDeck::DrawRandomCard() const
{
	return rand() % my_deck_.size();
	
}

void StandardDeck::Shuffle()
{
	for (int i = 0; i < my_deck_.size() - 1; i++)
	{
		int j = i + rand() % my_deck_.size() - i;
		std::swap(my_deck_[i], my_deck_[j]);
	}
}

std::string StandardDeck::ToString()
{
	std::string outputstring;
	int object = my_deck_.size();
	for (int i = 0; i < object; i++)
	{
		outputstring += my_deck_[i] ;
		outputstring += "\n";
	}
	return outputstring;
}

StandardDeck::~StandardDeck()
= default;

//Copy constructor
StandardDeck::StandardDeck(const StandardDeck& copy_card)
{
	SetDeck(copy_card.my_deck_);
}

//Assignment operator
StandardDeck& StandardDeck::operator=(const StandardDeck& copy_card)
{
	SetDeck(copy_card.my_deck_);
	return *this;
}

//Getters 
const std::vector<PlayingCard> StandardDeck::GetDeck() const
{
	return my_deck_;
}

//setter
void StandardDeck::SetDeck(std::vector<PlayingCard> otherdeck)
{
	my_deck_ = otherdeck;
}


