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


ll check(ll n)
{
	if (n <= 0)
		return 0;
	if (n % 3 == 0 or n % 7 == 0 or n % 5 == 0)
		return 1;

	return 0;
}

void solve()
{
	ll n, a = 0, b = 0, c = 0, f = 0;
	cin >> n;


	while (n > 0)
	{
		if (n % 3 == 0)
		{
			a += n / 3;
			n = 0;
		}
		else if (n % 5 == 0)
		{

			b += n / 5;
			n = 0;
		}
		else if (n % 7 == 0)
		{
			c += n / 7;
			n = 0;
		}
		else
		{
			if (check(n - 3))
			{
				a++;
				n -= 3;
			}
			else if (check(n - 5))
			{
				b++;
				n -= 5;
			}
			else if (check(n - 7))
			{
				c++;
				n -= 7;
			}
			else
			{
				f = -1;
				n = 0;
				break;
			}
		}


	}

	if (f == 0)
		cout << a << " " << b << " " << c << ndl;
	else
		cout << -1 << ndl;

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

