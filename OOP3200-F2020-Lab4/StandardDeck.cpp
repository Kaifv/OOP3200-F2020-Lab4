#include "StandardDeck.h"



// Default constructor
StandardDeck::StandardDeck()
{
	std::vector<PlayingCard*> my_deck_;
	StandardDeck::Initialize();
}

//initialize method
void StandardDeck::Initialize()
{
	if(!my_deck_.empty())
	{
		my_deck_.clear();
		for (int suit = 0; suit < PlayingCard::SUITS; suit++)
		{
			for(int rank=0; rank < PlayingCard::RANKS; rank++)
			{
				auto temp = new PlayingCard(rank, suit);
				my_deck_.push_back(temp);
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
	return rand() % my_deck_.empty();
	
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
