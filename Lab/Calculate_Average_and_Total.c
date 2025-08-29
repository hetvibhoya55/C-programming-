#include <stdio.h>
//Calculate Average//

int main() {
    float s1 = 455.5;
    float s2 = 500.0;
    float s3 = 300.5;
    float total;
    float avg;

    total = s1 + s2 + s3;
    avg = total / 3;

    printf("Total = %f\n", total);
    printf("Average = %f\n", avg);

    return 0;
}
