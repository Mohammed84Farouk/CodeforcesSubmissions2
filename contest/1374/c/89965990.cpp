#include <bits/stdc++.h>
using namespace std;
int t,n;
int main ()
{
    scanf("%d",&t);
    while (t--)
    {
        stack<char>stk;
        char c[59]={};
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf(" %c",&c[i]);
            if(c[i]=='(')
                stk.push(c[i]);
            else if(c[i]==')'&&!stk.empty())
                stk.pop();
        }
        printf("%d\n",stk.size());
    }
    return 0;
}
