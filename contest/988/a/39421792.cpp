#include <bits/stdc++.h>
using namespace std;
set<int>s;
set<int>::iterator it;
int n,a[107],k;
vector<int>v;
int main(int argc, char ** argv)
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(s.size()<k)
            s.insert(a[i]);
    }
    //cout<<s.size()<<endl;
    if(s.size()>=k)
    {
        printf("YES\n");
        for(it=s.begin();it!=s.end();it++)
            for(int i=0;i<n;i++)
                if(*it==a[i])
                    {v.push_back(i+1);break;}
    }
    else printf("NO\n");
    //cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        printf("%d ",v[i]);
    return 0;
}