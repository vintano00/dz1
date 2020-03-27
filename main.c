#include <stdio.h>

int count_digits(char *itsString){

       int i, j, dig=0;

       for (i=0; i<10; i++){

       for (j = 48; j < 58; j++)
              if (itsString[i]==j){
                  dig++;
}
}
       return dig;
}

    int main(){

          char itsString[10];

                 printf( "String is: " );

                fgets( itsString, 10, stdin );

                 printf("Count of dig is:%d", count_digits(itsString));

return 0;
}
