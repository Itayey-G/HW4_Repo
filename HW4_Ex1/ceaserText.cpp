#include "ceaserText.h"

ceaserText::ceaserText()
{
}

ceaserText::ceaserText(std::string text)
{
	setText(text);
}

ceaserText::~ceaserText()
{
}

std::string ceaserText::encrypt(std::string text)
{
	shiftText::encrypt(text, CEASER_KEY);
	return text;
}

std::string ceaserText::decrypt(std::string text)
{
	shiftText::decrypt(text, CEASER_KEY);
	return text;
}

std::string ceaserText::encrypt()
{
	setText(shiftText::encrypt(getText(), CEASER_KEY));
	return getText();
}

std::string ceaserText::decrypt()
{
	setText(shiftText::decrypt(getText(), CEASER_KEY));
	return getText();
}
