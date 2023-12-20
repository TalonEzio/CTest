#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long myPow(int a,int b)
{
	long result =1;int i =0;
	for( i =1; i<=b; ++i)
	{
		result *= a;
	}
	return result;
}
int main(int argc, char *argv[]) {

	FILE *fptr;
	fptr = fopen("input.txt","r+");
	int m, n;

	fscanf(fptr,"%d",&n);
	fscanf(fptr,"%d",&m);

	printf("m = %d, n = %d",m,n);
	int a[n],b[m];
	int i;
	for( i = 0; i <n ; ++i) {
		fscanf(fptr,"%d",&a[i]);
	}

	for( i =0; i < m; ++i) {
		fscanf(fptr,"%d",&b[i]);
	}

	printf("\n");
	for(i = 0; i < n; ++i) {
		printf("a[%d] = %d ",i,a[i]);
	}
	printf("\n");

	for(i = 0; i < m; ++i) {
		printf("b[%d] = %d ",i,b[i]);
	}
	printf("\n");

	fclose(fptr);

	int d1,d2;
	printf("Nhap d1: ");
	scanf("%d",&d1);

	printf("Nhap d2: ");
	scanf("%d",&d2);


	long long P = 0,Q = 0;

	for( i = 0 ; i < n; ++i) {
		printf("i = %d, pow = %d\n",i,a[i] *myPow(d1,i));
		P += (a[i] * myPow(d1,i));
	}

	for( i = 0 ; i < m; ++i) {
		printf("i = %d, pow = %d\n",i,b[i] * myPow(d2,i));
		Q += (b[i] * myPow(d2,i));
	}

	printf("P(%d) = %d\n",d1,P);
	printf("Q(%d) = %d\n",d2,Q);

	float S = sqrt(P - Q) - 2013;

	printf("S = %f\n",S);

	long long X = P - Q;

	printf("P - Q = %d",X);



	return 0;
}

