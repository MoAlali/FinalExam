#include "A.h"
#include <iostream>
using namespace std;
class B : public A {
private:
int bouns = 500;
public:
int getBouns() const{
    return bouns;
}
};
