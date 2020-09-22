#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() 
{
	int i,j,productions_count=0,k=0,terminals_count=0;
int variables_count=0,z=0,p,count1=0,count2=0,r=0;
	char s[10][10],str[10],variables[50],non[50],c;
	printf("Enter the productions\n");
	while(1) {
		scanf("%s",str);
		if(strcmp(str,"#")==0) 
		{
			break;
		}
		strcpy(s[productions_count],str);
		productions_count++;
	}
	for(i=0;i<productions_count;i++) 
	{
		for(j=0;j<strlen(s[i]);j++) 
		{
		    char ch=s[i][j];
		    for(p=0;p<k;p++) 
		    {
		        if(variables[p]==ch) 
		    	    z=1;
		    	else
		    	    z=0;
		    }
			if(z==0)
			{
				variables[k]=s[i][j];
				k++;
			}
		}
	}
	for(i=0;i<k;i++) {
		if(isupper(variables[i])) {
			variables_count++;
		}
	}
	for(i=0;i<k;i++) {
		if(variables[i]!='-'&&variables[i]!='>'&& !isupper(variables[i])) {
			terminals_count++;
		}
	}
    printf("The number of productions are : %d\n", productions_count);
	printf("The number of variables are : %d\n",variables_count-count1);
	printf("The number of Terminals are : %d", terminals_count-count2);
	return 0;
}
