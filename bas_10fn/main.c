/*Упражнение 10 (fio_10fn). Использование функции пользователя.
     На базе исходника упражнения 9 реализовать  вычисление стоимости через
вызов функции пользователя fio_10fv, которая находится том же исходном файле,
с использованием передачи параметров по адресу.*/
#include <stdio.h>
#include <stdlib.h>
//users include with declarations
#include "header.h"

//function for calculating of cost
double bas_10fv (double materialPrice , double materialQuantity);

int main()
{      //declare variables
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

        //calculate cost via function
        matInf[i].materialCost = bas_10fv(matInf[i].materialPrice , matInf[i].materialQuantity);
        //print output
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",matInf[i].materialName,matInf[i].materialPrice,matInf[i].materialQuantity,matInf[i].materialCost);
        scanf("Type any letter");
        }
}

//function for calculating of cost implementation
double bas_10fv (double materialPrice , double materialQuantity){
    int result;
    result = materialPrice*materialQuantity;
    return result;
}
