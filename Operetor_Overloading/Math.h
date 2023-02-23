#include <iostream>
#include "em.h"
using namespace std;
class Math{

public:
Math(){
    count = 5;
}
int getCount() {
    return count;
}
void setCount(int x){
    count = x;
}
int operator+ (Math m1){
    return count + m1.count;
}
int operator+ (em e1){
    return count + e1.getratb();
}
int operator++ (int){
    return count++;
}
int operator++ (){
    return ++count;
}

private:
int count;
};

