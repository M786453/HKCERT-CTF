#include <stdio.h>

char *flag_prefix = "hkcert24{";

char flag_middle[28];

char *flag_suffix = "cha1}";

char *encrypted_data_1 = "\xce\x21\xdb\x64\xd1\x50\xe0\x1b\x0d\x3e\xfb\x0a\x52\x2f\x94\x9d\xaf\xb1\x58\x6b\x8a\xee\xc1\xf0\xfc\x19\x0a\xe3\xe9\x1e\xd0\x4a...";

char *encrypted_data_2 = "\xBD\x10\xB6\x50\xBD\x35\xBF\x78\x7F\x0A\x98\x61\x1F\x1C\xCB\xA9\xF0\xD9\x6C\x05\xEE\xAC\xB8\x98\x9D\x77\x3C\xBC\x81\x2E\xA0\x79...";

int main(){

    int i;

    for ( i = 0; i < 28; i++){

        for (int j = 0; j < 127; j++){

            if((j ^ encrypted_data_1[i]) == encrypted_data_2[i]){

                    flag_middle[i] = j;

            }

        }

    }

    printf("%s%s%s\n", flag_prefix, flag_middle, flag_suffix);

    return 0;
}