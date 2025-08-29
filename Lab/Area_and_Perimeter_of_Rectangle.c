#include <stdio.h>
//Calculate Area and Perimeter of Rectangle//

int main() {
    float l = 10.0;
    float b = 20.0;

    float area;
    float p;

    area = l * b;
    p = 2 * (l + b);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", p);

    return 0;
}
