/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void* _bubblesort_(void * _array_, void (*_puntero_) (void *, int _k), int _tam_){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_, k);
		return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector_, int _k){
	int* lista = (int*)_vector_;
	int temporal;
	if (*(lista+_k+1) < *(lista+_k)) {
		temporal = *(lista+_k);
		*(lista+_k) = *(lista+_k+1);
		*(lista+_k+1) = temporal;
	}
}

void  _b_float_ (void * _vector_, int _k){
	float* lista = (float*)_vector_;
	float temporal;
	if (*(lista+_k+1) < *(lista+_k)) {
		temporal = *(lista+_k);
		*(lista+_k) = *(lista+_k+1);
		*(lista+_k+1) = temporal;
	}
}

void  _b_double_ (void * _vector_, int _k){
	double* lista = (double*)_vector_;
	double temporal;
	if (*(lista+_k+1) < *(lista+_k)) {
		temporal = *(lista+_k);
		*(lista+_k) = *(lista+_k+1);
		*(lista+_k+1) = temporal;
	}
}

void  _b_char_ (void * _vector_, int _k){
	char* lista = (char*)_vector_;
	char temporal;
	if (*(lista+_k+1) < *(lista+_k)) {
		temporal = *(lista+_k);
		*(lista+_k) = *(lista+_k+1);
		*(lista+_k+1) = temporal;
	}
}



/*------MAIN------*/
int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5,9,7,2};
	double _array_3 [5] = {3.1,8.3,2.2,4.12,15.78};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	int* array_arreglado_de_ints = (int*) _bubblesort_(_array_1,_b_int_, 5);	
	float* array_arreglado_de_floats = (float*) _bubblesort_(_array_2, _b_float_, 5);
	double* array_arreglado_de_double = (double*) _bubblesort_(_array_3,_b_double_, 5);
	char* array_arreglado_de_char = (char*) _bubblesort_(_array_4,_b_char_, 6);

	for (int i = 0; i < 5; ++i) 
		cout << *(array_arreglado_de_ints+i) << " ";
	cout << endl;

	for (int i = 0; i < 5; ++i) 
		cout << *(array_arreglado_de_floats+i) << " ";
	cout << endl;

	for (int i = 0; i < 5; ++i) 
		cout << *(array_arreglado_de_double+i) << " ";
	cout << endl;

	for (int i = 0; i < 6; ++i) 
		cout << *(array_arreglado_de_char+i) << " ";
	cout << endl;
    return 0;
}

