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
#define print(a)           for(auto x : a) cout << x << " "; cout << endl
#define printpair(a)       for(auto x : a) cout << x.F << " " << x.S << endl



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

const ll N = 100009;
bool prime[N];
vector<ll>color(N, 1);
vector<ll>v[N];


void solve()
{
	ll n, c = 1;
	cin >> n;
	++n;


	for (ll i = 2; i * i <= n; i++)
	{
		if (!prime[i])
		{
			for (ll j = i * i; j <= n; j += i)
				prime[j] = 1;
		}
	}

	for (ll i = 2; i <= n; i++)
	{
		for (ll j = 2 * i; j <= n; j += i)
		{
			v[j].pb(i);
		}
	}

	for (ll i = 2; i <= n; i++)
	{
		for (auto x : v[i])
		{
			if (!prime[x] and color[x] == color[i])
			{

				color[i]++;
				c = max(c, color[i]);
			}
		}
	}


	cout << c << ndl;
	for (ll i = 2; i <= n; i++)
		cout << color[i] << " ";


}


int main()
{
	first_in_out

	//clock_t z = clock();

	ll t = 1;
	//cin >> t;

	while (t--)
		solve();


	//cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);


}


