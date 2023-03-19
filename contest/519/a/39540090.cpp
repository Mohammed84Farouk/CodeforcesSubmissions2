#include <bits/stdc++.h>
using namespace std;
string s;
int ANS,ans;
int main(int argc, char ** argv)
{
    for(int i=0;i<8;i++)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='Q')
                ANS+=9;
            else if(s[i]=='R')
                ANS+=5;
            else if(s[i]=='B')
                ANS+=3;
            else if(s[i]=='N')
                ANS+=3;
            else if(s[i]=='P')
                ANS+=1;
            else if(s[i]=='q')
                ans+=9;
             else if(s[i]=='r')
                ans+=5;
            else if(s[i]=='b')
                ans+=3;
            else if(s[i]=='n')
                ans+=3;
            else if(s[i]=='p')
                ans+=1;
        }
    }
    if(ans>ANS)
        printf("Black");
    else if(ans<ANS)
        printf("White");
    else
    printf("Draw");
    return 0;
}