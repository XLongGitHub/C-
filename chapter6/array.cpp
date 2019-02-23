#include <iostream>

using namespace std;

// 10 是一个无效的长度
void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i) {
        cout << ia[i] << endl;
    }
}

void print(const int a[], size_t len)
{
    for (size_t i = 0; i < len; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print(const int a)
{
    cout << a << endl;
}

int main()
{
    int a[] = {1, 3, 4};

    // print(a);

    print(10);

    print(a, (size_t)3);

    return 0;
}
