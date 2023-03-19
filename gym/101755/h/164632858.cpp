#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <memory.h>
#include <unordered_set>
#include <numeric>
#include <sstream>
#include <map>
#include <set>
#include <random>
#include <iomanip>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int n,m,d;

pair<int,int> st,fi;
vector<string> grid;
int valid(int i,int j)
{
    return !(i<0 || j<0 || i>=n || j>= m);
}
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int main() {

    cin>>n>>m>>d;
    grid = vector<string>(n);
    vector<pair<int,int>> mons;
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='M')
            {
                mons.emplace_back(i,j);
            }
            else if(grid[i][j]=='S')
            {
                st = {i,j};
            }
            else if(grid[i][j]=='F')
            {
                fi = {i,j};
            }
        }
    }
    queue<pair<int,int>> q;
    for(auto p : mons)
    {
        q.emplace(p);
    }
    int times = d;
    while(!q.empty())
    {
        int x = q.size();
        if(!times) break;
        times--;

        for(int i=0;i<x;i++)
        {
            auto p = q.front();
            q.pop();

            for(int v = 0;v<4;v++)
            {
                int X,Y;
                X = p.first + dx[v];
                Y = p.second + dy[v];

                if(valid(X,Y) && grid[X][Y] != 'M')
                {
                    grid[X][Y] = 'M';
                    q.push({X,Y});
                }
            }
        }
    }


    q = queue<pair<int,int>>();
    if(grid[st.first][st.second] == 'M')
    {
        cout<<-1;
        return 0;
    }
    int c = 0;
    q.push(st);
    while(!q.empty())
    {
        int x = q.size();

        for(int i=0;i<x;i++)
        {
            auto p = q.front();
            q.pop();
            if(p == fi)
            {
                cout<<c;
                return 0;
            }
            for(int v = 0;v<4;v++)
            {
                int X,Y;
                X = p.first + dx[v];
                Y = p.second + dy[v];

                if(valid(X,Y) && grid[X][Y] != 'M')
                {
                    grid[X][Y] = 'M';
                    q.push({X,Y});
                }
            }
        }

        c++;
    }

    cout<<-1;
}