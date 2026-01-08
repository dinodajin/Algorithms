#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	int ans = 0;
	string str;
	cin >> N;
	cin >> str;
	for (int i = 0; i < N; i++) {
		ans += (str[i] - '0');
	}
	cout << ans;

	return 0;
}