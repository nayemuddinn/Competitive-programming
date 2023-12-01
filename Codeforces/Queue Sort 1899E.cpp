/**
.
  author->  NATE
.
**/

#include<bits/stdc++.h>
using namespace std;

#define first_in_out       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define For(i,n)           for(ll i=0;i<n;i++)
#define For2(i,n)          for(ll i=1;i<=n;i++)
#define For3(i, j, n)      for (ll j = i; j <= n; j++)
#define For4(i,n)          for(ll i=n-1; i>=0; i--)
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


struct custom_hash {
	static uint64_t splitmix64(uint64_t x) {
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}

	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
};




void solve()
{
	ll n, minNum = 1e9, c = 0;
	cin >> n;

	vector<ll>v(n);

	For(i, n) {
		cin >> v[i];
		minNum = min(minNum, v[i]);

		if (i > 0 and v[i] < v[i - 1])
			c++;
	}

	if (c == 0)
	{
		cout << 0 << ndl;
		return;
	}


	if (v[0] == minNum)
	{
		cout << -1 << ndl;
		return;
	}

	ll k = 1;


	For2(i, n - 1)
	{
		if (v[i] < v[i - 1])
			c--;

		if (v[i] == minNum)
		{
			if (c != 0)
				k = -1;
			else
				k = i;
			break;
		}

	}

	cout << k << ndl;


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

