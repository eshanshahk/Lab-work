// Program 1 : String Operations
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100], str2[100];
	char *c;
	int op;
	printf("Enter string 1 and string 2");
	scanf("%s%s", str1, str2);
	printf(" 1-String Length\n 2-String concatenate\n 3-String Comparison\n 4-String Copy\n 5-Substring-check if letter \"n\" is present or not\n");
	printf("Enter the desired operation\n");
	scanf(" %d", &op);
	switch (op)
	{
	case 1:
		printf("Length of the string 1 is \n %lu", strlen(str1));
		break;

	case 2:
		strcat(str1, str2);
		printf("Concatenated Strng is %s", str1);
		break;

	case 3:
		printf("%d \t", strcmp(str1, str2));
		break;

	case 4:
		strcpy(str2, str1);
		printf("Copied string %s", str2);
		break;

	case 5:
		c = strstr(str1, "n");
		if (c != NULL)
		{
			printf("Substring found");
		}
		else
		{
			printf("Substring not found");
		}
		break;
	default:
		printf("Incorrect output");
	}
	return 0;
}
