#include <esp8266.h>


int ICACHE_FLASH_ATTR atoi(const char *nptr)
{
    int res = 0; // Initialize result
    int i = 0;
  
    // Iterate through all characters of input string and
    // update result
    for (; nptr[i] != '\0'; ++i)
        res = res*10 + nptr[i] - '0';
  
    // return result.
    return res;
}

