
#include <stdio.h>
#include <stdlib.h>
int main() {
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    int possivel = 0;
    for (int doses = 1; doses * D <= C; doses++) {
        int Ml_leite = C - doses * D;
        if (Ml_leite >= A && leite <= B) {
            possivel = 1;
            break;
        }
    }

    if (possivel)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
