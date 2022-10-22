/**
  ******************************************************************************
  * @file    main.c
  * @author  Jamel Hmidi
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    22-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
//#define MUL
//#define INTEL
//#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int sum(int var1, int var2);
#ifdef MUL
static int mul(int var1, int var2);
#endif
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  sum function
  * @param  var1, var2
  * @retval var1+var2
  */
#ifdef SOM
  static int sum(int var1, int var2)
  {
    return (var1+var2);
  }
#endif

/**
  * @brief  mul function
  * @param  var1, var2
  * @retval var1*var2
  */
#ifdef MUL
  static int mul(int var1, int var2)
  {
    return (var1*var2);
  }
#endif

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)
{
  #ifdef SOM
    int ResultSum = sum(3,4);
  #endif

  #ifdef MUL
    int ResultMul = mul(3,4);
  #endif
  while (1)
  {
   
  }
}

/**************************************END OF FILE**************************************/
