/*���������� 7 (fio_07ms). ������ � �������� �������� � �����.
     �� ���� ��������� ���������� 6 �������� ������ ��������  � ����������
���������� ���������� 4 �� ���� ������ ���� � ������� � ������, ����������
��������� � ����� �� ������� �� ������� ���� �� ����� ������� � ��������
��������� ������ * */
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
        int i;
        //declare array of structures
        struct materialInfo matInf[100];

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
