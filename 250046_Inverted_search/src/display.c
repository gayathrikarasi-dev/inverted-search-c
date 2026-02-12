#include "inverted.h"

void display_database(M_node *HT[])
{
    printf(CYAN"\n******************* INVERTED SEARCH DATABASE *******************\n"RESET);
    printf(BLUE"=================================================================\n"RESET);
    printf(GREEN"Index | Word            | Files | File Name         | Count\n"RESET);
    printf(BLUE"=================================================================\n"RESET);

    for (int i = 0; i < 27; i++)
    {
        if (HT[i] == NULL)
            continue;

        M_node *mtemp = HT[i];

        while (mtemp)
        {
            S_node *stemp = mtemp->sub_link;
            int first = 1;

            while (stemp)
            {
                if (first)
                {
                    printf(WHITE"%-5d | %-15s | %-5d | %-17s | %-5d\n",
                           i,
                           mtemp->word,
                           mtemp->file_count,
                           stemp->filename,
                           stemp->word_count);
                    first = 0;
                }
                else
                {
                    printf(WHITE"      |                 |       | %-17s | %-5d\n",
                           stemp->filename,
                           stemp->word_count);
                }

                stemp = stemp->sub_link;
            }

            printf(BLUE"-----------------------------------------------------------------\n"RESET);
            mtemp = mtemp->main_link;
        }
    }
}