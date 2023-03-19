//نفعكم الله ووفقكم -ادع لي-
//اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
//اللهم اطمس على أعداء الدين والمدنسين -الصهاينة اللصوص-
//اللهم حرر فلسطين من كيد الصهاينة واجعل كيدهم في نحورهم
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define multi_ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template<class T>
bool ckmax(T &a, const T &b) { return b > a ? a = b, 1 : 0; }
template<class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }

typedef long long ll;
const int N = 2e5+9, M = 2e5 + 6, MOD = 1e9+7, OO = 0x3f3f3f3f, SQR = 320;
const ll LOO = 0x3f3f3f3f3f3f3f3f;
const long double eps = 1e-7;
int dx[8]={0, 0, 1, -1, 1, -1, -1, 1};
int dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
bool valid(int x, int y, int nnn, int mmm){return x>=0&&x<nnn&&y>=0&&y<mmm;}
int Log2(int x) {return 31-__builtin_clz(x);}
vector<vector<int>>pref(50, vector<int>(1e6+7, 0));
int unluckiness(string &s){
    int left=0, right=0;
    for(int i=0;i<6;i++){
        if(i<3) left+=(s[i]-'0');
        else right+=(s[i]-'0');
    }
    return abs(left-right);
}
vector<int>indexes(1e6+7, -1);
void preprocess() {
    int idx=1;
    for (char i1 = '0'; i1 <= '9'; i1++)
        for (char i2 = '0'; i2 <= '9'; i2++)
            for (char i3 = '0'; i3 <= '9'; i3++)
                for (char i4 = '0'; i4 <= '9'; i4++)
                    for (char i5 = '0'; i5 <= '9'; i5++)
                        for (char i6 = '0'; i6 <= '9'; i6++) {
                            string s;
                            s += i1;
                            s += i2;
                            s += i3;
                            s += i4;
                            s += i5;
                            s += i6;
                            int luck=unluckiness(s);
                            pref[luck][idx]++;
                            indexes[stoi(s)]=idx++;
                        }
    for(int i=0;i<50;i++){
        for(int j=1;j<1e6+7;j++){
            pref[i][j]+=pref[i][j-1];
        }
    }
    for(int i=0;i<1e6+7;i++){
        for(int j=1;j<50;j++){
            pref[j][i]+=pref[j-1][i];
        }
    }
}
void TT(){
    string s;
    cin>>s;
    if(unluckiness(s)==0) cout<<"0\n";
    else cout<<pref[unluckiness(s)-1][indexes[stoi(s)]-1]<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FAST
    preprocess();
    int testCases = 1;
    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
// You Got this! Bear those in mind:
//      * Read the problem Carefully
//      * BrainStorm & Think Twice, code once.
//      * Overcome Corner Cases.
//      * Have a quick revision of the code before submitting
