#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[101], str2[101];

    scanf("%s", str1);
    scanf("%s", str2);
    
    if (strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    }
    
    else if (strcasecmp(str1, str2) == 0) {
        printf("MIRIP\n");
    }
   
    else {
        printf("BERBEDA\n");
    }
    
    return 0;
}