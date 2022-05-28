#include<bits/stdc++.h>
using namespace std;
string s[55];
int R,S;
int dx[8]={1,0,-1,-1,-1, 0, 1,1};
int dy[8]={1,1, 1, 0,-1,-1,-1,0};
bool OOB(int x, int y) // (x,y)가 범위밖이라면 true
{
	return x<0 || y<0 || x>=R || y>=S;
}
int how_many(int x, int y)
{
	int cnt = 0;
	for(int i=0; i<8; i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if(OOB(nx, ny)) continue;
		if(s[nx][ny]=='o') cnt++;
	}
	return cnt;
}
int main()
{
	cin>>R>>S;
	for(int i=0; i<R; i++) cin>>s[i];
	int totalhg = 0; // 총 악수횟수(의 2배)
	int maxhg = 0; // 1명이 할 수 있는 최대 악수
	for(int i=0; i<R; i++) for(int j=0; j<S; j++)
	{
		if(s[i][j] == 'o') totalhg += how_many(i,j);
		else maxhg = max(maxhg, how_many(i,j));
	}
	cout<<totalhg/2 + maxhg;
}
