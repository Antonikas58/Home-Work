/*���������� 4 (fio_04m). ������ � ��������� � �����
     ��� ������������� ���������� �������� ������� �� 100 ��������� � ����������
�� ���� ������ ���� � ������� � ������, ���������� ��������� � ����� �� �������
�� ������� ���� �� ����� ������� � �������� ��������� ������ * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int i;
    char materialName[100][40];
    double materialPrice[100];
    double materialQuantity[100];
    double materialCost[100];

    //loop 100 times and put user input to arrays
    for(i=0;i<100;i++) {
        printf("Type material name: ");
        scanf("%s",materialName[i]);

        if (materialName[i][0] == '*'){
            printf("Program terminated");
            break;
        }
        printf("Type material price: ");
        scanf("%lf",&materialPrice[i]);

        printf("Type material quantity: ");
        scanf("%lf",&materialQuantity[i]);

        //calculate total cost
        materialCost[i] = materialPrice[i] * materialQuantity[i];

        //print output
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",materialName[i],materialPrice[i],materialQuantity[i],materialCost[i]);
        }
}
