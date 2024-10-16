#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	long long int a;
	auto b=0;
	vector <long long int > v;

	while (cin >> a)
	{
		v.push_back(a);
		sort(v.begin(), v.end()	);
	}
	b = v.size();
	if (b % 2) {
		cout << v[b / 2] << endl;
	}
	else {
		cout << (v[b / 2] + v[ b / 2 - 1]) / 2 << endl;
	}
}