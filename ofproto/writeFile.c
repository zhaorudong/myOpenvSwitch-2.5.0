#include<stdio.h>
#include <time.h> 

void WriteC(char * str){
	FILE *fpt;
	time_t timep;   
	time(&timep);  
	fpt = fopen("/home/zrd/wendangming.txt","a+");
	fprintf(fpt,"%s %s",str,asctime(gmtime(&timep)));
	fclose(fpt);

}