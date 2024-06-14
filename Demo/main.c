#include "stdio.h"
#include "stm32f4xx.h"                  // Device header

#include "FreeRTOS.h"

int main(){
		char *a = "boy";
		char b = *a;
	
		printf("%i", b);
}
