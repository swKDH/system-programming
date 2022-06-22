#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main  (int argc, char *argv[]) {
	int line =0;
	char buf[100];
	printf("%-6s %-4s %-4s\n", "파일 이름", "라인 수", "문자열");
	scanf("%s , %d,%s", fp,&line, buf);
						
	if ((fp=fopen("a.txt" ,"rb"))!=NULL) {
			if (fgets(buf,100,fp)!=NULL)) {
				if (line ==) {
					printf("%s\n" ,strtok(buf," : "));
					break;
				}
			}
			else {
				printf("단어가 없습니다");
			}
	}																		                    
	else {
		printf("파일이 존재하지 않습니다");
	}
	fclose(fp);
	return 0;

}
`


