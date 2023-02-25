#include <iostream>
#include "Engineer.h"
using namespace std;
int main() {
    Engineer eng1;
    Employee emp1;
    double sal;
    string dep;
    cin >> sal;
    getline(cin , dep);

    eng1.setDepartment(dep);
    eng1.setSalary(sal);
 //   cout  << emp1.getExper() << endl << emp1.getID() <<endl << emp1.getName() << endl;
    eng1.calculateSalary();


}
