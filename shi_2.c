#include<stdio.h>
#include<stdlib.h>

int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; ++killer)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("killer is %c\n", killer);
		}
	}
	system("pause");
	return 0;
}