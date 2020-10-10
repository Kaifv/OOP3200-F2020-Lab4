#include "StandardDeck.h"

//Default constructor
//
//StandardDeck::StandardDeck(std::vector<PlayingCard*> other_deck)
//{
//	const int DEFAULT_VALUE = 0;
//	std::vector<PlayingCard*> deck;
//	Initialize();
//}
//



//destructor
StandardDeck::~StandardDeck()
= default;

//default constructor
StandardDeck::StandardDeck(std::vector<PlayingCard*> other_deck)
{
	//other_deck = NULL;
	Initialize();
}

//Initialize method
void StandardDeck::Initialize()
{
	my_deck_.empty();
	    for (int suit= 0; suit < PlayingCard::SUITS; suit++)
		{
			for(int rank=0; rank < PlayingCard::RANKS; rank++)
			{
				my_deck_.emplace_back(rank+1, suit,rank+1, true);
			}
		}
	
}

// Card Remaining method
int StandardDeck::CardRemaining()
{
	return  my_deck_.size();
}

void StandardDeck::DrawNextCard()
{
	my_deck_.erase(my_deck_.begin());
}

int StandardDeck::DrawRandomCard(int randomIndex)
{
	randomIndex = rand() % my_deck_.empty();
	return randomIndex;
}

void StandardDeck::Shuffle()
{
	for(int i =0; i <+ my_deck_.size(); i++)
	{
		int j = i + rand() % my_deck_.size();
		std::swap(my_deck_[i], my_deck_[j]);
	}
	
}

//Assignment operator
StandardDeck& StandardDeck::operator=(std::vector<PlayingCard*> copy_card)
{
	
}

//Getter
const std::vector<PlayingCard> StandardDeck::GetDeck() const
{
	return my_deck_;
}

//Setter
std::vector<PlayingCard> StandardDeck::SetDeck(std::vector<PlayingCard*> otherdeck)
{
	//my_deck_ = otherdeck;
}



