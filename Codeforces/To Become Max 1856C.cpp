/**
.
  author->  NATE
.
**/

#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(int i=0;i<n;i++)
#define For2(i,n)          for(int i=1;i<=n;i++)
#define For3(i, j, n)      for (int i = j; i <= n; i++)
#define For4(i,n)          for(int i=n-1; i>=0; i--)
#define ndl                "\n"
#define ll                 long long int
#define double             long double
#define PI                 3.1415926535897932384626
#define INF                1e18
#define pb                 push_back
#define F                  first
#define S                  second
#define max_heap           priority_queue <ll>
#define min_heap           priority_queue <ll, vector<ll>, greater<ll>>
#define sortAll(v)         sort(v.begin(),v.end())
#define bug(...)           __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)           for(auto x : a) cout << x << " ";
#define printpair(a)       for(auto x : a) cout << x.F << " " << x.S<< ndl;



template <typename Arg1>
void __f (const char* name, Arg1&& arg1)
{
	cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | ";
	__f (comma + 1, args...);
}

ll k;

bool check(ll a[], ll n, ll max_num, ll mid, ll index)
{

	ll rem = k;
	ll target = mid;

	if (max_num >= target) {
		return true;
	}

	for (ll j = index; j < n ; j++)
	{

		if (a[j] >= target)
			return true;
		else if (j == n - 1 and a[j] < target)  //Last index value cant be changed
			return false;

		rem -= (target - a[j]);          //Decreasing k operations
		target--;

		if (rem < 0 ) {
			return false;
		}

	}


	if (rem == 0)
		return true;

	return false;
}


ll search(ll a[], ll n, ll max_num, ll index)
{
	ll left = a[index], right = max_num + k, mid, ans = max_num;    // ans won't be greater than max element +k operations

	while (left <= right)
	{
		mid = (left + right) / 2;

		bool checking = check(a, n, max_num, mid, index);

		if (checking)
		{

			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;


	}


	return ans;
}

void solve()
{
	ll n, max_num = -1e9;
	cin >> n >> k;

	ll a[n];

	For(i, n) {
		cin >> a[i];
		max_num = max(max_num, a[i]);
	}

	ll ans = max_num;
	For(i, n - 1)
	ans = max(ans, search(a, n, max_num, i));

	cout << ans << ndl;

}



int main()
{
	first_in_out

	//clock_t z = clock();

	ll t = 1;
	cin >> t;

	while (t--)
		solve();


	//cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


}

