#include<stdio.h>
#include<math.h>

int main()
{
    int val1,val2,number,i;
    int count = 0;
    printf("Enter a positive number ");
    scanf("%d",&number);
    val1 = ceil(sqrt(number));
    val2 = number;
    for(i = 2;i<=val1;i++){
        if(val2%i == 0){
            count = 1;
        }
    }
    if((count == 0&&count!=1)||count==2||count==3)
         printf("%d is a prime number.",number);
    else
        printf("%d is not a prime number.",number);

    return 0;
}
