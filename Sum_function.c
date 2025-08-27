#include<stdio.h>
#include<ctype.h>
int sum(int a, int b) {
    return a + b;
}
int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int c = sum(a,b);
    printf("Sum: %d\n", c);
    return 0;
}