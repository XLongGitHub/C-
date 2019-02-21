#include <iostream>
#include <cstddef>

using namespace std;

void add(int a);

int main()
{
    for (size_t i = 0 ; i < 10; i++) {
        add(i);
    }
    
    return 0;
}

void add(int a)
{
    static int sum = 0;
    int local = 0;
    local += a;
    sum += a;
    cout << "sum = " << sum << endl;
    cout << "local = " << local << endl;
}