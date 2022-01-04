#include <stdio.h>

typedef struct vector{
    int i;
    int j;
    int k;
} vect;

vect sum(vect v1,vect v2){
    vect r;
    r.i = v1.i + v2.i;
    r.j = v1.j + v2.j;
    r.k = v1.k + v2.k;
    return r;
}

vect diff(vect v1,vect v2){
    vect r;
    r.i = v1.i-v2.i;
    r.j = v1.j-v2.j;
    r.k = v1.k-v2.k;
    return r;
}

vect dotProduct(vect v1,vect v2){
    vect r;
    r.i = v1.i * v2.i;
    r.j = v1.j * v2.j;
    r.k = v1.k * v2.k;
    return r;
}

vect crossProduct(vect v1,vect v2){
    vect r;
    r.i = v1.j*v2.k - v2.j*v1.k;
    r.j = -(v1.i*v2.k - v2.i*v1.k);
    r.k = v1.i*v2.j - v2.i*v1.j;
    return r;
}

void show_vect(vect v){
    printf("%di + %dj + %dk\n",v.i,v.j,v.k);
}

int main(){
    vect a = {2,3,4};
    vect b = {1,5,6};
    vect r;
    vect s;
    vect d;
    vect c;
    r = sum(a,b);
    show_vect(r);
    s = diff(a,b);
    show_vect(s);
    d = dotProduct(a,b);
    show_vect(d);
    c = crossProduct(a,b);
    show_vect(c);
    return 0;
}