#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n, m;
	long a[1002], 
	long b[1002];
	cin >> n >> m;
	for (long i=0; i<n; ++i) {
		cin >> a[i];
	}
	for (long i=0; i<n; ++i) {
		cin >> b[i]);
	}
	for (long i=0; i<n; ++i) {
		if (a[i==1 || b[i]==1)
		{
			cout <<"-1";
			return 0;
		}
	b[n+1]=b[1];
	double x;
	x=m;
	for (long i=n-1; i>=0; --i)
	{
		x=x*b[i+1]/(b[i+1]-1);
		x=x*a[i]/(a[i]-1);
	}
	cout << (x - m);
	return 0;
}	