#include<iostream>
#include<string.h>
// #include<process.h>
#include<bits/stdc++.h>
// #include<conio.h>
using namespace std;
int main () {
    char name[30], password[10];
    cout<<"enter your name :";
    cin.get(name, 30);
    cout<<"enter you password:";
    cin.get(password, 10);
    //  cout<<name<<endl<<password;
    if(strlen(password) > 11) {
        cout<<"Your password is too long "<<endl;
        exit(1);
    }
    else if( name != "mandeep" && password != "helloworld") {
        cout<<"Invalid credentials"<<endl;
        exit(1);
    }

        // clrscr();
        cout<<"Welcome Admin ..."<<endl;

    // getch();
    return 0;
}