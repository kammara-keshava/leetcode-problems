#include<iostream>
#include<string>
#include<sstream>
#include<vector> 
using namespace std;
char ipclass(const string& ip){
    stringstream ss(ip);
    string octet;
    getline(ss,octet,'.');
    int f=stoi(octet);
    if(f>=1&&f<=126)
        return 'A';
    else if(f>=128&&f<=191)
    return 'B';
    else if(f>=192&&f<=223)
    return 'C';
    else if(f>=224&&f<=239)
    return 'D';
    else if(f>=240&&f<=255)
    return 'E';
    else 
    return 'x';
}
int main(){
    string ip;
    cin>>ip;
    char i=ipclass(ip);
    if(i=='X')
    cout<<"invalid ip address";
    else
    cout<<"the given ip address "<<ip<<" belongs to "<<i<<" class\n";
}