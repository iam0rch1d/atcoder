#include <atcoder/all>

using namespace std;
using namespace atcoder;

using ll = long long;
using pii = pair<int, int>;

#define ALL(x) x.begin(), x.end()
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define FOR_(i, x, y) for (int i = x; i <= y; i++)
#define REP(i, x) FOR(i, 0, x)

template<typename T> void chMax(T &m, const T &q) { m = max(m, q); }
template<typename T> void chMin(T &m, const T &q) { m = min(m, q); }

unsigned op(unsigned x, unsigned y) {
    return x ^ y;
}

unsigned e() {
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    int q;

    cin >> n >> q;

    segtree<unsigned, op, e> t(n);

    REP(i, n) {
        int a;

        cin >> a;

        t.set(i, a);
    }

    REP(i, q) {
        int query;
        int x;
        int y;

        cin >> query >> x >> y;

        x--;

        if (query == 1) t.set(x, t.get(x) ^ y);
        else cout << t.prod(x, y) << '\n';
    }

    return 0;
}
