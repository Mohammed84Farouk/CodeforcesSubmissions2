#include <bits/stdc++.h>
using namespace std;
int n,ans;
string s;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Tetrahedron")
            ans+=4;
        else if(s=="Cube")
            ans+=6;
        else if(s=="Octahedron")
            ans+=8;
        else if(s=="Dodecahedron")
            ans+=12;
        else if(s=="Icosahedron")
            ans+=20;
    }
    cout<<ans<<"\n";
    return 0;
}
