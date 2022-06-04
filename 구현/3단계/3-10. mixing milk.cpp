#include<bits/stdc++.h>
using namespace std;
int milk[3], bucket[3];
void pour(int from, int to)
{
	int totalmilk = milk[from] + milk[to];
	if(bucket[to] < totalmilk) // �� �������� to�� �絿�̺��� ũ�ٸ�(��ģ�ٸ�)
	{
		milk[to] = bucket[to]; // to�� ��������
		milk[from] = totalmilk - bucket[to]; // ���� ������ from�� ���´�.
	}
	else // ��ġ�� �ʴ´ٸ�
	{
		milk[to] = totalmilk; // to�� ��� ������ ����
		milk[from] = 0; // from�� ���
	}
}
int main()
{
	for(int i=0; i<3; i++) cin>>bucket[i]>>milk[i];
	int from = 0, to = 1;
	for(int i=0; i<100; i++) // from���� to�� �״´�.
	{
		pour(from, to);
		from = (from+1)%3; //0->1->2->0->1->2->...
		to = (to+1)%3; 	// 1->2->0->1->2->0->...
	}
	for(int i=0; i<3; i++) cout<<milk[i]<<'\n';
}
