int strStr(char* haystack, char* needle) {
    int index = -1;
    char* start = haystack;
    char* temp1 = haystack;
    char* temp2 = needle;

    while (*temp1 != '\0') {
        if (*temp1 != *temp2) {
            temp1++;   
        } 
        else if (*temp1 == *temp2) {
            index = temp1 - start;
            while (*temp2 != '\0') {
                if(*temp2 == *temp1){
                    
                    temp1++;
                    temp2++;
                }
                else{
                    index = -1;
                    break;
                }
            }
            if(*temp2 == '\0')
                return index;

        }
        haystack++;
        temp1 = haystack;
        temp2 = needle;
    }
    return index;
}
