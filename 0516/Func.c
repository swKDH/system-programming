#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 256

int main(int argc, char *argv[]){
	FILE *fp;
	char filename[MAX_LENGTH];
	int line;
	char number[MAX_LENGTH];
	char buffer[MAX_LENGTH];
	int lineCnt = 0;
	printf("파일이름 : ");
	scanf("%s",filename);
	printf("라인수 : ");
	scanf("%d",&line);
	printf("문자열 : ");
	scanf("%s",number);
	if((fp = fopen(filename,"r")) != NULL){
		while(fgets(buffer,MAX_LENGTH,fp) != NULL) {
			lineCnt++;
			if(lineCnt == line) 
				printf("%s\n",strtok(buffer,number));
			break;
		}
	}
	fclose(fp);
	return 0;
}
