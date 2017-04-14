//test niels
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	// Date,Open,Low,High,Close,Volume,Adj Close
	// 2010-12-20,3873.24,3918.69,3869.20,3885.08,100344000,3885.08
	// 
	const char Delim = ',';

	FILE * Infile;
	char Inrec[200];
	
 	char *tok1, *tok2;
	char sdate[10];
	int  reccnt=0;
	int tokcnt;

   
	//to be Implemented: Filesort

 	Infile = fopen ("./Code-Source/CAC40_TEST.txt", "r");

 	while(fgets(Inrec,sizeof(Inrec),Infile))
	{
		reccnt++;
		printf("Record %d %s \n",reccnt,Inrec);

		/* Process one line of Input */
		/* Break down line into fields */

		tokcnt=1;
   		tok2= strtok(Inrec,&Delim);   

		while ((tok1 = strtok(NULL, &Delim)) != NULL)
        {
            printf("Loop body: %d : %s\n", tokcnt, tok2);

            switch (tokcnt)
            {
            	case 1: //Date
            		break;
            	case 2: //Open
            		break;
            	case 3: //Min
            		break;
            	case 4: //Max
            		break;
            	case 5: //Close
            		break;
            	case 6: //Volume
            		break;
            }
            	
            tok2 = tok1;
            tokcnt++;
        }
		
		//sdate= &token ;
	}
	//printf("hello world\n");
	fclose(Infile);

	// Further file processing

	return 0;
}
