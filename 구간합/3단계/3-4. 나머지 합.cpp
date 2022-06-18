#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll Map[1005];
ll arr[1000010], sum[1000010];
ll N, M, ans;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> N >> M;
    Map[0]++;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
        Map[sum[i] % M]++;
    }
	for(int i=0; i<M; i++)
	{
		ans+=(ll)Map[i]*(Map[i]-1)/2;
	}
    cout << ans;
}
