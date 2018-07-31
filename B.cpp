#include <bits/stdc++.h>
using namespace std;

int main() {
	long s,k,n,x,max,temp;
	long a[101];
	cin >> k >> n;
	max=0;
	for (long i=0; i<n; i++) {
		cin >> x;
		a[x]++;
	}
	for (long i=1; i<=n/k; i++) {
		temp=0;
		for (long j=0; j<101; j++) {
			temp+=a[j]/i;
		}
		if (temp>=k) {
			max = i;
		}
	}
	cout << max;
	return 0;
}

