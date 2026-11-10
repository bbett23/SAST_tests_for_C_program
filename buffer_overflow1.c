#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    char buffer2[10];
    char buffer3[10];
    // This line deliberately causes a buffer overflow
    strcpy(buffer, "This string is way too long for the buffer");
    strcpy(buffer2, "This string is way too long for the buffer");
    strcpy(buffer3, "This string is way too long for the buffer");
    printf("%s\n", buffer);
    printf("%s\n", buffer2);
    printf("%s\n", buffer3);
    return 0;
}
