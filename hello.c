// main app
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Print count
void loopPrint(int times) {
    while(times > 0) {
        printf("times: %d\n", times);
        --times;
    } 
}
// Add two integers and retrieve the result
int sum(int a, int b) {
    return a+b;
}
// Subtract two numbers and return the result
int sub(int a, int b) {
    return a-b;
}
// Add exponential feature
double exponential(double n, double e) {
    return pow(n, e);
}
// swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// test
void printTest(void) {
    printf("test\n");
}

int main(void){
    printf("have a good day, nice\n");
    printf("nice to meet you\n");
    loopPrint(5);
    int a = 500;
    int b = 200;
    int sum_result = sum(a, b);
    printf("a = %d, b = %d, sum = %d\n", a, b, sum_result);
    a = 200;
    b = 100;
    int sub_result = sub(a, b);
    printf("a = %d, b = %d, subtract = %d\n", a, b, sub_result);
    //loopPrint(10);
    //loopPrint(20);
    //loopPrint(30);
    //loopPrint(50);
    //loopPrint(60);
    //loopPrint(70); // test fetch
    //test rename default branch is ready
    loopPrint(5);
    //okay
    a = 2;
    b = 5;
    double exp_result = exponential(a, b);
    printf("a = %d, b = %d, exponential = %.2f\n", a, b, exp_result);

    a = 100;
    b = 200;
    printf("before swap a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swap a = %d, b = %d\n", a, b);
    printTest();

    return 0;
}
