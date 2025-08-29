#include <stdio.h>
//Calculate Net Salary//

int main() {
    float gross = 1000;
    float allowance = 2500.0;
    float deduction = 3000.0;
    float net;

    net = gross + allowance - deduction;

    printf("Net Salary = %f", net);

    return 0;
}
