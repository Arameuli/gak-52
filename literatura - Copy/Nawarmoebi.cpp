#include "Nawarmoebi.h"
#include<iostream>
#include<string>
using namespace std;
Nawarmoebi :: Nawarmoebi() {
}
Nawarmoebi::Nawarmoebi(string fname, string avtori, string date) {
	this->fname = fname;
	this->avtori = avtori;
	this->date = date;
}
void Nawarmoebi:: printNawarmoebi() {
	cout << fname << " " << avtori << " " << date << endl;
}