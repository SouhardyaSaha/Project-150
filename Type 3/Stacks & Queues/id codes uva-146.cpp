#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string in,temp;

    while(in!="#")
    {
        cin>>in;
        if(in=="#") break;
        temp=in;
        next_permutation(in.begin(),in.end());

        if(in>temp) cout<<in<<endl;
        else cout<<"No Successor\n";
    }

    return 0;
}
