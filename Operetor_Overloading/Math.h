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
int operator+ (Math m2){
    return count + m2.getCount();
}
int operator++ (int){
    return count++;
}
int operator++ (){
    return ++count;
}
int operator+ (em e1){
    return count + e1.getratb();
}
private:
int count;
};

