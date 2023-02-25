#include <iostream>
#include "employee.h"
using namespace std;
int main(){
    Employee e1("1","mohammed",8,5000),e2("1","turki",10,6000);
    if(e1 == e2){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    e1++;
    e1--;

}