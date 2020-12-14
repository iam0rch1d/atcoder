#include <atcoder/all>

using namespace std;
using namespace atcoder;

using ll = long long;
using pii = pair<int, int>;

#define ALL(x) x.begin(), x.end()
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define FOR_(i, x, y) for (int i = x; i <= y; i++)
#define IFOR(i, x, y) for (int i = y; i > x; i--)
#define IFOR_(i, x, y) for (int i = y; i >= x; i--)
#define REP(i, x) FOR(i, 0, x)

template<typename T> void chmax(T &m, const T &q) { m = max(m, q); }
template<typename T> void chmin(T &m, const T &q) { m = min(m, q); }

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int ret = 101;

    REP(i, 4) {
        int a;

        cin >> a;

        chmin(ret, a);
    }

    cout << ret << '\n';

    return 0;
}
