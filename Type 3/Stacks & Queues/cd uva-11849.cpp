#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        long long in,sum=0;
        if(m==0 && n==0) break;
        vector<long long> p,q,vec;
        while(m--)
        {
            cin>>in;
            p.push_back(in);
        }
        while(n--)
        {
            cin>>in;
            q.push_back(in);
        }

        set_intersection (p.begin(), p.end(), q.begin(), q.end(), back_inserter(vec));

        cout<<vec.size()<<endl;
    }
}
