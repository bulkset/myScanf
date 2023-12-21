char *my_scanf()  
{  
  char c;  
  int i = 0;  
  char *str = calloc(sizeof(char), 6);  
  if (str == NULL)  
  {  
    printf("Memory allocation error\n");  
    exit(1);  
  }  
  write(1, ">", 1);  
  while (read(0, &c, 1))  
  {  
    if (c == '\n' || i == 5)  
      return str;  
    str[i] = c;  
    i++;  
  }  
  return "stop";  
}  