#include<iostream>
#include<string>
using namespace std;
string encrypt(string s,int k1,int k2)
{
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(c>='a'&&c<'z')
        s[i]=(k1*(c-'a')+k2)%26+'a';
        else
        s[i]=(k1*(c-'A')+k2)%26+'A';
    }
    return s;

}
int main()
{
    string s;
    int k1,k2;
    cout<<"Enter Message: ";
    cin>>s;
    cout<<"Enter key 1: ";
    cin>>k1;
    cout<<"Enter key 2: ";
    cin>>k2;
    s=encrypt(s,k1,k2);
    cout<<"Message after encryption: "<<s<<endl;
}