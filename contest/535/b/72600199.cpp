#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin>>s;
    int ans=0,mns=0;
    for(int i=0;i<s.size();i++)
    {
        ans+=pow(2,i+1);
        if(s[i]=='4')
            mns+=pow(2,s.size()-i-1);
    }
    //cout<<ans<<" "<<mns<<endl;
    printf("%d",ans-mns);
    return 0;
}
