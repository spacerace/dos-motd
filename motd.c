/* DOS FORTUNE 
 * 
 *  (c) 2018 <stecdose@gmail.com>
 *  license: GPLv2
 */

#include <stdio.h>
#include <string.h>
#include <dos.h>

#define uint16_t    int

#define DEFAULT_MOTD  "C:\\MOTD"

int main(int argc, char *argv[]) {
    int f;

    char line[514];

    if(argc == 1) {     // no args given
        f = fopen(DEFAULT_MOTD, "r");
    } else if(argc == 2) {
        f = fopen(argv[1], "r");
    }

    if(f == NULL) {
        puts("can't open MOTD file for reading...\r\n");
        exit(-1);
    }

    while(fgets(line, 512, f)) {
        line[strlen(line)-1] = '\0';
        puts(line);
    }
    fclose(f);

}
