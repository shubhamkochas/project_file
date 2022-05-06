#include<iostream>
using namespace std;

int result;
void left_rotate(int arr[],int size){

    for(int i = 1; i < size; i++)
    {
        result = arr[i];
        cout<<result <<" ";
    }
    cout<<arr[0];
}
int  main() {
     int size=5;
    int arr[size]={1,2,3,4,5};
    left_rotate(arr,size);
   
    return 0;
}