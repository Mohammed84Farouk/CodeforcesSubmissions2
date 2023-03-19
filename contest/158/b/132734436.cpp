/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int group[5];
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n,arr[N],ans=0;cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        group[arr[i]]++;
    }
    int mn=min(group[1],group[3]);
    ans+=group[4]+group[2]/2+mn;
    group[1]-=mn,group[3]-=mn;
    group[2]-=(group[2]/2)*2;
    //check if there are still ppl in 1, 2, and 3 groups
//    cout<<ans<<endl;
    if(group[3]&&group[2]){
        ans+=(group[3]+group[2]);
        group[3]=group[2]=0;
    }
    if(group[2]&&group[1]) {
        ans += ceil(((double) 2.00 * group[2] + (double) 1 * group[1]) / 4.00);
        group[1]=group[2]=0;
    }
    if(group[1])
        ans+=ceil((double)1*group[1]/4.00);
    if(group[3])
        ans+=group[3];
    if(group[2])
        ans+=ceil((double)2*group[2]/4.00);
    cout<<ans;
    return 0;
}
