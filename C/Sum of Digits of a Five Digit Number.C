#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    char str_buffer[6];

    scanf("%d", &n);
    snprintf(str_buffer, 6, "%d", n);

    int result = 0;
    for (int i = 0; i < 5; i++) {
        result += str_buffer[i] - '0';
    }

    printf("%d", result);
    return 0;
}