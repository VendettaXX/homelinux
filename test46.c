
   #include <stdio.h>
   #include <stdlib.h>
 #include <string.h>
   int main()
   {

       char buf[20];
       char msg[] = "hello world!";
       FILE *fp = fopen("a.txt", "w+");

      if(fp == NULL) {
          perror("a.txt:");
          exit(EXIT_FAILURE);
      }
      fseek(fp, 0, SEEK_SET);
      fwrite(msg, 1, strlen(msg) + 1, fp);
      fseek(fp, 0, SEEK_SET);
      fread(buf, 1, strlen(msg) + 1, fp);
      printf("%s\n", buf);
      return 0;
   }
