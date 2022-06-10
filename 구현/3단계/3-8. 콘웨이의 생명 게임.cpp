#include<bits/stdc++.h>
using namespace std;
int dx[8]={1,0,-1,-1,-1,0,1,1};
int dy[8]={1,1,1,0,-1,-1,-1,0};
string now[105], nex[105];
int N, M;
int count(int x, int y)
{
	int cnt = 0;
	for(int i=0; i<8; i++)
	{
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(nx>=0 && nx<N && ny>=0 && ny<M && now[nx][ny] == 'O') cnt++;
	}
	return cnt;
}
int main()
{
	cin>>N>>M;
	for(int i=0; i<N; i++) cin>>now[i];
	for(int i=0; i<N; i++) for(int j=0; j<M; j++)
	{
		char tmp;
		int cnt = count(i,j);
		if(cnt < 2 || cnt > 3) tmp = 'X';
		else if(cnt == 2) tmp = now[i][j];
		else if(cnt == 3) tmp = 'O';
		nex[i] += tmp; // next[i] 문자열 뒤에 tmp 추가
	}
	for(int i=0; i<N; i++) cout<<nex[i]<<'\n';
}
