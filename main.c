#include <stdio.h>

int main() {
    int matriz[6][6], count = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }

    printf("\nQuantidade de valores maiores que 10: %d\n", count);
    
    return 0;
}
