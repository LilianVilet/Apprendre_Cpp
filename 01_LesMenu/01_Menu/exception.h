#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>

using namespace std;

class Exception
{
public:  
    Exception(int _codeErreur, std::string _message);
    int ObtenirCodeErreur();
    string ObtenirDescription();
private:
    int codeErreur;
    string message;
};

#endif // EXCEPTION_H
