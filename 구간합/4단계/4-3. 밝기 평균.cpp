#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int arr[1030][1030],sum[1030][1030];
// sum[i][j] = arr[1~i][1~j]ÀÇ ÇÕ
int main()
{
    int R,C,Q; cin>>R>>C>>Q;
    for(int i=1;i<=R;i++) for(int j=1;j<=C;j++) 
	{
		cin>>arr[i][j];
		sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + arr[i][j];
	}
    while(Q--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        cout<< sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1] <<"\n";
    }
}
