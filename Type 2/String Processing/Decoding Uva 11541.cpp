#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
   for(int k=1;k<=n;k++)
    {
        vector<char> vec;
        char ch;
        string s1;
        cin>>s1;
        int i,j;
        int temp=0;

        for( i=0; i<s1.size(); i++)
        {
            if(isdigit(s1[i]))
            {
                temp= temp+(int)(s1[i]-'0');
                if(isdigit(s1[i+1]))
                {
                    temp=temp*10;
                    continue;
                }
            }
            if(isalpha(s1[i])) ch=s1[i];

            for(int j=0;j<temp;j++)
                vec.push_back(ch);
            temp=0;
        }
        printf("Case %d: ",k);
        for(int j=0;j<vec.size();j++)
            cout<<vec[j];

        cout<<endl;

    }
}
