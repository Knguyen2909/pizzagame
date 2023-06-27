#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void printArray(int size, int a[3]){
  for (int i = 0; i < size; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

void sortArray(int size, int a[3]){
  // do the sorting
  // generic sorting algorithm
  for(int p = 0; p < (size - 1); p++){ // we sorted up to position p
    // step 1: find the maximum
    int max = p; // position where we have the maximum
    for (int i = p; i < size; i++){
      if(a[max] < a[i]){
        max = i;
      }
    }
    // put the max at the beginning of the array
    int tmp = a[p];
    a[p] = a[max];
    a[max] = tmp;
  }
}

typedef struct{
  int att;
  int def;
} risiko_t;

/*
 Somehow multiple attackers/defenders
 @return a positive number: number of armies lost from the defender
 */
risiko_t risiko(int dieAtt, int scoreAtt[3], int dieDef, int scoreDef[3]){
  sortArray(dieAtt, scoreAtt);
  sortArray(dieDef, scoreDef);

  // 6, 4, 1
  // 5, 4

  // Attacker:  6, 6
  // Defender:  6, 1
  // do the matching
  int dies_to_compare = (dieAtt > dieDef) ? dieDef : dieAtt; // min(dieAtt, dieDef)
  risiko_t res = {0, 0};
  for(int i=0; i < dies_to_compare; i++){
    if(scoreAtt[i] > scoreDef[i]){
      res.def++;
    }else{
      res.att++;
    }
  }

  return res;
}

// str = 1,3,4
int init_array(int a[3], char * str){
  int pos = 0;
  // iterate over the string
  for(int i = 0; ; i++){
    if(str[i] == 0){
      break;
    }
    if( str[i] == ',' ){
      pos++;
    }else if(str[i] <= '6' && str[i] >= '1'){
      a[pos] = str[i] - '0';
    }else{
      printf("Error parsing %s\n", str);
    }
  }
  return pos + 1;
}

// example usage: ./risiko  3,4,5  1,2
int main(int argc, char ** argv){
  if(argc != 3){
    printf("Synopsis: %s [1,2,3] [2,3]\n", argv[0]);
    exit(0);
  }
  int att[3];
  int def[3];
  int c_att = init_array(att, argv[1]);
  int c_def = init_array(def, argv[2]);
  risiko_t res = risiko(c_att, att, c_def, def);
  printf("attacker: %d defender: %d\n", res.att, res.def);
  return 0;
}
