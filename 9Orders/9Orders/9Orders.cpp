#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include"Order.h"
#include"Storage.h"


int main()
{
	Storage sk[10000];
	Order zk[10000];

	FILE* file;
	Storage::openSkladFile(file,sk);

	FILE* file_cust;
	Order::openZakazFile(file_cust, zk);
	
	Storage::checkProduct(sk, zk);


	return 0;
}
