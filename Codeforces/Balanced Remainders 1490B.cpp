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
	ll n, c1 = 0, c2 = 0, c0 = 0;
	cin >> n;


	ll x, balance, req, cnt = 0;

	For(i, n) {
		cin >> x;

		if (x % 3 == 0)
			c0++;
		else if (x % 3 == 1)
			c1++;
		else
			c2++;
	}

	balance = n / 3;


	ll rem1 = max(0LL, c0 - balance);
	ll rem2 = max(0LL, c1 - balance);
	ll rem3 = max(0LL, c2 - balance);



	if (c0 < balance)
	{
		req = balance - c0;

		if (rem3 >= req)
		{
			rem3 -= req;
			cnt += req;
			req = 0;
		}
		else
		{
			req -= rem3;
			cnt += rem3;
		}

		if (req != 0)
		{
			if (rem2 >= req)
			{
				rem2 -= req;
				cnt += req * 2;
				req = 0;
			}
			else
			{
				req -= rem2;
				cnt += rem2 * 2;
			}
		}
	}




	if (c1 < balance)
	{
		req = balance - c1;

		if (rem1 >= req)
		{
			rem1 -= req;
			cnt += req;
			req = 0;
		}
		else
		{
			req -= rem1;
			cnt += rem1;
		}

		if (req != 0)
		{
			if (rem3 >= req)
			{
				rem3 -= req;
				cnt += req * 2;
				req = 0;
			}
			else
			{
				req -= rem3;
				cnt += rem3 * 2;
			}
		}
	}



	if (c2 < balance)
	{
		req = balance - c2;

		if (rem2 >= req)
		{
			rem2 -= req;
			cnt += req;
			req = 0;
		}
		else
		{
			req -= rem2;
			cnt += rem2;
		}

		if (req != 0)
		{
			if (rem1 >= req)
			{
				rem1 -= req;
				cnt += req * 2;
				req = 0;
			}
			else
			{
				req -= rem1;
				cnt += rem1 * 2;
			}
		}
	}

	cout << cnt << ndl;









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

