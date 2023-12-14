#include <stdio.h>
#include <math.h>

int main(){
    float kg,h;
    
    printf("nhap can nang tinh bang kg:");
    scanf("%f",&kg);
    
    printf("nhap chieu cao tinh bang met:");
    scanf("%f",&h);
    
    float BMI=(kg)/(h*h);
    printf("BMI=%f\n",BMI);

    if(BMI<18.5){
        printf("gay");
    }else{
        if(BMI>18.5 && BMI<24.9){
        printf("binh thuong");
    }else{
        if(BMI>=25 && BMI<30){
        printf("thua can");
    }else{
        if(BMI>=30){
        printf("beo phi");
      
    }
}
}
}

