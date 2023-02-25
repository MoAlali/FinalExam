#include "Bank_Account.h"
#include <iostream>
class Saving_Account : public Bank_Account
{
private:
float intrest;
public:
Saving_Account(){
    intrest = 0;
}
void Calclate_intrest(){
    intrest = Balance * 0.02;
    cout << intrest;
}
};

