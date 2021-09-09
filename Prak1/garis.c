#include <stdio.h>
#include "garis.h"



void MakeGARIS (POINT P1, POINT P2, GARIS * L) {
    L->PAw = P1; // ini bisa lo ganti dengan Pawal(L)
    L->PAkh = P2;
}

void BacaGARIS (GARIS * L) {
    POINT p1,p2;
    while (EQ(p1,p2)) {
        printf("Masukan Garis : \n");
        BacaPOINT(&p1);
        BacaPOINT(&p2);
    }
    MakeGARIS (p1,p2,L);
}

void TulisGARIS (GARIS L) {
    printf("(%2.f,%2.f),(%2.f,%2.f)",L.PAw.X,L.PAw.Y,L.PAkh.X,L.PAkh.Y);
    // alternatifnya lo bisa pake fungsi tulis point, cuma kan lo ga include disini pen
}
float PanjangGARIS (GARIS L) { //MARK: Need to work on it ASAP
    return Panjang(L.PAw,L.PAkh);
}

float Gradien (GARIS L) {
    return (Ordinat(PAwal(L)) - Ordinat(PAkhir(L)))/(Absis(PAwal(L)) - Absis(PAkhir(L)));
}

void GeserGARIS (GARIS * L, float deltaX, float deltaY) {
    L->PAw.X += deltaX;
    L->PAw.Y += deltaY;
    L->PAkh.X += deltaX;
    L->PAkh.Y += deltaY;
}

boolean IsTegakLurus (GARIS L1, GARIS L2) {
    return Gradien(L1)*Gradien(L2) == -1;
}
boolean IsTegakLurus (GARIS L1, GARIS L2) {
    return Gradien(L1) ==Gradien(L2);
}
