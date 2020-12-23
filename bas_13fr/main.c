/*Упражнение 13(fio_13fr). Чтение файла.
     На базе исходника упражнения 11 реализовать чтение  ранее полученного
файла fio_12xx c выводом записей на консоль. */
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

