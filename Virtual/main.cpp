#include <iostream>
#include <string>
using namespace std;
class stu {
    int ID;
    string name;
public:
    stu() {
        ID = 000;
        name = "unknown";
        cout << "stu constructor" << endl;
    }
    void print() {
        cout << "name " << name << endl;
        cout << "id " << ID << endl;
    }
    ~stu() {
        cout << "destruct" << endl;
    }
};
int main() {
    stu x;
    x.print();
    system("pause");
}