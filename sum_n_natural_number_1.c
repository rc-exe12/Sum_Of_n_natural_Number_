#include<stdio.h>
void n_sum(int);
int main(){
    int n;
    printf("Enter a n value");
    scanf("%d",&n);
    n_sum(n);
return 0;
}
void n_sum(int n){
int i=1,sum=0;
    while(i<=n)
{
    sum=sum+i;
i++;
}
printf("The sum of  numbers is: %d",sum);
}
