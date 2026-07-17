#include<bits/stdc++.h>
using namespace std;     // Inheritance allows one class to acquire the properties and bahaviors
                        // of aother class
class institute{
public:
    void varsity(){
        cout<<"I'm a student of Bangladesh University of Business and Techlonogy."<<"\n";
    }
};
class faculty : public institute{ // now faculty class has all the properties of institute class
public:
    void department(){
        cout<<"I'm studying in Computer Science and Engineering."<<"\n";
    }
};
int main(){
    faculty ins;

    ins.varsity();     // inherited from institute
    ins.department(); // faculty's own function
    return 0;
}
