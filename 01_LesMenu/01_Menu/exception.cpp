#include "exception.h"
#include <string>

using namespace std;

Exception::Exception(int _codeErreur, string _message)
{
    codeErreur= _codeErreur;
    message= _message;
}

int Exception::ObtenirCodeErreur()
{
    return codeErreur;
}

string Exception::ObtenirDescription()
{
    return message;
}
