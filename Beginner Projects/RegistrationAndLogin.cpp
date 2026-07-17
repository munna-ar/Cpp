#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class data{
    string username, email, password;
    string id_name, id_email, id_password;
    fstream file;
    public:
    void signUp();
    void login();
    void forgot();
};
data hello;
void data :: signUp(){
    cout<<"-------SignUp--------"<<endl;
    cout<<"Username: ";
    getline(cin, username);
    cout<<"E-mail: ";
    getline(cin, email);
    cout<<"Password: ";
    getline(cin, password);

    file.open("data.txt", ios :: out | ios :: app);
    file<<username<<"*"<<email<<"*"<<password<<endl;
    file.close();
}
void data :: login(){
    cout<<"-------Login-------"<<endl;
    cout<<"Username: ";
    getline(cin, id_name);
    cout<<"Password: ";
    getline(cin, id_password);
    file.open("data.txt", ios :: in);
    getline(file, username, '*');
    getline(file, email, '*');
    getline(file, password, '\n');
    while(!file.eof()){
        if(username == id_name){
            if(password == id_password){
                cout<<"Login successfully";
                break;
            }
            else{
                cout<<"Incorrect password";
                break;
            }
        }
        else{
            cout<<"Account not found";
            break;
        }
        getline(file, username, '*');
        getline(file, email, '*');
        getline(file, password, '\n');
    }
    file.close();
}
void data :: forgot(){
    cout<<"-------Forgot ?--------"<<endl;
    cout<<"Username: ";
    getline(cin, id_name);
    cout<<"E-mail: ";
    getline(cin, id_email);
    file.open("data.txt", ios :: in);
    getline(file, username, '*');
    getline(file, email, '*');
    getline(file, password, '\n');
    while(!file.eof()){
        if(username == id_name){
            if(email == id_email){
                cout<<"Account found"<<endl;
                cout<<"Password: "<<password<<endl;
            }
            else{
                cout<<"Account not found";
                break;
            }
            break;
        }
        else{
            cout<<"Account not found";
            break;
        }
        break;
    }
    file.close();
}
int main(){
    // hello.signUp();
    hello.login();
    // hello.forgot();
    return 0;
}