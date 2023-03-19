#include <bits/stdc++.h>
using namespace std;
int q,c[205];
string s;
int main()
{
    scanf("%d",&q);
    while(q--)
    {
        memset(c,0,sizeof(c));
        cin>>s;
        for(int i=0;i<s.size();i++)
            c[s[i]]++;
        int w=min(c['L'],c['R']), l=min(c['D'],c['U']);
        if(w&&l)
        {
            printf("%d\n",(l+w)*2);
            for(int i=0;i<w;i++)    printf("R");
            for(int i=0;i<l;i++)    printf("U");
            for(int i=0;i<w;i++)    printf("L");
            for(int i=0;i<l;i++)    printf("D");
            printf("\n");
        }
        else if (l)
            printf("2\nUD\n");
        else if (w)
            printf("2\nRL\n");
        else
            printf("0\n");
    }
    return 0;
}
