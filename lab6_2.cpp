#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, movie, day, w;
	int id,idd;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n" << "?????: ";
    getline(cin,name);
    cin.ignore();
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n" 
    << "Fahsai: I think you are an Engineering student. What is your student ID?\n" 
    << name << ": ";
    cin >> id;
    idd = id/10e6;
    cout << "Fahsai: I think you may be GEAR " << idd-12 << ". I have a free movie ticket for you.\n" 
    << "Fahsai: Let's go to the cinema together!!!\n"
    << "Fahsai: What movie do you want to watch?\n"
    << name << ": ";
    cin.ignore();
    getline(cin,movie);
    cin.ignore();
    cout << "Fahsai: So....which day are you free to go with me?\n"
    << name << ": ";
    getline(cin,day);
    cin.ignore();
    cout <<"Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching " << movie << " with you.\n"
    << name << ": ";
    getline(cin,w);
    cout << "Fahsai: 555+ see you " << day <<". Bye Bye \(^ ^)/";

    return 0;
}
