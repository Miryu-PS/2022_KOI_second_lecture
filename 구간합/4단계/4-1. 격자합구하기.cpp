#include <bits/stdc++.h>
using namespace std;
int arr[1030][1030], sum[1030][1030];
int main()
{
    int N,M; cin>>N>>M;
    for(int i=1;i<=N;i++) for(int j=1;j<=N;j++) 
	{
		cin>>arr[i][j];
		sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]+arr[i][j];
	}
    while(M--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        cout<<sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1];
        cout<<"\n";
    }
}
