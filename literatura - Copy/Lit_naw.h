#pragma once
#include"Nawarmoebi.h"
#include<string>
class Lit_naw : public Nawarmoebi
{
public:;
	string genre, type;
	Lit_naw();
	Lit_naw(string fname, string avtori, string date, string genre, string type);
	void printLit_naw();
};

