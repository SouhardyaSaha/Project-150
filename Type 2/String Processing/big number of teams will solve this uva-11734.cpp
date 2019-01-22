#include<bits/stdc++.h>
using namespace std;
int compare(vector<char> vec, string str)
{
    if(vec.size()!=str.size()) return 0;
    for(int j=0; j< str.size(); j++)
    {
        if(str[j]!=vec[j]) return 0;
    }
    return 1;
}
int main()
{
    string s1,s2;
    int n;
    cin>>n;
    getchar();
    vector<char> vec,vec2;
    for(int i=1; i<=n; i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        int j=0,k=0;
        if(s1==s2) printf("Case %d: Yes\n",i);
        else
        {

            while(j<s1.size())
            {
                if(isalpha(s1[j]))  vec.push_back(s1[j]);
                j++;
            }
            if(compare(vec,s2)) printf("Case %d: Output Format Error\n",i);
            else printf("Case %d: Wrong Answer\n",i);
            vec.clear();

        }
    }
}
