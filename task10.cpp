#include <iostream>
using namespace std;
main()
{
     int sum;
     int size;
    cout<<"enter the size of array:";
    cin>>size;
    int resistors[size];
    for(int i=0;i<size;i=i+1)
    {
      cout<<"enter the resistors:";
      cin>>resistors[i];
    }
    sum=resistors[size]+sum;
    cout<<"sum of resistors is:"<<sum<<"ohm";



}