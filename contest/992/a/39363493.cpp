#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,A[100005];
set<int>s;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            if(A[i]!=0)
                s.insert(A[i]);
        }
        printf("%d",s.size());
    return 0;
}
