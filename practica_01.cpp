#include<stdio.h>
#include<stdlib.h>
int main(){
    int opt;
    float a,b,c;
    printf("1.-suma\n2-resta\n3.-multiplicacion\n4.-divicion\n");
    scanf("%d",&opt);
    printf("ingrese el primer operando\n");
    scanf("%f",&a);
    printf("ingrese el segundo operando\n");
    scanf("%f",&b);
    if(opt==1){
        c=a+b;
    }
    else if(opt==2){
        c=a-b;
    }
    else if(opt==3){
        c=a*b;
    }
    else if(opt==4){
        while(b==0){
            printf("ERROR, b es igual que cero\n");
            printf("ingrese otro numero que no sea cero\n");
            scanf("%f",&b);
        }
        c=a/b;
    }
    else {
        printf("\nopcion incorrecta");
        c=0;
    }
    printf("\nel resultado es:%f",c);
}
