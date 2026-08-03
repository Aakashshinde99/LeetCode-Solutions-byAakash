bool isValid(char* s) {

    char arr[10000];
    int top = -1;
    while(*s){
        if(*s == '(' || *s == '{' || *s == '[' ){
            arr[++top] = *s;
        }
        else if(*s == ')' || *s == '}' || *s == ']' ){
            if(top == -1)
                return false;
            char a = arr[top--];
            if( !( (a == '(' && *s == ')') || 
                (a == '{' && *s == '}') ||
                (a == '[' && *s == ']') ) ){
                    return false;
            }
 
        }
        s++;
            
    }

    return top == -1;
}
