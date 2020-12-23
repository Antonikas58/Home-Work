
/*Упражнение 3 (fio_03c). Работа в цикле
     Вышеуказанные переменные вводить с консоли и выволить на консоль пока
не будет введена в названии материала первая * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    char materialName[40];
    double materialPrice;
    double materialQuantity;
    double materialCost;

    //endless loop until in material name the first  symbol is "*"
    for(;;) {
        //sequentially scan input from user and put to declared variables
        printf("Type material name: ");
        scanf("%s",materialName);

        if (materialName[0] == '*'){
          printf("Program terminated");
          break;
        }
        printf("Type material price: ");
        scanf("%lf",&materialPrice);

        printf("Type material quantity: ");
        scanf("%lf",&materialQuantity);

        //calculate total cost
        materialCost = materialPrice * materialQuantity;

        //print output
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",materialName,materialPrice,materialQuantity,materialCost);
  }

}
