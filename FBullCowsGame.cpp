#include "FBullCowsGame.h"

FBullCowsGame::FBullCowsGame() {Reset();}

int FBullCowsGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowsGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowsGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES; 

	MyCurrentTry = 1;
	return;
}


bool FBullCowsGame::IsGameWon() const
{
	return false;
}

bool FBullCowsGame::CheckGuessValidity(std::string)
{
	return false;
}
