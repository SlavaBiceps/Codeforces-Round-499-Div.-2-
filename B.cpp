#include <bits/stdc++.h>
using namespace std;

int main() {
	long s,k,t,n,x,max;
	long mas[1002];
	cin >> k >> n;
	max=0;
	for (long i=0; i<n; i++) {
		cin >> x;
		mas[x]++;
	}
	for (long i=1; i<=n/k; i++) {
		t=0;
		for (long j=0; j<101; j++) {
			t+=mas[j]/i;
		}
		if (t>=k) {
			max = i;
		}
	}
	cout << max;
	return 0;
}