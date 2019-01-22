#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,w;
    scanf("%d",&p);
    int worm[p];
    int temp=0;
    vector<int> bound;
    for(int i=0; i<p; i++)
    {
        scanf("%d",&worm[i]);
        temp=temp+worm[i];
        bound.push_back(temp);        
    }        
    scanf("%d",&n);
    int in[n];
    for(int i=0; i<n; i++)
        scanf("%d",&in[i]);
    for(int i=0; i<n; i++)
        cout << lower_bound(bound.begin(), bound.end(), in[i]) - bound.begin()+1<<endl;
}
