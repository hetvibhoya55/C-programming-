#include <stdio.h>
//Calculate Net Sales//

int main() {
    float gross = 5000;
    float net;

    net = gross - (0.10 * gross);

    printf("Net Sales = %f", net);

    return 0;
}
