/* The 1. Salt -> string containing anything, 5 chars */
#define SALT1 "cdlnn"

/* The 2. Salt -> string containing anything, 5 chars */
#define SALT2 "ipojg"

/* the 1. Code -> a one byte startup code */
#define CODE1 64

/* the 2. Code -> a one byte startup code */
#define CODE2 77

/* the 1. Salt Offset -> value from 0-4 */
#define SA1 0

/* the 2. Salt Offset -> value from 0-4 */
#define SA2 0

/* the make salt routine */
/* dont wonder about the redundance, its needed to somehow hide the fully salts */

/* salt buffers */

unsigned char slt1[6];
unsigned char slt2[6];

int makesalt(void)
{
    slt1[0]=SALT1[0];
    slt1[1]=SALT1[1];
    slt1[2]=SALT1[2];
    slt1[3]=SALT1[3];
    slt1[4]=SALT1[4];
    slt1[5]=0;
    slt2[0]=SALT2[0];
    slt2[1]=SALT2[1];
    slt2[2]=SALT2[2];
    slt2[3]=SALT2[3];
    slt2[4]=SALT2[4];
    slt2[5]=0;
}
