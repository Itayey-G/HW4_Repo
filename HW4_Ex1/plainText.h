#pragma once
#include <iostream>


class plainText {
protected:
	std::string _text;
	bool _isEncrypted;

public:
	static int numOfText;
	plainText();
	plainText(std::string text); //c'tor
	~plainText(); //d'tor

	//setters
	void setText(std::string text);
	void setIsEncrypted(bool encrypt);

	//getters
	bool isEncrypted() const;
	std::string getText() const;
};

