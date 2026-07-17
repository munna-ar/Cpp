#include<bits/stdc++.h>
using namespace std;   // Down below two data types string, integer
                       // and a function , all are into a sigle unit named class
class people{
public:
    string name;
    int age;
                  // Create a funtion to display properties of each objects separately
    void print(){
        cout<<"Hello "<<name<<", you are "<<age<<" years old."<<"\n";
    }
};
int main(){
    people man, man2, man3;        // Creating three objects (man, man2, man3), we can create many
                                   // objects as we want. they all are separate
    man.name = "Alam";
    man.age = 23;
    man2.name = "Ridoy";
    man2.age = 22;
    man3.name = "Sayem";
    man3.age = 21;

    // Displaying objects properties
    man.print();
    man2.print();
    man3.print();
    return 0;
}