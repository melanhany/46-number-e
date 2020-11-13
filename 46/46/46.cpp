#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int d, n, c[26] = { 7, 1, 8, 2, 8, 1, 8, 2, 8, 4, 5, 9, 0, 4, 5, 2, 3, 5, 3, 6, 0, 2, 8, 7, 5, 0 };
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	fin >> n;
	// check if n equals to zero and automatically show rounded value of c which is 3
	if (n == 0) {
		fout << 3;
	}
	else {
		// if n is not equal to zero, we need to output value of the first number which is 2 and dot
		fout << "2.";
		// loop for which outputs the values of c array until it gets n - 1
		for (int i = 0; i < n - 1; i++) {
			fout << c[i];
		}
		// condition if for rounding n-th number if it is bigger or equals to 5
		if (c[n] >= 5) {
			fout << c[n - 1] + 1;
		}
		// if it is not just output normally
		else {
			fout << c[n - 1];
		}
	}
}
