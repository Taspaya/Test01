#include <iostream>
#include<vector>
#include<queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <forward_list>


// VARIABLES:

using itVector = std::vector<int>::iterator;						// C++11 version
																	// (also)  typedef std::vector<int>::iterator itVector;  C verion

using bitVector = std::vector<int>::reverse_iterator;				// C++11 version
																	// (also) typedef std::vector<int>::reverse_iterator bitVector;

using dit = std::deque<int>::iterator;								// C++11 version
																	// (also) typedef std::deque<int>::iterator bitVector;

using bdit = std::deque<int>::reverse_iterator;						// C++11 version
																	// (also) typedef std::deque<int>::reverse_iterator bdit;

using itMap = std::map<int, int>::iterator;							// C++11 version
																	// (also) typedef std::map<int, int>::iterator itMap;

using bitMap = std::map<int, int>::reverse_iterator;				// C++11 version
																	// (also) typedef std::map<int, int>::reverse_iterator bitMap;

using itList = std::list<int>::iterator;							// C++11 version
																	// (also) typedef std::list<int>::iterator itList

using bitList = std::list<int>::reverse_iterator;					// C++11 version
																	// (also) typedef std::list<int>::reverse_iterator bitList

using bFlist = std::forward_list<int>::iterator;					// C++11 version
																	// (also) typedef std::forward_list<int>::iterator bFlist


																	//

																	//Constructores del vector:

std::vector<int> p1;												// vector vacio
std::vector<int> p2(2, 10);											// vector con 2 elementos de valor 10
std::vector<int> p3(p2.begin(), p2.end());							// vector usando iteradores
std::vector<int> p4(p2.crbegin(), p2.crend());						// vector usando iteradores cr
std::vector<int> p5(p2.cbegin(), p2.cend());						// usando iteradores c;
std::vector<int> p6(p3);											// vector por copia 
std::vector<int> p7{ 0,1,2,3,4,5,6,7,8,9 };							// usando lista de inicializacion
std::vector<int> p8(4);												// vector con 4 posiciones vacia

int Array[]{ 1,2,3,4 };
std::vector<int> p9(Array, Array + sizeof(Array) / sizeof(int));	// vector usando una array

int *pun = new int[3]{ 5,6,7 };
std::vector<int> p10(pun, pun + 3);									// constructor con iteradores


																	//Constructores de Deque
std::deque<int> d1;													// creamos una deque completamente vacia
std::deque<int> d2(4);												// creamos una deque con 4 espacios que se rellenaran con 0
std::deque<int> d3(4, 10);											// 4 espacios en la deque con 10 en ellos
std::deque<int> d4({ 1,2,3,4,5,6 });								// una deque con 6 espacios en memoria con diferentes valores
std::deque<int> d5(d4);												// usando el constructor por copia copiamos a d4
std::deque<int> d6(d5.begin(), d5.end());							// usando los iteradores begin i end hacemos la copia de d5
std::deque<int> d7(d5.rbegin(), d5.rend());							// usando iteradores reverse hacemos la copia de d5 al reves
std::deque<int> d8(d5.crbegin(), d5.crend());						// usando los iteradores cr hacemos una copia exacta de d7

int Array2[]{ 5,6,7,8 };
std::deque<int> d9(Array2, Array2 + sizeof(Array2) / sizeof(int));	// creamos una deque usando una array

int *pun1 = new int[3]{ 1,2,9 };
std::deque<int> d10(pun1, pun1 + 3);								// constructor con iteradores

																	//Constructores de la Queue
std::queue<int> q1;													// queue totalmente vacia
std::queue<int> q2({ 1,2,3,4,5,6 });								// queue con 6 valores diferentes
std::queue<int> q3(q2);												// creamos la q3 con el constructor por copia
																	// al no soportar iteradores ya no tenemos los constructores de begin,rbegin y crbegin
																	// tampoco tenemos los constructores de array ni de puntero


																	//Constructores de la Priority Queue
std::priority_queue<int> pq1;										// priority queue totalmente vacia
int Array3[]{ 5,6,7,8 };
std::priority_queue<int> pq2(Array3, Array3 + 4);					// priority queue usando una array de 4 posiciones
std::priority_queue<int> pq3(pq2);									// usamos el constructor por copia
																	// volvemos a tener el mismo problema que con queue, aunque esta vez al estar implementadas de 
																	// difenrete forma podemos usar una array para formarla pero no puntero ni valores diferentes como en q2

																	//Constructores del Stack
std::stack<int> s1;													// stack totalmente vacia
std::stack<int> s2({ 1,2,3,4,5 });									// stack inicializada con 5 valores
std::stack<int> s3(s2);												// constructor por copia del stack
std::stack<int> s4(d4);												// constructor por copia usando una deque;
																	// el mismo problema con pq y queue, aunque el constructor por copia sobre deque


																	// Constructores Map


																	// Constructores Set

																	// Constructores List

