#include "subsitutionText.h"


subsitutionText::subsitutionText(std::string text, std::string dictunaryFileName)
{
    setText(text);
    setDictunaryName(dictunaryFileName);
    encrypt(text, dictunaryFileName);
}

subsitutionText::~subsitutionText()
{ 
    //free the file 
}

void subsitutionText::setDictunaryName(std::string dictunaryFileName)
{
    _dictunaryFileName = dictunaryFileName;
}

std::string subsitutionText::dictunaryFileName()
{
    return _dictunaryFileName;
}
