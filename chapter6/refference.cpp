#include <iostream>
#include <string>

using namespace std;

string::size_type findChar(const string &s, char c, string::size_type &occurs);
bool isContainUpper(const string &s);
void toSmall(string &s);

int main()
{
    string s = "torrow will be better";
    char c = 'e';
    string::size_type cnt = 0;

    cout << "frist appear " << findChar(s, c, cnt) << endl;
    cout << "cnt " << cnt << endl;

    string s2 = "Hello World!";

    cout << "contain upper " << isContainUpper(s2) << endl;
    toSmall(s2);
    cout << "to small " << s2 << endl;

    return 0;
}

void toSmall(string &s)
{
    int diff = 'a' - 'A';

    for (decltype(s.size()) i = 0; i < s.size(); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') {
            s[i] += diff;
        }
    }
}

bool isContainUpper(const string &s)
{
    for (decltype(s.size()) i = 0; i < s.size(); ++i) {
        if (s[i] <= 'Z' && s[i] >= 'A') {
            return true;
        }
    }

    return false;
}

string::size_type findChar(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;

    for (decltype(ret) i = 0; i != s.size(); i++) {
        if (s[i] == c) {
            if (ret == s.size()) {
                ret = i;    // 记录char第一次出现的位置
            }
            ++occurs;
        }
    }

    return ret;
}
