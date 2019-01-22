#include<bits/stdc++.h>
using namespace std;
int main()
{
    string   in,s= "][poiuytre';lkjhgfd/.,mnbvc ";
    string    res= "poiuytrewqlkjhgfdsa,mnbvcxz ";

    getline(cin,in);
    for(int j=0;j<in.size();j++)
    {
        int i=0;
        in[j]=tolower(in[j]);
        while(in[j]!=s[i]) i++;
        cout<<res[i];
    }
    cout<<endl;
}
