//Write a Program to convert the given string in toggle case without using any string function.
//Write a Program to convert the given string in uppercase without using any string function.
#include<stdio.h>
main(){
	int i;
	char s[10]={'H','e','L','L','o','W','o','R','l','D'};

	for(i=0;i<=9;i++){
			if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
            printf("%c",s[i]);	
        }
        else{
            s[i]=s[i]-32;
            printf("%c",s[i]);	
		}
		
	}

}
