#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
a) Horário: composto de hora, minutos e segundos.
b) Data: composto de dia, mês e ano.
c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

typedef struct{
	int hr;
	int min;
	int seg;
}Horario;

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
	Data data;
	Horario hora;
	char desc[100];
}Compromisso;

int main(){
	Compromisso date;
	printf("Digite o dia, mês e ano, respectivamente, do seu compromisso:\n");
	scanf("%d",&date.data.dia);
	setbuf(stdin,NULL);
	scanf("%d",&date.data.mes);
	setbuf(stdin,NULL);
	scanf("%d",&date.data.ano);
	setbuf(stdin,NULL);
	printf("Digite o horario(hora,min,seg):\n");
	scanf("%d",&date.hora.hr);
	setbuf(stdin,NULL);
	scanf("%d",&date.hora.min);
	setbuf(stdin,NULL);
	scanf("%d",&date.hora.seg);
	setbuf(stdin,NULL);
	printf("Faça um pequeno resumo do motivo:\n");
	scanf("%[^\n]",date.desc);
	setbuf(stdin,NULL);
	printf("#######COMPROMISSO MARCADO.#######\n");
	printf("No dia %d/%d/%d as %d:%d:%d, '%s'\n",date.data.dia,date.data.mes,date.data.ano,date.hora.hr,date.hora.min,date.hora.seg,date.desc);
	return 0;
}
