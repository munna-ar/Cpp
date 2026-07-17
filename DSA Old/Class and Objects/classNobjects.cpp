#include<iostream>
using namespace std;

class people{
    public:
        string name;
        string address;
        int age;
};

int main(){
    people one;
    one.name = "munna";
    one.address = "love";
    one.age = 20;
    cout<<one.name<<" "<<one.age<<" "<<one.address<<endl;
    people one2;
    one2.name = "arju";
    one2.address = "love";
    one2.age = 19;
    cout<<one2.name<<" "<<one2.age<<" "<<one2.address;
    return 0;
}