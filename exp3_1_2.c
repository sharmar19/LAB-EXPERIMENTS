#include<stdio.h>

int main()

{
    int weight, height, BMI;

    printf("Enter your weight: ");
    scanf("%d", &weight);

    printf("Enter your height: ");
    scanf("%d", &height);

    BMI=weight/(height*height);

    if(BMI>0 && BMI<15){
        printf("Starvation");
    }
    else if(BMI>15.1 && BMI<17.5){
        printf("Anorexic");
    }
    else if(BMI>17.6 && BMI<18.5){
        printf("Underweight");
    }
    else if(BMI>18.6 && BMI<24.9){
        printf("Ideal");
    }
    else if(BMI>25 && BMI<25.9){
        printf("Overweight");
    }
    else if(BMI>26 && BMI<39.9){
        printf("Obese");
    }
    else{
        printf("Morbidity Obese");
    }
        
}
