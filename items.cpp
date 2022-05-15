#include "items.h"

void items::setpower(int w)
{
	power = w;
	

}
void items::setrank(int h) {
	rank = h;
}


int Ring::getstats() 
{
	return  (power * rank);
}
int Pendant::getstats()  
{
	return (power + rank);
	
}

