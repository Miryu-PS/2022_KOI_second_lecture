#include<bits/stdc++.h>
using namespace std;
int k[1005][4];
int main()
{
    int n,m; cin>>n>>m;
    int rank=1, fc;
    for(int i=1;i<=n;i++)
    {
        cin>>k[i][0]>>k[i][1]>>k[i][2]>>k[i][3];
		if(k[i][0] == m) fc = i;
    }
    for(int i=1;i<=n;i++)
    {
        if(k[i][1]>k[fc][1]||k[i][1]==k[fc][1]&&k[i][2]>k[fc][2]||k[i][1]==k[fc][1]&&k[i][2]==k[fc][2]&&k[i][3]>k[fc][3])
        {
            rank++;
        }
    }
    cout<<rank;
}
        
