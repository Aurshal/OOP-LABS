#include <stdio.h>
int main(){ 
    char *p = "idea without execution is worthess";
    int i = 0;
    while (*(p+i) != 'c')
        i++;
    printf("The position of the letter 'c' is: %d\n", (i + 1));
}