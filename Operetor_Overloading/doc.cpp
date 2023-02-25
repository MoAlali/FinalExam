#include <iostream> 
using namespace std;  
class A  
{  
     
    string x;  
      public:  
      A(){}  
    A(string i)  
    {  
       x=i;  
    }  
   string operator+(A a)  
{  
      
    string m = x+a.x;  
    return m;  

    
   
} 
};     

int main()  
{  
    A a1("Welcome");  
    A a2("  back");  
    cout<<a1+a2;  
    return 0;  
}

