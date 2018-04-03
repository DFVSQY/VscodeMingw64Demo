#include <iostream>
#include <string>
#include "file1.h"
#include "file2.h"
using namespace std;

int main()
{
    string s = "hello world";
    cout << s << endl;

    testFile1();
    testFile2();

    char *p = (char *)malloc(100);
    if (p == nullptr)
    {
        cout << "malloc failed" << endl;
        exit(1);
    }
    cout << "malloc success" << endl;
    free(p);

    return 0;
}