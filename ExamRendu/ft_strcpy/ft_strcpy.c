// #include <stdio.h>
// #include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++; 
	}
	return (s1);
}

// int main()
// {
// 	char s1[50] = "blabla";
// 	char s2[50] = "bibi";
// 	char s3[50] = "blabla";
// 	char s4[50] = "bibi";

// 	printf("s1 %s\n", s1);
// 	printf("s2 %s\n\n", s2);

// 	printf("s3 %s\n", s1);
// 	printf("s4 %s\n\n\n", s2);

// 	strcpy(s1, s2);
// 	ft_strcpy(s3, s4);

// 	printf("s1 apres %s\n", s1);
// 	printf("s2 apres %s\n\n", s2);
	
// 	printf("s3 %s\n", s1);
// 	printf("s4 %s\n", s2);

// 	return 0;

// }