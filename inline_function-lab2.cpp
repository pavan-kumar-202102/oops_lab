#include<iostream>
using namespace std;
 inline void output(string name){
     cout<<"hii  "<<name<<"  this is inline function";
 }
 int main(){
     string input;
     cout<<"enter your name"<<endl;
     cin>>input;
     output(input);
     return 0;
 }
