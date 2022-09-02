#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto n = int{};
		cin >> n;

		auto p = int{ 0 };
		auto q = double{ 0 };
		while (0 < (n--)) {
			auto c = int{};
			auto g = double{};
			cin >> c >> g;

			p += c;
			q += c * g;
		}

		cout << p << ' ' << fixed << setprecision(1) << q / p << '\n';
	}

	return 0;
}