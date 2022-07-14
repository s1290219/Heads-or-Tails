#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int i,r,h;

printf("Tossing a coin...\n");

srand((unsigned int)time(NULL));

for(i = 1 ; i < 4 ; i++){

r = (rand()% 2 + 1);

if(r == 1){
printf("Round %d: Heads\n",i);
h++;
}
else if(r == 2){
printf("Round %d: Tails\n",i);
}

}

printf("Heads: %d, Tails: %d\n",h,3-h);
  
  if(h > 3-h) printf("%s won!\n",str);
  else printf("%s lost...\n",str);

return 0;
}
