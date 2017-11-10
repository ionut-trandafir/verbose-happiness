#include <cstdio>
#include <string>
#include "func.h"
using namespace std;


int main (int argc, char ** argv)
{
    string s = "Hello, I'm a string";
    puts("this is main()");
    func(s);
    printf("s is %s\n", s.c_str());
    return 0;
}

void func( const string & fs )
{
    printf("value is %s\n", fs.c_str());
}
