#include<iostream>
using namespace std;
 inline void output(string name){
     cout<<"hii  "<<name<<"  this is inline function";
 }
 int main(){
     string input;
     cout<<"enter your name"<<endlp;
     cin>>input;
     output(input);
     return 0;
 }
git