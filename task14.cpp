#include <iostream>
using namespace std;
main()
{
    int array1[2];
    int size;
    cout<<"enter the size of array2:";
    cin>>size;
    int array2[size];
    
    for(int i=0; i<2;i++)
    {
        cout<<"enter the digits of array1:";
        cin>>array1[i];
    }
    for(int x=0; x<size; x++ )
    {
        cout<<"enter the digits of array2:";
        cin>>array2[x];
    }
    cout<<array1[0] ;
    for(int x=0;x<size;x++)
    {
       cout<<array2[x] ;
    }
    

    cout<< array1[1];
}