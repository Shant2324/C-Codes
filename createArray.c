#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    printf("You entered the following elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
