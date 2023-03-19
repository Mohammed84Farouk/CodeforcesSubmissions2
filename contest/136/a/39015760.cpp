#include<bits/stdc++.h>
using namespace std;
int n,A[107];
vector<int>v;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(int i=1;i<=n;i++)
        for(int j=0;j<n;j++)
            if(A[j]==i)
                {v.push_back(j+1);continue;}
    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
    return 0;
}