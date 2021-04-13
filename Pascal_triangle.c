#include<stdio.h>
int main()
{
    int first, second, third, n, r;
    printf("Enter value of N: ");
    scanf("%d", &n);

    for(int j = 0; j <= n; j++){
        for (int c = 0; c <= (n - j - 2); c++)
        printf(" ");
        for(int i = 0; i <=j; i++){
            first = findNthFactorial(j);
            second = findRthFactorial(i);
            third = nMinusRthFactorial(j - i);

            int multiply_of_second_and_third = second * third;
            int result_of_instead_of_pascal_law = first / multiply_of_second_and_third;
            printf("%d ", result_of_instead_of_pascal_law);
        }
        printf("\n");
    }
}
int findNthFactorial(int n)
{
    if(n == 0){
        return 1;
    }
    return n * findNthFactorial(n - 1);
}

int findRthFactorial(int r)
{
    if(r == 0){
        return 1;
    }
    return r * findNthFactorial(r - 1);
}

int nMinusRthFactorial(int n)
{
    if(n == 0){
        return 1;
    }
    return n * nMinusRthFactorial(n - 1);
}
