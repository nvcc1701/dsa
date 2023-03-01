#include <bits/stdc++.h>
using namespace std;

bool is_partiable(int* arr, int n, int sum, int curr_sum, bool* visited, int pos)
{
    if (curr_sum == sum) {
        return true;
    }

    if (pos >= n || pos < 0) {
        return false;
    }

    for (int i = pos; i >= 0; i--) {
        //take the elements those are not visited
        if (!visited[i]) {
            visited[i] = true;
            if (curr_sum + arr[i] <= sum && is_partiable(arr, n, sum, curr_sum + arr[i], visited, i - 1)) {
                return true;
            }
            visited[i] = false;
        }
    }
    return false;
}

bool isKPartitionPossible(int A[], int N, int k)
{
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    if (sum % k != 0)
        return false;

    sum = sum / k;

    bool visited[N];

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < k - 1; i++) {
        int curr_sum = 0;
        int pos = N - 1;
        if (!is_partiable(A, N, sum, curr_sum, visited, pos))
            return false;
    }

    return true;
}

int main()
{
    int t;

    cout << "Test Case : ";
    cin >> t;

    while (t--) {
        int n,k;

        cin >> n >>k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (isKPartitionPossible(arr, n, k)) {
            cout <<1<< endl;
        }
        else {
            cout <<0<< endl;
        }
    }
    return 0;
}
