#pragma once
#include "plainText.h"
#include <fstream>

class subsitutionText : public plainText{
private:
	std::string _dictunaryFileName;

public:
	subsitutionText(std::string text, std::string dictunaryFileName); //c'tor
	~subsitutionText(); //d'tor

	static std::string encrypt(std::string text, std::string dictunaryFileName);
	static std::string decrypt(std::string text, std::string dictunaryFileName);

	std::string encrypt();
	std::string decrypt();

	//setters
	void setDictunaryName(std::string dictunaryFileName);

	//getters
	std::string dictunaryFileName();
};
