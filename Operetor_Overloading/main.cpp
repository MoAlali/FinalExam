#include "Math.h"
#include <iostream>
using namespace std;
 int main(){


   int num1 = 4 , num2 = 6;
   cout << num1 + num2 << endl;

   string a = "Hello" , b = "World";
   cout << a + " "  + b << endl;

   Math m1 , m2;
   m1.setCount(10);
   m2.setCount(20);
   cout << m1 + m2 << endl;

 }