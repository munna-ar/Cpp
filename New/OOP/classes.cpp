#include<bits/stdc++.h>
using namespace std;       // Class is a user-defined data types that groups data (variables)
                           // and functions (methods) into a single unit. It acts as a bluprint
                           // for creating objects
class people{
public:
    string name;   // here is two data types string and integer
    int age;
    
    void print(){ // one function , all are into a sigle unit 
        cout<<"Hello "<<name<<", you are "<<age<<" years old."<<"\n";
    }
};
int main(){
    people man, man2, man3;        // Creating three objects (man)
    
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