#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int i;
	double r, memb, s;
	setlocale(LC_ALL, "Ukrainian");
	i = 1;
	r = 0;
	s = 1;
	memb = s * static_cast<float>(1) / pow(i, 2);
	cout << setprecision(10) << setiosflags(ios::fixed | ios::showpoint);
	do {
		r += memb;
		s = -s;
		memb = s * static_cast<float>(1) / pow(i,2);
		i++;
	} while (fabs(memb) >= 0.001);
	cout << "Результат з точнiстю до eps = 0.001: " << r << endl;

	return 0;
}
