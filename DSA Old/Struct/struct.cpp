#include<bits/stdc++.h>
using namespace std;

struct man{
    string name;
    int age;
};
void print_info(man man1){
    cout<<man1.name<<" is "<<man1.age<<endl;
}
int main(){
    man man1;
    man1.name = "Munna";
    man1.age = 23;
    man man2;
    man2.name = "Arju";
    man2.age = 20;
    print_info(man1);
    print_info(man2);
    return 0;
}