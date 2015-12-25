/*
kliorange
2015.12.22 02:28-02:45
ZHBIT ACM 2013-1003 <Eliminate Game>
ALGORITHM:
1.Use array to solve the problem.
2.Change the character to "1" when the character need be eliminate.
3.In the end, pass the "1" characters when output.
4.How to let the code more effective?
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//The function use to eliminate the character which we want eliminate
void eliminateChar(char *str,char *elimi)
{
	int i=0,j=0;
	for( i=0 ; *(elimi+i)!='\0' ; i++ )
	{
		for( j=0 ; *(str+j)!='\0' ; j++ )
		{
			//Change the character to "1" when the character need be eliminabte
			if( *(elimi+i)==*(str+j) )
				*(str+j)='1';
		}
	}
	return;
}

//The function use to pass the '1' in the array
void passOnePrintf(char *pass)
{
	int i=0;
	while( *(pass+i)!='\0' )
	{
		if( *(pass+i)!='1' )
			printf("%c", *(pass+i) );
		i++;
	}
	printf("\n");
	return ;
}

//The main function
int main()
{
	int T=0;
	int j=0;
	
	//Use array to solve the problem
	char str[101];
	
	//Use another array to store the characters which need to eliminate
	char eliminate[101];
	
	//Input the data about T
	while(scanf("%d",&T)!=EOF)
	{
		//Input the data
		for( j=0 ; j<T ; j++ )
		{
			scanf("%s",str);
			scanf("%s",eliminate);
			
			//To eliminate the chartacters
			eliminateChar(str,eliminate);
			
			//Output the data
			passOnePrintf(str);
		}
	}
	return 0;
}
