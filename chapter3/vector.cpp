#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    v.push_back("hello");
    v.push_back("vector");

    cout<<v.size()<<endl;
    for (auto item : v) {
        cout<<item<<endl;
    }

    vector<string> v2 = v;;
    v2.push_back("again");

    cout<<"v1 == v2 " +  (v == v2) <<endl;
    if(v == v2) {
        cout << "v1 == v2" << endl;
    } else {
        cout << "v1 != v2" << endl;
    }

    return 0;

}
