#include <iostream>
using namespace std;
main()
{
    char character[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a'};
    string str;
    cout<<"enter the str:";
    getline(cin,str);
    for(int i=0; str[i]!='\0';i++)
    {
        for(int j=0;j<26;j++)
        {
            if(str[i]==character[j])
            {
                j++;
               cout<<character[j]; 
            }
            
        }
    }
}
