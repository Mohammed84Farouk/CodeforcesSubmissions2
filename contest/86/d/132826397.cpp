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
const int N=1e6+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
struct query{
    int l, r, bi, qi;
    query(){}
    query(int ll, int rr, int qqi, int sqr){
        l=ll, r=rr, qi=qqi, bi=l/sqr;
    }
    bool operator <(const query &q) const{
        if(bi!=q.bi) return bi<q.bi;
        return r<q.r;
    }
};
int n, sqr;
ll sum;
vector<int>arr,cnt(N);
vector<ll>ans;
vector<query>queries;
void add(int i){
    sum+=arr[i]*(2LL*cnt[arr[i]]+1);
    cnt[arr[i]]++;

}
void remove(int i){
    cnt[arr[i]]--;
    sum-=arr[i]*(2LL*cnt[arr[i]]+1);

}
//ll calc(){
//    for(auto x:s){
//        if(!vis[x]) {
//            cout << "x= " << x << " count of x is: " << cnt[x] << endl;
//            sum += cnt[x] * cnt[x] * x;
//            vis[x]=true;
//        }
//    }
//    cout<<endl;
//}
void process(){
    sort(queries.begin(), queries.end());
    int prevL=1, prevR=0;
    for(auto q: queries){
//        vis=vector<bool>(N,false);
//        sum=0;
        while(prevL>q.l) add(--prevL);
        while(prevL<q.l) remove(prevL++);
        while(prevR<q.r) add(++prevR);
        while(prevR>q.r) remove(prevR--);
//        calc();
//        cout<<prevL<<" "<<prevR<<endl;
        ans[q.qi]=sum;
    }
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, qq, i=0;
    cin >> n >> qq;
    int sqr = ceil(sqrt((double) n));
    arr=vector<int>(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    queries=vector<query>(qq);
    ans=vector<ll>(qq);
    while(qq--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        queries[i]=query(l, r, i, sqr);
        i++;
    }
    process();
    for(auto x:ans)
        cout<<x<<'\n';
    return 0;
}