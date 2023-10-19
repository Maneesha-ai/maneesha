#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a=0;
    while(a<=10){
         a++;
        if(a==5){
            cout<<a;
            continue;
            cout<<a+1;
        }
        if(a==8){
            cout<<a;
            break;
        }
        cout<<a;
       
    }
}