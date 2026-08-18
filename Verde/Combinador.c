#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int main() {
    char *a = (char*) calloc(MAX, sizeof(char));
    char *b = (char*) calloc(MAX, sizeof(char));

    if (a == NULL || b == NULL) return 1;

    while (scanf("%s %s", a, b) != EOF) {
        int ta = strlen(a);
        int tb = strlen(b);
        int max_len = (ta > tb) ? ta : tb;

        for (int i = 0; i < max_len; i++) {
            if (i < ta) {
                printf("%c", a[i]);
            }
            if (i < tb) {
                printf("%c", b[i]);
            }
        }
        printf("\n");
    }

    free(a);
    free(b);
    return 0;
}