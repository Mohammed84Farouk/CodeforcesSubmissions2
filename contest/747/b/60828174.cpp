#include <bits/stdc++.h>
using namespace std;
int n,mx,sumDiff;
string s;
map<char,int>mp;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        if(s[i]!='?')
            mx=max(mx,mp[s[i]]);
    }
    sumDiff+=4*mx-mp['A']-mp['G']-mp['C']-mp['T'];
    mp['?']-=sumDiff;
    if(mp['?']<0||mp['?']%4!=0)
        return puts("===");
    else
    {
        mp['A']=mx-mp['A'],mp['C']=mx-mp['C'],mp['G']=mx-mp['G'],mp['T']=mx-mp['T'];
        if(mp['?']!=0)
            mp['A']+=(mp['?']/4),mp['C']+=(mp['?']/4),mp['G']+=(mp['?']/4),mp['T']+=(mp['?']/4);
       // cout<<mx<<" "<<mp['?']<<endl;
       // cout<<mp['A']<<" "<<mp['C']<<" "<<mp['G']<<" "<<mp['T']<<endl;
        for(int i=0;i<n;i++)
            if(s[i]=='?')
            {
                if(mp['A']!=0)
                {
                    cout<<'A';
                    mp['A']--;
                }
                else if(mp['T']!=0)
                {
                    cout<<'T';
                    mp['T']--;
                }
                else if(mp['C']!=0)
                {
                    cout<<'C';
                    mp['C']--;
                }
                else
                {
                    cout<<'G';
                    mp['G']--;
                }
                mp['?']--;
            }
            else cout<<s[i];
    }
    return 0;
}