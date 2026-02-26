//------------------------------------------------------------------------------
// Die.cpp : class definition/implementation
// 
// Author: Tony Gaddis, Gaddis9e Ch.14
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------

#include "Die.h"

#include <cstdlib>     // rand()

// constants
//------------------------------------------------------------------------------
constexpr int DEFAULT_SIDES = 6;

// default constructor
// - sets initial die value with roll
//------------------------------------------------------------------------------
Die::Die() : sides(DEFAULT_SIDES) { roll(); }

// overload constructor 
// - accepts number of sides for the die
// - sets initial die value with roll
//------------------------------------------------------------------------------
Die::Die(int numSides) : sides(numSides) { roll(); }

// simulates a die roll with random value from 1 to number of sides
// - sets die value
//------------------------------------------------------------------------------
int Die::roll() 
{ 
	value = rand() % sides + 1; 
	return value;
}

// getters
//------------------------------------------------------------------------------
int Die::getSides() const { return sides; }
int Die::getValue() const { return value; }

