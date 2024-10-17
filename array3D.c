#include <stdio.h>

     int main (){
        int i,j,k;

          
        int marks[2][3][3] = {{10, 20, 30,}, {60, 50, 40}, {60, 30, 40}};
        for(i=0;i<2;i++){
            for(j=0;j<3;j++)
               for (k=0;k<3;k++)
        

            printf("Marks[%d][%d]; = %d\
            n" ,i,j,k, marks[i][j][k]);

        }
     }
     