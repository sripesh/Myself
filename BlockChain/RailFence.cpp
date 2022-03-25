#include<iostream>
#include<string>
using namespace std;
string rfence(string s,int k)
{
    char x[k][s.size()];
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<s.size();i++)
        {
            x[j][i]='*';
        }
    }
    int f=0;
    for(int i=0,j=0;i<s.size();i++)
    {
        if(!f)
        {
            x[j][i]=s[i];
            j++;
            if(j==k)
            f=1,j--;
        }
        else
        {
            j--;
            x[j][i]=s[i];
            if(j<=0)
            f=0,j++;
        }
    }
    string b="";
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<s.size();i++)
        {
            if(x[j][i]!='*')
            {
                b+=x[j][i];
            }
        }
    }
    return b;
}
int main()
{
    int key;
    string str;
    cout<<"Enter Message: ";
    cin>>str;
    cout<<"Enter key : ";
    cin>>key;
    str=rfence(str,key);
    cout<<"Message after encryption: "<<str<<endl;
}