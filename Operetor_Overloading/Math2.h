#include <iostream>
#include "Math.h"
using namespace std;
class Math2{

public:
Math2(){
    count = 5;
}
int getCount() {
    return count;
}
void setCount(int x){
    count = x;
}
int operator+(Math m1){
    int sum = count + m1.getCount();
    return sum;
}
int operator++(){
    ++count;
    return count;
}
private:
int count;
};

