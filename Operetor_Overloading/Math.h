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


int operator+ (em e1){
    return count + e1.getratb();
}
int operator-=  (int value){
    return count -= value ;
}
int operator+=  (int value){
    return count += value ;
}
int operator++ (int){
  
    return count +=1000;
}
bool operator < (Math f) {
    if (count<f.count)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
bool operator == (Math g) {
    if (count==g.count)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
private:
int count;
};

