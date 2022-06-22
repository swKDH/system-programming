#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
	FILE *fp;
	char buf[100];
	int lineCnt =0;
	
	if ((fp=fopen("a.txt" ,"rb"))!=NULL) {
		while (fgets(buf,100,fp)!=NULL) {
			lineCnt++;
			if (lineCnt ==2) {
				printf("%s\n" ,strtok(buf,"option : "));
				break;
			}
		}
	}
	fclose(fp);
	return 0;
}

