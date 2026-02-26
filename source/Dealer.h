//------------------------------------------------------------------------------
// Dealer.h : class declaration/specification
// 
// Author: Tony Gaddis, Gaddis9e Ch.14
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#ifndef DEALER_H
#define DEALER_H

#include "Die.h"

#include <string>

//------------------------------------------------------------------------------
// Dealer
//------------------------------------------------------------------------------
class Dealer
{
private:
	Die die1, die2;
	std::string cho, han;

public:
	Dealer();

	void rollDice();				
	int getDie1Value() const;
	int getDie2Value() const;

	// Get the roll result (Cho or Han)
	const std::string& getChoOrHan() const;
};
#endif DEALER_H
