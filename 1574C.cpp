#include <iostream>
using std::cin;
using std::cout;
// using std::endl;
#include <algorithm>
using std::min;
using std::max;
#include <set>

using ll = long long;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define intc(a) int a; cin >> a
#define llc(a) ll a; cin >> a

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  std::set<ll> knights;
  ll army_strength = 0;

  intc(n);
  forn(i, n) {
    llc(knight);
    army_strength += knight;
    knights.insert(knight);
  }

  intc(m);
  forn(j, m) {
    llc(dragon_defence); llc(dragon_attack);
    ll dragon_strength = dragon_defence + dragon_attack;

    auto nearest_knight_it = knights.lower_bound(dragon_defence); // first >=
    ll min_gold = dragon_strength;
    if (nearest_knight_it != knights.end()) {
      min_gold = max(0LL, dragon_attack - (army_strength - *nearest_knight_it));
    }
    if (nearest_knight_it-- != knights.begin()) {
      min_gold = min(min_gold, max(dragon_defence - *nearest_knight_it, dragon_strength - army_strength));
    }

    cout << min_gold << '\n';
  }

  return 0;
}