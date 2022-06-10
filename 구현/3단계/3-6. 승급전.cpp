#include<bits/stdc++.h>
using namespace std;
int before[4], after[4];
int main()
{
	for(int i=0; i<4; i++) cin>>before[i]>>after[i];
	
	// 누적합을 이용하여 배열의 의미를 바꿔준다
	// 현재는 before[i] = 시험 전에 i 등급인 사람수
	// 바꿔서 before[i] = 시험 전에 i 등급 이상인 사람수
	for(int i=2; i>=0; i--)
	{
		before[i] += before[i+1];
		after[i] += after[i+1];
	}
/*	
1 2       	4 6
1 1    -> 	3 4
1 1			2 3
1 2			1 2
*/
	for(int i=1; i<=3; i++)
	{
		cout<<after[i] - before[i]<<'\n';
	}
}
