#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	bool h = false, e = false, l1 = false, l2 = false, o = false;
	for (char c : s) {
		if (c == 'h' && e == false) {
			h = true;
		} else if (c == 'e' && h == true) {
			e = true;
		} else if (c == 'l' && e == true && l2 == false && l1 == false) {
			l1 = true;
		} else if (c == 'l' && l1 == true) {
			l2 = true;
		} else if (c == 'o' && l2 == true) {
			o = true;
		}
	}
	if (h && e && l1 && l2 && o) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << '\n';
	return 0;
}
