#include <iostream>

//输出50到100之间的整数
int main()
{
    int i = 50;
    while( i <= 100) {
        std::cout << i++ << std::endl;
    }
    return 0;
}