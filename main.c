/*******************************************************************************
 *
 *main.c
 *Created on: 08-May-2017 Author: abhi - (abhizc@live.com)
 *main program using the functions in header file
 *
 ******************************************************************************/

#include"robo.h"
#include<util/delay.h>

int main()
{

init();
	while(1)
	{

	_delay_ms(2000);
	init();
	_delay_ms(2000);
	forward();
	_delay_ms(2000);
	reverse();
	_delay_ms(2000);
	bac_left();
	_delay_ms(2000);
	bac_right();
	_delay_ms(2000);
	for_right();
	_delay_ms(2000);
	for_left();
	_delay_ms(2000);
	left();
	_delay_ms(2000);
	right();
	_delay_ms(2000);
	stop();

	}
}

