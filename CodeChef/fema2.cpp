#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	int i, k, n;
        cin >> n >> k;
        string s;
        cin >> s;
        int p = k + 1, count = 0;
        queue<int> x;
        queue<int> y;
        for (i = 0; i < n; i++)
        {
            if (s[i]=='M')
			x.push(i);
            if (s[i]=='I')
			y.push(i);
			if (s[i]=='X' || i==n-1)
            {
                int l, r, sheet = 0, q;
                while (!x.empty() && !y.empty())
                {
                    sheet = 0;
                    l = min(x.front(), y.front());
                    r = max(x.front(), y.front());
                    for (q=l; q<=r; q++)
                    {
                        if (s[q] == ':')
                            sheet++;
                    }
                    if ((p-abs(l-r)-sheet)>0)
                    {
                        count++;
                        x.pop();
                        y.pop();
                    }
                    else if (x.front() < y.front())
                    {
                        x.pop();
                    }
                    else
                    {
                        y.pop();
                    }
                }
                while (!x.empty())
					x.pop();
                while (!y.empty())
                    y.pop();
            }
        }
        cout << count << endl;
    }
	return 0;
}
    






