#include <iostream>
#include<vector>
#include<queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <forward_list>


// VARIABLES:

using itVector = std::vector<int>::iterator; // C++11 version
// (also)  typedef std::vector<int>::iterator itVector;  C verion

using bitVector = std::vector<int>::reverse_iterator; // C++11 version
// (also) typedef std::vector<int>::reverse_iterator bitVector;

using dit = std::deque<int>::iterator; // C++11 version
// (also) typedef std::deque<int>::iterator bitVector;

using bdit = std::deque<int>::reverse_iterator; // C++11 version
// (also) typedef std::deque<int>::reverse_iterator bdit;

using itMap = std::map<int, int>::iterator; // C++11 version
// (also) typedef std::map<int, int>::iterator itMap;

using bitMap = std::map<int, int>::reverse_iterator; // C++11 version
// (also) typedef std::map<int, int>::reverse_iterator bitMap;

using itList = std::list<int>::iterator; // C++11 version
// (also) typedef std::list<int>::iterator itList

using bitList = std::list<int>::reverse_iterator; // C++11 version
// (also) typedef std::list<int>::reverse_iterator bitList

using bFlist = std::forward_list<int>::iterator; // C++11 version
// (also) typedef std::forward_list<int>::iterator bFlist

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

	for (itList i = listillo.begin(); i != listillo.end(); i++){
		std::cout << *i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "BACKWARD: " << std::endl;
	std::cout << std::endl;

	for (bitList i = listillo.rbegin(); i != listillo.rend(); i++){
		 std::cout << *i << " ";
	}
	std::cout << std::endl;
}

// SI SOPORTA

void iteroFlist(std::forward_list<int> flist) {

	// solo soporta iterador forward

	std::cout << " FORWARD: " << std::endl << std::endl;

	for (bFlist i = flist.begin(); i != flist.end(); i++){
		std::cout << *i << " ";
	}

}

/**/
void main() {

	// vector
	std::vector<int>vectoro{ 0,1,2,3,4,5,6,7,8,9 };

	std::cout << " ==== VECTOR ==== " << std::endl;

	iteroVector(vectoro);
   /**/

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
	std::list<int> lista({1,2,3,4,5,6,7});

	iteroList(lista);
	
	//Flist

	std::cout << std::endl;
	std::cout << " ==== FORWARD LIST ==== " << std::endl << std::endl;
	std::forward_list<int>flist({ 1,2,3,4,5,6,7 });
	
	iteroFlist(flist);
}

