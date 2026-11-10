#include <string>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string values;
    getline(cin, values);

    string tmpl;
    getline(cin, tmpl);

    map<string, string> dict;
    stringstream ss(values);
    string pair;
    while (getline(ss, pair, ',')) {
        size_t eq = pair.find('=');
        if (eq != string::npos) {
            string key = pair.substr(0, eq);
            string val = pair.substr(eq + 1);
            dict[key] = val;
        }
    }

    string result = "";
    size_t i = 0;
    while (i < tmpl.length()) {
        if (tmpl[i] == '[') {
            size_t j = tmpl.find(']', i);
            if (j != string::npos) {
                string key = tmpl.substr(i + 1, j - i - 1);
                if (dict.find(key) != dict.end()) {
                    result += dict[key];
                } else {
                    result += tmpl.substr(i, j - i + 1);
                }
                i = j + 1;
                continue;
            }
        }
        result += tmpl[i];
        i++;
    }

    cout << result << endl;
    return 0;
}
