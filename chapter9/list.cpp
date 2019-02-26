#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string>  a = {"Milton" "Shakespeare", "Austen"};

    list<string>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << endl;
    }

    for (auto item : a) {
        // cout << *a << endl;

    }

    for ( decltype(a.size()) i = 0; i < a.size(); i++) {
        cout << a.sort() << endl;
        a.pop_front();
    }
    

    return 0;
}