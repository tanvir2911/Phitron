# include <stdio.h>
# include <string.h>

struct Name
{
  char str[20];
};

int main()
{
  struct Name st1, st2;
  strcpy(st1.str,"ProgrammingHero");
  st2 = st1;
  st1.str[0] = 'p';

  printf("%s\n",st2.str);
  printf("%s",st1.str);

  return 0;
}
