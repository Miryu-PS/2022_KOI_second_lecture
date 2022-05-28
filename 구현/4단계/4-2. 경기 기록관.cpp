#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N; cin>>N;
	int nowtime = 0, score1 = 0, score2 = 0;
	int time1 = 0, time2 = 0;
	for(int i=0; i<N; i++)
	{
		int x; string s; cin>>x>>s;
		int MIN=(s[0]-'0')*10+(s[1]-'0'); // 분
		int SEC=(s[3]-'0')*10+(s[4]-'0'); // 초
		int tm = MIN*60 + SEC;
		
		// x팀이 tm 초에 골을 넣었다.
		if(score1 > score2) time1 += (tm - nowtime);
		if(score1 < score2) time2 += (tm - nowtime);
		nowtime = tm;
		if(x==1) score1++; else score2++;
	}
	if(score1 > score2) time1 += (2880 - nowtime); // 48분은 2880초 
	if(score1 < score2) time2 += (2880 - nowtime);
	printf("%02d:%02d \n%02d:%02d", time1/60, time1%60, time2/60, time2%60);
}









