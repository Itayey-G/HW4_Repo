#include "shiftText.h"
#include "plainText.h"

shiftText::shiftText()
{
}

shiftText::shiftText(std::string text, int key)
{
	setKey(key);
	encrypt();
}

shiftText::~shiftText()
{
	NULL;
}

std::string shiftText::encrypt(std::string text, int key)
{
	for (int i = 0; i < text.size(); i++) {
		text[i] = char(((int(text[i]) + key) % LETTERS_NUM) + LOWEST_LETTER);
	}
	return text;
}

std::string shiftText::decrypt(std::string text, int key)
{
	encrypt(text, LETTERS_NUM - key);
	return text;
}

std::string shiftText::encrypt()
{
	setText(encrypt(getText(), key()));
	setIsEncrypted(true);
	return getText();
}

std::string shiftText::decrypt()
{
	setText(decrypt(getText(), key()));
	setIsEncrypted(false);
	return getText();
}

void shiftText::setKey(int key)
{
	_key = key;
}

int shiftText::key() const
{
	return _key;
}
