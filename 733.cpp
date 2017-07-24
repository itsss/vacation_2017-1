#include <stdio.h>
#include <math.h>

int main()
{
	float vac, inf, mat, dinf, dmat;
	scanf("%f %f %f %f %f", &vac, &inf, &mat, &dinf, &dmat);
	printf("%.0f", (inf/dinf) > (mat/dmat) ? vac-ceil(inf/dinf) : vac-ceil(inf/dmat));
}
