//------------------------------------------------------------------------------
// Player.h : class declaration/specification
//
// Author: Tony Gaddis, Gaddis9e Ch.14
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

//------------------------------------------------------------------------------
// Player
//------------------------------------------------------------------------------
class Player
{
private:
	std::string name;
	std::string guess;
	int points;

public:
	Player();								// Default Constructor
	Player(const std::string&);				// Overload Constructor

	const std::string& getName() const;		// Returns the player's name
	void setName(const std::string&);		// Sets the player's name	

	void makeGuess();						// Causes player to make a guess
	const std::string& getGuess() const;	// Returns the player's guess
	
	void addPoints(int);					// Adds points to the player
	int getPoints() const;					// Returns the player's points
};
#endif // PLAYER_H
