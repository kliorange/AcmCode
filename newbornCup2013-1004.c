/*
kliorange
2015.12.23 17:01-2015.12.25 20:31
ZHBIT ACM 2013-1004 <T:e sum of Prime>
ALGORITHM:
1.Make the function to calculate the prime
2.Calculate the sum of primr
3.How to let the code more effective?
*/
#include<stdio.h>
#include<math.h>
/*
//The function to judge the number is prime or not
int judgePrime(int number)
{
	int i=0;
	float x=0;
	x=number;
	for( i=2 ; i<=sqrt(x) ; i++ )
	{
		if( （number%i) ==0)
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
*/

//Easy fuction to judge the prime
int easyPrime(int n)
{
	int i=0;
	for( i=2 ; i<n ; i++ )
	{
		if(n%i==0)
			return 0;
	}
	return 1 ;
}

//Play a list to find out what problem happen?
int main()
{
	int sum=0;
	int N=0,i=0;
	int j=0;
	int str[1230]={0};
	for( i=2 ; i<10000 ; i++ )
	{
		if( easyPrime(i)==1 )
			{
			    str[j]=i;
			    j++;
			}
	}
	while(scanf("%d",&N)!=EOF)
	{
	    sum=0;
	    for( i=0 ; i<1230 ; i++ )
	    {
	    	if(str[i]>N)
	    		break;
	    }
	    for( j=0 ; j<=(i-1) ; j++ )
	    	sum+=str[j];
		printf("%d\n",sum);
	}

}
/*
Accepted
But why the judgePrime function can't work?
*/
