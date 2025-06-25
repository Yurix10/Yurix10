#include<stdio.h>


int square_root(float x){
    return x^0.5;
}

int power(float x, float n){
    return x^n;
}

float add(float a, float b){
     return a + b;
}

float sub(float a, float b){
     return a - b;
}

float multi(float a, float b){
     return a * b;
}

float devide(float a, float b){
     if( b == 0){
         printf("Error");
     }
     
     return a/b;
}

float sine(float x){
     int sign;
     float sum;
}