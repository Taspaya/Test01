#include <iostream>
#include<vector>
#include<queue>
#include <deque>
#include <stack>
#include <list>
#include <map>


// VARIABLES:


// Vamos a iterar los contenedores
// Tipos de contenedores:
// Forward Only
// Backward Only
// Bidirectional
// Random acces


// SI SOPORTA

void iteroVector(std::vector<int> vec) {

	// éste es bidireccional y random acces 

	// itearador forward

	std::cout << "FORWARD: " << std::endl;

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {

		std::cout << *it << " ";
	}

	std::cout << std::endl << std::endl;

	// iterador backward 

	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (std::vector<int>::reverse_iterator ot = vec.rbegin(); ot != vec.rend(); ++ot) {

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

	for (std::deque<int>::iterator it = dec.begin(); it != dec.end(); ++it) {

		std::cout << *it << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (std::deque<int>::reverse_iterator ot = dec.rbegin(); ot != dec.rend(); ++ot) {

		std::cout << *ot << " ";
	}


}


// SI SOPORTA

void iteroMap(std::map<int, int> mapita) {
	std::cout << " FORWARD: " << std::endl << std::endl;

	for (std::map<int, int>::iterator it = mapita.begin(); it != mapita.end(); it++) {
		std::cout << it->first << " " << it->second << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;


	// soporta iteradores bidireccionales 

}

// NO SOPORTA

void iteroStack() {

	// NO SOPORTA ITERADORES 

}

// SI SOPORTA

void iteroList() {

	// soporta iteradores bidireccionales

}

// SI SOPORTA

void iteroFlist() {

	// solo soporta iterador forward

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


	//map
	std::cout << std::endl;
	std::cout << " ==== MAP ====" << std::endl << std::endl;
	std::map<int, int> mapa;
	mapa[1] = { 1 };
	mapa[2] = { 2 };
	mapa[3] = { 3 };
	mapa[4] = { 4 };

	iteroMap(mapa);

}

