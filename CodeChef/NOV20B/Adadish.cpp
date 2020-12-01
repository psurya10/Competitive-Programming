#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << a[0] << endl;
        else if (n == 2)
            cout << max(a[0], a[1]) << endl;
        else if (n == 3)
        {
            sort(a, a + n);
            cout << max(a[0] + a[1], a[2]) << endl;
        }
        else
        {
            sort(a, a + n);
            i = max(a[0] + a[3], a[2]+a[1]);
            j=max(a[0]+a[1]+a[2],a[3]);
            cout << min(i, j) << endl;
        }
    }
    return 0;
}