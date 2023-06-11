# list.h
Dynamic list in c

it's my own code, all function are tested before publish.

# example (main.c)
```c
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main()
{
  // constructor
	lst* list = LST();
	int a=1;
	int b=2;
	int c=5;
  // add
	lstadd(list,&a);
	lstadd(list,&b);
	lstadd(list,&c);
  // delete at id 2, begin at 0
	lstdel(list,2);
	
  // find by adress
	printf("\nfind %d pos %d",b,lstfind(list,&b));
	
	// get list's lenght 
	for(int i=0;i<lstlen(list);i++)
	{
    // get element by id
		int* ti = lstat(list,i);
		printf("\ni %d v %d",i,*ti);
	}
	
	// free memory
	lstfree(list);
	return 0;
}
```
