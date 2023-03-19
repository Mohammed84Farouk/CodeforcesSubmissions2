#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
typedef long long ll;
int n,m,mnx=107,mny=107,mxx,mxy;
char Freda[5]={'l','a','l','a','.'},Rainbow[5]={'m','i','a','o','.'};
string s;
int main(int argc, char ** argv)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    getline(cin,s);
    while(n--)
    {
        bool f=true,r=true;
        getline(cin,s);
        for(int i=0;i<5;i++)
            if(Rainbow[i]!=s[i])
                r=false;
        for(int i=s.size()-1,k=4;k>=0;k--,i--)
            if(Freda[k]!=s[i])
                f=false;
        if(!r&&f)
            cout<<"Freda's"<<'\n';
        else if(!f&&r)
            cout<<"Rainbow's"<<'\n';
        else
            cout<<"OMG>.< I don't know!"<<'\n';
    }
	return 0;
}
