int k,qi,j;
for(i=0;i<=10000;i++) //5
{
if(i++ <= 10000)
{
	for(j=1;j<=10000;j++)//5
	{
		q = i%j; //0
		k = i/j;//1
		if((i != 1) && (j !=1))
		{
			if(q == 0) && (k == 1)
			{
				printf("%d is a prime no.\n",i);
			}
		}
		

	}
}
}