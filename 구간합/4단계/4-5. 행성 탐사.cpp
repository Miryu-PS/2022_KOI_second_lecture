#include <bits/stdc++.h>
using namespace std;
int Jsum[1030][1030], Osum[1030][1030], Isum[1030][1030];
int main()
{
    int M,N,K; cin>>M>>N>>K;
    for(int i=1;i<=M;i++) 
	{
		string s; cin>>s;
		for(int j=1;j<=N;j++) 
		{
			Jsum[i][j] = Jsum[i-1][j] + Jsum[i][j-1] - Jsum[i-1][j-1] + (s[j-1] == 'J');
			Osum[i][j] = Osum[i-1][j] + Osum[i][j-1] - Osum[i-1][j-1] + (s[j-1] == 'O');
			Isum[i][j] = Isum[i-1][j] + Isum[i][j-1] - Isum[i-1][j-1] + (s[j-1] == 'I');
		}
	}
    while(K--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        cout<< Jsum[x2][y2] - Jsum[x1-1][y2] - Jsum[x2][y1-1] + Jsum[x1-1][y1-1] << " "
			<< Osum[x2][y2] - Osum[x1-1][y2] - Osum[x2][y1-1] + Osum[x1-1][y1-1] << " "
			<< Isum[x2][y2] - Isum[x1-1][y2] - Isum[x2][y1-1] + Isum[x1-1][y1-1] << "\n";
    }
}
