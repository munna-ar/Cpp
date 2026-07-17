#include<bits/stdc++.h>
using namespace std;    // Polymorphism means many forms. It allows same function or object
                       // to behave differently depending on the context
class math{            // Polymorphism means one interface, many implementation
public:
    auto add(auto a, auto b){
        return a + b;
    }
};
int main(){
    math x;
    cout<<x.add(3,5)<<"\n";
    cout<<x.add(2.35, 7.2);
    return 0;
}