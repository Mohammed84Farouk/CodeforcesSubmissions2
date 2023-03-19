#include <bits/stdc++.h>
using namespace std;
int t,n,k;
char c[100006];
string s;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        bool flag=false;
        scanf("%d%d",&n,&k);
        cin>>s;
        string S[100005],T[100005];
        for(int i=0;i<n;i++)
            /*scanf("%c",&c[i]);*/c[i]=s[i];
        sort(c,c+n);
        for(int i=0,K=0;i<n;i++,K++)
        {
            if(K==k&&!flag)
            {
                K=0;
                flag=true;
            }
            else if(K==k)
                K=0;
            if(flag)
                S[0]+=c[i];
            else
                S[K]+=c[i];
        }
        for(int i=0,K=0;i<n;i++,K++)
        {
            if(K==k)
                K=0;
            T[K]+=c[i];
        }
        sort(S,S+k);sort(T,T+k);
        cout<<min(T[k-1],S[k-1])<<'\n';
        //cout<<S[0]<<endl;
        //cout<<S[0]<<" "<<S[1]<<" "<<S[2]<<" "<<S[3]<<endl;
    }
    return 0;
}
