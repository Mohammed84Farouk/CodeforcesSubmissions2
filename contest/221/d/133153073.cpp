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
const int N=1e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
struct query{
    int l, r, bi, qi;
    query(){}
    query(int _l, int _r, int _qi, int sqr){
        l=_l, r=_r, qi=_qi, bi=l/sqr;
    }
    bool operator <(const query &q) const{
        if(bi!=q.bi) return bi<q.bi;
        return r<q.r;
    }
};
int n,m,res,arr[N],freq[N];
vector<int>ans;
vector<query>queries;
void add(int i){
    if(arr[i]>100000)
        return;
    if(freq[arr[i]]==arr[i])
        res--;
    freq[arr[i]]++;
    if(freq[arr[i]]==arr[i])
        res++;
}
void remove(int i){
    if(arr[i]>100000)
        return;
    if(freq[arr[i]]==arr[i])
        res--;
    freq[arr[i]]--;
    if(freq[arr[i]]==arr[i])
        res++;
}
void process(){
    sort(queries.begin(), queries.end());
    int curL=1, curR=0;
    for(query q : queries){
        while(curL<q.l) remove(curL++);
        while(curL>q.l) add(--curL);
        while(curR<q.r) add(++curR);
        while(curR>q.r) remove(curR--);
        ans[q.qi]=res;
    }
}
int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=0;
    queries.resize(m);
    ans.resize(m);
    while(m--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        queries[i]=query(l,r,i,sqr);
        i++;
    }
    process();
    for(int x:ans) cout<<x<<'\n';
    return 0;
}