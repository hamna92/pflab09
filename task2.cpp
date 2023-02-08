#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i=i+1)
    {
      cout<<"enter the number:";
      cin>>numbers[i];
      
   }
   for(int i=size-1; i>=0;i=i-1)
   {
    cout<<numbers[i] <<" ";
   }
}