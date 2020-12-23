#include <atcoder/all>

using namespace std;
using namespace atcoder;

using ll = long long;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
using vb = vector<bool>;
using vi = vector<int>;
using vll = vector<ll>;
using vpi = vector<pi>;
using vpll = vector<pll>;
using vvi = vector<vector<int>>;
using vstr = vector<string>;

#define F first
#define S second
#define ALL(x) x.begin(), x.end()
#define IALL(x) x.rbegin(), x.rend()
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define FOR_(i, x, y) for (int i = x; i <= y; i++)
#define IFOR(i, x, y) for (int i = y - 1; i >= x; i--)
#define IFOR_(i, x, y) for (int i = y; i >= x; i--)
#define REP(i, x) FOR(i, 0, x)
#define SUBSTR(s, l, r) s.substr(l, r - l + 1)
#define RESET(arr, x) memset(arr, x, sizeof(arr))
#define PRINT(x) cout << (x) << ' '
#define PRINTLN(x) cout << (x) << '\n'
#define DEBUG(x) cerr << "\033[1;35m" << (x) << "\033[0m\n"

template<typename T>
void chmax(T &m, const T q) { m = max(m, q); }

template<typename T>
void chmin(T &m, const T q) { m = min(m, q); }

template<typename T>
void sort_unique(vector<T> &v) { sort(ALL(v)); v.erase(unique(ALL(v)), v.end()); }

template<typename T1, typename T2>
pair<T1, T2> operator+(const pair<T1, T2> &l, const pair<T1, T2> &r) { return {l.F + r.F, l.S + r.S}; }

template<typename T1, typename T2>
pair<T1, T2> operator-(const pair<T1, T2> &l, const pair<T1, T2> &r) { return {l.F - r.F, l.S - r.S}; }

template<typename T>
T square(T x) { return x * x; }

template<typename T>
T manhattan(pair<T, T> a, pair<T, T> b) { return abs(b.F - a.F) + abs(b.S - a.S); }

template<typename T>
T euclidean(pair<T, T> a, pair<T, T> b) { return square(b.F - a.F) + square(b.S - a.S); }

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    //cout << fixed << setprecision(10);

    int h;
    int w;
    int aMin = 987654321;
    int ans = 0;

    cin >> h >> w;

    vvi a(h, vi(w));

    FOR(i, 0, h) FOR(j, 0, w) {
        cin >> a[i][j];

        chmin(aMin, a[i][j]);
    }

    FOR(i, 0, h) FOR(j, 0, w) ans += a[i][j] - aMin;

    PRINTLN(ans);

    return 0;
}
