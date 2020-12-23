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
    int m;

    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 2000001));

    for (int &ai : a) {
        cin >> ai;
    }

    for (int &bi : b) {
        cin >> bi;
    }

    dp[0][0] = 0;

    FOR_(i, 0, n) {
        FOR_(j, 0, m) {
            if (i < n) chmin(dp[i + 1][j], dp[i][j] + 1);

            if (j < m) chmin(dp[i][j + 1], dp[i][j] + 1);

            if (i < n && j < m) chmin(dp[i + 1][j + 1], dp[i][j] + (a[i] != b[j]));
        }
    }

    cout << dp[n][m] << '\n';

    return 0;
}
