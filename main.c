#include <stdio.h>
//#include <unistd.h>
#include <pthread.h>


void *foo(void *vargp){
  printf("%s\n",(char *)vargp );
  return NULL;
}

  
int main(int argc, char *argv[]){
  pthread_t thread[3];
  char *s[3];
    s[0] = "Thread #1 Hello World!";
    s[1] = "Thread #2 Where am I?";
    s[2] = "Thread #3 What is happening?";
  
  for(int i = 0; i < 3; ++i)
    pthread_create(&(thread[i]), NULL, foo, (void *)(s[i]));

  for(int i = 0; i < 3; ++i)
    pthread_join(thread[i], NULL);
  
  printf("Main      Bye bye!\n");
  return 0;
}