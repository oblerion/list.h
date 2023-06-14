#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main()
{
	lst* list = LST();
	int a=1;
	int b=2;
	int c=5;
	lstadd(list,&a);
	lstadd(list,&b);
	lstadd(list,&c);
	lstdel(list,3);
	
	printf("\nfind %d pos %d",b,lstfind(list,&b));
	
	for(int i=0;i<lstlen(list);i++)
	{
		int* ti = lstat(list,i);
		printf("\ni %d v %d",i,*ti);
	}
	
	lstfree(list);
	return 0;
}
