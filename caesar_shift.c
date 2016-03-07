#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

char str[1000];

//Function to shift the string by the key
void caesar_shift(int key)
{
	int i;
	int len=strlen(str);
	if(key<0)
		key=(key%26)+26;
	for(i=0;i<len-1;i++)
	{
		if(isalnum(str[i]))
		{
			if(isupper(str[i]))
				str[i]= 'A' + (str[i]-'A'+key)%26;
			else if(islower(str[i]))
				str[i]= 'a' + (str[i]-'a'+key)%26;
		}
	}
	printf("\nENCRYPTED CAESAR's CIPHER(of key %d) ---> %s\n\n",key,str);
}

void main()
{
	system("clear");
	int n=0;
	printf("\t\t\t  CAESAR's CIPHER");
	printf("\nEnter a sentence-> ");
	gets(str);
	printf("Enter the shift key:- ");
	scanf("%d",&n);
	caesar_shift(n); 
}
