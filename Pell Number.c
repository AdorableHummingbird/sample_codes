#include <stdio.h>

int main() {
    int n, a=1, b=0, c;
    printf("how many Pell numbers you want? ");
    scanf("%d",i);
    if(i>100) printf("error enter a number below 100!!");

    for(n=1; n<= 20; n++){
        c = a + 2*b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
