#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int vec[n];

    for(i=0;i<n;i++)
        cin>>vec[i];

    int cost=0;
    sort(vec,vec+n);
    for(i=0; i<n-1; i++)
    {
        if(vec[i]>=vec[i+1])
        {
            cost = cost + vec[i] - vec[i+1] + 1;
            vec[i+1] = vec[i] +  1;
        }
    }
    cout<<cost;
}
