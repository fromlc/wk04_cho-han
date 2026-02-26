//------------------------------------------------------------------------------
// Die.cpp : class definition/implementation
// 
// Author: Tony Gaddis, Gaddis9e Ch.14
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------

#include "Die.h"

#include <cstdlib>     // rand()

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int DEFAULT_SIDES = 6;

//------------------------------------------------------------------------------
// default constructor
// - calls overload constructor with default number of sides for die
//------------------------------------------------------------------------------
Die::Die() : sides(DEFAULT_SIDES)
{ }

//------------------------------------------------------------------------------
// overload constructor 
// - accepts number of sides for the die
// - performs a roll
//------------------------------------------------------------------------------
Die::Die(int numSides) : sides(numSides) { roll(); }

//------------------------------------------------------------------------------
// simulates a die roll with random value from 1 to number of sides
//------------------------------------------------------------------------------
int Die::roll() { return rand() % sides + 1; }

//------------------------------------------------------------------------------
// getters
//------------------------------------------------------------------------------
int Die::getSides() const { return sides; }

int Die::getValue() const { return value; }

