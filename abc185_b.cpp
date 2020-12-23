#include <atcoder/all>

using namespace std;
using namespace atcoder;

using ll = long long;
using pi = pair<int, int>;

#define ALL(x) x.begin(), x.end()
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define FOR_(i, x, y) for (int i = x; i <= y; i++)
#define IFOR(i, x, y) for (int i = y - 1; i >= x; i--)
#define IFOR_(i, x, y) for (int i = y; i >= x; i--)
#define REP(i, x) FOR(i, 0, x)

template<typename T> void chmax(T &m, const T q) { m = max(m, q); }
template<typename T> void chmin(T &m, const T q) { m = min(m, q); }

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    int maxN;
    int m;
    int t;

    cin >> n >> m >> t;

    maxN = n;

    vector<pi> times(m + 1);

    times[0] = {0, 0};

    FOR_(i, 1, m) cin >> times[i].first >> times[i].second;

    FOR_(i, 1, m) {
        n -= times[i].first - times[i - 1].second;

        if (n <= 0) {
            cout << "No\n";

            return 0;
        }

        n = min(maxN, n + times[i].second - times[i].first);
    }

    n -= t - times[m].second;

    cout << (n > 0 ? "Yes\n" : "No\n");

    return 0;
}
