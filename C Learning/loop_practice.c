#include <stdio.h>

int main() {
    int limit;

    printf("--- NEW GINTI GENERATOR ---\n");
    printf("Aapko kahaan tak ginti chahiye?: ");
    scanf("%d", &limit);

    printf("\n1 se %d tak ki ginti niche hai:\n", limit);
    
    // 1 से लेकर आपके नंबर तक गिनती प्रिंट करने का लूप
    for (int i = 1; i <= limit; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
