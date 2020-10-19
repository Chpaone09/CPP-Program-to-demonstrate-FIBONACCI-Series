/*
***********************************************************

Topic   : Program to demonstrate Fibonacci Series in cpp.
Author  : Chpaone09®
Date    : Oct 20, 2020

************************************************************
*/

#include <iostream>
using namespace std;

int main(){
       
        int a = 1, b = 1, c = 0, n;
           cout<<"\n\n\t Please enter a number >> ";
           cin>>n;
            //n = Integer.parseInt(n);
            cout<<"\n\n\t Fibonacci series till "<<n<<"th term >> "<<a<<" "<<b<<" ";
            for(int i=3 ; i<=n ; i++){
                c = a+b;
                cout<<c<<" ";
                b=a;
                a=c;   
            }
         
        
        return 0;
    }

