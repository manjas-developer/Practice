// Problem 1
#include <stdio.h>

int main(){
    int a = 10;
    if(a=11) 
        printf("I am 11\n");
    else 
        printf("I am not 11\n");
    return 0;
}

// Problem 2
 #include <stdio.h>
 
 int main(){
    int maths, science, computer, total;
    printf("Enter your marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter your marks for Science: ");
    scanf("%d", &science);
    printf("Enter your marks for Computer: ");
    scanf("%d", &computer);
    total = (maths + science + computer)/3;
    if(maths>=33 && science>=33 && computer>=33 && total>=40)
        printf("You have passed the exam\n");
    else
        printf("You have failed the exam\n");
    return 0;
 }

// Problem 3
#include <stdio.h>

int main(){
    float income;
    printf("Enter your annual income in lakhs: ");
    scanf("%f", &income);
    if(income<=2.5) 
        printf("You don't have to pay tax\n");
    else if(income>2.5 && income<=5) 
        printf("You have to pay 5%% tax\n");
    else if(income>5 && income<=10) 
        printf("You have to pay 20%% tax\n");
    else 
        printf("You have to pay 30%% tax\n");
    return 0;
}

// Problem 4
#include <stdio.h>

int main(){
    int year;
    printf("Enter your year: ");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0 || year%400==0) 
        printf("%d is a leap year\n", year);
    else 
        printf("%d is not a leap year\n", year);
    return 0;
}

// Problem 5
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 97 && ch <= 122){
        printf("%c is a lowercase letter\n", ch);
    }
    else{
        printf("%c is not a lowercase letter\n", ch);
    }
    return 0;
}

// Problem 6
#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3){
        printf("%d is the largest number\n", num1); 
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the largest number\n", num2);
    }
    else if(num3>num1 && num3>num2){
        printf("%d is the largest number\n", num3);
    }
    else if(num1==num2 && num1>num3){
        printf("%d and %d are the largest numbers\n", num1, num2);
    }
    else if(num1==num3 && num1>num2){
        printf("%d and %d are the largest numbers\n", num1, num3);
    }
    else if(num2==num3 && num2>num1){
        printf("%d and %d are the largest numbers\n", num2, num3);
    }
    else{
        printf("All three numbers are equal\n");
    }
    return 0;
}