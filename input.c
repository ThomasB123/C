#include <stdio.h>
//#include <stdlib.h>

int main(){
    char infile[] = "read.txt";
    char outfile[] = "output.txt";

    FILE *ifp;
    FILE *ofp;

    ifp = fopen(infile, "r");
    ofp = fopen(outfile, "w");
    if (ifp == NULL)
        {
        printf("can't open file\n");
        //return
        }
    else
        {
        printf("opened file %s\n", infile);

        char username[9];

        while (fscanf(ifp, "%s", username) != EOF)
            {
            printf("%s\n", username);
            }

        }
    char name[] = "Thomas";
    int age = 19;
    int height = 170;
    fprintf(ofp,"name = %s\n",name);
    fprintf(ofp,"age = %i\n",age);
    fprintf(ofp,"height = %i\n",height);

    fclose(ifp);
    fclose(ofp);
}