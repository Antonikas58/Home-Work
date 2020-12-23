/*Упражнение 16(fio_16fp). Реализация проекта.
     Из исходника упражнения 11 сделать отдельные исходные файлым для функции
main и функции пользователя и отработать создание проекта.*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
//separate function file
#include "function.c"

int main()
{
        //declare variables
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

        //calculate cost via external file function
        matInf[i].materialCost = bas_10fv(matInf[i].materialPrice , matInf[i].materialQuantity);

        //print output in case if price is bigger than 50
        if(matInf[i].materialPrice > 50 ){
           printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",matInf[i].materialName,matInf[i].materialPrice,matInf[i].materialQuantity,matInf[i].materialCost);
           scanf("Type any letter");
        }
        else{
            printf("Material should have price bigger than 50 in order to be printed\n");
        }

        }
}

