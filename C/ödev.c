#include <stdio.h>
#include <string.h>

int main (){
    int x = 10;
    if (x > 5) {
        printf("x is greater than 5\n");
    }

    int age = 18;
    if (age>=18) {
    printf("You are an adult\n");
    }

    int temperature = 30;
    if (temperature >= 25){
        printf("It's hot outside.\n");
    }

    int M = 10;
    if(M >50) {
        printf("M is greater than 5\n");
    }else {
        printf("M is not greater than 5 \n");
    }


    int yas = 16;
    if (yas>=18){
        printf("You are an adult\n"); 
    }else{
        printf("You are a minor\n");
    }


    int number = 10;
    if(number % 2 == 0){
        printf("The number is even\n");     
    }else{
        printf("The number is odd\n");
    }

    int N = 10;
    if(N>10){
        printf("N is greater than 5\n");
    }else if (N == 10){
        printf("N is equal to 10\n");
    }else{
        printf("N is less than 10\n");
    }


    int score = 85;
    if (score>=90){
        printf("Grade : An");
    }else if (score>=80){
        printf("Grade : B\n");
    }else if (score>=70){
        printf("Grade : C\n");
    }else if (score>=60){
        printf("Grade : D\n");
    }else{
        printf("Grade : f\n");
    }
    
        
    char *day = "Monday";
     if (strcmp(day, "Monday") == 0) {     //strcmp fonksiyonu, C dilinde iki string (karakter dizisi) karşılaştırması yapmak için kullanılan bir fonksiyondur.
        printf("Start of the work week.\n");
     } else if(strcmp(day,"Wednesday") == 0){
        printf("Midweek\n");
     } else if(strcmp(day,"Friday") == 0){
        printf("End of the work week\n");
     } else {
        printf("Another Day\n");
     }    

    
    int K = 10;
    int y = 10;
    if (K > 5){
    
        if(y > 10){
            printf("K is greater than 5 and y is greater than 15\n");
    
        }
   
    }


    int sicaklik = 20;
    int humidity = 80 ;
    if (sicaklik > 15){
        if(humidity > 70){
            printf("It's warm and humid outside\n");
        }else{
            printf("It's warm but not humid outside.\n");
        }
    }else{
        printf("It's cold outside.\n");
    }

return 0 ;

}