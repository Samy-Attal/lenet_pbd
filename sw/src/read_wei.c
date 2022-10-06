#include <stdio.h>


int main(int argc, char** argv)
{
    if(argc != 3)
    {
        printf("Number of arguments invalid\n");
        exit(1);
    }
    int size = atoi(argv[2]);
    FILE * pFile1 = fopen (argv[1],"rb");
    float file[size];
	if (pFile1 != NULL)
	{
	    int i=0;
	    for(;i < size; i++)
            fread(&(file[i]),sizeof(float),1,pFile1);
		    
		fclose (pFile1);
	}

    //print

    printf("{");
    for(int i = 0; i < 156; i++){
        printf("%f",file[i]);
        if(i < 155)
            printf(",");
    }
    printf("};");
    printf("\n");
    return 0;
}