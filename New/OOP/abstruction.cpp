#include<bits/stdc++.h>
using namespace std;

// Abstruct class
class shape{
public:
    virtual void draw() = 0;     // Pure virtual function
};

class circle : public shape{
public:
    void draw() override{
        cout<<"Drawing a circle"<<"\n";
    }
};
int main(){      // Objects of abstruct classes can not be created
    circle a;
    a.draw();
    return 0;
}
