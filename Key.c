#include <REGX52.H>
#include "Delay.h"
unsigned char Key()
{
	unsigned char KeyNumbro=0;
	P1=0xFF;
	P1_3=0;
	if(P1_7==0){Delay(50);while(P1_7==0);Delay(50);KeyNumbro=1;}
	if(P1_6==0){Delay(50);while(P1_6==0);Delay(50);KeyNumbro=5;}
	if(P1_5==0){Delay(50);while(P1_5==0);Delay(50);KeyNumbro=9;}
	if(P1_4==0){Delay(50);while(P1_4==0);Delay(50);KeyNumbro=13;}
	P1=0xFF;
	P1_2=0;
	if(P1_7==0){Delay(50);while(P1_7==0);Delay(50);KeyNumbro=2;}
	if(P1_6==0){Delay(50);while(P1_6==0);Delay(50);KeyNumbro=6;}
	if(P1_5==0){Delay(50);while(P1_5==0);Delay(50);KeyNumbro=10;}
	if(P1_4==0){Delay(50);while(P1_4==0);Delay(50);KeyNumbro=14;}
	P1=0xFF;
	P1_1=0;
	if(P1_7==0){Delay(50);while(P1_7==0);Delay(50);KeyNumbro=3;}
	if(P1_6==0){Delay(50);while(P1_6==0);Delay(50);KeyNumbro=7;}
	if(P1_5==0){Delay(50);while(P1_5==0);Delay(50);KeyNumbro=11;}
	if(P1_4==0){Delay(50);while(P1_4==0);Delay(50);KeyNumbro=15;}
	P1=0xFF;
	P1_0=0;
	if(P1_7==0){Delay(50);while(P1_7==0);Delay(50);KeyNumbro=4;}
	if(P1_6==0){Delay(50);while(P1_6==0);Delay(50);KeyNumbro=8;}
	if(P1_5==0){Delay(50);while(P1_5==0);Delay(50);KeyNumbro=12;}
	if(P1_4==0){Delay(50);while(P1_4==0);Delay(50);KeyNumbro=16;}
	return KeyNumbro;
}