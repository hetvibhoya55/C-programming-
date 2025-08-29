#include <stdio.h>
//Convert Dollars Into Pounds //

int main() {
    float dollars = 4;
    float dollar_to_rs = 48.0;
    float pound_to_rs = 70.0;
    float rupees, pounds;

    rupees = dollars * dollar_to_rs;
    pounds = rupees / pound_to_rs;

    printf("Dollars = %.2f\n Rupees = %.2f\n Pounds=%.2f\n", dollars, rupees, pounds);

    return 0;
}
