#include<bits/stdc++.h>
using namespace std;

int main()
{       
    int i;
    int n;
    cin >> n;

    int f[n+1];
    f[1] = 1;
    f[2] = 1;

    for(i = 3; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    cout << f[n];

    return 0;
}
