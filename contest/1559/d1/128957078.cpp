/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)1e3+7, mod=1e9+7;
vector<int>parent1(N),parent2(N),sz1(N,1),sz2(N,1);
int n,m1,m2;
void visualize()
{
    system("CLS");
    //for(int node=1;node<=14;node++) {
    //  cout<<node<<": ";
    for (int i=0;i<8;i++) cout << parent1[i] << " ";
    cout << endl;
    //}
}
void visualize2()
{
    system("CLS");
    //for(int node=1;node<=14;node++) {
    //  cout<<node<<": ";
    for (int i=0;i<8;i++) cout << parent2[i] << " ";
    cout << endl;
    //}
}
int findParent1(int u)
{
    if(u== parent1[u]) return u;
    return parent1[u]= findParent1(parent1[u]);
}

int findParent2(int u)
{
    if(u== parent2[u]) return u;
    return parent2[u]= findParent2(parent2[u]);
}
bool join1(int a,int b)
{
    a= findParent1(a);
    b= findParent1(b);
    if(a==b)
        return false;
    parent1[a]=b;
    return true;
}
bool join2(int a,int b)
{
    a= findParent2(a);
    b= findParent2(b);
    if(a==b)
        return false;
    parent2[a]=b;
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m1>>m2;
    iota(parent1.begin(),parent1.end(),0);
    iota(parent2.begin(),parent2.end(),0);
    while(m1--)
    {
        int u,v;cin>>u>>v;
        if(join1(--u,--v))
            continue;
    }
    while(m2--)
    {
        int u,v;cin>>u>>v;
        if(join2(--u,--v))
                continue;
    }
//    visualize();
//    visualize2();
//    cout<<"you're in the loop now:"<<endl;
    vector<pair<int,int>>ans;
    /*for(int i=n-1;i>=0;i--)
        for(int j=n-1;j>=0;j--) {
    */
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++) {
            if (findParent1(i) != findParent1(j)&& findParent2(i) != findParent2(j)) {
                //cout<<i<<"      "<<j<<endl;
                join2(i,j);
                join1(i,j);
                //visualize();
                //visualize2();
                ans.push_back({i + 1, j + 1});
            }
        }
    cout<<ans.size()<<endl;
    for(auto x:ans)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}
