#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,arr[5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int x,y,z;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        arr[0]+=x;
        arr[1]+=y;
        arr[2]+=z;
    }
    (arr[0]==0&&arr[1]==0&&arr[2]==0)? puts("YES"):puts("NO");
    return 0;
}
