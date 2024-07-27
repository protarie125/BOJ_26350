#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
vl C;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  while (0 < (n--)) {
    ll t;
    cin >> t;
    C = vl(t);
    for (auto&& x : C) {
      cin >> x;
    }

    auto ans = true;
    for (auto i = 1; i < t; ++i) {
      if (C[i] < 2 * C[i - 1]) {
        ans = false;
      }
    }

    cout << "Denominations: ";
    for (const auto& x : C) {
      cout << x << ' ';
    }
    cout << '\n';
    cout << (ans ? "Good" : "Bad") << " coin denominations!\n";
    cout << '\n';
  }

  return 0;
}