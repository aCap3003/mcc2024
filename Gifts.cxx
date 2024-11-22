#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	long T;
	long i;
	long m;
	int yummy = -2;
	long limit;
	cin >> n >> m;
	long friends[n] = {};
	long ordered[n] = {};
	long ordered2[n] = {};
	for (i = 0; i < n; i++) {
		cin >> T;
		ordered2[i] = T;
		ordered[i] = T;
	}
	sort(ordered2,ordered2 + n);
	T = -1;
	for (i = 0; i < n; i++) {
		if (yummy < ordered2[i]) {
			T++;
		}
		friends[T]++;
	}
	i = 0;
	T = -1;
	while (m > 0) {
		m = m - friends[i];
		T += friends[i];
		if (m <= 0) {
			limit = ordered2[T];
			m = friends[i] + m;
			//cout << m << endl;
			//cout << limit << endl;
			break;
		}
		i++;
	}
	for (i = 0; i < n; i++) {
		if (ordered[i] < limit) {
			cout << 1 << " ";
			//cout << ordered[i] << endl;
		}	else if (ordered[i] == limit) {
			if (m > 0) {
				cout << 1 << " ";
				//cout << ordered[i] << m << endl;
				m--;
			} else {
				cout << 0 << " ";
				//cout << ordered[i] << endl;
			}
		}	else {
			cout << 0 << " ";
			//cout << ordered[i] << endl;
		}
	}
}

