//Write a Program to convert the given string in uppercase without using any string function.
#include<stdio.h>
main(){
	int i;
	char s[11]={'H','E','L','L','O','W','O','R','L','D'};

	for(i=0;i<11;i++){
			
            s[i]=s[i]+32;
            printf("%c",s[i]);	
        
		
	}

}
