#include "StandardDeck.h"



// Default constructor
StandardDeck::StandardDeck(std::vector<PlayingCard*> other_deck)
{
	//other_deck = NULL;
	Initialize();
}

//initialize method
void StandardDeck::Initialize()
{
	if(!my_deck_.empty())
	{
		my_deck_.empty();
		for (int suit = 0; suit < PlayingCard::SUITS; suit++)
		{
			for(int rank=0; rank < PlayingCard::RANKS; rank++)
			{
				my_deck_.emplace_back(rank+1, suit,rank+1, true);
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

int StandardDeck::DrawRandomCard(int randomIndex) const
{
	randomIndex = rand() % my_deck_.empty();
	return randomIndex;
}

void StandardDeck::Shuffle()
{
	for (int i = 0; i < +my_deck_.size(); i++)
	{
		int j = i + rand() % my_deck_.size();
		std::swap(my_deck_[i], my_deck_[j]);
	}
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
}

//Getters 
std::vector<PlayingCard> StandardDeck::GetDeck() const
{
	return my_deck_;
}

//setter
void StandardDeck::SetDeck(const std::vector<PlayingCard>& otherdeck)
{
	my_deck_ = otherdeck;
}
