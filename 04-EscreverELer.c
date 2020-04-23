/* 

É nesta parte onde os "includes" entram

#include <stdio.h>
#include <stdlib.h>



Para poder escrever algo na tela terão de usar esses include (Sempre no inicio da pagina)

Então como poderemos escrever algo no ecrã então:
Usamos a função "printf();" (funções têm sempre o "()" depois do nome da função e sempre o ";" no final)

e Usa-se da seguinte forma
printf(<O que quer escrever entre "">);
ex: 
printf("Ola mundo!"); //NÃO ESQUECER O ";" irá escrever "Ola Mundo!"


-----------------------------------------------------------
Formatar / Introduzir uma variavel ao escrever para o ecrã
-----------------------------------------------------------

existem varios tipos de formatação
%d - Formatação para numeros inteiros
%c - Formatação para caracteres
%f - Formatação para numeros reais / numeros com virgulas (Se quiserem só com 2 casa decimais podem usar %.2f ou se quiserem n casas decimais podem usar %.nf onde n seria um numero inteiro)

Para usar estas formatações ao escrever podemos usar ex:

int a = 9;
printf("O numero que esta na variavel a = %d", a); //Isto irá escrever no ecrã "O numero que esta na variavel a = 9"

Para formatar como viram no final das ("") precisam de meter uma virgula e depois logo a seguir a variavel que querem usar para formatar

Outro exemplo:

float b = 2.5;

printf("Apenas tens %f euros", b);


-------------------------------------------------------------------------
Ler informação do utilizador e introduzir essa informação em uma variavel
-------------------------------------------------------------------------

Para isso usamos a função:
"scanf();" (funções têm sempre o "()" depois do nome da função e sempre o ";" no final)

E usa-se da seguinte forma:

scanf(<tipoDeFormatação ex: %d>, &nomeDaVariavel);

ATENÇÃO ANTES DO NOME DA VARIAVEL DEVERÁs USAR "&" É IMPORTANTE SE ALGUMA VEZ O TEU PROGRAMA DAR CRASH PODE SER UMA DAS CAUSAS

Exemplo:
int a;

printf("Que numero quer dar a variavel a: ");
scanf(%d, &a); //Isto irá esperar para o utilizador introduzir um valor inteiro e irá meter esse valor inteiro na variavel a (ATENÇÃO A VARIAVEL JA DEVE ESTAR INICIALIZADA)

//Depois para amostrar o valor que foi introduzido basta usar como disse a formatação no printf
//Ex:

printf("O numero introduzido foi: %d", a);

*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	printf("Ola mundo!"); //Isto irá mandar uma mensagem para o ecrã NÃO ESQUECER O ";"

	int a = 9;
	printf("O numero que esta na variavel a = %d", a); //Isto irá escrever no ecrã "O numero que esta na variavel a = 9"


	float b = 2.5;

	printf("Apenas tem %f euros", b);

	int c;

	printf("Que numero quer dar a variavel c: ");
	scanf(%d, &c); //Isto irá esperar para o utilizador introduzir um valor inteiro e irá meter esse valor inteiro na variavel a (ATENÇÃO A VARIAVEL JA DEVE ESTAR INICIALIZADA)

	//Depois para amostrar o valor que foi introduzido basta usar como disse a formatação no printf
	//Ex:

	printf("O numero introduzido foi: %d", a);



	return 0;
}
