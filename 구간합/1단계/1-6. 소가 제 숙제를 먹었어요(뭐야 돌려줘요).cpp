#include<bits/stdc++.h>
using namespace std;
int arr[100005], sum[100005], mini[100005];
//sum[i] = 1~i�� ���� ��
//mini[i] = i~N�� ���� �ּҰ�
int main()
{
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>arr[i];
		sum[i] = sum[i-1] + arr[i];
	}
	mini[n] = arr[n];
	for(int i=n-1; i>0; i--)
	{
		mini[i] = min(mini[i+1], arr[i]);
	}
	int ans = 0;
	for(int k=1; k<=n-2; k++)
	{
		//�Ұ� k���� �Ծ��ٸ� k+1 ~ n������ ������ ���Ѵ�.
		int scoresum = sum[n] - sum[k] - mini[k+1];
		int aver = scoresum / (n-k-1);
		ans = max(ans, aver);
	}
	cout<<ans;
}
