int romanToInt(char* s) {
    char *temp = s;
    int i = 0 , sum = 0, current, next;

    while(temp[i] != '\0'){
        if(temp[i] == 'I'){ 
            current = 1;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        else if( temp[i] == 'V'){
            current = 5;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        else if( temp[i] == 'X'){
            current = 10;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        else if( temp[i] == 'L'){
            current = 50;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        else if( temp[i] == 'C'){
            current = 100;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        else if( temp[i] == 'D'){
            current = 500;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        else if( temp[i] == 'M'){
            current = 1000;
            if(temp[i+1] == 'I')
                next = 1;
            else if( temp[i+1] == 'V'){
                next = 5;
            }
            else if( temp[i+1] == 'X'){
                next = 10;
            }
            else if( temp[i+1] == 'L'){
                next =  50;
            }
            else if( temp[i+1] == 'C'){
                next = 100;
            }
            else if( temp[i+1] == 'D'){
                next = 500;
            }
            else if( temp[i+1]== 'M'){
                next = 1000;
            }
            else{
                next = 0;
            }

            if(current >= next)
                sum += current;
            else
                sum -= current;
        }
        i++;
    }

    return sum;
    
}













