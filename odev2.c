#include <stdio.h>
#include <string.h>

int IsPalindrome(char *word) {
    int i, j;
    int length = strlen(word);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0; // Palindrom değil
        }
    }

    return 1; // Palindrom
}

int main() {
    char word[100];

    printf("Kelimeyi girin: ");
    gets(word);

    if (IsPalindrome(word)) {
        printf("%s bir palindrom kelime.\n", word);
    } else {
        printf("%s bir palindrom kelime değil.\n", word);
    }

    return 0;
}
