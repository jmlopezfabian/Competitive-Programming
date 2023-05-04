#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
struct fast_ios {
	fast_ios() {
		cin.tie(nullptr);
		cout.tie(nullptr);
		ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	};
} fast_ios_;
 
 
void solve()
{
	int n;
	ll k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ll ans = 0;
	ll sum = 0;
	int l = 0, r = 0;
	while(r < n)
	{
		sum += a[r];
		while(sum - a[l] >= k){
			sum -= a[l];
			l++;
		}
		if(sum >= k){
			ans += l + 1;
		}
		r++;
	}
	cout << ans << endl;
}
 
 
int main()
{
	int t = 1;
	//cin >> t;
	while(t --) solve();
}