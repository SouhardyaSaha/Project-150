#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    while(getline(cin,s1) && getline(cin,s2))
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        int i=0,j=0;

        while(1)
        {
        if(j>=s1.size() || i>=s2.size()) break;
            if(s1[j]==s2[i])
            {
                cout<<s1[j];
                j++;
                i++;
            }
            else {
                    if (s1[j]>s2[i]) i++;
                    else j++;
            }


        }
        cout<<endl;
    }
    return 0;
}
