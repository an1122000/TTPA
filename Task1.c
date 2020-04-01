#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Input n: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("This variable is invalid!");
    }else{
        for(int i = 0; i <= n; i++){
            sum += i;
        }
        printf("Total from 1 to %d is %d",n , sum);
        return 0;
    }
}