#include <bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
#define clr(x,val) memset(x,val,sizeof(a));//fill array with 0s. clr(array,0);
typedef long long ll;
int n,t;
string s;
int main(int argc, char ** argv)
{
    cin>>n>>t>>s;
    for(int i=0;i<t;i++)
        for(int j=0;j<s.size();j++)
            if(s[j]=='B'&&s[j+1]=='G')
                {swap(s[j+1],s[j]);j++;}
    cout<<s;
    return 0;
}