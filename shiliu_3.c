#include <stdio.h>
#include <string.h>

char *mystrstr(const char *str1, const char *str2)
{
	char *cp = (char*)str1;
	char *s1, *s2;
	if (!*str2)
		return((char *)str1);
	while (*cp)
	{
		s1 = cp;
		s2 = (char *)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
			return(cp);
		cp++;
	}
	return(NULL);
}

int main()
{
	char str1[] = "1234xyz";
	char str2[] = "34";
	printf("%s\n", mystrstr(str1, str2));
	printf("%s\n", strstr(str1, str2));


	return 0;
}