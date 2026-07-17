#include<bits/stdc++.h>
using namespace std;          // Dynamic Polymorphism has two features
                            //   1. inheritance       2. virtual function
class animal{
public:
    virtual void sound(){
        cout<<"Animan makes a sound";
    }
};
class dog : public animal{
public:
    void sound() override{     // overriding the previous sound function
        cout<<"dog barks";
    }
};
int main(){
    animal *a;
    dog b;
    a = &b;
    a->sound();
    return 0;
}