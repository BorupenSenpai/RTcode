#ifndef WHEELS_H
#define WHEELS_H

#define FRONT_DX 1
#define FRONT_SX 2
#define BACK_DX 3
#define BACK_SX 4
#define MOVE_FWD 1
#define MOVE_BWD 2

void moveWheel(int wheel, int direction)
{
	if(wheel == FRONT_DX)
	{
		if(direction == MOVE_FWD)
		{
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_15, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);
			return;
		}
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_15, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
		return;
	}
	else if(wheel == FRONT_SX)
	{
		if(direction == MOVE_FWD)
		{
			HAL_GPIO_WritePin(GPIOG, GPIO_PIN_9, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOG, GPIO_PIN_14, GPIO_PIN_RESET);
			return;
		}
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_14, GPIO_PIN_SET);
		return;
	}
	else if(wheel == BACK_DX)
	{
		if(direction == MOVE_FWD)
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
			return;
		}
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		return;
	}
	else if(wheel == BACK_SX)
	{
		if(direction == MOVE_FWD)
		{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
			return;
		}
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		return;
	}
}

#endif
