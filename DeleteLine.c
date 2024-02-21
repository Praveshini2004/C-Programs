#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;
    int delete_line, temp = 1;
    printf("Enter file name: ");
    scanf("%s", filename);
    printf("Enter line number to delete: ");
    scanf("%d", &delete_line);
    fptr = fopen(filename, "r+");
    if (fptr == NULL) {
        printf("Cannot open file '%s'\n", filename);
        exit(1);
    }
    rewind(fptr);
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch == '\n')
            temp++;
        if (temp != delete_line)
            fputc(ch, fptr);
    }
    fclose(fptr);
    printf("Deleted line %d from file '%s' successfully.\n", delete_line, filename);
    return 0;
}
