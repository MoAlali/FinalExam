#include "Bank_Account.h"
#include <iostream>
class Current_Account : public Bank_Account
{
public:
void Transferin(float x){
    if (x > 0)
    {
        Balance =+ x;
        cout << "You ADD A" << x << endl;
    }
    else{
        cout << "Less than 0 you are fucking poor" << endl;
    }
    
}
void TransferOut(float B){
        if (B > 0)
    {
        Balance =- B;
        cout << "You SUBTRACT A" << B << endl;
    }
    else{
        cout << "Less than 0 you are fucking poor" << endl;
    }
}
};

