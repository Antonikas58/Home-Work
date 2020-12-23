/*���������� 14(fio_14fc). ����������� �����.
     �� ���� �������� ������� ���������� 13 � 12 ����������� ������ �����
����������� ����� fio_12xx c ������� � ���� fio_14xx. */
#include <stdio.h>
#include <stdlib.h>

int main()
{       //variable declaratio
        FILE *fptr;
        FILE *fptrNew;
        char ch;

        //open previously created file for reading and create new file for writing
        fptr = fopen("../bas_12fw/bas_12xx.txt", "r");
        fptrNew = fopen("bas_14xx.txt", "w");

        //if file was read then loop over characters and put to a new file
         if (fptr != NULL){
            do{
               ch = getc(fptr);
               if (ch != EOF) {
                putc(ch, fptrNew);
               }
              }
            while( EOF != ch );

            //close both files
            fclose(fptr);
            fclose(fptrNew);

        }
}

