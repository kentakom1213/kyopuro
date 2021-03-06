
// test

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(A) A.begin(), A.end()
#define initArray(name, h, w, v) vector<vector<int>> name(h, vector<int>(w, v));
typedef long long ll;
typedef pair<int, int> vec2;
typedef vector<vector<int>> Array;
template <typename T> inline bool chmax(T &a, const T b) { if (a < b) { a = b; return true; } return false; }
template <typename T> inline bool chmin(T &a, const T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    string result; cin >> result;

    ll N, S; cin >> N >> S;
    vector<ll> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    ll res = 0;
    for (int i = 0; i < N; i++) {
        if (result[i] == 'A') {
            res += A[i];
        }
        else {
            res += B[i];
        }
    }

    if (res == S) {
        printf("AC  S = result: %lld\n", S);
    }
    else {
        printf("WA  S: %lld, result: %lld\n", S, res);
    }
}
