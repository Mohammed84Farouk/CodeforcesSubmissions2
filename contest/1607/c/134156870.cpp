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
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
    int t;
    cin>>t;
    while(t--){
        int n,arr[N];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int mx=arr[0],rest=-arr[0];
        for(int i=1;i<n;i++){
//            cout<<arr[i]<<" ";
            arr[i]=arr[i]+rest;
            mx=max(mx,arr[i]);
            rest+=-arr[i];
//            cout<<arr[i]<<"      ";
        }
//        cout<<endl;
        cout<<mx<<'\n';
    }
    return 0;
}







/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم

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
        int n,m,mxStrikeUD=0,mxStrikeLR=0,L=0,R=0,U=0,D=0;
        cin>>n>>m;
        string s;
        char typeLR,typeUD;
        cin>>s;
        for(char c:s){
            if(c=='L') L++;
            else if(c=='R') R++;
            else if(c=='U') U++;
            else if(c=='D') D++;
            mxStrikeLR=max(mxStrikeLR,abs(L-R));
            mxStrikeUD=max(mxStrikeUD,abs(U-D));
        }
        if(L>R) typeLR='L';
        else typeLR='R';
        if(U>D) typeUD='U';
        else typeUD='D';
        cout<<mxStrikeUD<<" "<<typeUD<<" "<<mxStrikeLR<<" "<<typeLR<<endl;
        if(typeUD=='D') cout<<n-mxStrikeUD<<' ';
        else cout<<1+mxStrikeUD<<' ';

        if(typeLR=='L') cout<<1+mxStrikeLR<<'\n';
        else cout<<m-mxStrikeLR<<'\n';

    }
    return 0;
}

*/