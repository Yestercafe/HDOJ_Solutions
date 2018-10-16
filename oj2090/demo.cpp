#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

int main(void)
{
	using namespace std;
	string name;
	double amount, price;
	double res = 0.;
	while (cin >> name >> amount >> price) {
		res += amount * price;
	}
	
	printf("%.1lf\n", (floor(res * 10. + 0.5) / 10.));

	return 0;
}
