#include <bits/stdc++.h>
#define in first
#define out second
#define X first.first
#define Y first.second
typedef long long ll;
using namespace std;
const int N = 3e5 + 5;
const int mod = 1e9 + 7;
vector<pair<int,int>>adj;
//void visualize()
//{
//    //system("CLS");
//    //cout<<node<<": ";
//    for (int neighbor=0;neighbor<adj.size();neighbor++)
//        cout << adj[neighbor].in << " "<< adj[neighbor].out << " ";
//    cout << endl;
//}
int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n,cnt=0;
        char c;
        string s;
        cin>>n>>c>>s;
        bool flag=false;
        for(int i=0;i<n;i++) cnt+=(s[i]!=c);
        if(!cnt){
            cout<<0<<'\n';
            continue;
        }
        for(int i=n-1;i>=n/2;i--){
            if(s[i]==c){
                flag=true;
                cout<<1<<'\n'<<i+1<<'\n';
                break;
            }
        }
        if(!flag)
            cout<<2<<'\n'<<n-1<<" "<<n<<'\n';
    }
    return 0;
}