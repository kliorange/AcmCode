/*
kliorange
2015.12.22 00:45-02:17
ZHBIT ACM 2013-1002 <Brothers String>
ALGORITHM:
1.Compare the length
2.Use the "String array subscript sort" algorithm to calculate the frequency of the character
3.Judge the number frequency is same or not
4.How to let the code more effective?
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//A function about use the "String array subscript sort" algorithm to calculate the frequency of the character
int subSort(char *str1,char *str2)
{
	int i = 0;
	
	//Define the array which use to store the number frequency
	int subSortStr1[60]={0};
	int subSortStr2[60]={0};
	
	//Intermediate character
	char ch1,ch2;
	
	//Define a variable to judge the string is brother string or not
	int x=0;
	
	//Store the character data respectively
	for( i=0 ; *(str1+i)!='\0' ; i++ )
	{
		ch1=*(str1+i);
		ch2=*(str2+i);
	 	//To find out the int array is same or not
		subSortStr1[ch1-'A']++;
		subSortStr2[ch2-'A']++;
	}
	for ( i=0; i<60 ; i++)
	{
	    //Judge the number frequency is same or not
	    if(subSortStr1[i]==subSortStr2[i])
            	x=0;
            else
            {
       		x=1;
     		break;
     	     }
	}
	if(x==0)
		return 1;
	else
		return 0;
}


//Main function
int main(int argc, char const *argv[])
{
	//a to store the str1's length, b to store the str2's length
	int i=0,j=0,a=0,b=0;

	//Define the array to store the string
	char str1[101]={0},str2[101]={0};

	while(scanf("%d",&i)!=EOF)
	{
		//Input the data
		for( j=0 ; j<i ; j++ )
		{
			scanf("%s",&str1);
			scanf("%s",&str2);
			//Compare the length
			a=strlen(str1);
			b=strlen(str2);

			if(a==b)
			{
				//Use the "String array subscript sort" algorithm to calculate the frequency of the character
				if( subSort(str1,str2)==1 )
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
				printf("NO\n");
		}
	}
	return 0;
}
