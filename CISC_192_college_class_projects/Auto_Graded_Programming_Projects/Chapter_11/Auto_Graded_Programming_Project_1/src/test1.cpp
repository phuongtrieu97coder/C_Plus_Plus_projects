// Write your code below
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

struct WordCount {
    std::string word;
    int count;
};

std::string toLowerCase(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    std::ifstream file("words.txt");
    if (!file) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    std::vector<WordCount> wordCounts;
    std::string word;

    while (file >> word) {
        std::string lowerWord = toLowerCase(word);
        bool found = false;
        
        for (auto& wc : wordCounts) {
            if (wc.word == lowerWord) {
                wc.count++;
                found = true;
                break;
            }
        }

        if (!found) {
            WordCount newWordCount = { lowerWord, 1 };
            wordCounts.push_back(newWordCount);
        }
    }

    file.close();

    for (const auto& wc : wordCounts) {
        std::cout << wc.word << " " << wc.count << std::endl;
    }

    return 0;
}
