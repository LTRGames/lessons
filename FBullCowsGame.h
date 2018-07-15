#pragma once
#include <string>

class FBullCowsGame
{
public:
	FBullCowsGame(); //constructor
	void Reset(); // TODO make a more rich return value. 
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(std::string); // TODO make a more rich return value.

// Please try and ignore this and focus on the interface above
private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};