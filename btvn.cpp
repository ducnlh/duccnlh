#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("nhap canh a=");
    scanf("%d",&a);
    
    int b;
    printf("nhap canh b=");
    scanf("%d",&b);
    
    int c;
    printf("nhap canh c=");
    scanf("%d",&c);
    
    if ((a+b>c)&&(a+c>b)&&(b+c>a)){
    //yes
    printf("a,b,c la ba canh cua tam giac");
    
    int P=a+b+c;
    printf("chu vi cua tam giac la:%d",P);
    
    int S= sqrt(P * (P-a) * (P-b) *(P-c));
    printf("dien tich cua tam giac la:%d",S);
    
    }else{
        //no
        printf("a,b,c k phai 3 canh cua tam giac");
    }
    
}
