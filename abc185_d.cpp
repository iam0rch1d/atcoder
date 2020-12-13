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

template<typename T> void chMax(T &m, const T &q) { m = max(m, q); }
template<typename T> void chMin(T &m, const T &q) { m = min(m, q); }

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    int m;
    vector<int> differences;
    int stampSize;
    int ret = 0;

    cin >> n >> m;

    if (!m) {
        cout << "1\n";

        return 0;
    }

    vector<int> a(m);

    for (int &ai : a) {
        cin >> ai;
    }

    a.push_back(0);
    a.push_back(n + 1);
    sort(a.begin(), a.end());

    FOR_(i, 1, m + 1) if (a[i] - a[i - 1] > 1) differences.push_back(a[i] - a[i - 1] - 1);

    if (differences.empty()) {
        cout << "0\n";

        return 0;
    }

    stampSize = *min_element(differences.begin(), differences.end());

    for (int difference : differences) {
        if (!difference) continue;

        ret += (difference - 1) / stampSize + 1;
    }

    cout << ret << '\n';

    return 0;
}
