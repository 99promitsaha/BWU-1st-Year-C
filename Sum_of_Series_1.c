/* This one is sum of series 1^2 + 2^2 .... n^2 */

#include <stdio.h>
#include<math.h>

int main(){
    int n, i, sum=0;
    printf("Enter the range n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        sum = sum + (pow(i, 2));
    }

    printf("The sum of the Series is = %d", sum);
    return (0);
}