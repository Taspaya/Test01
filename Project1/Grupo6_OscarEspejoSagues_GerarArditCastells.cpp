#include <iostream>
#include<vector>
#include<queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <unordered_map>
#include <forward_list>
#include <set>
#include <unordered_set>


// VARIABLES:

using itVector = std::vector<int>::iterator;						// C++11 version
																	// (also)  typedef std::vector<int>::iterator itVector;  C verion

using bitVector = std::vector<int>::reverse_iterator;				// C++11 version
																	// (also) typedef std::vector<int>::reverse_iterator bitVector;

using citVector = std::vector<int>::const_iterator;
using rcitVector = std::vector<int>::const_reverse_iterator;

using dit = std::deque<int>::iterator;								// C++11 version
																	// (also) typedef std::deque<int>::iterator bitVector;

using bdit = std::deque<int>::reverse_iterator;						// C++11 version
																	// (also) typedef std::deque<int>::reverse_iterator bdit;
using cdit = std::deque<int>::const_iterator;
using crdit = std::deque<int>::const_reverse_iterator;

using itMap = std::map<int, int>::iterator;							// C++11 version
																	// (also) typedef std::map<int, int>::iterator itMap;

using bitMap = std::map<int, int>::reverse_iterator;				// C++11 version
																	// (also) typedef std::map<int, int>::reverse_iterator bitMap;
using cbitMap = std::map<int, int>::const_iterator;
using crbitMap = std::map<int, int>::const_reverse_iterator;

using itList = std::list<int>::iterator;							// C++11 version
																	// (also) typedef std::list<int>::iterator itList

using bitList = std::list<int>::reverse_iterator;					// C++11 version
																	// (also) typedef std::list<int>::reverse_iterator bitList
using citList = std::list<int>::const_iterator;
using critList = std::list<int>::const_reverse_iterator;

using bFlist = std::forward_list<int>::iterator;					// C++11 version
																	// (also) typedef std::forward_list<int>::iterator bFlist
using cbFlist = std::forward_list<int>::const_iterator;

using bSet = std::set<int>::iterator;								// C++11 version
																	// (also) typedef std::forward_list<int>::iterator bFlist
using bitSet = std::set<int>::reverse_iterator;
using cbSet = std::set<int>::const_iterator;
using crbSet = std::set<int>::const_reverse_iterator;

using bUnMap = std::unordered_map<int, int>::iterator;
using cbUnMap = std::unordered_map<int, int>::const_iterator;

using bUnSet = std::unordered_set<int>::iterator;
using cbUnSet = std::unordered_set<int>::const_iterator;

																	//

																	//Constructores del vector:

std::vector<int> p1;												// vector vacio, sin argumentos
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
std::deque<int> d1;													// creamos una deque completamente vacia, sin argumentos
std::deque<int> d2(4);												// creamos una deque con 4 espacios que se rellenaran con 0
std::deque<int> d3(4, 10);											// 4 espacios en la deque con 10 en ellos
std::deque<int> d4({ 1,2,3,4,5,6 });								// una deque con 6 espacios en memoria con diferentes valores
std::deque<int> d5(d4);												// usando el constructor por copia copiamos a d4
std::deque<int> d6(d5.begin(), d5.end());							// usando los iteradores begin i end hacemos la copia de d5


int Array2[]{ 5,6,7,8 };
std::deque<int> d9(Array2, Array2 + sizeof(Array2) / sizeof(int));	// creamos una deque usando una array

int *pun1 = new int[3]{ 1,2,9 };
std::deque<int> d10(pun1, pun1 + 3);								// constructor con iteradores

																	//Constructores de la Queue
std::queue<int> q1;													// queue totalmente vacia, sin argumentos
std::queue<int> q2({ 1,2,3,4,5,6 });								// queue con 6 valores diferentes
std::queue<int> q3(q2);												// creamos la q3 con el constructor por copia
																	// al no soportar iteradores ya no tenemos los constructores de begin,rbegin y crbegin
																	// tampoco tenemos los constructores de array ni de puntero


																	//Constructores de la Priority Queue
