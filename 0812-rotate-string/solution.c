bool rotateString(char* s, char* goal) {
    char last; int count = 0;
    char *temp = s;
    while(*temp != '\0'){
        count++;//12345
        temp++;
    }
    for(int i=0; i<count; i++){
        last = s[count-1];
        for(int j = count-1; j > 0; j--){
            s[j] = s[j-1];
        }
        s[0] = last;

        temp = s; 
        char *temp2 = goal;
        while(*temp != '\0' && *temp2 != '\0'){
            if(*temp != *temp2){
                break;
            }
            temp++; temp2++;
        }
        if(*temp == '\0' && *temp2 == '\0')
            return true;
    }
    return false;
}
