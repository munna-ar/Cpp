#include<iostream>
using namespace std;

class people{
    public:
        string name;
        int age;
        people(string name1, int age1){
            name = name1;
            age = age1;
        }
        void print(){
            cout<<"name: "<<name<<endl;
            cout<<"roll: "<<age<<endl;
        }
};
int main(){
    people one("munna", 23);
    people one1("arju", 20);
    one.print();
    one1.print();
    return 0;
}