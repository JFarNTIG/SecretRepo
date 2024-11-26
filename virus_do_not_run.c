#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **arv) {
    char xcvw[] = {
        0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x58,0x58,0x58,0x58,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20
    };
    char ppxm[] = {
        0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x0A,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x20,0x20,0x0A,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x0A,0x20,0x58,0x58,0x58,0x20
    };
    char abk8[] = {
        0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x0A,0x20,0x20
    };
    char mxlz[] = {
        0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x0A,0x20,0x58,0x58,0x58,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20,0x0A,0x20,0x58,0x58,0x58,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x0A,0x20,0x58,0x58,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x0A,0x20,0x58,0x58,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x0A,0x20,0x58,0x58,0x58,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x0A,0x20,0x58,0x58,0x58,0x58,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x58,0x58,0x58,0x20,0x20,0x20,0x0A,0x20,0x20,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x20,0x20,0x20
    };
    char **bkbna2 = (char**)malloc(sizeof(char*) * 4);
    unsigned long long paccmk = xcvw[0xa] % 4;
    bkbna2[paccmk++] = abk8;
    bkbna2[paccmk++] = ppxm;
    bkbna2[paccmk++] = mxlz;
    bkbna2[paccmk++] = xcvw;
    while(paccmk) {
        printf("%s",bkbna2[4- paccmk--]);
    }
    printf("\n");
    free(bkbna2);
    return 0;
}