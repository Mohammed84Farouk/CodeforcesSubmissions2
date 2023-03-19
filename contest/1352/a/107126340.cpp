#include<bits/stdc++.h>
using namespace std;
int t;
string s;
vector<string>v;
vector<int>vc;
int main()
{

    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            string e="";
            if(s[i]!='0')
            {
                e+=s[i];
                for(int j=0;j<s.size()-i-1;j++)
                    e+='0';
                v.push_back(e);
                ans++;
            }
        }
        vc.push_back(ans);
    }
    int add=0;
    for(int i=0;i<vc.size();i++)
    {
        printf("%d\n",vc[i]);
        for(int j=0;j<vc[i];j++)
            cout<<v[j+add]<<" ";
        printf("\n");
        add+=vc[i];
    }
    return 0;
}
