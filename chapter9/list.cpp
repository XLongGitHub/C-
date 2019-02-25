#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string>  a = {"Milton" "Shakespeare", "Austen"};

    for (auto item = a.begin(); item != a.end(); item++) {
        cout << item << endl;
    }

    for (auto item : a) {
        // cout << *a << endl;
    }

    

    return 0;
}