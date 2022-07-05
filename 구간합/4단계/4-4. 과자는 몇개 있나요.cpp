#include <bits/stdc++.h>
using namespace std;
int sum[1030][1030];
int main()
{
    int N,Q; cin>>N>>Q;
    for(int i=1;i<=N;i++) 
	{
		string s; cin>>s;
		for(int j=1;j<=N;j++) 
		{
			sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + (s[j-1] == '*');
		}
	}
    while(Q--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        cout<< sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1] <<"\n";
    }
}
