#include "math.h"
#include <iostream>
using namespace std;
 int main(){


   int num1 = 4 , num2 = 6;
   cout << num1 + num2 << endl;
  

   string a = "Hello" , b = "World";
   cout << a + " "  + b << endl;

    Math m1 , m2;
     em e1;
     m1.setCount(20);
     m2.setCount(10);
  
  
   m1++;
   cout << m1.getCount() << endl;
   m1-=1;
   cout << m1.getCount() << endl;
 }