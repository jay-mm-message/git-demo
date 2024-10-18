// main app
#include <stdio.h>
#include <stdlib.h>

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

int main(void){
    printf("have a good day, nice\n");
    printf("nice to meet you\n");
    loopPrint(5);
    int a = 100;
    int b = 200;
    int sum_result = sum(a, b);
    printf("a = %d, b = %d, sum = %d\n", a, b, sum_result);
    a = 200;
    b = 100;
    int sub_result = sub(a, b);
    printf("a = %d, b = %d, subtract = %d\n", a, b, sub_result);
    loopPrint(10);
    loopPrint(20);
    loopPrint(30);
    loopPrint(50);
    loopPrint(60);
    return 0;
}
