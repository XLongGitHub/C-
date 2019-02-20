#include <iostream>

using namespace std;

int main()
{
    string s1 = "12";

    cout<<s1.empty()<<endl;

    string s2 =  "hello";

    for (auto &ch : s2) {
        ch = toupper(ch);
        cout<<ch<<" ";
    }

    cout << endl;
    cout << s2 << endl;

    string s3 = s1 + s2;
    cout << s3 << endl;

    if (!s3.empty()) {
        cout << s3[0] << endl;
    }
    return 0;   
}
