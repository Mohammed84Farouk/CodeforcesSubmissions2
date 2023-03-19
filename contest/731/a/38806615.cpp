#include <bits/stdc++.h>
using namespace std;
int n,m;
string s;
int main(int argc, char ** argv)
{
    cin>>s;
    n=min(abs(26-(s[0]-'a')),s[0]-'a');
    for(int i=0;i<s.size()-1;i++)
    {
        m=abs(s[i]-s[i+1]);
        n+=min(abs(26-m),m);
    }
    cout<<n<<endl;
    return 0;
}
