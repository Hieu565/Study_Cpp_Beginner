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
    
    // move along pPara (outer loop)
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
            
            char *start = pPara;    // reset to where comparision starts (pPara)
            int len = p2 - pTarget;     // get num of letters in target
            char *p = start;    // position of start
            
            // replace for position: from start to start + len
            while(p < start + len)    {
                *p = '*';
                p++;
            }

            pPara += len;   // move pPara forward by length of target (reduce redundant comparision)

        }
        else    {
            pPara++;    // if not found
        }
    }
    
    std::cout << "Bleep: " << para << std::endl;     // print the sentence, not the character (*pPara)
    /*
    delete is only for heap memory (this is stack memory)
    delete pPara;
    delete pTarget;
    */
    
}