//------------------------------------------------------------------------------
// Die.h : class declaration/specification
// 
// Author: Tony Gaddis, Gaddis9e Ch.13
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#ifndef DIE_H
#define DIE_H

//------------------------------------------------------------------------------
// Die
//------------------------------------------------------------------------------
class Die
{
private:
	int sides;				// Number of die sides
	int value;				// The die's value

public:
	Die();					// Constructor
	Die(int);				// Constructor accepts number of die sides
	int roll();				// Rolls the die and returns its value
	int getSides() const;	// Returns the number of die sides
	int getValue() const;	// Returns the die's value
};
#endif