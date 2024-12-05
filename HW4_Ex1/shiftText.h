#pragma once
#include "plainText.h"

#define LETTERS_NUM 26
#define LOWEST_LETTER 'a'

class shiftText : public plainText{
private:
	int _key;

public:
	shiftText();
	shiftText(std::string text, int key); //c'tor
	~shiftText(); //d'tor

	static std::string encrypt(std::string text, int key);
	static std::string decrypt(std::string text, int key);
	
	std::string encrypt();
	std::string decrypt();

	//setters
	void setKey(int key);

	//getters
	int key() const;
};
