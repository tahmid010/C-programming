#include<stdio.h>
struct  XYZ{
    int x;
    float y;
    char z;
};

int main(){
    struct XYZ arr[2];
    int sz = (char*)&arr[1] - (char*)&arr[0];
    printf("%d",sz);
    return 0;
}
