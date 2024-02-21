#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *file;
    char fileName[] = "originalfile.txt";
    char line[MAX_LINE_LENGTH];
    int lineNumber, currentLine = 0;

    printf("Enter the line number to replace: ");
    scanf("%d", &lineNumber);

    file = fopen(fileName, "r+");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        currentLine++;
        if (currentLine == lineNumber) {
            printf("Enter the new line: ");
            fgets(line, MAX_LINE_LENGTH, stdin);
            fseek(file, -strlen(line), SEEK_CUR); 
            fprintf(file, "%s", line); 
            break; 
        }
    }
    fclose(file);

    printf("Line %d replaced successfully.\n", lineNumber);

    return 0;
}