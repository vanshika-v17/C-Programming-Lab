#include<stdio.h>

struct rectangle {
    float length;
    float width;
    float area;
    float perimeter;
};

int main() {

    struct rectangle r1;

    printf("Enter length:");
    scanf("%f", &r1.length);

    printf("Enter width:");
    scanf("%f", &r1.width);

    r1.area = r1.length * r1.width;
    r1.perimeter = 2 * (r1.length + r1.width);

    printf("Area = %f\n", r1.area);
    printf("Perimeter = %f\n", r1.perimeter);

    return 0;
}