//             C - Collision 2             
// ----------------------------------------
// 問題
// https://atcoder.jp/contests/abc243/tasks/abc243_c
// ----------------------------------------

#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define ALL(A) A.begin(), A.end()
typedef long long ll;
template <typename T> inline bool chmax(T &a, const T b) { if (a < b) { a = b; return true; } return false; }
template <typename T> inline bool chmin(T &a, const T b) { if (a > b) { a = b; return true; } return false; }
template <typename A, size_t N, typename T> void FILL(A (&array)[N], const T &val) { fill( (T*)array, (T*)(array+N), val); }
constexpr int MOD = 1000000007;
constexpr int mod = 998244353;
typedef pair<ll, ll> P;

int main() {
    int N; cin >> N;
    P points[N];
    for (auto &[x, y] : points) {
        scanf("%d %d", &x, &y);
    }
    string dir; cin >> dir;

    // yで分類
    map<ll, vector<ll>> mp;
    rep(i, 0, N) {
        auto [x, y] = points[i];
        mp[y].push_back(i);
    }

    // 順に取り出して処理
    bool isInCollision = false;
    for (auto [_, i_s] : mp) {
        for (ll i : i_s) {
            
        }
    }
}
