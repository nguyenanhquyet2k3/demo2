#include <stdio.h>
#include <stdlib.h>
#include "Header/tinhtoan.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=100,y=20;
	printf("Xin chao cac ban da den voi Du an");
	printf("\nTong hai so x,y la: %d",tong(x,y));
	printf("\nHieu hai so x,y la: %d",hieu(x,y));
	printf("\nTich hai so x,y la: %d",tich(x,y));
	printf("\nThuong hai so x,y la: %f",thuong(x,y));
	return 0;
}
