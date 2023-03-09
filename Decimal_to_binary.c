#include <stdio.h>

void decToBinary(int decimal);

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Binary equivalent of %d is: ", decimal);
    decToBinary(decimal);
    
    return 0;
}

void decToBinary(int decimal) {
    int remainder = decimal % 2;
    
    if (decimal <= 1) {
        printf("%d", decimal);
        return;
    }
    
    decToBinary(decimal / 2);
    printf("%d", remainder);
}
