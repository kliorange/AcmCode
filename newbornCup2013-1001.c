/*
kliorange
2015.12.22 23:15-23:24
ZHBIT ACM 2013-1001 <Greatest Commom Divisor>
ALGORITHM
1.Make the function gcd()
2.Use the gcd() to caculate the greatest commom divisor
3.Dynamic memory allocation to store the input data
4.Caculate the gcd one by one
*/
#include<stdio.h>
#include<stdlib.h>
//Function to caculate the greatest common divisor
int gcd(int a,int b)
{
	int c=0;
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	else if(a%b==0)
		return b;
	else if(a%b!=0)
		return gcd(b,a%b);
}

//Main function
int main()
{
	int N=0,i=0;
	int *p=NULL;
	int gcd(int a, int b);
	while(scanf("%d",&N)!=EOF)						//Store N data
	{
		p=(int*)malloc(N*sizeof(int));				//Dynamic memory allocation. Store in heap(¶Ñ)

		for( i=0 ; i<N ; i++)					    //Store the data
			scanf("%d",p+i);
		for( i=0 ; i < (N-1) ; i++ )
		{
			*(p+i+1)=gcd( *(p+i+1) , *(p+i) );
		}
		printf("%d\n", *(p+N-1) );
		free(p);
		p=NULL;
	}

    return 0;
}
