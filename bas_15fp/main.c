/*Упражнение 15(fio_15fp). Позиционирование в файле.
     Сделать ввод с консоли символа управления (1 - начало файла, 2 - вперед,
3 - назад, 4 - в конец файла, 9 - выход из программы) и реализовать
позиционирование в файле fio_12xx с выводом на консоль полей записи.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
        //declare variables
        FILE *fptr;
        char line[200][255];
        int point;
        int i = 0;
        int tot = 0;

        //open the file from 12 task
        fptr = fopen("../bas_12fw/bas_12xx.txt", "r");

        //write file lines into array for future navigation
        while(fgets(line[i], 255 , fptr)){
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
        }
        tot = i;

         //navigate through array with user input
         if (fptr != NULL){
            for(;;){
               scanf("%d", &point);

                switch(point){
                case 1:
                    i = 0;
                    printf("%s\n", line[i]);
                    break;
                case 2:
                    i++;
                    //prevent from going out of array
                    if(i > tot - 1){i--;}
                    printf("%s\n", line[i]);
                    break;
                case 3:
                    i--;
                    //prevent from going out of array
                    if(i<0){i = 0;}
                    printf("%s\n", line[i]);
                    break;
                case 4:
                    i = tot;
                    printf("%s\n", line[i]);
                    break;
                case 9:
                    break;;
                }

                if(point == 9){
                      break;
                }
            };
        }
        //close the file
        fclose(fptr);
}

