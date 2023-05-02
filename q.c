/*!
@file       q.c
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     RSE 1201
@section    Assignment 4
@Assignment Converting Integer to Roman Numeral System
@date       02/10/2021
@brief      This file contains code to convert interger values to Roman numerals. 
            For example:
            value is assigned the value of 3999
            Output: MMMCMXCIX
*//*______________________________________________________________________________________*/
#include <stdio.h>

/*!
@brief  This function contains code to convert interger values to Roman numerals
        It uses the list of Roman numerals and the subtractive rule to form
        |Romman num | I | IV | V | IX |  X | XL |  L | XC |  C |  CD |  D  |  CM  |  M  |
        ------------------------------------------------------------------------
        |integer num| 1 | 4 | 5 | 9  | 10 | 40 | 50 | 90 | 100 | 400 | 500 | 900 | 1000|

        example: 345
        3 * 100 + 4 * 10 + 5 * 1
        3 * 100 = CCC
        4* 10 = XL
        5 * 1 = V
        Therefore, 345 converted to Roman numeral is CCCXLV.
        
@param  value - int data type 

@return Returns nothing
*//*_______________________________________________________________________________________*/
void decimal_to_roman (int value) {

    while (0 != value)  {

        if (value >= 1000) { // Roman Numeral M
            printf("M");
            value -= 1000; 
        }
        else if (value >= 900)  { //Roman Numeral CM (-100+1000)
            printf("CM");
            value -= 900; 
        }
        else if (value >= 500) { //Roman Numeral D
            printf("D");
            value -= 500; 
        }
        else if (value >= 400) { //Roman Numeral CD (-100+500)
            printf("CD");
            value -= 400; 
        }
        else if (value >= 100) { //Roman Numeral C
            printf("C");
            value -= 100; 
        }
        
        else if (value >= 90) { //Roman Numeral XC (-10+100)
            printf("XC");
            value -= 90; 
        }
        else if (value >= 50) { //Roman Numeral L
            printf("L");
            value -= 50; 
        }       
        else if (value >= 40) { //Roman Numeral XL (-10+50)
            printf("XL");
            value -= 40; 
        }
        else if (value >= 10) { //Roman Numeral X 
            printf("X");
            value -= 10; 
        }
        else if (value >= 9) { //Roman Numeral IX (-1+10)
            printf("IX");
            value -= 9; 
        }
        else if (value >= 5) { //Roman Numeral V
            printf("V");
            value -= 5; 
        }
        else if (value >= 4) { //Roman Numeral IV (-1+5)
            printf("IV");
            value -= 4; 
        }
        else if (value >= 1) { //Roman Numeral I
            printf("I");
            value -= 1; 
        }
    }
    printf("\n");
}
