#include<stdio.h>
#include <time.h> 

void WriteC2(char * str){
	FILE *fpt;
	time_t timep;   
	time(&timep);  
	fpt = fopen("/home/zrd/wendangming2.txt","a+");
	fprintf(fpt,"%s %s",str,asctime(gmtime(&timep)));
	fclose(fpt);

}