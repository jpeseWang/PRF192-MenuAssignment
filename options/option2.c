#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool check(long n) {
    char str[21];
    sprintf(str, "%d", n);
    char *a = str;
    char *b = str + strlen(str) - 1;
    while (b > a) {
        if (*a != *b) {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}

void option2() {
    FILE* file = fopen("./inputs/input2.txt", "r");
    int len, i;

    fscanf(file, "%d", &len);
    int arr[len];
    for (i = 0; i < len; i++) fscanf(file, "%d", &arr[i]);

    fclose(file);

    printf("The list of palindrome numbers in the array: ");
    for (int i = 0; i < len; i++){
        if (check(arr[i]) == 1) printf("%c ", arr[i]);
    }
}
