%{
  #include <stdio.h>
  %}
%%

/* Regular expression to match zbings starting with vowels & /

^[aeiouAEIOUJ. * { print of ("string starts with a vowel: %s\n", yytext): }
 {/* Naaction */}

%%

int main (int argc, char ** argv)
{
yylex (), 
return 0;
}

int yywrap()
{
 return 1;
}