#include <stdio.h>
int main(int argc, char **argv)
{
    int x=3;
    int y=9;
    int result=y^((x^y)&-(x<y));
    printf("this is the smallest number %d \n", result);
    return 0;
}
