#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int rand_int(int l, int r)
{
    uniform_int_distribution<int> uid(l, r);
    return uid(rng);
}

void generate_test(int t)
{
    ofstream input_file("test.txt");
    input_file << t << '\n';
    while (t--)
    {
        int n = rand_int(1, 20);
        int k = rand_int(1, 200);
        input_file << n << ' ' << k << '\n';
        vector<int> digits(n);
        iota(digits.begin(), digits.end(), 1);
        shuffle(digits.begin(), digits.end(), rng);
        for (int i = 0; i < n; i++)
        {
            input_file << digits[i] << " ";
        }
        input_file << '\n';
    }
    input_file.close();
}

int main()
{
    int t = 10;
    generate_test(t);
    return 0;
}
