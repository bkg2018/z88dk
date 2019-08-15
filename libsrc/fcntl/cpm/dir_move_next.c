/*
 *  CP/M Directory browsing
 * 
 *  Stefano, 5 Jun 2013
 *  07/2019: Workaround to stabilize dir_move_next when file operations happen.
 *  08/2019: Dealing with the bdos() function in a correct way
 *
 *
 *  $Id: dir_move_next.c $
 */

#include <cpm.h>

char entry_count;
char current_entry;

int dir_move_next()
{
	current_entry=fc_dirbuf[133];
	dir_move_first();
	for (entry_count=0; entry_count<current_entry; entry_count++) bdos(CPM_FNXT,&fc_dir);
	fc_dirbuf[133]=current_entry+1;
	fc_dirpos=bdos(CPM_FNXT,&fc_dir);
	return (fc_dirpos==-1?0x24:0);	// Not knowing what to pass for non-zero, let's simulate FLOS error code $24 (= Reached end of directory)
}
