#include<stdio.h>
long findNthFactorial(int);
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d", &n);

    for(int j = 0; j < n; j++){
        for(int k=0; k<= (n-j-1);k++){
            printf(" ");
        }
        for(int i = 0; i <=j; i++){
            printf("%d ", findNthFactorial(j)/(findNthFactorial(i)*findNthFactorial(j-i)));
        }
        printf("\n");
    }
    for(int j = n; j >= 0; j--){
        for(int k=(n-j-1); k>=0 ;k--){
            printf(" ");
        }
        for(int i = j; i >= 0; i--){
            printf("%ld ", findNthFactorial(j)/(findNthFactorial(i)*findNthFactorial(j-i)));
        }
        printf("\n");
    }
}
long findNthFactorial(int n)
{
    if(n == 0){
        return 1;
    }
    return n * findNthFactorial(n - 1);
}
