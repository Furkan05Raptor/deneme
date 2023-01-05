#include <stdio.h>




int main()
{
	char isim[100],ikili[100];
	int c,i,x
	;
	printf("How many characters do you want to enter:");
	scanf("%d",&c);
	printf("\nEnter the word: ");
	scanf("%s",isim);

	isim[2*c]=NULL;

	for (c;c>0;c--){
		i=(c-1)*2;
		isim[i]=isim[c-1];
		isim[i+1]=isim[i];
	
	
}

	
	printf("\n%s",isim);
	
	
	return 0;
}
