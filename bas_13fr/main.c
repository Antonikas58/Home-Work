/*���������� 13(fio_13fr). ������ �����.
     �� ���� ��������� ���������� 11 ����������� ������  ����� �����������
����� fio_12xx c ������� ������� �� �������. */
#include <stdio.h>
#include <stdlib.h>
//users include with declarations
#include "header.h"

int main()
{       //variable declarations
        FILE *fptr;
        char ch;
        //open the file from previous directory
        fptr = fopen("../bas_12fw/bas_12xx.txt", "r");

        //if file was found print all lines till the end of file
         if (fptr != NULL){

         do {
             ch = fgetc(fptr);
             putchar(ch);

            } while(ch != EOF);

        }
        //close the file
        fclose(fptr);
}

