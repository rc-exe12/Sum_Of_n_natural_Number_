#include<stdio.h>
int n_sum(int);
int main(){
    int n;
    printf("Enter a n value");
    scanf("%d",&n);
    int r=n_sum(n);
    printf("The sum is %d",r);
return 0;
}
int n_sum(int n){
    int sum=0;
if(n==1){
    return 1;
}
else{
   return  n+n_sum(n-1); 
    
}
}

