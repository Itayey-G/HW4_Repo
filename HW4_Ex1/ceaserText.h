#pragma once
#include "shiftText.h"

#define CEASER_KEY 3

class ceaserText : public shiftText{
public:
	ceaserText();
	ceaserText(std::string text); //c'tor
	~ceaserText(); //d'tor

	static std::string encrypt(std::string text);
	static std::string decrypt(std::string text);

	std::string encrypt();
	std::string decrypt();
};
