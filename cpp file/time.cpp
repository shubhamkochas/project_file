#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
   auto total_seconds = 3870;
   int hours,minutes,seconds;
   int quotent;
   quotent=(total_seconds/60);
   if (quotent>=60)
   {
       /* code */
       hours=quotent/60;
       cout<<"hours="<<hours<<endl;
       
   }
   minutes=quotent%60;
   cout<<"minutes = "<<minutes<<endl;
   seconds=total_seconds%60;
   cout<<"seconds = "<<seconds;
     return 0;
}