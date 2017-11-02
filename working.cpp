
#include <cstdio>

using namespace std;

int main(int argc, char **argv) {

    int x = 7;
    int *ip = &x;
    int &y = x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    x = 42;
    printf("\nThe value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);


    y = 43;
    printf("\nThe value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    int z = 149;
    ip = &z;
    printf("\nThe value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    y = z;
    printf("\nThe value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of z is %d\n", z);



    return 0;
}

