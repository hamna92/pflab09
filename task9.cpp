#include <iostream>
using namespace std;
main()
{
    int num;
    int largest;
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int numbers[size];
   for(int i=0;i<size;i++)
   {
    cout<<"enter number";
    cin>>numbers[i];
   }
   largest=numbers[0];
   for(int n=0;n<size;n++)
   {
    if(numbers[n]>largest)
    {
    largest=numbers[n];
    }
   }
   cout<<"largest number is:"<<largest;
}