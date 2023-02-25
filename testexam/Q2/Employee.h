#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
    Employee(string id, string name, int ex, float sala){
        ID = id;
        Name = name;
        experience = ex;
        salary = sala;
    }
    void operator++ (int){
        return salary =+ 1000;
    }
    void operator-- (int){
        return salary =- 1000;
    }
    void operator< (Employee e2){
        if(experience < e2.experience){
            bool b8dons = true;
            return b8dons;
        }
        else{
            bool b8dons = false;
            return b8dons;
        }
    }
        void operator== (Employee e2){
        if(ID == e2.ID){
            cout << "True";
        }
        else{
            cout << "False";
        }
    }
    private:
    string ID,Name;
    int experience;
    float salary;
    

};