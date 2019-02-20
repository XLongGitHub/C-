#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int cmp(const char* , const char*);
int cmp(string s1, string s2);

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;

    while(*cp) {
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}

int cmp(const char *arr1, const char* arr2) {
    if (arr1 == NULL && arr2 == NULL) {
        return 0;
    } else if (arr1 == NULL && arr2 != NULL) {
        
    } 
    while (*arr1 != '\0' || *arr2 != '\0') {
        if (*arr1 - *arr2 != 0) {
            return *arr1 - *arr2;
        }
    }
    if (*arr1 == '\0' && *arr2 != '\0') {
        return -1;
    } else if (*arr1 == '\0' && *arr2 == '\0') {
        return 0
    } else {
        return 1;
    }
}
