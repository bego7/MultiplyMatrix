#include <stdlib.h>
#include <stdio.h>

int palindromo(char *ptch, char *ptchLast){
	int bandera =0;
	while(ptch<ptchLast){

		if(*ptch !=*ptchLast){
			bandera =1;
			return bandera;
			break;	
		}
		
		ptch++;
		ptchLast--;

		bandera =0;
		return bandera;
	}
}

int main(){
	int number;
	scanf("%d\n",&number);

	for(int i=0;i<number;i++){

		char input [1025];
		fgets(input,1024,stdin);

		char *ptch =input;
		char *ptchLast =input;

		while(*ptchLast!=0){
			ptchLast++;
		}

		ptchLast--;
		ptchLast--;

		// int isPalindrome = 0;

		// while(ptch < ptchLast){
		// 	if(*ptch != *ptchLast){
		// 		isPalindrome = 1;
		// 		break;
		// 	}
		// 	ptch++;
		// 	ptchLast--;
		// }

		// if(isPalindrome == 0)
		// 	printf("YES\n");
		// else
		// 	printf("NO\n");
		if(palindromo(ptch, ptchLast)==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	return 0;
}