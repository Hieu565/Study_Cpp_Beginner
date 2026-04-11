// bleep without using std::string 
#include <iostream>

// use tolower
#include <cctype>

int main()
{
    
    // use stack allocation for simplicity
    char para[] = "Pointers are hard, but pointers are powerful.";
    char target[] = "pointers";     // char variable[]: represent each letter as char -> combine
    
    std::cout << "Normal: " << para << std::endl;
    
    // pointer (only stack: no char[])
    char *pPara = para;
    char *pTarget = target;

    // reverse the string 
    while(*pPara != '\0')   {
        
        // '\0': null terminator: mark end of a string
        
        // mark current local position of Pointers (point to pPara and pTarget)
        char *p1 = pPara;
        char *p2 = pTarget;
        
        // loop check for number of next len(target) characters in both para and target (like conditioning)
        while(*p1 != '\0' && *p2 != '\0' && tolower(*p1) == tolower(*p2)) {
            
            p1++;
            p2++;
            
        }
        
        // bleep check if match or not (continue)
        if(*p2 == '\0')  {
            
            // get num of letters in target  (num of "steps" moved by p2 - length of pTarget)
            int len = p2 - pTarget;

            // start pointers
            char *start = pPara;    // reset to where comparision starts (pPara)
            char *p = start;        // position of start
            
            // end pointers
            char *end = start + len - 1;
            char *q = end;

            // reverse word using memory
            while(p < q)    {
                // store p in z, then replace
                char z = *p;    // must store z in *p: ensure not "trash" variable
                *p = *q;
                *q = z;
                
                p++;
                q--;
            }

            pPara += len;   // move pPara forward by length of target (reduce redundant comparision)
        }
        else    {
            pPara++;    // if not found
        }
    }

    std::cout << "Reversed: " << para << std::endl;
    
}