#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int base=2;
    int exponent=3;
    int x= exponent;
    int result;
    result=base;
    for(exponent;exponent=x-1;x--)
    {
     result=result*base;
     
    }
    cout<<"result = "<<result; 

}