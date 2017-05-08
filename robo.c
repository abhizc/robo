/*******************************************************************************
 *
 *robo.c
 *Created on: 08-May-2017 Author: abhi - (abhizc@live.com)
 *
 *contains a code fro robo.h
 ******************************************************************************/

#include"robo.h"

void init()
{
/*	writing on ddrc register , writing makes it as output
	and 0 makes it as input*/
DDRC |=(1<<PC0);//pin 37 as output i,e pc0 //motor 1
DDRC |=(1<<PC1);//pin 36 as output i,e pc1 //motor 1

DDRC |=(1<<PC2);//pin 35 as output i,e pc2 //motor 2
DDRC |=(1<<PC3);//pin 34 as output i,e pc3 //motor 2
}

void forward()
{
	// setting and resetting pins accourdingly
	PORTC &= ~(1<<PC0);//motor 1 reverse off
	PORTC |= (1<<PC1);// motor 1 forward on
	PORTC &= ~(1<<PC2);//motor 2 reverse off
	PORTC |= (1<<PC3);// motor 2 forward on
}

void reverse()
{

	PORTC |= (1<<PC0); //motor 1 reverse on
	PORTC &= ~(1<<PC1);// motor 1 forward off
	PORTC |= (1<<PC2); //motor 2 reverse on
	PORTC &= ~(1<<PC3);// motor 2 forward off
}

void bac_left()
{
	PORTC |= (1<<PC0);
	PORTC &= ~(1<<PC1);
	PORTC &= ~(1<<PC2);
	PORTC &= ~(1<<PC3);
}

void bac_right()
{
	PORTC &= ~(1<<PC0);
	PORTC &= ~(1<<PC1);
	PORTC |=  (1<<PC2);
	PORTC &= ~(1<<PC3);

}

void for_right()
{
	PORTC &= ~(1<<PC0);
	PORTC |=  (1<<PC1);
	PORTC &= ~(1<<PC2);
	PORTC &= ~(1<<PC3);
}
void for_left()
{
	PORTC &= ~(1<<PC0);
	PORTC &= ~(1<<PC1);
	PORTC &= ~(1<<PC2);
	PORTC |= (1<<PC3);
}

void left()
{
	PORTC &= (1<<PC0);
	PORTC |= ~(1<<PC1);
	PORTC &= ~(1<<PC2);
	PORTC |= (1<<PC3);
}
void right()
{
	PORTC |= ~(1<<PC0);
	PORTC &= (1<<PC1);
	PORTC |= (1<<PC2);
	PORTC &= ~(1<<PC3);
}

void stop()
{
	PORTC &= ~(1<<PC0);
	PORTC &= ~(1<<PC1);
	PORTC &= ~(1<<PC2);
	PORTC &= ~(1<<PC3);
}