std::priority_queue<int> pq1;										// priority queue totalmente vacia, sin argumentos
int Array3[]{ 5,6,7,8 };
std::priority_queue<int> pq2(Array3, Array3 + 4);					// priority queue usando una array de 4 posiciones
std::priority_queue<int> pq3(pq2);									// usamos el constructor por copia
																	// volvemos a tener el mismo problema que con queue, aunque esta vez al estar implementadas de 
																	// difenrete forma podemos usar una array para formarla pero no puntero ni valores diferentes como en q2

																	//Constructores del Stack
std::stack<int> s1;													// stack totalmente vacia, sin argumentos
std::stack<int> s2({ 1,2,3,4,5 });									// stack inicializada con 5 valores
std::stack<int> s3(s2);												// constructor por copia del stack
std::stack<int> s4(d4);												// constructor por copia usando una deque;
																	// el mismo problema con pq y queue, aunque el constructor por copia sobre deque


																	// Constructores Map
std::map<int, int> m1;												// map totalmente vacio, sin argumentos
std::map<int, int> m2(m1.begin(), m1.end());                        // constructor del mapa usando iteradores begin y end
std::map<int, int> m3(m2);											// constructor por copiastd::map<int, int> m4(m1.rbegin(), m1.rend());						// constructor usando los iteradores rbegin y rend


																	// Constructores Set
std::set<int> se1;													//set totalmente vacio, sin argumentos
std::set<int> se2({1,2,3,4,5,6});									//constructor lista de inicializacion
std::set<int> se3(se2);												//constructor por copia
std::set<int> se4(se2.begin(), se2.end());							//constructor usando iteradores begin y end sobre otro set

																	// Constructores List

std::list<int> lista;												// List totalmente vacia
std::list<int> lista0(4);											// List de 4 espacios con un 0 en ellos	
std::list<int> lista1({ 1,2,3,4,5 });								// List inicializada con 5 valores
std::list<int> lista2(4, 10);										// 4 espacios en la deque con 10 en ellos
std::list<int> lista3({ lista1 });									// List inicializada por copia de lista1
std::list<int> lista4(lista3.begin(), lista3.end());				// Usando los iteradores begin i end hacemos la copia de lista3


																	// Constructores FList

std::forward_list<int> flista;										// List totalmente vacia
std::forward_list<int> flista0(4);									// List de 4 espacios con un 0 en ellos	
std::forward_list<int> flista1({ 1,2,3,4,5 });						// List inicializada con 5 valores
std::forward_list<int> flista2(4, 10);								// 4 espacios en la deque con 10 en ellos
std::forward_list<int> flista3({ flista2 });						// List inicializada por copia de flista1
std::forward_list<int> flista4(flista3.begin(), flista3.end());		//usando los iteradores begin i end hacemos la copia de flista3

																	//Constructores del Unordered Map

std::unordered_map<int, int> un1;									//unordered map vacio
std::unordered_map<int, int> un2({ { 1,1 }, { 2,2 }, {3,3} });		//constructor con lista de asignacion
std::unordered_map<int, int> un3(un2);								//constructor por copia
std::unordered_map<int, int> un4(un2.begin(), un2.end());			//constructor usando begin y end

																	//Constructores del Unordered Set

