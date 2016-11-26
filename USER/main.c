#include "led.h"
#include "delay.h"
#include "sys.h"

 int main(void)
 {	
		delay_init();	    	 //延时函数初始化	  
		LED_Init();		  	//初始化与LED连接的硬件接口  
		while(1)
		{

			GPIO_ResetBits(GPIOB,GPIO_Pin_5);		//置PB->0.5低电平
			GPIO_SetBits(GPIOE,GPIO_Pin_5);	//置PE->0.5高电平
			delay_ms(300);	 //延时300ms

			GPIO_SetBits(GPIOB,GPIO_Pin_5);
			GPIO_ResetBits(GPIOE,GPIO_Pin_5);
			delay_ms(300);	//延时300ms
			
		}
	
 }

