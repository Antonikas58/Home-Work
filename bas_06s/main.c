/*���������� 6 (fio_06s). ���������� ��������
     ���������� ���������� 2 � ��  ���� ��� ���������, �� ���������� ��������
��� ������� ���������.*/
#include <stdio.h>
#include <stdlib.h>

//declare structure
struct materialInfo {
        char materialName[40];
        double materialPrice;
        double materialQuantity;
        double materialCost;
};

int main()
{
        //scan user input and put to the structure
        struct materialInfo matInf;
        printf("Type material name: ");
        scanf("%s",matInf.materialName);

        printf("Type material price: ");
        scanf("%lf",&matInf.materialPrice);

        printf("Type material quantity: ");
        scanf("%lf",&matInf.materialQuantity);

        //calculate cost
        matInf.materialCost = matInf.materialPrice * matInf.materialQuantity;
        printf("Material name: %s Price: %f Quantity: %f Cost: %f\n",matInf.materialName,matInf.materialPrice,matInf.materialQuantity,matInf.materialCost);
        scanf("Type any letter");
}
