#include <stdio.h>
#include <string.h>

int main()
{
    char A[11], B[11], C[22];
    int lenA, lenB;

    scanf("%s", A);
    scanf("%s", B);

    lenA = strlen(A);
    lenB = strlen(B);

    strcpy(C, A);
    strcat(C, B);

    printf("%d %d\n", lenA, lenB);
    printf("%s\n", C);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("%s %s\n", A, B);

    return 0;
}