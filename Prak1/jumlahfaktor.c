#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int total = 0;
    int i;
    scanf("%d",&num);
    if(num>=1 && num<=1000000){
        for (i=1;i<=1000000;i++){
            if (num%i==0){total = total + i;}
        }
    } else {
        return 0;
    }

    printf("%d\n",total);

    return 0;
}
