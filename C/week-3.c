/*
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }
    return 0;
}*/
/*
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {   // 2 adım arttırmak için i+=2
        printf("i = %d\n", i);
    }
    return 0;
}

#include <stdio.h>

int main() {
/*
int a = 5;
int b = a++;
int c = ++a;
printf("a: %d\n", a);
printf("b: %d\n", b);
printf("c: %d\n", c);
*/
/*
for(int myVar = 0; myVar <=10; myVar++){
    printf("myVar is : %d \n", myVar );
    printf("myVar is : %d \n", myVar );}




int age;
printf("Please give me the age : ");
scanf("%d", &age);

if (age >= 18){ 
    printf("You are an adult.\n");
}    
else if ( age < 16){
    printf("You are a minor.\n");
}
else{
    printf("You are a minor.\n");    
}
return 0;

} */

#include <stdio.h>

int main() {
    int age = 20;

    // Yaş kontrolü
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    // For döngüsü
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // While döngüsünde aynı i değişkeni tekrar tanımlanmaz
    int j = 0;  // Burada sadece i'yi tekrar tanımlıyoruz
    while (j < 5) {
        printf("i = %d\n", j);
        j++;
    }

    return 0;
}
