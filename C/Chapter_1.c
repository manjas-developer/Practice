// Problem 1
#include <stdio.h>

int main(){
    // int length = 34;
    // int breadth = 6;
    int length, breadth;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    printf("The area of this rectangle is %d", length*breadth);
    return 0;
}

// Problem 2
#include <stdio.h>

int main(){
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    int h;
    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);
    printf("The area of circle with radius %d is %f", r, 3.14*r*r);
    printf("\n");
    printf("The area of cylinder with radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}

// Problem 3
#include <stdio.h>

int main(){
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c*9.0/5.0) + 32;
    printf("The temperature in Fahrenheit is %f", f);
    return 0;
}

// Problem 4
#include <stdio.h>

int main(){
    int r, t;
    float p;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest: ");
    scanf("%d", &r);
    printf("Enter Time in years: ");
    scanf("%d", &t);
    printf("The Simple Interest is %f", (p*r*t)/100);
    return 0;
}