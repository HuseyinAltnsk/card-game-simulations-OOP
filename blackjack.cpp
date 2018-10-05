/*
 * black_jack.cpp
 *
 * Author: Huseyin
 * Author: Mutian
 */
#include "blackjack.h"

BlackJack::BlackJack():ShedGame("Black_Jack"){

}
bool BlackJack::isWild(const Card& c) const{
	if(c.getRank() == Card::ace){
		return true;
	}
	else{
		return false;
	}
}

bool BlackJack::isDrawTwo(const Card& c) const{
	if(c.getRank() == Card::two){
		return true;
	}
	else{
		return false;
	}

}

bool BlackJack::isDrawFive(const Card& c) const{
	if(c.getRank() == Card::jack && (c.getSuit() == Card::spades || c.getSuit() == Card::clubs)){
		return true;
	}
	else{
		return false;
	}

}
bool BlackJack::isBurner(const Card& c) const{
	if(c.getRank() == Card::seven){
		return true;
	}
	else{
		return false;
	}
}
bool BlackJack::isReverser(const Card& c) const{
	if(c.getRank() == Card::ten){
		return true;
	}
	else{
		return false;
	}
}
bool BlackJack::isSkipper(const Card& c) const{
	if(c.getRank() == Card::eight){
		return true;
	}
	else{
		return false;
	}
}
bool BlackJack::isCancel(const Card& c) const{
	if(c.getRank() == Card::jack && (c.getSuit() == Card::diamonds || c.getSuit() == Card::hearts)){
		return true;
	}
	else{
		return false;
	}
}
int BlackJack::handSize() const{
	return 7;
}

