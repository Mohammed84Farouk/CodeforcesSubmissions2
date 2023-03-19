#include <bits/stdc++.h>
using namespace std;
stack <char>stk;
char c[200009];
int n;
int main ()
{
    scanf("%s",c);
    for(int i=0;c[i]!=0;i++)
    {
        if(!stk.empty()&&stk.top()==c[i])
        {
            stk.pop();
            n++;
        }
        else stk.push(c[i]);
    }
    if(stk.size()==0)
        puts("YES");
    else puts("NO");
    return 0;
}
