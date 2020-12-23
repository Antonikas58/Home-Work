
/*”пражнение 2 (fio_02op). ќбъ€вление переменных
     »з исходника упражнени€ 1  сделать исходный файл где:
- объ€вить переменные "название материала", "цена", "количество","стоимость"
- ввести "название материала", "цена", "количество" с консоли после подсказки
- рассчитать "стоимость"
- вывести на консоль "название материала", "цена", "количество","стоимость"
- поставить в конце программы "¬веди любую цифру" дл€ того чтобы не выходить
  на экран пользовател€ дл€ проверки результата*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
        //declare variables
        char materialName[40];
        double materialPrice;
        double materialQuantity;
        double materialCost;

        //sequentially scan input from user and put to declared variables
        printf("Type material name: ");
        scanf("%s",materialName);

        printf("Type material price: ");
        scanf("%lf",&materialPrice);

        printf("Type material quantity: ");
        scanf("%lf",&materialQuantity);

        //calculate total cost
        materialCost = materialPrice * materialQuantity;

        //print output
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",materialName,materialPrice,materialQuantity,materialCost);
        scanf("Type any letter");
}
