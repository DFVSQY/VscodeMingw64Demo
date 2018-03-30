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

    return 0;
}