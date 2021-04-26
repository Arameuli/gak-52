#include <iostream>
#include <string>
#include"Lit_naw.h"
#include"Nawarmoebi.h"
using namespace std;
int main()
{
	Nawarmoebi t;
	Lit_naw n;
	cin >> t.fname >> t.avtori >> t.date;
	cin >> n.fname >> n.avtori >> n.date >> n.genre >> n.type;
	t.printNawarmoebi();
	n.printLit_naw();
}

