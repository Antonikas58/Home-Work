/*Упражнение 9 (fio_09i). Использование #include пользователя.
     Аналогично упражнению 8, но  определение структуры  и размерность массива
вынесены в #include пользователя.*/
#include <stdio.h>
#include <stdlib.h>
//users include with declarations
#include "header.h"


int main()
{       //declare variables
        int i;
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
