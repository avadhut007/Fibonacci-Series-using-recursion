#include <stdio.h>

int fibonacci(int n) 
{
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    int bottom[n+1]; // array elements from 0,1,2...n
    bottom[0]=0;
    bottom[1]=1;
    bottom[2]=1;
    int i;
    for(i=3;i<n+1;i++)
    {
       bottom[i]=bottom[i-1] +bottom[i-2];//calculate all fibbonacci numbers until n
    }
    return bottom[n];//return last element in array
    
};

int main() 
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}
