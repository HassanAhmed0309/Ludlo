#pragma once
#include"Token.h"
enum color1 { Red, Yellow, Blue, Green, Magenta, Black };
class Player:public Token
{
	char** GridPointer;    
	Token TokenArray;
	Token TokenSelected;
	int InitalLocation;
	color1 m_Color;
	int NoToken;
public:
	Player(color1 C, int L):m_Color(C),InitalLocation(L)
	{
	}
	void RollADie()
	{

	}
	void ChoosingToken()
	{

	}
	void PlayingSelectedToken(Token T)
	{

	}
	void SetGridPointer(char**)
	{

	}
};

