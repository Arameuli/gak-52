#include "Lit_naw.h"
#include<iostream>
#include<string>
using namespace std;
Lit_naw :: Lit_naw() {
}
Lit_naw::Lit_naw(string fname, string avtori, string date, string genre, string type) {
	this->fname = fname;
	this->avtori = avtori;
	this->date = date;
	this->genre = genre;
	this->type = type;
}
void Lit_naw :: printLit_naw() {
	cout << fname << " " << avtori << " " << date <<
		" " << genre << " " << type << endl;
}