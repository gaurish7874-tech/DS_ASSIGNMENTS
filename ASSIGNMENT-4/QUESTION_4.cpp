#include <iostream>
#include <queue>
#include <vector>
using namespace std;

char firstNonRepeatingChar(string s) {
    vector<int> count(256, 0);
    queue<char> q;

    for (char c : s) {
        count[c]++;
        q.push(c);

        while (!q.empty() && count[q.front()] > 1)
            q.pop();

        if (!q.empty())
            cout << q.front() << " ";
        else
            cout << "-1 ";
    }
    cout << endl;
    return q.empty() ? '-1' : q.front();
}

int main() {
    string s = "aabc";
    cout << "First non-repeating characters sequence: ";
    firstNonRepeatingChar(s);
    return 0;
}

