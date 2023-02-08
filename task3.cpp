#include <iostream>
using namespace std;
main()
{
    bool isfound=false;
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i=i+1)
    {
      cout<<"enter the number:";
      cin>>numbers[i];
    
    cout<<"enter the numbers to find:";
    cin>>numbers;
    for(int i=0;i<size;i=i+1)
    {
        if(numbers=numbers[i])
        {
            isfound=true;
              break;
        }
        if(isfound==true)
        {
            cout<<"number found";
        }
   }    
  }
}