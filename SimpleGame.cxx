#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int n;
int turn = 1;
long long first;
long long second;
long long sum;
int main() {
	cin >> n;
	
	int i = 0;
	vector<pair<int, pair<int, int>>> choose;
	for (i = 0; i < n; i++) {
		cin >> first >> second;
		sum = first + second;
		choose.push_back({sum, {first, second}});
	}
	stable_sort(choose.begin(), choose.end());
	first = 0;
	second = 0;
	for (i = n - 1; i >= 0; i--) {
		if (turn == 1) {
			first = first + choose[i].second.first;
			turn = 2;
		} else {
			second = second + choose[i].second.second;
			turn = 1;
		}
	}
	cout << (first - second);
	return 0;
}
