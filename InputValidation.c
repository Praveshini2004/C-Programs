#include <stdio.h>
void GetInput() {
    int n;
    printf("Enter a number between 1 to 9:");
    scanf("%d", &n);
    
    if (!(n >= 1 && n <= 9)) {
        printf("Number out of range.\n");
        GetInput(); 
    } else {
        printf("You have entered: %d\n", n);
    }
}
int main() {
    GetInput();
    return 0;
}
