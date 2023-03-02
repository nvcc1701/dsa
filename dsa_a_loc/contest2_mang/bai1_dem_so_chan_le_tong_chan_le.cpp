#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    int sochan, sole, tongchan, tongle;
    sochan = sole = tongchan = tongle = 0;

    while (n--)
    {
        cin >> p;
        if (p % 2 == 0)
        {
            ++sochan;
            tongchan += p;
        }
        else
        {
            ++sole;
            tongle += p;
        }
    }

    cout << sochan << endl;
    cout << sole << endl;
    cout << tongchan << endl;
    cout << tongle << endl;

    return 0;
}