
/*���������� 2 (fio_02op). ���������� ����������
     �� ��������� ���������� 1  ������� �������� ���� ���:
- �������� ���������� "�������� ���������", "����", "����������","���������"
- ������ "�������� ���������", "����", "����������" � ������� ����� ���������
- ���������� "���������"
- ������� �� ������� "�������� ���������", "����", "����������","���������"
- ��������� � ����� ��������� "����� ����� �����" ��� ���� ����� �� ��������
  �� ����� ������������ ��� �������� ����������*/
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
