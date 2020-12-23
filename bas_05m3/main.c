/*Упражнение 5 (fio_05m3). Работа с массивами в нескольких циклах
     Аналогично упражнению 4, но за 3 прохода по массиву (ввести, рассчитать
стоимость, вывод на консоль).*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int i = 0;
    int y;
    char materialName[100][40];
    double materialPrice[100];
    double materialQuantity[100];
    double materialCost[100];

    // loop 100 times until in material name the first  symbol is "*"
    for(i=0;i<100;i++) {
        printf("Type material name: ");
        scanf("%s",materialName[i]);

        if (materialName[i][0] == '*'){
            printf("Program terminated\n");
            break;
        }
        printf("Type material price: ");
        scanf("%lf",&materialPrice[i]);

        printf("Type material quantity: ");
        scanf("%lf",&materialQuantity[i]);

        }
    //calculate cost for each entry
    for(y=0;y<i;y++) {
        materialCost[y] = materialPrice[y] * materialQuantity[y];
        }
    //print result for each entry from array
    for(y=0;y<i;y++) {
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",materialName[y],materialPrice[y],materialQuantity[y],materialCost[y]);
        }
}
