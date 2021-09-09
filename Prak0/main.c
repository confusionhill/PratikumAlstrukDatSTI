#include <stdio.h>
#include <math.h>
#include "./Header/point.h" 

int main() {
    POINT p1 = MakePOINT(0,0);
    if (!IsOrigin(p1)) {
        printf("There's something wrong!");
        return 1;
    }
    POINT p2 = MakePOINT(1,1);
    
    TulisPOINT(p1);
    return 0;
}