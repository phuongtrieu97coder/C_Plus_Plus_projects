#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

template<typename T1, typename T2>

T2 combineResults(T1 val1, T2 val2)
{
	T1 tmpVal1;
	T2 tmpVal2;
	tmpVal1 = val1;
	tmpVal2 = val2;
	for (T1 i = 1; i < 10; i++) {
		tmpVal1 += i;
		tmpVal2 += (5.1 * i);
	}
	return (tmpVal1 + tmpVal2);
}


int main() {
	cout << "Comebine Results: "
		<< combineResults(25, 365.856)
		<< endl;

	return 0;
}
