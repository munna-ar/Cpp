#include<bits/stdc++.h>
using namespace std;

struct people{
    string name;
    string phone;
};

void print(struct people man){
    cout<<man.name<<" : "<<man.phone<<"\n";
}

int main(){
    people man1, man2, man3;
    man1.name = "Alam";
    man1.phone = "01732134452";
    man2.name = "Sayem";
    man2.phone = "01745345356";
    man3.name = "Ridoy";
    man3.phone = "01734554353";

    cout<<"\n"<<man1.name<<" : "<<man1.phone<<"\n\n";

    // print(man1);
    // print(man2);
    // print(man3);
    return 0;
}
