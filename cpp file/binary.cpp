
#include<iostream>
using namespace std;

int main(){
    int n = 256;
    int reverse=0, binary,i;
    int product;
    while (n !=0)
    {
        binary=n%2;
        reverse=reverse+(binary*product);
    n=n/2;
    product *=10;
    cout<<" "<<reverse;
    }
    
    return 0;
}