#include<stdio.h>
int main()
{
    int first, second, third, n, r;
    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Enter value of R: ");
    scanf("%d", &r);
    first = findNthFactorial(n);
    second = findRthFactorial(r);
    third = nMinusRthFactorial(n - r);

    int multiply_of_second_and_third = second * third;
    int result_of_instead_of_pascal_law = first / multiply_of_second_and_third;
    printf("The Results is: %d", result_of_instead_of_pascal_law);

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
