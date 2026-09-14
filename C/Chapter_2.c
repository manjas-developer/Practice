// Problem 1
#include <stdio.h>

int main(){
    printf("char dt = \'21 dec 2020\' is invalid!");
    return 0;
}

// Problem 2
#include <stdio.h>

int main(){
    float a = 3.0/8 - 2;
    printf("The value of a is: %f", a);
    return 0;
}

// Problem 3
#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The value of a%97 is %d\n", a % 97);
    return 0;
}

// Problem 4
#include <stdio.h>

int main(){
    // Explain step by step evaluation of 3*x/y - z+k, where x=2, y=3, z=3, k=1
    int x = 2, y = 3, z = 3, k = 1;

    int result = 3 * x / y - z + k;
    printf("3 * x / y - z + k\n");
    printf("= 3 * 2 / 3 - 3 + 1\n");
    printf("= 6 / 3 - 3 + 1\n");
    printf("= 2 - 3 + 1\n");
    printf("= %d\n", result);
    
    return 0;
}