std::list<int> lista;												// List totalmente vacia
std::list<int> lista0(4);											// List de 4 espacios con un 0 en ellos	
std::list<int> lista1({ 1,2,3,4,5 });								// List inicializada con 5 valores
std::list<int> lista2(4, 10);										// 4 espacios en la deque con 10 en ellos
std::list<int> lista3({ lista1 });									// List inicializada por copia de lista1
std::list<int> lista4(lista3.begin(), lista3.end());				// Usando los iteradores begin i end hacemos la copia de lista3
std::list<int> lista5(lista4.rbegin(), lista4.rend());				// Usando iteradores reverse hacemos la copia de lista4 al reves
std::list<int> lista6(lista5.crbegin(), lista5.crend());			// Usando los iteradores cr hacemos una copia exacta de d7


																	// Constructores FList

std::forward_list<int> flista;										// List totalmente vacia
std::forward_list<int> flista0(4);									// List de 4 espacios con un 0 en ellos	
std::forward_list<int> flista1({ 1,2,3,4,5 });						// List inicializada con 5 valores
std::forward_list<int> flista2(4, 10);								// 4 espacios en la deque con 10 en ellos
std::forward_list<int> flista3({ flista2 });						// List inicializada por copia de flista1
std::forward_list<int> flista4(flista3.begin(), flista3.end());		//usando los iteradores begin i end hacemos la copia de flista3



																	// Vamos a iterar los contenedores
																	// Tipos de contenedores:
																	// Forward Only
																	// Backward 
																	// Bidirectional
																	// Random acces


																	// SI SOPORTA

void iteroVector(std::vector<int> vec) {

	// éste es bidireccional y random acces 

	// itearador forward

	std::cout << "FORWARD: " << std::endl;

	for (itVector it = vec.begin(); it != vec.end(); ++it) {

		std::cout << *it << " ";
	}

	std::cout << std::endl << std::endl;

	// iterador backward 

	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bitVector ot = vec.rbegin(); ot != vec.rend(); ++ot) {

		std::cout << *ot << " ";
	}


}

//NO SOPORTA

void iteroQueue() {

	// NO SOPORTA ITERADORES 

}

// NO SOPORTA

void iteroPqueue() {

	// NO SOPORTA ITERADORES


}

// SI SOPORTA

void iteroDeque(std::deque<int> dec) {

	// éste és bidireccional 

	std::cout << "FORWARD: " << std::endl;

	for (dit it = dec.begin(); it != dec.end(); ++it) {
		std::cout << *it << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bdit ot = dec.rbegin(); ot != dec.rend(); ++ot) {
		std::cout << *ot << " ";
	}


}


// SI SOPORTA

void iteroMap(std::map<int, int> mapita) {

	// soporta iteradores bidireccionales 

	std::cout << " FORWARD: " << std::endl << std::endl;

	for (itMap it = mapita.begin(); it != mapita.end(); it++) {
		std::cout << it->first << " " << it->second << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bitMap it = mapita.rbegin(); it != mapita.rend(); it++) {
		std::cout << it->second << " " << it->first << " ";
	}
}

// NO SOPORTA

void iteroStack() {

	// NO SOPORTA ITERADORES 

}

// SI SOPORTA



void iteroList(std::list<int> listillo) {

	// soporta iteradores bidireccionales

	std::cout << " FORWARD: " << std::endl << std::endl;

	for (itList i = listillo.begin(); i != listillo.end(); i++) {
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bitList i = listillo.rbegin(); i != listillo.rend(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}

// SI SOPORTA

void iteroFlist(std::forward_list<int> flist) {

	// solo soporta iterador forward

	std::cout << " FORWARD: " << std::endl << std::endl;

	for (bFlist i = flist.begin(); i != flist.end(); i++) {
		std::cout << *i << " ";
	}

}

void main() {

	// vector
	std::vector<int>vectoro{ 0,1,2,3,4,5,6,7,8,9 };


	std::cout << " ==== VECTOR ==== " << std::endl;

	iteroVector(vectoro);


	std::cout << std::endl << std::endl;
	// deque

	std::cout << " ==== DEQUE ==== " << std::endl;
	std::deque<int>dequeu{ 0,11,12,13,14,15,16,17,18,19 };
	iteroDeque(dequeu);
	std::cout << std::endl;


	//map
	std::cout << std::endl;
	std::cout << " ==== MAP ==== " << std::endl << std::endl;
	std::map<int, int> mapa;
	mapa[1] = { 1 };
	mapa[2] = { 2 };
	mapa[3] = { 3 };
	mapa[4] = { 4 };

	iteroMap(mapa);


	//list
	std::cout << std::endl;
	std::cout << " ==== LIST ==== " << std::endl << std::endl;
	std::list<int> lista({ 1,2,3,4,5,6,7 });

	iteroList(lista);

	//Flist

	std::cout << std::endl;
	std::cout << " ==== FORWARD LIST ==== " << std::endl << std::endl;
	std::forward_list<int>flist({ 1,2,3,4,5,6,7 });

	iteroFlist(flist);


}




