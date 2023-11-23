#include <bits/stdc++.h>
using namespace std;
#define file(name) if (fopen(name".inp","r")) {freopen(name".inp","r",stdin); freopen(name".out","w",stdout);}
#define pb push_back
#define fi first
#define se second
#define REP(i,n) for (int i=0; i<n; i++)
#define REPD(i,n) for (int i=n-1; i>=0; i--)
#define FOR(i,a,b) for (int i=a; i<=b; i++)
#define FORD(i,a,b) for (int i=a; i>=b; i--)
#define ll long long
#define vi vector <int>
#define vll vector <ll>
const ll INF=LLONG_MAX;
const int N=1e6+5;

ll n,a[N];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("SN");

    cin >> n;
    REP(i,n) cin >> a[i];
    sort(a,a+n);
    if (a[0]>1) {cout << 1; return 0;}
    FOR(i,1,n-1) if (a[i]-a[i-1]>1) {cout << a[i-1]+1; return 0;}
    cout << a[n-1]+1;
    return 0;
}
