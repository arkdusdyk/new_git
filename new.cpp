#include <iostream>
using namespace std;
int main ()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int max, ans;
	ans=0;
	int arr[1001] = {0,};
	int dp[1001] = {0,};
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> arr[i];
	for(int i=1;i<=n;i++)
	{
		max =0;
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j] && max<dp[j])
				max = dp[j];
		}
		dp[i] = max+1;
		if(ans<dp[i])
			ans = dp[i];
	}
	for(int i=0;i<n;i++)
		cout << dp[i] << ' ';
	cout << '\n';
	cout << ans << '\n';
	return 0;
}	