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
const int N=15e1+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int n,k;
string s;

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n>>k>>s;
    int mxLen=0,ans=0,K=k,lst=0;
    deque<int>cur;
    for(int i=0;i<n;i++){
        if(s[i]=='a')
            mxLen++;
        else if(K){
            mxLen++,K--;
            cur.push_back(i);
        }
        else if(!cur.empty()){
            int j;
            for(j=lst;j!=cur.front();j++,mxLen--);
            if(mxLen<0) mxLen=0;
            lst=j+1;
            cur.pop_front();
            if(k) cur.push_back(i);
        }
        else mxLen=0;
//        cout<<mxLen<<" ";
        ans=max(ans,mxLen);
    }
    lst=0,K=k,mxLen=0;
    cur.clear();
    for(int i=0;i<n;i++){
        if(s[i]=='b')
            mxLen++;
        else if(K){
            mxLen++,K--;
            cur.push_back(i);
        }
        else if(!cur.empty()){
            int j;
//            cout<<"HI     "<<cur.front()<<"       "<<mxLen<<"       ";
            for(j=lst;j!=cur.front();j++,mxLen--);
            if(mxLen<0) mxLen=0;
            lst=j+1;
            cur.pop_front();
            if(k) cur.push_back(i);
        }
        else mxLen=0;
//        cout<<K;
        ans=max(ans,mxLen);
    }
    cout<<ans<<endl;
    return 0;
}
