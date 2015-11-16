/* C standard input/output library file

You can find it by doing:
$ sudo updatedb
$ sudo locate stdio.h

Some libraries will ship a version of this, but /usr/include/stdio.h
is a good one to look at.

This is where `printf` comes from.
 */

/* The inclusion here gets the explicit definition of `printf`.  The
program will work without it but that would be bad practices.

To preven it from allowing the implicit definition of printf you should
compile with the following:

cc -std=c99 -Werror=implicit hello.c
*/

#include <stdio.h>

int main1(void) {
  /* If you compile this with -std=c89 the exit code would be "13"
     because thats the amount of characters printf saw and that is
     its return value. You should be using -std=c99 to prevent this.
  */
  printf("hello, world\n");
  return 0;
}
