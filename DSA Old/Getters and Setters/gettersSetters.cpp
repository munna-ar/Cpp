#include<bits/stdc++.h>
using namespace std;

class man{
    private:       // encapsulation
        string name;
        int age;
    public:
        man(string name1, int age1){
            name = name1;
            age = age1;
        }
        void setName(string name1){     // setter
            name = name1;
        }
        string getName(){              // getter
            return name;
        }
        void setAge(int age1){
            age = age1;
        }
        int getAge(){
            return age;
        }
};
int main(){
    man man1 = man("Munna", 23);
    cout<<man1.getName()<<" "<<man1.getAge()<<endl;
    man man2 = man("Arju", 20);
    cout<<man2.getName()<<" "<<man2.getAge()<<endl;
    return 0;
}