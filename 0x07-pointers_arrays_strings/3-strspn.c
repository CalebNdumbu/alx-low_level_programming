/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
    unsigned int length = 0;
    int found;
    
    while(*s)
    {
        found = 0;
        
        for(int i = 0; accept[i]; i++)
        {
            if(*s == accept[i])
            {
                found = 1;
                break;
            }
        }
        
        if(!found)
        {
            return length;
        }
      length++;
      s++;
    }
    
    return length;
}
