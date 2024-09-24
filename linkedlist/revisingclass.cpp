#include<iostream>
using namespace std;
class Student{
public:
    // int id=1;
    // string name="satyam";
    // int marks=50;
    int id;
    string name;
    float percentage;

    //marking constructor
    Student(int i, string n, float p){
        id=i;
        name=n;
        percentage=p;
    }
};
int main(){
    // Student s;
    // s.id=204;
    // s.name="Satyam";
    // s.percentage=77.8;
    Student s(204,"Satyam",77.8);
    cout << s.id << "\t";
    cout << s.name << "\t";
    cout << s.percentage <<"\t";
}