#include<bits/stdc++.h>
// #include<stack> // include this if you are not using the above header file 
using namespace std;

void reverseSentence(string s) {
    stack<string> st; // stack of type string 
    for(int i=0; i<s.length(); i++) {
        string word="";
        while( s[i] !=' ' && i<s.length()) { 
            word += s[i];
            i++;
        }
        // cout<<word<<endl;   // for debugging 
        st.push(word);
    }
    while(!st.empty()) {
        // cout<<"helloworld"<<endl; // for debugging 
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    string s = "Hey my name is aman dhattarwal";
    cout<<s<<endl;
    reverseSentence(s);
    
    return 0;
}