#include <stdio.h>
#include <string.h>

char possible_characters[257] =
{
  '\xBD',
  '\x10',
  '\xB6',
  'P',
  '\xBD',
  '5',
  '\xBF',
  'x',
  '\x7F',
  '\n',
  '\x98',
  'a',
  '\x1F',
  '\x1C',
  '\xCB',
  '\xA9',
  '\xF0',
  '\xD9',
  'l',
  '\x05',
  '\xEE',
  '\xAC',
  '\xB8',
  '\x98',
  '\x9D',
  'w',
  '<',
  '\xBC',
  '\x81',
  '.',
  '\xA0',
  'y',
  '=',
  '\x8B',
  'w',
  '\xDD',
  '\x7F',
  'o',
  '\xE3',
  '\x02',
  '+',
  'C',
  '8',
  'h',
  '\xA8',
  '\xD7',
  '\x12',
  '\n',
  '\xA1',
  '\xDC',
  '\xF5',
  '\xF3',
  '\x83',
  '!',
  '\xDC',
  'g',
  '\xDA',
  'f',
  '\x9B',
  'w',
  '\xD3',
  '\xA9',
  'U',
  '\xE2',
  'n',
  ':',
  '.',
  'b',
  '\x8E',
  '^',
  '\x88',
  'b',
  '6',
  '\xA1',
  '\xE7',
  '-',
  '\x91',
  '\xF2',
  '2',
  '\x93',
  'g',
  '{',
  '\xBD',
  '\xF0',
  '\xCD',
  '\x10',
  '\xDA',
  '\x7F',
  ',',
  'x',
  'V',
  '\x8A',
  '\xA0',
  '8',
  '.',
  '\xE1',
  '\xB1',
  '\x88',
  '\xB0',
  'G',
  '\x13',
  '\x04',
  '\xF7',
  '\xC4',
  'c',
  '\x14',
  '\xDB',
  '\f',
  '\xBB',
  '\x13',
  'K',
  '\xEF',
  '\xBB',
  'r',
  '$',
  '\x14',
  'Y',
  '\x83',
  '\x90',
  '\xA4',
  '\t',
  'i',
  '\xCC',
  'z',
  '\xE2',
  '\x9E',
  '\x8C',
  '\x8F',
  'i',
  '\xA1',
  '\xED',
  'M',
  '\xE9',
  'P',
  '\xA2',
  '2',
  '\xFE',
  '$',
  '\x8A',
  'T',
  '\x7F',
  '\xFF',
  '\x14',
  '\x81',
  '\x1D',
  '\xB6',
  '\xC1',
  '9',
  'w',
  '\x8A',
  'p',
  '\xF3',
  ',',
  'w',
  '\xB2',
  '\xCE',
  '7',
  '\xAD',
  '\a',
  '\x03',
  'n',
  '\xBE',
  '\x18',
  '\xF8',
  'B',
  '\x90',
  'A',
  '\x8A',
  '\xE6',
  '\xFC',
  'b',
  '4',
  'j',
  '\xCE',
  'R',
  '\x9A',
  'y',
  'j',
  '5',
  '\x8A',
  'M',
  '5',
  '\x81',
  '\"',
  'C',
  '(',
  '\xD2',
  '\x96',
  '\xD4',
  '\x9B',
  ',',
  '\xEE',
  '\x9F',
  '\xFD',
  '\x8F',
  '\xBE',
  '\x81',
  'x',
  '3',
  '\xF0',
  '\x06',
  '\x82',
  '\x15',
  '\xCE',
  '\xC1',
  't',
  'r',
  'B',
  'd',
  '3',
  '\xC3',
  '\x17',
  '\x90',
  '\xDE',
  '\x12',
  '\xDB',
  '\xC3',
  'p',
  '\xA1',
  'V',
  '~',
  '-',
  '\x92',
  '\x15',
  'E',
  '\xBA',
  'z',
  'b',
  'O',
  '\xEF',
  '\xCF',
  '~',
  'U',
  '>',
  'J',
  'B',
  '\xA9',
  '\xB3',
  '\xE8',
  'e',
  'Q',
  '\xEF',
  '`',
  '\x9B',
  '\xB7',
  '\x1E',
  'Z',
  'g',
  '\x98',
  '\xCB',
  '\xC1',
  ' ',
  'A',
  '\x92',
  '\xDA',
  'n',
  '\0'
}; 

void *off_4048 = &off_4048;
char *initial_flag = "hkcert24{"; 
char *off_4058 = "\xce\x21\xdb\x64\xd1\x50\xe0\x1b\x0d\x3e\xfb\x0a\x52\x2f\x94\x9d\xaf\xb1\x58\x6b\x8a\xee\xc1\xf0\xfc\x19\x0a\xe3\xe9\x1e\xd0\x4a...";;

int main()
{
  int i;
  int v5;
  int length;
  char input_flag[256]; 

  printf("Enter the flag: ");

  scanf("%s", input_flag);

  if (strstr(input_flag, initial_flag) != input_flag )
    goto LABEL_15;

  length = strlen(input_flag);
  
  if ( strchr(input_flag, 125) != &input_flag[length - 1]
    || input_flag[length - 2] != 49
    || input_flag[length - 5] + input_flag[length - 4] + input_flag[length - 3] != 300
    || 2 * input_flag[length - 5] + input_flag[length - 4] + 2 * input_flag[length - 3] != 496
    || 2 * input_flag[length - 5] + 3 * input_flag[length - 4] + input_flag[length - 3] != 607 ){
  
    goto LABEL_15;
  
  }

  v5 = 0;
  
  for ( i = 0; i < length - 14 && (*((char *)off_4058 + i) ^ input_flag[i + 9]) == possible_characters[i]; ++i )
    ++v5;

  if ( v5 == 28 && i == length - 14 ){

    printf("You are now verified!\n");

    return 0;

  }else{

    LABEL_15:
      
      printf("Bye\n");
      
      return -1;

  }

}

// hkcert24{s1m4le_cr4ckM3_4_h4ndByhan6_cha1}