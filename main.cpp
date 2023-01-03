//
//  main.cpp
//  Palindrome
//
//  Created by Aditya Jha on 1/3/23.
//
// Palindrome Check

#include  <iostream>
#include <string.h>
using namespace std;
int main(){
    string str,rev="";
    cout<<"Enter the String :";
    cin>>str;
    long int len=str.length();
    rev.resize(len);
    
    // Making the string Uppercase
    for (int i=0;str[i]!='\0';i++){
        if (str[i]>=65 && str[i]<=96){
            str[i];
        }
        else{
            str[i]-=32;
        }
    }

    for (long int i=0,j=len-1;i<len;i++,j--){
        rev[i]=str[j] ;
    }
    rev[len]='\0';
    if (str.compare(rev)==0){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}
