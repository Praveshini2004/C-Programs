#include <stdio.h>
int main() {
    FILE *file;
    char fileName[] = "file.txt";
    char ch;
    int lines = 0;
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);
    printf("Number of lines in the file: %d\n", lines);
    return 0;
}