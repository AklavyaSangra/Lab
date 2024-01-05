Write the c code to find the length of string.


  #include <stdio.h>

int main() {
    char a[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", a);

    int i, len = 0;
    for (i = 0; a[i] != '\0'; i++) {
        len++;
    }

    printf("Length of the string is = %d\n", len);

    return 0;
}
