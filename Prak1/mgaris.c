#include <stdio.h>
#include "garis.h"


int main () {
    POINT satu,dua;
    GARIS one;
 POINT new1,new2;
        GARIS two;
    int x;
    BacaPOINT(&satu); BacaPOINT(&dua);
    while (EQ(satu,dua)) {
        printf("Garis tidak valid\n");
        BacaPOINT(&satu); BacaPOINT(&dua);
    }
    MakeGARIS(satu,dua,&one);
    scanf("%d",&x);
    int i;
    int tegak = 0;
    int sejajar = 0;
    for (i = 0; i <x ; i ++) {
        BacaPOINT(&new1);BacaPOINT(&new2);
               while (EQ(new1,new2)) {
        printf("Garis tidak valid\n");
         BacaPOINT(&new1);BacaPOINT(&new2);
    }
        MakeGARIS(new1,new2,&two);
        if (IsTegakLurus(one,two)) {
            tegak +=1;
        }
        if (IsSejajar(one,two)) {
            sejajar +=1;
        }
    }
    printf("Sejajar: %d\nTegak lurus: %d\n", sejajar, tegak);
    return 0;
}
