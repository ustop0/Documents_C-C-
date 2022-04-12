#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double logIterativo(double x, int term) {

	double logX = 0.0;
	int sinal = 1;
		
	for (int i = 1; i <= term; i++) {
		logX += 1.0/i * pow(x - 1, i) * sinal;
		sinal = -sinal;
	}

	return logX;
}


int main(int argc, char const *argv[])
{
	
	double x[14] = {0.125, 0.25, 0.375, 0.500, 0.625, 0.750, 1.0, 1.125, 1.250, 1.500, 1.625, 1.750, 1.875, 2.000};
	double logX10 = 0.0;
	double logX100 = 0.0;
	double logX1000 = 0.0;
	double logX10000 = 0.0;

	 printf("x:\t[%10s]\t%10s\t%10s\t%10s\t%10s\n", "log(x)", "10","100","1000","10000"); //, "10000000");

	for (int i = 0; i < 14; i++) {
		printf("%5.3lf:\t[%10.6lf]\t%10.6lf\t%10.6lf\t%10.6lf\t%10.6lf\n", x[i] , log(x[i]),  
																				logIterativo(x[i],10),
																				logIterativo(x[i],100),
																				logIterativo(x[i],1000),
																				logIterativo(x[i],10000));


	}


	return 0;
}