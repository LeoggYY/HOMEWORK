#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {

    int n;
    char s[1000] = { 0 };
    int count[100] = { 0 };
    int i, j;

    scanf("%d", &n);
    getchar();

    while (n--) {

        gets(s);
            
        for (i = 0; i < strlen(s); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a' + 'A']++;
            }
            else {
                count[s[i]]++;
            }
        }
    }

    for (i = sizeof(s); i >= 1; i--) {
        for (j = 'A'; j <= 'Z'; j++) {
            if (count[j] == i) {
                printf("%c %d\n", j, i);
            }
        }
    }

    return 0;
}
