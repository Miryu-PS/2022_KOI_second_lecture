#include<bits/stdc++.h>
using namespace std;
int arr[100005], odd[100005], even[100005];
// odd[i]/even[i] = i�� ������ Ȧ��/¦����° ī���� ��
int main()
{
	int N; cin>>N;
	for(int i=1; i<=N; i++)
	{
		cin>>arr[i];
		if(i%2 == 1)
		{
			odd[i] = odd[i-1] + arr[i];
			even[i] = even[i-1];
		}
		else
		{
			odd[i] = odd[i-1];
			even[i] = even[i-1] + arr[i];
		}
	}
	int ans = odd[N]; // ���� ���⸦ ���� �ʾ��� ���
	for(int i=1; i<=N; i+=2) // Ȧ����° ī�忡�� ������ �� ���
	{
		// 1,3,5,...., i-2, N, (i+1), (i+3), .... , (N-2)
		int tmp = odd[i-2] + arr[N] + (even[N-2] - even[i]);
		ans = max(ans, tmp);
	}
	for(int i=2; i<=N; i+=2) // ¦����° ī�忡�� ����
	{
		// 1,3,5,....,i-1, i, (i+2), ..... , (N-2)
		int tmp = odd[i-1] + (even[N-2] - even[i-1]);
		ans = max(ans, tmp);
	}
	cout<<ans;
}
