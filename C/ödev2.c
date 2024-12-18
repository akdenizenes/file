#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

      char str[] = "hello";                                     //C'de bir string aslında karakterlerin bir dizisidir, yani her bir karakter dizide bir char türünde saklanır ve sonuna null karakter ('\0') eklenir.
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    char *fruits[] = {"apple", "banana", "cherry"};
    int num_fruits = 3;
    for (int i = 0; i < num_fruits; i++) {
        printf("%s\n", fruits[i]);
    }



     int K = 1;
    while (K <= 5) {
        printf("%d\n", K);
        K++;
    }

    int n = 5;
    int sum = 0;
    int m = 1;
    
    while (m <= n) {
        sum += m;
        m++;
    }
    
    printf("Sum of first %d natural numbers is %d\n", m, sum);




    int number;                     
    
    
    while (1) {
        printf("Enter a number: ");
        if (scanf("%d", &number) == 1) {           //C diline dönüştürülmüş hali: C dilinde, kullanıcıdan alınan giriş genellikle scanf fonksiyonu ile yapılır.
            break;  
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n');
        }
    }
    
    printf("You entered: %d\n", number);
    

    
    
    return 0; 
}
