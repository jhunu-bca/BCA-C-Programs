#include <stdio.h>

int main() {
    // Program to find Area of Square

    int side, area;
    
    printf("Enter side of the Square: ");
    scanf("%d", &side);
    
    area = side * side;
    
    printf("Area of the Square: %d\n", area);

    return 0;
}