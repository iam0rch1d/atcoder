#include <atcoder/all>

using namespace std;
using namespace atcoder;

using ll = long long;
using pii = pair<int, int>;

#define ALL(x) x.begin(), x.end()
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define FOR_(i, x, y) for (int i = x; i <= y; i++)
#define IFOR(i, x, y) for (int i = y - 1; i >= x; i--)
#define IFOR_(i, x, y) for (int i = y; i >= x; i--)
#define REP(i, x) FOR(i, 0, x)

template<typename T> void chmax(T &m, const T q) { m = max(m, q); }
template<typename T> void chmin(T &m, const T q) { m = min(m, q); }

ll dp[201];

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int l;

    cin >> l;

    dp[0] = 1;

    FOR_(i, 1, 12) FOR_(j, 1, l) dp[j] += dp[j - 1];

    cout << dp[l - 12] << '\n';

    return 0;
}
