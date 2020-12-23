     /*Упражнение 12 (fio_12fw). Вывод в файл.
     Аналогично упражнению 11 и на базе его исходника, но  вывод на консоль
заменяется на вывод в последовательный файл fio_12xx.*/
#include <stdio.h>
#include <stdlib.h>
//users include with declarations
#include "header.h"

//function for calculating of cost
double bas_10fv (double materialPrice , double materialQuantity);

int main()
{       //create file if not exist (use append)
        FILE *fptr;
        fptr = fopen("bas_12xx.txt", "a");

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

        //print output to the file only when price is bigger than 50
        if(matInf[i].materialPrice > 50 ){
           fprintf(fptr, "Material name: %s Price: %f Quantity: %f Cost: %f\n",matInf[i].materialName,matInf[i].materialPrice,matInf[i].materialQuantity,matInf[i].materialCost);
        }
        else{
            printf("Material should have price bigger than 50 in order to be added to the file\n");
        }


        }
        //close the file
        fclose(fptr);
}

//function for calculating of cost implementation
double bas_10fv (double materialPrice , double materialQuantity){
    int result;
    result = materialPrice*materialQuantity;
    return result;
}
