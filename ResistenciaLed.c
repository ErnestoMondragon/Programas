#include <stdio.h>
int main(void)
{
int voltage;
printf("Agrega el valor del voltage ");
scanf("%d",&voltage);

float RLRs;
float VLRs=1.5;
float ILRs=0.015;
float RLVs;
float VLVs=1.8;
float ILVs=0.015;
float RLAs;
float VLAs=1.8;
float ILAs=0.015;
float RLB;
float VLB=2.8;
float ILB=0.02;
float RLAb;
float VLAb=2;
float ILAb=0.02;
float RLVb;
float VLVb=3;
float ILVb=0.02;
float RLZb;
float VLZb=3;
float ILZb=0.02;
float RLRb;
float VLRb=2;
float ILRb=0.02;
RLRs=((float)voltage-(float)VLRs)/(float)ILRs;
printf("Resistencia para Rojo std es %f ohm\n" , RLRs);
RLVs=((float)voltage-(float)VLVs)/(float)ILVs;
printf("Resistencia para Verde std es %f ohm\n" , RLVs);
RLAs=((float)voltage-(float)VLAs)/(float)ILAs;
printf("Resistencia para Amarillo std es %f ohm\n" , RLAs);
RLB=((float)voltage-(float)VLB)/(float)ILB;
printf("Resistencia para Blanco  es %f ohm\n" , RLB);
RLAb=((float)voltage-(float)VLAb)/(float)ILAb;
printf("Resistencia para Amarrilo Brillante  es %f ohm\n" , RLAb);
RLVb=((float)voltage-(float)VLVb)/(float)ILVb;
printf("Resistencia para Verde Brillante  es %f ohm\n" , RLVb);
RLRb=((float)voltage-(float)VLRb)/(float)ILRb;
printf("Resistencia para Rojo Brillante  es %f ohm\n" , RLRb);

}
