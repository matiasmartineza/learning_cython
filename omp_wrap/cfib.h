double cfib(int n);

#include <omp.h>

double cfib(int n){
	omp_set_num_threads(2);
	#pragma omp parallel
	{
	}
	int i ; 
	double a = 0.0 , b = 1.0 , tmp ; 
	for ( i = 0 ; i < n ; ++ i ) { 
		tmp = a ; 
		a = a + b ; 
		b = tmp ; 
	} 
	return a ; 
}
