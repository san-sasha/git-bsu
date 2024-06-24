#include <iostream>
// номер 2, упражнение 5
using namespace std;

int main()
{
	int n;
	int x, f, f0, f1, p1 = 0, p2 = 0, m = 1;
	cout << "Enter n, x, f0, f1:";
	cin >> n >> x >> f0 >> f1;
	if (n == 0) {
		p1 = f0;
		p2 = f0;
	}
	else {
		if (n == 1) {
			p1 = f0 * x + f1;
			p2 = f1 * x + f0;
		}
		else {
			for (int i = 0; i <= n; ++i) {
				f = 2 * f1 + f0;
				p1 = p1 * x + f0;
				p2 = p2 + f0 * m;
				m *= x;
				f0 = f1;
				f1 = f;
			}
		}
	}
	cout << "p1(" << n << ", " << x << ") = " << p1 << endl;
	cout << "p2(" << n << ", " << x << ") = " << p2;
	return 0;
}