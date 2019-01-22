#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,sum=0,p=0;
    string s;
    while(getline(cin,s))
    {
        if(flag==1 && s=="___________")  break;

        if(s=="___________")
        {
            flag=1;
            continue;
        }
        for(int i=s.size()-2; i>=2; i--)
        {
            if(s[i]=='o')
            {
                sum=sum+1*pow(2,p);
                p++;
            }
            if(s[i]==' ')  p++;
        }
        printf("%c",sum);
        sum=0;p=0;
    }
}
