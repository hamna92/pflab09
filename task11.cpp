#include <iostream>
using namespace std;
main()
{
    string name;
    int counter=0;
    getline(cin,name);
    cout<<" enter string :";
    cin>>name;
    while(name[counter] != '\0')
    {
        counter++;
    }
    for(int i=counter;i>=0;i--)
    {
        cout<<name[i];
    }
     
}