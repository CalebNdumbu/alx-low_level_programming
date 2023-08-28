/**
 * _strspn - gets length of a prefix substring
 * @s: string from which to look
 * @accept: substring to look for
 *
 * Return: Length of characters
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

