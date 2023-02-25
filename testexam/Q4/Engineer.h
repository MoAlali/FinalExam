#include <iostream>
#include "Employee.h"
#include <string>
using namespace std;
class Engineer : public Employee
{
private:
   double salary;
   string department;
public:
void setSalary(double s){
    salary = s;
}
void setDepartment(string d){
    department = d;
}
double getSalary(){
    return salary;
}
string getdepartment(){
    return department;
}
void calculateSalary(){
    if (eExper >= 10)
    {
        float bouns =  salary * 0.25; 
        salary += bouns;
        cout << salary;
    }
    else{
        float bouns =  salary * 0.10; 
        salary += bouns;
        cout << salary;
    }
    
}
};

