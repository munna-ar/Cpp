#include<bits/stdc++.h>
using namespace std;     // Encapsulation is used to restrict direct access to some of
                        // the objects's components of classes. It uses getter and setter functions
class student{
private:
    // Hidden data, user has no direct access to Name and Id
    string name;
    int id;
public:
    // Setter functions, its the process which a user indirecly sets Name and Id
    void setName(string newName){
        name = newName;
    }
    void setId(int newId){
        id = newId;
    }

    // Getter functions, its the process which a user indirecly gets Name and Id
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }
};

int main(){
    student s, s2, s3;
    
    s.setName("Alam");
    s.setId(3);
    s2.setName("Ridoy");
    s2.setId(5);
    s3.setName("Sayem");
    s3.setId(4);

    cout<<s.getName()<<" : "<<s.getId()<<"\n";
    cout<<s2.getName()<<" : "<<s2.getId()<<"\n";
    cout<<s3.getName()<<" : "<<s3.getId()<<"\n";
 
    return 0;
}
