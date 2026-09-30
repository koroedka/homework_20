#include "home2_head.h"

int func(FILE *f)
{
    int num1, num2, current;
    int count1 = 0, count2 = 0, CNT = 0;
    
    if (fscanf(f, "%d", &num1) != 1) return 0;
    if (fscanf(f, "%d", &current) != 1) return 1;
    
    if (num1 == current) {
        count1 = 2; 
        CNT = 1;
    } else {
        count1 = count2 = 1; 
        CNT = 2; 
        num2 = current;
    }
    
    while (fscanf(f, "%d", &current) == 1)
    {
        if (current == num1) count1++;
        else if (CNT == 1) {
            num2 = current;
            count2 = 1;
            CNT = 2;
        }
        else if (current == num2) count2++;
        else CNT = 3;
    }
    
    if (CNT > 2) return 0;
    if (count1 > 1 && count2 > 1) return 0;
    return 1;
}