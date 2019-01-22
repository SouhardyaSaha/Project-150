#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    int m=0;
    vector<char> q,best;
    while(ch=getchar())
    {
        if (isalpha(ch) || ch=='-')
        {
            q.push_back(ch);
            continue;
        }
        else if(q.empty()) continue;
        else  if(q[0]=='E' && q[1]=='-' && q[2]=='N' && q[3]=='-' && q[4]=='D')  break;
        else
        {
            if(m<q.size())
            {
                best.clear();
                m=q.size();
                for(int i=0;i<m;i++)
                    best.push_back(tolower(q[i]));
            }
            q.clear();
        }
    }
    for(int i=0;i<m;i++)
        cout<<best[i];

    cout<<endl;
}
