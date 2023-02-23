#include <iostream>
class Math{

public:
Math(){
    count = 5;
}
int getCount() const{
    return count;
}
void setCount(int x){
    count = x;
}
private:
int count;
};

