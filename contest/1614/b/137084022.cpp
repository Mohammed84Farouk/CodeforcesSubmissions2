/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
using namespace std;
typedef long long ll;
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<ll,ll>>arr;
        ll x;
        for(int i=0;i<n&&cin>>x;i++)
            arr.push_back({i,x+1});
 
        sort(arr.rbegin(), arr.rend(), [](auto &left, auto &right) {
            return left.second < right.second;
        });
        deque<pair<ll,ll>>dq;
        ll nxt=1,prev=-1;
        dq.push_back({0,0});
        ll res=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                res+=nxt*(arr[i].second-1);
                dq.push_back({arr[i].first+1,nxt});
                nxt++;
            }
            else {
                res+=abs(prev)*(arr[i].second-1);
                dq.push_front({arr[i].first+1,prev});
                prev--;
            }
        }
        cout<<res*2<<endl;
        sort(dq.begin(),  dq.end());
        for(auto xx:dq)
            cout<<xx.second<<" ";
        cout<<endl;
    }
    return 0;
}
