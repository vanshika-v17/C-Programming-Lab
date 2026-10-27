#include<stdio.h>

struct rectangle {
    float length;
    float width;
    float area;
    float p;    
};                                                                                                            


int main() {
    struct rectangle r[10];

    printf("size = %zu bytes\n", sizeof(struct rectangle));
    
    for(int i = 0; i < 10; i++)
    {
        printf("Enter length:");
        scanf("%f", &r[i].length);

        printf("Enter width: ");
        scanf("%f", &r[i].width);

        r[i].area = r[i].length * r[i].width;
        r[i].p = 2 * (r[i].length + r[i].width);
    }


    for(int i = 0; i < 10; i++)
    {
        printf("Area = %f\n", r[i].area);
        printf("Perimeter = %f\n", r[i].p);
    }

    return 0;
}