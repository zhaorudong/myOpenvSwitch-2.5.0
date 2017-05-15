#include <stdio.h>
#include <time.h> 
void WriteC_ofproto(char * fileName,char * funcName,int lineNum){
	FILE *fpt;
	time_t timep;   
	time(&timep);  
	fpt = fopen("/home/zrd/wendangming2.txt","a+");
	fprintf(fpt,"time:%s fileName:%s funcName:%s lineNum:%d ",asctime(gmtime(&timep)),fileName,funcName,lineNum);
	fclose(fpt);

}