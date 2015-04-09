#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	printf ("You have entered %d Arguments\n", argc);
	int i;
	FILE *log_file;
	char buf[1000];

	for (i=1; i< argc; i++){
		printf ("Reading log file %s\n\n\n",argv[i]);
		log_file =fopen(argv[i], "r");
		if (!log_file)            //File open not successfull
			return 1;
		while (fgets(buf,1000, log_file)!=NULL)
		        		printf("%s",buf);

		fclose(log_file);
	}


	return 0;

}
