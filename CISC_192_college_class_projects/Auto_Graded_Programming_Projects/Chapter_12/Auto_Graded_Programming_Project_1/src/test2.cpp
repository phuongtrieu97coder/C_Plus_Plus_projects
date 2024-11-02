#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream charsFile("chars.txt");
    ifstream posFile("pos.txt");

    if (!charsFile.is_open() || !posFile.is_open()) {
        cout << "Error opening file(s)" << endl;
    }

    string chars;
    getline(charsFile, chars);

    vector<int> positions;
    int pos;
    while (posFile >> pos) {
        positions.push_back(pos);
    }

    for (int position : positions) {
        if (position >= 0 && position < chars.length()) {
            cout << chars[position] << endl;
        }
    }

    cout << endl;

    charsFile.close();
    posFile.close();

    return 0;
}
