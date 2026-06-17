#include"student.h"
void save(struct st *ptr)
{
    struct st *temp = ptr;

    FILE *fp = fopen("single_end.txt","w");

    while(temp != NULL)
    {
        fprintf(fp,"%d %s %f\n",
                temp->roll,
                temp->name,
                temp->mark);

        temp = temp->next;
    }

    fclose(fp);

    fp = fopen("student.txt","w");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    temp = ptr;   // Reset traversal pointer

    if(temp != NULL)
    {
        fprintf(fp,"\n");
        fprintf(fp,"\t\t+---------------+---------------+---------------+\n");
        fprintf(fp,"\t\t|               STUDENT RECORD                  |\n");
        fprintf(fp,"\t\t+---------------+---------------+---------------+\n");
        fprintf(fp,"\t\t| ROLL NUMBER   | NAME          | MARK          |\n");
        fprintf(fp,"\t\t+---------------+---------------+---------------+\n");

        while(temp != NULL)
        {
            fprintf(fp,
                    "\t\t| %-13d | %-13s | %-13.2f |\n",
                    temp->roll,
                    temp->name,
                    temp->mark);

            temp = temp->next;
        }

        fprintf(fp,"\t\t+---------------+---------------+---------------+\n");
    }
    else
    {
        fprintf(fp,"\t\tTHERE IS NO RECORDS OF THE STUDENTS\n");
    }

    fclose(fp);
    

    printf("\nFILE SAVED SUCCESSFULLY\n");
}
