/*
kliorange
2015.12.23 17:01-17:25
ZHBIT ACM 2013-1004 <The sum of Prime>
ALGORITHM:
1.Make the function to calculate the prime
2.Calculate the sum of primr
3.How to let the code more effective?
*/
#include<stdio.h>
#include<math.h>

//The function to judge the number is prime or not
int judgePrime(int number)
{
	int i=0;
	float x=0;
	x=number;
	for( i=2 ; i<=sqrt(x) ; i++ )
	{
		if( number%i ==0)
			return 0;
	}
	return 1;
}

//The main function
int main()
{
    int judgePrime(int number);
	int N=0;
	int i=0;
	int sum=0;

	while(scanf("%d",&N)!=EOF)
	{
	    sum=0;
		//Use a array to store the number which is prime
		for( i=2 ; i<=N ; i++ )
		{
			if(judgePrime(i)==1)
				sum+=i;
            else
                continue;
		}
		printf("%d\n",sum);
	}
	return 0;
}
