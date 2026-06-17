//-----------sort list the record----------//
#include"student.h"
void sort(struct st *ptr)
{
	struct st *t=copy_list(ptr);
	struct st *i, *j;
	struct st temp;
	char sc;
	int size = sizeof(struct st) - sizeof(struct st *);
	printf("\n");
	printf("\t\t+----------------------------------+\n");
	printf("\t\t|     CHOOSE THE OPTION TO SORT    |\n");
	printf("\t\t+----------------------------------+\n");
	printf("\t\t|       N/n : Sort with Name       |\n");
	printf("\t\t|       M/m : Sort with Mark       |\n");
	printf("\t\t+----------------------------------+\n");
	printf("\nCHOOSE THE OPTION : ");
	scanf(" %c",&sc);
	switch(sc|32)
	{
		/* sort by name ascending */
		case 'n':

			for(i = t; i != 0; i = i->next)
			{
				for(j = i->next; j != 0; j = j->next)
				{
					if(strcmp(i->name, j->name) > 0)
					{
						memcpy(&temp, i, size);
						memcpy(i, j, size);
						memcpy(j, &temp, size);
					}
				}
			}

			break;

		/* sort by mark descending */
		case 'm':

			for(i = t; i != 0; i = i->next)
			{
				for(j = i->next; j != 0; j = j->next)
				{
					if(i->mark < j->mark)
					{
						memcpy(&temp, i, size);
						memcpy(i, j, size);
						memcpy(j, &temp, size);
					}
				}
			}

			break;

		default:
			printf("Invalid choice\n");
	}
	show(t);
}
