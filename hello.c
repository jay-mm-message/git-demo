#include <stdio.h>
#include <stdlib.h>

void loopPrint(int times) {
    while(times > 0) {
        printf("times: %d\n", times);
        --times;
    } 
}
int main(void){
    printf("good day\n");
    loopPrint(5);
    return 0;
}