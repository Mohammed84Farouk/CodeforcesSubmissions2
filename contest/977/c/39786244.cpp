#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,a,_3dd,ans;
vector<int>v;
int main(int argc, char ** argv)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(n==1&&v[0]==1)
        {cout<<-1<<"\n";return 0;}
    else
    {
        if(!k&&v[0]!=1)
            {cout<<1<<"\n";return 0;}
        if(k)
        {
            ans=v[k-1];
            _3dd+=count(v.begin(),v.end(),v[k-1]);
            //cout<<"_3dd= "<<_3dd<<" k= "<<k<<endl;
            //cout<<v[k-1]<<endl;
            if(_3dd>k)
                {cout<<-1<<"\n";return 0;}
            else
                for(int i=0;v[i]!=v[k-1]&&ans;i++)
                    _3dd++;
            if(_3dd>k)
                {cout<<-1<<"\n";return 0;}
            else
                cout<<ans<<"\n";
        }
        else
        {
            ans=v[0];
            _3dd+=count(v.begin(),v.end(),v[0]);
            //cout<<"_3dd= "<<_3dd<<" k= "<<k<<endl;
            //cout<<v[0]<<endl;
            if(_3dd>k)
                {cout<<-1<<"\n";return 0;}
            else
                for(int i=0;v[i]!=v[0]&&ans;i++)
                    _3dd++;
            if(_3dd>k)
                {cout<<-1<<"\n";return 0;}
            else
                cout<<ans<<"\n";
        }
    }
    return 0;
}
