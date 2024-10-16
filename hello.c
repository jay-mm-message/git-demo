#include <stdio.h>
#include <stdlib.h>

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

int main(void){
    printf("good day\n");
    loopPrint(5);
    int a = 100;
    int b = 200;
    int sum_result = sum(a, b);
    printf("a = %d, b = %d , sum = %d\n", a, b, sum_result);
    return 0;
}