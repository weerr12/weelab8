#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string name,movie,day,letter;
    int a=12,id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name."<<endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout << name<<": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< (id/10000000) - a << "."<<" I have a free movie ticket for you."<<endl;
    cout << "Fahsai: Let's go to the cinema together!!!"<<endl;
    cout << "Fahsai: What movie do you want to watch?"<<endl;
    cout << name <<": "<< movie;
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?"<<endl;
    cout << name<<": ";
    getline(cin,day);
    cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< movie << " with you."<<endl;
    cout << name<<": ";
    cin >> letter;
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";
    return 0;
}