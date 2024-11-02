#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <random>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <memory>
#include <filesystem>
using namespace std;



int main() {
	fstream file, file2;
	file.open("pos.txt", ios::in);
	file2.open("chars.txt", ios::in);
	if (!file || !file2) {
		cout << "Error opening pos.txt or chars.txt!!!";
	}
	vector<int> positions;
	int pos;
	while (file >> pos) {
		positions.push_back(pos);
	}
	char ch;
	for (int i = 0; i < positions.size(); i++) {
		file2.seekg(positions[i], ios::beg);
		file2.get(ch);
		cout << ch<< endl;
	}

	file.close();
	file2.close();

	

	return 0;
}
