#include <bits/stdc++.h>
using namespace std;

// contest7/bai21phanTuBenPhaiNhoHon

int n;
int arr[100000];

void phanTuBenPhaiNhoHon()
{
	int index_rb[n]; // vi tri phan tu lon hon dau tien
	int index_rm[n]; // vi tri phan tu nho hon dau tien cua index_rb
	stack<int> myS;
	myS.push(0);
	for (int i = 1; i < n; i++)
	{
		if (myS.empty())
		{
			myS.push(i);
			continue;
		}
		while (!myS.empty() && arr[i] > arr[myS.top()])
		{
			index_rb[myS.top()] = i;
			myS.pop();
		}
		myS.push(i);
	}
	while (!myS.empty())
	{
		index_rb[myS.top()] = -1;
		myS.pop();
	}
	myS.push(0);
	for (int i = 1; i < n; i++)
	{
		if (myS.empty())
		{
			myS.push(i);
			continue;
		}
		while (!myS.empty() && arr[i] < arr[myS.top()])
		{
			index_rm[myS.top()] = i;
			myS.pop();
		}
		myS.push(i);
	}
	while (!myS.empty())
	{
		index_rm[myS.top()] = -1;
		myS.pop();
	}
	for (int i = 0; i < n; i++)
	{
		if (index_rb[i] != -1 && index_rm[index_rb[i]] != -1)
		{
			cout << arr[index_rm[index_rb[i]]] << " ";
		}
		else
		{
			cout << -1 << " ";
		}
	}
	cout << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		phanTuBenPhaiNhoHon();
	}
	return 0;
}

// 2
// 7
// 5 1 9 2 5 1 7
// 8
// 4 8 2 1 9 5 6 3