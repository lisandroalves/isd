#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.h"

int main () {
	float t,s, s_1, i,step,tf,numSteps;
	int j;
	FILE *pFile;
	pFile = fopen ("valores.csv","w");

	if (pFile != NULL) {
		fprintf(pFile, "t,s,i\n");

		printf("Insira t0:\t");
		scanf("%f",&t);
		fprintf(pFile, "%.2f,",t);

	    printf("Indique o número de indivíduos susceptíveis em t0 = %.3f:\t",t);
		scanf("%f",&s);
		fprintf(pFile, "%.2f,",s);

		printf("Indique o número de indivíduos infetados em t0 = %.3f:\t",t);
		scanf("%f",&i);
		fprintf(pFile, "%.2f\n",i);

		printf("Insira o intervalo de amostragem h:\t");
		scanf("%f",&step);

		printf("Insira o t final:\t");
		scanf("%f",&tf);

		numSteps = (tf-t)/step;

		for(j=0; (j<numSteps) && (s>0) && (i>0); j++) {
			s_1 = s;
			t = calcula_t(t,step);
			fprintf(pFile, "%.2f,",t);
			s = calcula_s(s_1,i,step);
			fprintf(pFile, "%.2f,",s);
			i = calcula_i(s_1,i,step);
			fprintf(pFile, "%.2f\n",i);
		}
  	}
  	else return -1;

  	fclose(pFile);

	return 0;
}