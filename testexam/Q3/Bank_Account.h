#include <iostream>
#include <string>
using namespace std;
class Bank_Account
{
protected:
string IBAN_Number;
int Account_id;
float Balance;

public:
void Printinfo(){
    cout << IBAN_Number << endl;
    cout << Account_id << endl;
    cout << Balance << endl;
}
};
