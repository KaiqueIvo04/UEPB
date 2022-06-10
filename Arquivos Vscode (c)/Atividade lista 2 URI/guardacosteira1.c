#include <stdio.h>
#include <math.h>

int main () {

    int d, vf, vg;
    float distancia , tf, tg;


    while (scanf("%d %d %d", &d, &vf, &vg) != EOF) {

        distancia = sqrt(144 + pow(d,2)); //144 = 12^2
		tf = 12.0 / vf;
		tg = distancia / vg;
		
		if (tf >= tg) {
			printf("S\n");
        } 
		else {
			printf("N\n"); 
        }	

    }

    return 0;
}