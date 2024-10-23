// Write your code below
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <random>
#include <memory>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//File words.txt contains:
//50 lines (each single word)
//each word appears once more times

//Write a program to:
//1.reads the contents of a file
//2.counts the number of times each unique word appears in the file.

//Output below shows 10 unique words in the file.
/*
option 1
eagle 1
popular 4
observation 7
formulate 2
cheat 4
cattle 9
peace 6
underline 9
simplicity 7
*/

struct Data1 {
    string word;
    int countAppear;
};
//Use array structure to hold all the unique words,
//and the number of times each word appears.

//Ex: int SIZE;
//We should find the SIZE after some algorithms that are used
//to find unique words and the number of times they appear.

//Use Data1 uniqueWords[SIZE]  or vector<Data1> collection(size)

//After the program has processed the contents of the file,
//it should step through the array and display 
//each unique word from the file, followed by a space,
//followed by the number of times 
//that word appears in the file.

//Note: Your program should disregard case when processing 
//the words from the file. For example, the words "eagle" and "EAGLE" should be considered equal.
//=>convert them into lowercase, then compare

void convertLower(string &str);

void stringSplit(string, string, vector<string>&);
void findUniqueWords(vector<string>, vector<string>&);

void addContentToData1(int size, vector<Data1> collection,
vector<string> vec_content_used_to_compare, vector<string> fileContent_vector);

int main() {
    ifstream inputFile;
    inputFile.open("words.txt");

    string wordsFileContent;
    vector<string> fileContent_vector;

    if (!inputFile.fail()) {
        while (inputFile >> wordsFileContent) {
            convertLower(wordsFileContent);
            fileContent_vector.push_back(wordsFileContent);
        }
    }
    else {
        cout << "Can't open words.txt file!!!" << endl;
    }

    //First, I must create a vector called vec_content_used_to_compare
    //that contains all the elements
    //that can be used to compare with the content from
    //fileContent_vector later

    //vec_content_used_to_compare contains elements as
    //each unique words from fileContent_vector

    /*
    Ex:
    vector<string> vec_content_used_to_compare;

    Assume fileContent_vector looks like this:
    vector<string> fileContent_vector = {
        "df","vb","nm","yh",
        "kl","df","nm","df",
        "yh","ws","xd","fg"
    };
    We must write algorithm to push content to vec_content_used_to_compare
    so that it looks like this:
    {"df","vb","nm","yh","kl","ws","xd","fg"}
    +There must be no duplicate elements in vec_content_used_to_compare

    */

    vector<string> vec_content_used_to_compare;
    findUniqueWords(fileContent_vector, vec_content_used_to_compare);
    
    int size = vec_content_used_to_compare.size();
    // Use vector for dynamic sizing to fix the problem 
    //that prevents us to declare a variation like: Data collection[size]
    vector<Data1> collection(size);

    addContentToData1(size, collection,
    vec_content_used_to_compare, fileContent_vector);
    
    
    return 0;
}

void convertLower(string& str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void stringSplit(string str, string delim, vector<string>& tokens) {
    int start = 0, delimPos = str.find(delim);
    while (delimPos != string::npos) {
        string tkns = str.substr(start, delimPos - start);
        tokens.push_back(tkns);

        delimPos++;
        start = delimPos;

        delimPos = str.find(delim, delimPos);
        if (delimPos == string::npos) {
            string tkns2 = str.substr(start, delimPos - start);
            tokens.push_back(tkns2);
        }
    }
}

void findUniqueWords(vector<string> fileContent_vector,vector<string>& vec1) {
    string temp;
    string string_content_used_to_compare = "";

    for (int i = 0; i < fileContent_vector.size(); i++) {
        temp = fileContent_vector[i];
        if (string_content_used_to_compare.find(temp) == string::npos) {
            string_content_used_to_compare += temp + " ";
        }
    }
    stringSplit(string_content_used_to_compare, " ", vec1);
}


void addContentToData1(int size, vector<Data1> collection,
    vector<string> vec_content_used_to_compare, vector<string> fileContent_vector) {
    int countAppearance;
    string struct_temp, compare_temp2;

    for (int i = 0; i < size - 1; i++) {
        collection[i].word = vec_content_used_to_compare[i];

        countAppearance = 0;

        struct_temp = collection[i].word;

        for (int j = 0; j < fileContent_vector.size(); j++) {
            compare_temp2 = fileContent_vector[j];

            if (struct_temp == compare_temp2) {
                countAppearance++;
            }
        }
        collection[i].countAppear = countAppearance;

        cout << collection[i].word << " "
            << collection[i].countAppear << endl;
    }
}
