/*Упражнение 8 (fio_08d). Использование #define.
     Аналогично упражнению 7 и на базе его исходника, но  размерность массива
структур определена с использованием #define.*/
#include <stdio.h>
#include <stdlib.h>
#define length 100

//define structure
struct materialInfo {
        char materialName[40];
        double materialPrice;
        double materialQuantity;
        double materialCost;
};

int main()
{       int i;
        //declare array with the help of #define
        struct materialInfo matInf[length];

        //loop 100 times until the first symbol in material name is "*"
        for(i=0;i<100;i++) {
        printf("Type material name: ");
        scanf("%s",matInf[i].materialName);

        if (matInf[i].materialName[0] == '*'){
            printf("Program terminated");
            break;
        }
        printf("Type material price: ");
        scanf("%lf",&matInf[i].materialPrice);

        printf("Type material quantity: ");
        scanf("%lf",&matInf[i].materialQuantity);

        //calculate cost
        matInf[i].materialCost = matInf[i].materialPrice * matInf[i].materialQuantity;
        //print output
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",matInf[i].materialName,matInf[i].materialPrice,matInf[i].materialQuantity,matInf[i].materialCost);
        scanf("Type any letter");
        }
}
