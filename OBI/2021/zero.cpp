#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n = 0, sum = 0, x;
	stack<int> stack;
	cin >> n;
	for(int i{0}; i < n; i++) {
		cin >> x;
		if (x != 0) {
			stack.push(x);
			sum += x;
		} else if (!stack.empty()) {
			sum -= stack.top();
			stack.pop();
		}
	}
	cout << sum << '\n';
	return 0;
}
