#include<sdtio.h>
int main()
{
    int fact=1,q,result=0,number,rem;
    printf("Enter a number\n");
    scanf("%d",&number);
    q = number;
    while(q!=0){
        rem = q%10;
        for(int i = 1;i<=rem;i++){
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }
    if(result == number){
        printf("%d is a strong number.",number);
    }
    else{
        printf("%d is not a strong number.",number);
    }
    return 0;
}