std::unordered_set<int> unset1;										//unordered set vacio
std::unordered_set<int> unset2({1,2,3,4,5,6,7,8});					//constructor por lista de inicializacion
std::unordered_set<int> unset3(unset2);								//constructor por copia
std::unordered_set<int> unset4(unset2.begin(), unset2.end());		//constructor por copia usando begin & end



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
	std::cout << std::endl;

	for (itVector it = vec.begin(); it != vec.end(); ++it) {

		std::cout << *it << " ";
	}

	// iterador backward 
	std::cout << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bitVector ot = vec.rbegin(); ot != vec.rend(); ++ot) {

		std::cout << *ot << " ";
	}

	std::cout << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (citVector it = vec.cbegin(); it != vec.cend(); ++it) {

		std::cout << *it << " ";
	}

	std::cout << std::endl;
	std::cout << "CBACKWARD: " << std::endl;
	std::cout << std::endl;

	for (rcitVector it = vec.crbegin(); it != vec.crend(); ++it) {

		std::cout << *it << " ";
	}

	//iterador []
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "[i]: " << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i] << " ";
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

	std::cout << std::endl << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (cdit  ot = dec.cbegin(); ot != dec.cend(); ++ot) {
		std::cout << *ot << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CBACKWARD: " << std::endl;
	std::cout << std::endl;

	for (crdit ot = dec.crbegin(); ot != dec.crend(); ++ot) {
		std::cout << *ot << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "[i]: " << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < dec.size(); i++) {
		std::cout << dec[i] << " ";
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

	std::cout << std::endl << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (cbitMap it = mapita.cbegin(); it != mapita.cend(); it++) {
		std::cout << it->second << " " << it->first << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CBACKWARD: " << std::endl;
	std::cout << std::endl;

	for (crbitMap it = mapita.crbegin(); it != mapita.crend(); it++) {
		std::cout << it->second << " " << it->first << " ";
	}
	std::cout << std::endl;

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


	std::cout << std::endl << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (citList i = listillo.cbegin(); i != listillo.cend(); i++){
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CBACKWARD: " << std::endl;
	std::cout << std::endl;

	for (critList i = listillo.crbegin(); i != listillo.crend(); i++) {
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

	std::cout << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (cbFlist i = flist.cbegin(); i != flist.cend(); i++){
		std::cout << *i << " ";
	}
	std::cout << std::endl;

}

void iteroSet(std::set<int> seti) {

	std::cout << "FORWARD: " << std::endl << std::endl;

	for (bSet i = seti.begin(); i != seti.end(); i++) {
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bitSet i = seti.rbegin(); i != seti.rend(); i++) {
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (cbSet i = seti.cbegin(); i != seti.cend(); i++){
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CBACKWARD: " << std::endl;
	std::cout << std::endl;

	for (crbSet i = seti.crbegin(); i != seti.crend(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;

}

void iteroUnorderedMap(std::unordered_map<int, int> mapdes) {
	
	std::cout << "FORWARD: " << std::endl << std::endl;

	for (bUnMap i = mapdes.begin(); i != mapdes.end(); i++) {
		std::cout << i->first << " " << i->second << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (cbUnMap i = mapdes.cbegin(); i != mapdes.cend(); i++) {
		std::cout << i->first << " " << i->second << " ";
	}
	std::cout << std::endl;
}

void iteroUnorderedSet(std::unordered_set<int> setdesordenao) {
	std::cout << "FORWARD: " << std::endl << std::endl;

	for (bUnSet i = setdesordenao.begin(); i != setdesordenao.end(); i++) {
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "CFORWARD: " << std::endl;
	std::cout << std::endl;

	for (cbUnSet i = setdesordenao.cbegin(); i != setdesordenao.cend(); i++) {
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

	//Set
	std::cout << std::endl;
	std::cout << " ==== SET ==== " << std::endl << std::endl;
	std::set<int>s1;
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(4);
	s1.insert(5);
	s1.insert(6);
	iteroSet(s1);

	//unordered_map
	std::cout << std::endl;
	std::cout << " ==== UNORDERED MAP ==== " << std::endl << std::endl;
	std::unordered_map<int, int> mapnoorden;
	mapnoorden[1] = 1;
	mapnoorden[2] = 2;
	mapnoorden[3] = 3;
	mapnoorden[4] = 4;
	mapnoorden[5] = 5;
	mapnoorden[6] = 6;
	iteroUnorderedMap(mapnoorden);

	//unordered_set
	std::cout << std::endl;
	std::cout << " ==== UNORDERED SET ==== " << std::endl << std::endl;
	std::unordered_set<int> setdeldesorden;
	setdeldesorden.insert(1);
	setdeldesorden.insert(2);
	setdeldesorden.insert(3);
	setdeldesorden.insert(4);
	setdeldesorden.insert(5);
	setdeldesorden.insert(6);
	setdeldesorden.insert(7);
	setdeldesorden.insert(8);
	iteroUnorderedSet(setdeldesorden);
}




