#include <stdio.h>
#include "array.h"


void MakeEmpty (TabInt *T) {
    int i = 0;
    for (i = 0; i < IdxMax; i++){
        T->TI[i] = IdxUndef;
    }
    T->Neff = 0;
}

int NbElmt (TabInt T) {
    if (T.TI[0] == IdxUndef) {
        return 0;
    }
    return T.Neff;
}

//MARK: Masih ambigu
int MaxNbEl (TabInt T) { //Salah 4 klo ga dikurangin Neff
    return IdxMax - T.Neff;
}

//MARK: Wajib di cek
IdxType GetFirstIdx (TabInt T) {
    return IdxMin;
}

IdxType GetLastIdx (TabInt T) {
    return T.Neff;
}
//MARK : Wajib di cek //INI DI CEK CUK
ElType GetElmt (TabInt T, IdxType i) {
    return T.TI[i];
}

void SetTab (TabInt Tin, TabInt *Tout) {
    Tout = &Tin;
}

//Mark: Perlu dilihat //INI UDH BENER CUK
void SetEl (TabInt *T, IdxType i, ElType v) {
    T->TI[i] = v;
}

void SetNeff (TabInt *T, IdxType N) {
    T->Neff = N;
}






//MARK : Perlu dicek //INI DI CEK CUK
boolean IsIdxValid (TabInt T, IdxType i) {
    return i >= 0 && i <= IdxMax;
}
//MARK : Perlu dicek //INI DI CEK CUK
boolean IsIdxEff (TabInt T, IdxType i) {
    return i <= T.Neff && i >= 0;
}
boolean IsEmpty (TabInt T) {
    return 0 == T.Neff;
}

boolean IsFull (TabInt T) {
    return IdxMax == T.Neff;
}