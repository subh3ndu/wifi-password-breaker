#include<bits/stdc++.h>
using namespace std;

#define all(x)  x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;

const int MOD = 1e9 + 7;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);


  int tc = 1;
  /* cin >> tc; */
  while(tc--) {
    string s;
    cin >> s;
    // BRAHMOS201A
    int n = (int)s.length();

    int c = s[n-2] - '0';
    int b = s[n-3] - '0';
    int a = s[n-4] - '0';

    int ans = (a*100) + (b*10) + c;
    int temp = 2*(a+b+c);

    if(temp < 9) {
      cout << ans << ans << '0' << temp << "\n";
      return 0;
    }
    cout << ans << ans << temp << "\n";
  }

  return 0;
}
