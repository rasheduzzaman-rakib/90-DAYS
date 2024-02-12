#include <bits/stdc++.h>
using namespace std;
int t, k;
int main() 
{
	while (cin >> t && !t) ++k;
	cout << abs(k/5-2) + abs(k%5-2);
}