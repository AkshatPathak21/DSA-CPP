#include <iostream>
#include <string>
#include <vector>
using namespace std;

void naivePatternSearch(const string& txt, const string& pat) {
    int N = txt.length();
    int M = pat.length();

    vector<int> occurrences;

    for (int i = 0; i <= N - M; ++i) {
        int j;
        for (j = 0; j < M; ++j) {
            if (txt[i + j] != pat[j])
                break;
        }
        if (j == M) {
            occurrences.push_back(i);
        }
    }

    if (occurrences.empty()) {
        cout << "Pattern not found in the text." << endl;
    } else {
        cout << "Pattern found at indices: ";
        for (int index : occurrences) {
            cout << index << " ";
        }
        cout << endl;
    }
}

int main() {
    string txt, pat;
    getline(cin, txt);
    getline(cin, pat);

    naivePatternSearch(txt, pat);

    return 0;
}
