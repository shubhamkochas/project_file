#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char character='A';
    switch (character)
    {
    case 97 ... 122:
        cout<<"lower-case alphabet";
        break;
    case 65 ... 90:
    cout<<"upper-case alphabet";
    break;
    default:
    cout<<"not an alphabet";
        break;
    }
}
