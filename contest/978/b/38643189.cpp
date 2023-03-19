#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,changes;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=2;i<n;i++)
        if(s[i-2]=='x'&&s[i-1]=='x'&&s[i]=='x')
        {
            s[i-2]='D';
            changes++;
        }
    cout<<changes<<endl;
    return 0;
}
