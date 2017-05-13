#include <iostream>
#include "head1.h"


void massive (int *p,int n);
void printik (element e,int n);
int relationship (element e,int n,int k);
void relation (element v,int k,element e);
void rel (element e,int n);

int main() {
    int n = 10;
    int *p = (int *) calloc(n, 4);
    massive(p, n);
    printf("\n");
    element e[n];
    e[0] = {"H", 1, 1, 0.000089};

    //element *y=(element *) calloc (n,sizeof(e1));
    e[1] = {"Ra", 226, 88, 5};
    e[2] = {"F", 19, 9, 0.001696};
    e[3] = {"Pm", 145, 61, 6.475};
    e[4] = {"Nh", 286, 113, 0};
    e[5] = {"Mc", 289, 115, 0};
    e[6] = {"Ne", 20, 10, 0.0008999};
    e[7] = {"Zn", 65, 30, 7.133};
    e[8] = {"P", 31, 15, 1.82};
    e[9] = {"Ta", 181, 73, 16.6};

    for (int i = 0; i < n; i++) {
        printik(e[i], n);
    };
    printf("\n");

//element *y;
    for (int i = 0; i < n; i++) {
        rel(e[i], n);
    };
    printf("\n");
    free(p);
    return 0;
}

void printik (element e,int n){
    printf("%-5s%-5d%-5d%-5f\n",e.name,e.A,e.Z,e.Density);
}

void massive (int *p,int n){
    for (int i=0;i<n;i++,p++){
        *p=rand()%126;
        printf("%-5d",*p);
    }
}

    void rel (element e,int n){
        if ((((e.A)/(e.Z))+((e.A)%(e.Z)))>2.2)
            printik(e, n);
            //k++;
    }

/*
 * int rel (element e,int n,int k){
        if ((((e.A)/(e.Z))+((e.A)%(e.Z)))>2.2)
            //printik(e, n);
            k++;
            return k;
    }
 *
 *
 *
 * int k=0;
for (int i=0;i<n;i++) {
    k=relationship(e[i],n,k);
};

element v[k];
for (int i=0;i<k;i++) {
    v[i]=relation(k,e[i]);
    printik(v[i],k);
};
return 0;
}
element relation (int k,element e){
    if ((((e.A)/(e.Z))+((e.A)%(e.Z)))>2.2)
        v=e;
return v;
}*/















