#include "led.h"
#include "delay.h"
#include "sys.h"

 int main(void)
 {	
		delay_init();	    	 //��ʱ������ʼ��	  
		LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�  
		while(1)
		{

			GPIO_ResetBits(GPIOB,GPIO_Pin_5);		//��PB->0.5�͵�ƽ
			GPIO_SetBits(GPIOE,GPIO_Pin_5);	//��PE->0.5�ߵ�ƽ
			delay_ms(300);	 //��ʱ300ms

			GPIO_SetBits(GPIOB,GPIO_Pin_5);
			GPIO_ResetBits(GPIOE,GPIO_Pin_5);
			delay_ms(300);	//��ʱ300ms
			
		}
	
 }

