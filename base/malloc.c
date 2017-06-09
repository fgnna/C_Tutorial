#include <stdio.h>
#include <stdlib.h>

int main()
{
	int friends = 0;
	printf("how match friend ? : ");
	scanf("%d",&friends);
	printf("you friends = %d\n",friends);
	
	if(0 >= friends)
	{
		printf("you are alone!\n");
		return 0;
	}
	int *ageFriends = NULL;
	ageFriends = (int *)malloc( sizeof(int) * friends );
	
	for(int i = 0; i < friends; i++ )
	{
		printf("you friend %d age is :",i+1);
		scanf("%d",ageFriends+i);
		printf("friend age %d: %d\n",i+1,*(ageFriends+i));
	}	
		
	free( ageFriends );
}
