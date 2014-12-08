#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.h"

int main () {
	float t,x, x_1, y,step,tf,numSteps;
	int i;
	FILE *pFile;
	pFile = fopen ("valores.csv","w");

	if (pFile != NULL) {
		fprintf(pFile, "t,x,y\n");

		printf("Insira t0:\t");
		scanf("%f",&t);
		fprintf(pFile, "%.2f,",t);

	    printf("Insira a condição inicial x0 @ t0:\t");
		scanf("%f",&x);
		fprintf(pFile, "%.2f,",x);

		printf("Insira a condição inicial y0 @ t0:\t");
		scanf("%f",&y);
		fprintf(pFile, "%.2f\n",y);

		printf("Insira o intervalo de amostragem h:\t");
		scanf("%f",&step);

		printf("Insira o t final:\t");
		scanf("%f",&tf);

		numSteps = (tf-t)/step;

		for(i=0; (i<numSteps) && (x>0) && (y>0); i++) {
			x_1 = x;
			t = calcula_t(t,step);
			fprintf(pFile, "%.2f,",t);
			x = calcula_x(x_1,y,step);
			fprintf(pFile, "%.2f,",x);
			y = calcula_y(x_1,y,step);
			fprintf(pFile, "%.2f\n",y);
		}
  	}

	

	return 0;
}