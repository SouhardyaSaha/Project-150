#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> vec,test;
    list<int>::iterator it;
    while(getline(cin,s))
    {
        if(isdigit(s[0]))
        {
            reverse(s.begin(),s.end());
            int i=0;
            while(i<s.size())
            {
                if(s[i]=='1')
                {
                    int num=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
                    printf("%c",num);
                    i=i+3;
                }
                else
                {
                    int num= (s[i]-'0')*10+(s[i+1]-'0');
                    printf("%c",num);
                    i=i+2;
                }
            }
            cout<<endl;
        }
        else
        {
            int temp=0,temp1=0,temp3=0;
            for(int i=0; i<s.size(); i++)
                {
                    int num= (int) s[i];
                    vec.push_back(num);
                }
             for(int j=vec.size()-1; j>=0; j--)
             {
                 while(vec[j]!=0)
                 {
                     temp=vec[j]%10;
                     vec[j]=vec[j]/10;
                     test.push_back(temp);
                 }
             }
            for(int i=0;i<test.size();i++)
                cout<<test[i];
            cout<<endl;
            vec.clear();
            test.clear();
        }
    }
}
