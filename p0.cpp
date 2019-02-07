/*
 course:cs368
 author:zhengi liu
 cs login:zhengqi
 uwnet:mliu292
 
 this is project 0 of cs368
 */

#include <iostream>
#include <string>
using namespace std;
int main(){
cout<<"Your name here ";
string input;
// get the input name
getline(cin,input);
//if there is no name input, use CS368 Student as the input
if (input.empty()){
        input = "CS368 Student";


}
//the number of * we have to print
int n = input.length()+30;
//print the correct number of *
for (int i =0; i<n;i++){
        cout<<'*';
}
cout<<endl<<'*';
for (int i=0;i<n-2;i++){
        cout<<' ';
}
cout<<'*'<<endl;
//ptint the correct sentence
cout<<"* Welcome "<<input<<"! Enjoy the class! *" <<endl;
cout<<'*';
for (int i=0;i<n-2;i++){
        cout<<' ';
}
cout<<'*'<<endl;
for (int i =0; i<n;i++){
        cout<<'*';
}
cout<<endl;


return 0;
}
