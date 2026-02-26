//------------------------------------------------------------------------------
// Dealer.cpp : class definition/implementation
// 
// Author: Tony Gaddis, Gaddis9e Ch.14
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "Dealer.h"

// constructor
//------------------------------------------------------------------------------
Dealer::Dealer() 
{ 
	cho = "Cho (even)";
	han = "Han (odd)";
}

// rolls both dice
//------------------------------------------------------------------------------
void Dealer::rollDice()
{
	die1.roll();
	die2.roll();
}

// returns the value of die #1
//------------------------------------------------------------------------------
int Dealer::getDie1Value() const { return die1.getValue(); }

// returns the value of die #2
//------------------------------------------------------------------------------
int Dealer::getDie2Value() const { return die2.getValue(); }

// returns the string result of the dice roll: Cho (even) or Han (odd).                           *
//------------------------------------------------------------------------------
const std::string& Dealer::getChoOrHan() const
{
	bool odd = (die1.getValue() + die2.getValue()) % 2;

	return odd ? han : cho;
}
