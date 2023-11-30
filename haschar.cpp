#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int has[26]={0};
    for(int i=0;i<s.size();i++)
    {
        has[s[i]-'a']++;
    }
    cout<<"queries";
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<has[c-'a']<<endl;
    }
}