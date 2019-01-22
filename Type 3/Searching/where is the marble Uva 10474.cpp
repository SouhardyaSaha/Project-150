#include<bits/stdc++.h>
using namespace std;

int partition_(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i=(low-1);

    for(int j=low; j<= high-1; j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int partitionindex=partition_(arr, low, high);

        quicksort(arr, low, partitionindex-1);
        quicksort(arr, partitionindex+1, high);
    }
}

int main()
{
    int n,q;
    int i=1;
    while(cin>>n>>q && n!=0 && q!=0)
    {
        int arr[n],qu[q];
        for(int k=0; k<n; k++)
            cin>>arr[k];

        for(int k=0; k<q; k++)
            cin>>qu[k];

        quicksort(arr, 0, n-1);

        printf("CASE# %d:\n",i++);
        for(int j=0; j<q; j++)
        {
            int l;
            for( l=0; l<n; l++)
            {
                if(qu[j]==arr[l])
                {
                    printf("%d found at %d\n",qu[j],l+1);
                    break;
                }
            }
            if(l==n) printf("%d not found\n",qu[j]);
        }
    }
}
