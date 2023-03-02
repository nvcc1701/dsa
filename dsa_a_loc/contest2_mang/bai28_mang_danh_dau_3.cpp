    #include <iostream>
    #include <cstring>
    #include <algorithm>
    using namespace std;

    int main()
    {
        int n, a[1001], check[1000001], print[1000001];
        cin >> n;
        memset(check, 0, sizeof(check));
        memset(print, 0, sizeof(print));

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            check[a[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (!print[a[i]])
            {
                cout << a[i] << " " << check[a[i]] << endl;
                print[a[i]] = 1;
            }
        }

        return 0;
    }