#include<bits/stdc++.h>
using namespace std;
char A[4][4];
int main(int argc, char ** argv)
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>A[i][j];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if((A[i][j]=='.'&&A[i][j+1]=='.'&&A[i+1][j]=='.')||(A[i][j]=='.'&&A[i][j+1]=='.'&&A[i+1][j+1]=='.')||(A[i][j]=='#'&&A[i][j+1]=='#'&&A[i+1][j]=='#')||(A[i][j]=='#'&&A[i][j+1]=='#'&&A[i+1][j+1]=='#'))
              {cout<<"YES"<<endl;return 0;}
    for(int i=3;i>0;i--)
        for(int j=3;j>0;j--)
            if((A[i][j]=='.'&&A[i][j-1]=='.'&&A[i-1][j]=='.')||(A[i][j]=='.'&&A[i][j-1]=='.'&&A[i-1][j-1]=='.')||(A[i][j]=='#'&&A[i][j-1]=='#'&&A[i-1][j]=='#')||(A[i][j]=='#'&&A[i][j-1]=='#'&&A[i-1][j-1]=='#'))
                {cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
    return 0;
}
/*
                                                                                                                                                                        .#.#
                                                                                                                                                                        #.#.
                                                                                                                                                                        .#.#
                                                                                                                                                                        #.##
*/
