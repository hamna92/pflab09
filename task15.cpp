#include <iostream>
using namespace std;
main()
{
    string line;
    cout<<"enter the line:";
    cin>>line;
    getline(cin,line);
    for(int i=0; i!='\0';i++)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u');
        {
           continue;
        }
        cout<<line[i];
    }
}