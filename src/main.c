#include <stdio.h>
#include "math_utils.h"

/*int main(void)
{
    int result = add(10, 20)

    printf("10 + 20 = %d\n", result);

    return 0;
}*/
/*
int main()
{
	printf("Hello World");

	int i,j;
	for(i=0; i<10; i++)
	{
		if (i == 4)
			i = i +3;
		printf("%d", i);
	}

	return 0;
}
-*/

/*
int main ()
{
    int i = 5;
    while( i--)
    {
        printf("%d", i);
    }
}
-*/
/*
int main ()
{
    int j = 10;
    int *p = &j;
    *p = 20;
    printf("%d%d", j,*p);
}

*/

#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *p=arr+1;
    printf("%x\n", *p);
    printf("%d %d %d\n", *p, *(p-1), *(p+1));
}