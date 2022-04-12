#include "MineSweeper.h"
void main()
{
	int total;
	printf(" <Mine Sweeper>\n");
	printf(" Enter the total number of landmines to be buried : ");
	scanf("%d", &total);
	playMineSweeper(total);
}