#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
int eID , eExper;
string eNAME;

public:
Employee(){
    eID = 0000;
    eExper = 0;
    eNAME = "KNONE";
}
void SetId(int id){
    eID = id;
}
void SetEx(int ex){
    eExper = ex;
}
void SetName(string name){
    eNAME = name;
}
int getID(){
    return eID;
}
int getExper(){
    return eExper;
}
string getName(){
    return eNAME;
}
};

