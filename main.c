/*	
	CMP_SC 1050
	SP2024
	Prelab 13 Starter
	Jim Ries
	SP2024
*/
#include <stdio.h>
#include "basicplayer.h"

int main(void)
{
    BasicPlayer player;
    int walks;

    if (GetNextPlayer(&player))
    {
        if ((-1)!=(walks=GetStat(player.id,WALKS)))
        {
            printf("%s had %d walks.\n",player.name,walks);
        }
    }
}
