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



void solve()
{
	ll n, change = 0, money, x;
	cin >> n;


	unordered_map<ll, ll>m;

	For(i, n)
	{
		cin >> x;

		if (x == 25)
		{
			m[x]++;
			continue;
		}

		money = x;
		x -= 25;


		if (m[50] > 0 and x / 50 > 0)
		{
			change = x / 50;

			if (m[50] >= change)
			{
				m[50] -= change;
				x = x - (change * 50);
			}
			else
			{
				change -= m[50];
				m[50] = 0;
				x = (change * 50);

			}
		}


		if (m[25] > 0 and x / 25 > 0)
		{
			change = x / 25;

			if (m[25] >= change)
			{
				m[25] -= change;
				x = x - (change * 25);
			}
			else
			{
				change -= m[25];
				m[25] = 0;
				x = (change * 25);

			}
		}

		if (x > 0)
		{
			cout << "NO";
			return;
		}

		m[money]++;
	}
	cout << "YES";


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

