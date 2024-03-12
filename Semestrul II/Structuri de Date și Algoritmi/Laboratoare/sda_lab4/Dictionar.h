#pragma once

#define NULL_TVALOARE -12345678
typedef int TCheie;
typedef int TValoare;

class IteratorDictionar;

#include <vector>
#include <utility>
using namespace std;
typedef std::pair<TCheie,TValoare> TElem;

class Dictionar {
	friend class IteratorDictionar;

	private:
		TElem* elems;
		int* urm;
		int cap;
		int nrElem;
		int prim;
		int primLiber;

	public:

	// constructorul implicit al dictionarului
	Dictionar();

	// adauga o pereche (cheie, valoare) in dictionar	
	//daca exista deja cheia in dictionar, inlocuieste valoarea asociata cheii si returneaza vechea valoare
	// daca nu exista cheia, adauga perechea si returneaza null: NULL_TVALOARE
	TValoare adauga(TCheie c, TValoare v);

	//cauta o cheie si returneaza valoarea asociata (daca dictionarul contine cheia) sau null: NULL_TVALOARE
	TValoare cauta(TCheie c) const;

	//sterge o cheie si returneaza valoarea asociata (daca exista) sau null: NULL_TVALOARE
	TValoare sterge(TCheie c);

	//returneaza numarul de perechi (cheie, valoare) din dictionar 
	int dim() const;

	//verifica daca dictionarul e vid 
	bool vid() const;

	//returneaza vector cu cheile dictionarului
	vector<TCheie> multimeaCheilor() const;

	// se returneaza iterator pe dictionar
	IteratorDictionar iterator() const;

	// destructorul dictionarului	
	~Dictionar();

};


