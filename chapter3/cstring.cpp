#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int cmp(const char* , const char*);
int cmp(string s1, string s2);

void print(char * c);

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;

    while(*cp) {
        cout << *cp << " ";
        ++cp;
    }
    cout<<endl;

    char arr1[] = {"hello"};
    char arr2[] = {"again"};
    cout << cmp(arr1, arr2) << endl;
    cout << " arr1 " << arr1 << " ,arr2 " << arr2 << endl;
    string s1 = arr1;
    string s2 = arr2;
    
    cout << " s1 " << s1 << " ,s2 " << s2 << endl;

    string  s3 = s1 + ", " + s2;
    cout << " s3 " << s3 << endl;

    const char * arr3 = s3.c_str();
    cout << arr3 << endl;

    s1[0] = 'X';
    arr1[0] = 'x';

    cout << "s1 " << s1 << endl;
    cout << "arr1 " << arr1 << endl;

    print(arr1);
    cout << "arr1: " <<  arr1 << endl;
    
    return 0;
}

void print(char *c)
{
    cout << "length of c " << strlen(c) << endl;
    string s = c;
    s[0] = 'a';
    cout << "c: " << c << endl;
    cout <<"string: " << s << endl;
}

int cmp(const char *arr1, const char* arr2)
{
    if (arr1 == NULL && arr2 == NULL) {
        return 0;
    } else if (arr1 != NULL && arr2 == NULL) {
        return 1;
    } else if (arr1 == NULL && arr2 != NULL) {
        return -1;
    } else {
        while (*arr1 != '\0' || *arr2 != '\0') {
            if (*arr1 - *arr2 != 0) {
                return *arr1 - *arr2 > 0 ? 1 : -1;
            }
        }
        if (*arr1 == '\0' && *arr2 != '\0') {
            return -1;
        } else if (*arr1 == '\0' && *arr2 == '\0') {
            return 0;
        } else {
            return 1;
        }
    }
}
