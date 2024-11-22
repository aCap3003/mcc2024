
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int t;
int n;
long long input;
vector<long long> orbs;


int main() {
	int j;
	int count;
	long long fused;
	cin >> t;
	long long outputs[t];
	for (j = 0; j < t; j++) {
		fused = 0;
		orbs.clear();
		cin >> n;
		for (count = 1; count <= n; count++) {
			//cout << endl << "Enter: ";
			cin >> input;
			orbs.push_back(input);	
		}
		sort(orbs.begin(), orbs.end());
		fused = orbs[n-1] % 1000000007;
		orbs.pop_back();
		for (count = n-2; count >=0; count--) {
			
			fused = 2 * fused + (orbs[count] % 1000000007);
			fused = fused % 1000000007;
		}
		outputs[j] = fused;
	}
	for (j = 0; j < t; j++) {
		cout << outputs[j] << endl;
	}
}
