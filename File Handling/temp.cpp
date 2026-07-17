#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("main.cpp");
    file<<"#include<bits/stdc++.h>"<<endl;
    file<<"using namespace std;"<<endl;;
    file<<"int main(){"<<endl;
    file<<"\treturn 0;"<<endl;
    file<<"}";
    file.close();
    return 0;
}