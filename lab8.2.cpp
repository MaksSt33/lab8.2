#include <iostream>
#include <string>

using namespace std;

string RemoveNonLetters(const string& str) {
    string result;
    for (char ch : str) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            result += ch;
        }
        if (ch == ' ') {
            break;
        }
    }
    return result; 
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str); 
    string result = RemoveNonLetters(str); 
    cout << "Result: " << result << endl; 
    return 0;
}
