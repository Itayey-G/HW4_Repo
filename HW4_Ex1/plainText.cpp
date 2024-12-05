#include "plainText.h"

plainText::plainText()
{
	setText("");
	setIsEncrypted(false);
}

plainText::plainText(std::string text)
{
	numOfText++;
	setText(text);
	setIsEncrypted(false);
}

plainText::~plainText()
{
	NULL;
}

void plainText::setText(std::string text)
{
	_text = text;
}

void plainText::setIsEncrypted(bool encrypt)
{
	_isEncrypted = encrypt;
}



bool plainText::isEncrypted() const
{
	return _isEncrypted;
}

std::string plainText::getText() const
{
	return _text;
}


