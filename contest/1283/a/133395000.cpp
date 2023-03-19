//اللهم اني لا اسألك رد القضاء ولكن اسألك اللطف فيييييييييه
/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
    int t;
    cin>>t;
    while(t--){
        int m,h;
        cin>>h>>m;
        cout<<(23-h)*60+60-m<<'\n';
    }
    return 0;
}



/*
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n;
vector<int>arr;
vector<vector<int>>bit;
void update(int indx, int bi, int val){
    for(int i=indx;i<=n;i+=(i&-i))
        bit[i][bi]+=val;
}
void build(){
    bit=vector<vector<int>>(n+1,vector<int>(M,0));
    for(int i=1;i<=n;i++)
        for(int j=0;j<M;j++)
            if(arr[i]&(1<<j))
                update(i,j,1);
}
vector<int> prefix1s(int indx){
    vector<int>res(M,0);
    for(int i=indx;i>=1;i-=(i&-i))
        for(int j=0;j<M;j++)
            res[j]+=bit[i][j];
    return res;
}
vector<int> range1s(int l, int r){
    vector<int>a=prefix1s(r);
    vector<int>b=prefix1s(l-1);
    for(int j=0;j<M;j++)
        a[j]-=b[j];
    return a;
}

int main() {
    FAST;
    int q;cin>>n>>q;
    arr=vector<int>(n+1);
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    build();
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int nVal, idx;
            cin>>nVal>>idx;
            for(int j=0;j<M;j++)
                if(arr[idx]&(1<<j))
                    update(idx,j,-1);
            arr[idx]=nVal;
            for(int j=0;j<M;j++)
                if(arr[idx]&(1<<j))
                    update(idx,j,1);
        }
        else{
            int l,r;
            string s;
            cin>>s>>l>>r;
            vector<int>lr= range1s(l,r);
            ll ans=0;
            for(int j=0;j<M;j++){
                ll ones=lr[j];
                ll zeros=r-l+1-ones;
                ll pairs;
                if(s=="OR") {
                    ll tot = r - l + 1;
                    pairs = (tot * (tot - 1) / 2) - (zeros * (zeros - 1) / 2);
                }
                else if(s=="AND")
                    pairs=ones*(ones-1)/2;
                else
                    pairs=ones*zeros;
                ans+=(1LL<<j)*pairs;
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}


 */