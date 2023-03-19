#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,t,a,undisappointed;
vector<int>v,prfS;
int main(int argc, char ** argv)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0,j=1;i<n;i++)
    {   if(i==0)
        {
            prfS.push_back(0);
            if(prfS[j-1]<=v[i])
                {undisappointed++;j++;}
        }
        else if(i>=j)
        {
            prfS.push_back(prfS[j-1]);
            if(prfS[j]<=v[i])
                {undisappointed++;j=i+1;j++;}
        }
        else
        {
            prfS.push_back(v[i-1]+prfS[j-2]);
            if(prfS[j-1]<=v[i])
                {undisappointed++;j++;}
        }
        //cout<<"prfS[i]= "<<prfS[i]<<" v[i]= "<<v[i]<<endl;
    }
    cout<<undisappointed<<'\n';
    return 0;
}
