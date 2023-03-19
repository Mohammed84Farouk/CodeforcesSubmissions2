#include <bits/stdc++.h>
using namespace std;
map<char, int>mp;
char ans[3];
int main ()
{
    string s,s2,s3;
    cin>>s>>s2>>s3;
    if(s[1]=='>')
        {mp[s[0]]+=2,mp[s[2]]++;}
    else {mp[s[2]]+=2,mp[s[0]]++;}
    if(s2[1]=='>')
        {mp[s2[0]]+=2,mp[s2[2]]++;}
    else {mp[s2[2]]+=2,mp[s2[0]]++;}
    if(s3[1]=='>')
        {mp[s3[0]]+=2,mp[s3[2]]++;}
    else {mp[s3[2]]+=2,mp[s3[0]]++;}
    if(mp['A']==mp['B']||mp['A']==mp['C']||mp['C']==mp['B'])
        printf("Impossible\n");
    else
    {
        for(char c='A';c<='C';c++)
            if(mp[c]==2)
                ans[0]=c;
            else if(mp[c]==3)
                ans[1]=c;
            else if(mp[c]==4)
                ans[2]=c;
        for(int i=0;i<3;i++)
            printf("%c",ans[i]);
    }
    return 0;
}
