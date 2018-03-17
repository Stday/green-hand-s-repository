#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i;
	srand(time(0));
	for(i=0;i<10;i++){ 
	    a[i]=10+rand()%90;
 	     printf("%5d",a[i]);
 	} 
 	return 0;
}
