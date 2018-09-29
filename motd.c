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

    char line[82];
    char motd_file[129];

    if(argc == 1) {     // no args given
        sprintf(motd_file, "%s", DEFAULT_MOTD);
    } else if(argc == 2) {
        sprintf(motd_file, "%s", argv[1]);
    }

    f = fopen(motd_file, "r");
    if(f == NULL) {
        printf("can't open '%s' for reading...\r\n", motd_file);
        exit(-1);
    }

    while(fgets(line, 82, f)) {
        printf("%s", line);
    }
    fclose(f);

}
