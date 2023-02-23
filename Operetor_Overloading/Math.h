#include <iostream>
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
int operator++(int){
    count++;
    return count;
}
int operator++(){
    ++count;
    return count;
}
int operator + (Math m2){
   return count + m2.getCount();
}
private:
int count;
};

