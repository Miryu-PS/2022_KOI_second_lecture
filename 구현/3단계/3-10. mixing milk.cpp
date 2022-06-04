#include<bits/stdc++.h>
using namespace std;
int milk[3], bucket[3];
void pour(int from, int to)
{
	int totalmilk = milk[from] + milk[to];
	if(bucket[to] < totalmilk) // 총 우유양이 to의 양동이보다 크다면(넘친다면)
	{
		milk[to] = bucket[to]; // to는 가득차고
		milk[from] = totalmilk - bucket[to]; // 남는 우유가 from에 남는다.
	}
	else // 넘치지 않는다면
	{
		milk[to] = totalmilk; // to에 모든 우유가 들어가고
		milk[from] = 0; // from은 빈다
	}
}
int main()
{
	for(int i=0; i<3; i++) cin>>bucket[i]>>milk[i];
	int from = 0, to = 1;
	for(int i=0; i<100; i++) // from에서 to로 붓는다.
	{
		pour(from, to);
		from = (from+1)%3; //0->1->2->0->1->2->...
		to = (to+1)%3; 	// 1->2->0->1->2->0->...
	}
	for(int i=0; i<3; i++) cout<<milk[i]<<'\n';
}
