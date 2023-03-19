#include <bits/stdc++.h>
using namespace std;
string s,t;
int l,r,remain;
bool flag=false;
int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	cout.setf(ios::fixed);
	cin>>s;
	for(int i=0;i<s.size();i++)
    {
        if(s[i]=='|')
            flag=true;
        else if(!flag)
            l++;
        else r++;
    }
    //cout<<l<<" "<<r<<endl;
    cin>>t;
    //cout<<t.size()<<" "<<abs(l-r)<<" "<<(t.size()-abs(l-r))%2<<endl;
    if(t.size()>=abs(l-r)&&(t.size()-abs(l-r))%2==0)
    {
        remain=t.size()-abs(l-r);
        //cout<<"remainder="<<remain<<endl;
        if(l>=r){
            for(int i=0;i<remain/2;i++)
                cout<<t[i];
            cout<<s;
            for(int i=remain/2;i<t.size();i++)
                cout<<t[i];
        }
        if(l<r){
            for(int i=0;i<abs(l-r)+remain/2;i++)
                cout<<t[i];
            cout<<s;
            for(int i=abs(l-r)+remain/2;i<t.size();i++)
                cout<<t[i];
        }
    }
    else cout<<"Impossible";
    return 0;
}
