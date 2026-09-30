#include <stdio.h>
#include "home2_head.h"

int main(void)
{
    FILE *f = fopen("home2_data.txt", "r");
    if (f == NULL) {
        printf("File error\n");
        return -1;
    }
    
    if (func(f)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    fclose(f);
    return 0;
}