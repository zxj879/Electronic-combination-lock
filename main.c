#include <REGX52.H>
#include "Key.h"
#include "Delay.h"
#include "LCD1602.h"
#include "Buzzer.h"
unsigned int Password,Count;
unsigned char KeyNum;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password:");
	while(1)
	{
		KeyNum=Key();
		if(KeyNum)
		{
			if(KeyNum<=10)//如果S1~S10按键按下，输入密码
			{
				if(Count<4)//如果输入次数小于4
				{
					Password*=10;//密码左移一位
					Password+=KeyNum%10;//计次加一
					Count++;
				}
				LCD_ShowNum(2,1,Password,4);//更新显示
			}
			
			if(KeyNum==11)//如果S11按键按下，确认
			{
				if(Password==1111)//如果密码等于正确密码
				{
					LCD_ShowString(1,12,"YES");//显示OK
					Password=0;//密码清零
					Count=0;//计次清零
					LCD_ShowNum(2,1,Password,4);
				}
				else
				{
					LCD_ShowString(1,12,"No ");
					Password=0;
					Count=0;
					Buzzer_Time(100);
					LCD_ShowNum(2,1,Password,4);
				}
			}
			if(KeyNum==12)
			{
					LCD_ShowString(1,12,"   ");
					Password=0;
					Count=0;
					LCD_ShowNum(2,1,Password,4);
			}
		}
	}
}