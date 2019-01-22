#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);
    int i=0,j=1,k=2,flag=0;
    while(k<n)
    {
        if(arr[i]+arr[j]>arr[k])
        {
            flag=1;
            break;
        }
        i++;
        j++;
        k++;
    }
    if (flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
