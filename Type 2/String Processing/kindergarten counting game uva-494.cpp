#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin,s))
    {
        int n=0;
        for(int i=0;i<s.size();)
        {
            if(isalpha(s[i]))
            {
                while(isalpha(s[i]))
                    i++;
                n++;
            }
            else
            {
                i++;
                continue;
            }

        }

        cout<<n<<endl;
    }
}
