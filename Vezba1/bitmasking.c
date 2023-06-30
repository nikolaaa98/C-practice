// Napiši funkcoju koja proverava da li je setovan neki bit (praviš bit masku, šiftovanje neko)
// << pomera bitove u desno (povecava se), >> pomera bitove u levo (smanjuje se)
// 

#include <stdio.h>

int setBit(unsigned int data, unsigned int pos){
    return (data|(1<<pos));
}

int clearNthBit(unsigned int data,unsigned int pos)
{
    return (data & (~(1 << pos)));
}

int main(){

    unsigned int cData = 0xA;
    unsigned int pos = 0;
    printf("cData = 0x%x\n\n",cData);
    //Get position from the user
    printf("Enter the position which you want set = ");
    scanf("%u",&pos);
    //Call function to set the bit
    cData = setBit(cData,pos);
    //Print the data
    printf("\n\n%dth Bit Set Now cData will be = 0x%x\n",pos,cData);

    unsigned int cData2=0xFF;
    unsigned int pos2 =0;
    printf("Initially cData = 0x%x\n\n",cData2);
    printf("Enter the position which you want clear = ");
    scanf("%u",&pos2);
    //clear the nth bit.
    cData = clearNthBit(cData,pos2);
    //Print the data
    printf("\n\n%uth Bit clear Now cData will be = 0x%x\n",pos2,cData2);


    return 0;
}