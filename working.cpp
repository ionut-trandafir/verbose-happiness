
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char **argv) {

    int a[] = { 1, 2, 3, 4, 5 };
    string s = "string";

    for(char c : s ) {
        printf ("element is: %c\n", c);
    }
    return 0;
}

