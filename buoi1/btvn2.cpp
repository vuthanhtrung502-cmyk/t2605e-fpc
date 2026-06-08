#include <stdio.h>
#include <math.h>
int main() {
    float P = 5000;
    float r = 0.08;
    int n = 3;
    float tien;
    tien = P * pow((1 + r), n);
    printf("So tien sau %d nam la: %.2f USD", n, tien);
}
