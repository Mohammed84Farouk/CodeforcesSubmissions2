#include <bits/stdc++.h>
using namespace std;
int n,k,lastK;
map<char,int>mp1,mp2;
string s,t;
vector<int>v;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s>>t;
    for(int i=0;i<n;i++)
    {
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    for(char c='a';c<='z';c++)
        if(mp1[c]!=mp2[c])
        {
            puts("-1");
            return 0;
        }
    hey:
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i]&&s[i+1]==t[i])
        {
            k++;
            v.push_back(i+1);
            //cout<<"i= "<<i+1<<endl;
            swap(s[i],s[i+1]);
            goto hey;
        }
        else if(s[i]!=t[i]&&s[i+1]!=t[i])
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]==t[i])
                {
                    k++;
                    v.push_back(j);
                    //cout<<"j= "<<j<<endl;
                    swap(s[j],s[j-1]);
                    //cout<<s<<endl;
                    goto hey;
                }

            }
    }
    printf("%d\n",k);
    for(int i=0;i<k;i++)
        printf("%d ",v[i]);
    return 0;
}
