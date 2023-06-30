#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void decimalToBinary(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}


void decToOctal(int n)
{
  
    // array to store octal number
    int octalNum[100];
  
    // counter for octal number array
    int i = 0;
    while (n != 0) {
  
        // storing remainder in octal array
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
  
    // printing octal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}


int dec_to_hexa_conversion(int decimal_Number)
{
    int i = 1, j, temp;
    char hexa_Number[100];
    
    // if decimal number is not 
    // equal to zero then enter in
    // to the loop and execute the
    // statements
    while (decimal_Number != 0) {
        temp = decimal_Number % 16;
        
        // converting decimal number 
        // in to a hexa decimal
        // number
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        decimal_Number = decimal_Number / 16;
    }
    // printing the hexa decimal number
    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
}


int BinaryToOctal(long long bin) {
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}


int main(){

    printf("Decimal -> Binary : \n");
    int num = 9;
    decimalToBinary(num);

    printf("\nDecimal -> Octal\n");
    decToOctal(33);

    printf("\nDecimal -> Hexadecimal : \n");
    dec_to_hexa_conversion(45);

    printf("\nBinary -> Decimal \n");
    printf("%lld -> %d", 010110010101, BinaryToOctal(010110010101));

    return 0;
}