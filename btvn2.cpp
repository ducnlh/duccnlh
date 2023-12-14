#include <stdio.h>
#include<math.h>

int main(){
    
    int a,b,c;
    
    printf("nhap a=");
    scanf("%d",&a);
    
    printf("nhap b=");
    scanf("%d",&b);
    
    printf("nhap c=");
    scanf("%d",&c);
    
    float d=b*b-4*a*c;
    
    if (d>0){
        //yes
        float x1 = (-b - sqrt(d))/(2*a);
        float x2 = (-b + sqrt(d))/(2*a);
        printf("phuong trinh co 2 nghiem x1=%f,x2=%f",x1,x2);
    }else{
        //no
        if (d<0){
            //yes
            printf("phuong trinh vo nghiem");
         }else{
             //d=0
            //no
            float x=(-b)/(2*a);
         
            printf("phuong trinh co nghiem kep x1=x2=%f",x);
         }
        }
    }
        
     
    
    



    
    
