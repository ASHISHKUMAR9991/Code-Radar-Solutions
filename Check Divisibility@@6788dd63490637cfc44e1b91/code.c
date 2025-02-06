# include<stdio.h>

int main() {
    int num;
    printf("enter an integer:");
    scanf("%d,&num");
    if(num % 5 == 0 && num % 11 == 0) {
        printf("divisible\n");
    }
    else {
        printf("not divisible\n");
    }
    return 0;
} 