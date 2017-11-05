#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main(void) 
{
	double A, B, C;

	printf("***************\n"
			"* I triangoli *\n"
			"***************\n\n"
			"Inserire la lunghezza del primo lato: ");
	scanf("%lf", &A );

	printf("Inserire la lunghezza del secondo lato: ");
	scanf("%lf", &B);

	printf("Inserire la lunghezza del terzo lato: ");
	scanf("%lf", &C);

//Verifico che la somma dei 2 lati sia maggiore della lunghezza di un lato, 
//che non abbia inserito valori negativi e che ogni lato sia maggiore della differenza degli altri due

	if (A, B, C > 0 && A < B+C && B < A+C && C < A+B && A > abs(B-C) && B > abs(A-C) && C > abs(B-C))
	{
		
		if (A == B && B == C && A == C)
		{
			printf("\nIl triangolo è equilatero\n\n");
		}
		
		else if (A == sqrt(B*B + C*C) || B == sqrt(A*A + C*C) || C == sqrt(A*A + B*B))
		{
			if (A != B && B != C && A != C)
			{
				printf("\nIl triangolo è rettangolo scaleno\n\n");
			}

			else if (A == B || A == C || B == C)
			{
				printf("\nIl triangolo è rettangolo isoscele\n\n");
			}
		}

		else if (A == B || A == C || B == C)
		{
			printf("\nIl triangolo è isoscele\n\n");
		}

		else if (A != B && B != C && A != C)
		{
			printf("\nIl triangolo è scaleno\n\n");
		}


	}
							
	else 
	{
		printf("\nNon è un triangolo\n\n");
	}

 
  return 0;
}