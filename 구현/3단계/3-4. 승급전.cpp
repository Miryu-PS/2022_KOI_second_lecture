#include<bits/stdc++.h>
using namespace std;
int before[4], after[4];
int main()
{
	for(int i=0; i<4; i++) cin>>before[i]>>after[i];
	
	// �������� �̿��Ͽ� �迭�� �ǹ̸� �ٲ��ش�
	// ����� before[i] = ���� ���� i ����� �����
	// �ٲ㼭 before[i] = ���� ���� i ��� �̻��� �����
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
