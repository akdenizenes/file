/*
#include <stdio.h>

int main(){

     printf("Hello, Mars!\n");  \n bir alt satırdan kodun devam etmesini sağlar. \b backspace(kendinden önceki karakteri siler.)     tuşunun işlevi ğerçekleştirilir. 
                                \t yatay sekme. imleci bir sonraki sekme durağına hareket ettirir. \" çift tırnak işaretini basar.      
                                \\ ters bölü işaretini ekrana basar.

    return 0;
}


#include <stdio.h>

int main() {
    int x = 10, y = 3;
    int sum = x + y;
    int mod = x % y;
    printf("Sum: %d, Mod: %d\n", sum, mod);
    return 0;
}
*/

/*
#include <stdio.h>


int main(){
    /*
    int number1 = 10; 
    int number2 = 2;
    
    // int number1 = 10 , number2 = 2 ; 

    int number1 = 10, number2 = 3;

    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("Summation : %d, and Modulo : %d\n", sum,modulo);
    printf("Adress : %d \n " , &sum );
    printf("Adress : %x \n " , &sum );
  //printf("Adress int: %d \n " , &sum );
  //printf("Adress hex: %x \n " , &sum );

    return 0 ; 
}
*/

#include <stdio.h>

int main (){

    int number1 , number2 ;
    printf("Please give me number1: ");
    scanf("%d" ,&number1);
    printf("Please give me number2: ");
    scanf("%d" ,&number2);

    int sum = number1 + number2;
    int mod = number1 % number2;

    printf("Summation : %d, and Modulo : %d\n", sum,mod);
}