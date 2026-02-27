//------------------------------------------------------------------------------
// Player.cpp : class definition/implementation
// 
// Author: Tony Gaddis, Gaddis9e Ch.14
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "Player.h"

#include <string>

//------------------------------------------------------------------------------
// Constructors
//------------------------------------------------------------------------------
Player::Player() : name("NOTSET"), points(0)
{ }

Player::Player(const std::string& playerName) : name(playerName), points(0)
{ }

//------------------------------------------------------------------------------
// returns a const reference to the player's name
//------------------------------------------------------------------------------
const std::string& Player::getName() const { return name; }

//------------------------------------------------------------------------------
// returns a const reference to the player's name
//------------------------------------------------------------------------------
void Player::setName(const std::string& playerName) { name = playerName; }

//------------------------------------------------------------------------------
// causes the player to guess either "Cho (even)" or "Han (odd)"
//------------------------------------------------------------------------------
void Player::makeGuess()
{
	// Get a random number, either 0 or 1.
	int guessNumber = rand() % 2;

	// Convert the random number to Cho or Han.
	guess = (guessNumber == 0) ? "Cho (even)" : "Han (odd)";
}

//------------------------------------------------------------------------------
// returns a const reference to the player's guess
//------------------------------------------------------------------------------
const std::string& Player::getGuess() const { return guess; }

//------------------------------------------------------------------------------
// adds the specified number of points to the player                            *
//------------------------------------------------------------------------------
void Player::addPoints(int newPoints) { points += newPoints; }

//------------------------------------------------------------------------------
// returns the player's points
//------------------------------------------------------------------------------
int Player::getPoints() const { return points; }


