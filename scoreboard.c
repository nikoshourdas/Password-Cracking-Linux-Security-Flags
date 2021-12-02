#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<math.h>

int main() {

	char *buf;
	time_t t;

	buf=(char *)malloc(10*sizeof(char));
	cuserid(buf);
	printf("\n%s \n",buf);

	srand((unsigned) time(&t));
	int scoreNumber = (rand() % (2-101));

	FILE *myFile = fopen("scoreboard.txt", "a");

	if(myFile == NULL){
		printf("\nERROR\n");
		perror("fopen");
	}
	else{
		fprintf(myFile,"%d %s\n",scoreNumber,buf);	
	}
	fclose(myFile);

return 0;
}