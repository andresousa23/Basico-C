/*

Numa variavel podemos guardar informações(data) dentro delas

Existem 4 tipos principais de variaveis temos:

int = Numeros Inteiros (1, 2, 3, 4, 5)
bool = Verdadeiro/Falso (true/false)
float = Numeros reais (1.2, 2.56, 3.435, 3.1415) 
	- Em programação não se usa virgulas 
		para representar numeros reais (ou seja numeros com virgulas)
		usa-se um ponto ex: "2.23"
		2.23 seria igual a 2,23 (como se usa normalmente em matematica)
char = Caracteres ex: "c" "s" "d" (Apenas um caracter mais para a frente irei demonstrar como usar uma cadeia de caracteres)


Como inicializar uma variavel pergunta vocês então:


<Tipo Da Variavel> (Nome da Variavel) = (Valor da Variavel);
Ex:

(ATENÇÃO NO FINAL DE INICIALIZAR UMA VARIAVEL METER SEMPRE O ";" É MUITO IMPORTANTE)

int nrInteiro = 9;
bool vOuF = true;
float nrComVirgula = 3.1415;
char caracter = "s";

(ATENÇÃO COMO FOI DITO NA INTRODUÇÃO NAO SE PODE USAR CARACTERES ESPECIAIS COMO ACENTOS OU Ç)
(AO DAR NOMES A VARIAVEIS TEMOS DE SEGUIR AS SEGUINTES MANEIRAS:
	- Não começar com numeros apenas com letras (ex: 01nome - ERRADO | nome01 - CORRETO)
	- Não usar nenhum caracter especial
	- Não começar com Letras Maiusculas
)


Querem mudar o valor da variavel? Simplesmente façam:

(Nome da Variavel) = (Novo Valor da Variavel);

Ex:

int nrInteiro = 9;
nrInteiro = 10;

Por exemplo se quiserem meter varias variaveis do mesmo tipo não precisam de fazer exemplo:
	int a;
	int b;
	int c;
	int d;
Basta fazerem:
Separar entre virgulas os nomes das variaveis
int a, b, c, d;

Tambem podem dar valores às variaveis que estão nesse "conjunto de variaveis"
Ex:
int a = 9, b, c, d = 10; (SEMPRE NO FINAL ";")


*/

#include <stdio.h>
#include <stdlib.h>


int main(){

	int nrInteiro = 9;
	nrInteiro = 10; //Valor da variavel nrInteiro agora é 10

	bool vOuF = true;
	float nrComVirgula = 3.1415;
	char caracter = "s";

	return 0;
}
