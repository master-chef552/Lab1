#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// Definir un tipo booleano
typedef enum {
    false = 0,
    true = 1
} bool;

// Función booleana que verifica si un número es par
bool esPalindromo(int x) {
	if(x<0){
		return false;
	}else{
	int original = x;
	int invertido=0;
	while(x!=0){
		int digito = x % 10;
		invertido = invertido*10 + digito;
		x/=10;
	}
	return original == invertido;
}
}

int main(int argc, char *argv[]) {
	int x;
	printf("Por favor ingrese un numero entero mayor o igual a -2^31 y menor o igual a 2^31 - 1\n");
	scanf("%d", &x);
	
	if(x>= pow(-2, 31) && x<= pow(2, 31)-1){
		if(esPalindromo(x)){
			printf("El numero %d es palindromo", x);
		}else{
			printf("El numero %d NO es palindromo", x);
		}
	}else{
		printf("El numero proporcionado no esta dentro de los limites");
	}
	
	return 0;
}