/**

  ******************************************************************************
  * @file    font.c
  * @author  SZQVC
  * @version V0.2.8
  * @date    2015.2.14
  * @brief   灯塔计划.海啸项目 (QQ：49370295)
  *          字库
  ******************************************************************************
  * @attention                                                                 *
  *                                                                            *
  * <h2><center>&copy; COPYRIGHT 2015 SZQVC</center></h2>                      *
  *                                                                            *
  * 文件版权归“深圳权成安视科技有限公司”(简称SZQVC）所有。                   *
  *                                                                            *
  *        http://www.szqvc.com                                                *
  *                                                                            *
  ******************************************************************************
  
**/
//14X32 LED效果字符
const unsigned char Bitmap_LED_14X32[13][56] = {
//0
{0x00,0x00,0x00,0x00,
 0xe0,0x3f,0xfe,0x03,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0x08,0x00,0x00,0x08,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},
//1
{0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//2                  
{0x00,0x00,0x00,0x00,
 0x00,0x00,0xfe,0x03,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0xe0,0x3f,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//3                  
{0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//4                  
{0x00,0x00,0x00,0x00,
 0xe0,0x3f,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//5                  
{0x00,0x00,0x00,0x00,
 0xe0,0x3f,0x00,0x00,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x00,0x00,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//6                  
{0x00,0x00,0x00,0x00,
 0xe0,0x3f,0xfe,0x03,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x00,0x00,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//7                  
{0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0x08,0x00,0x00,0x00,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//8                  
{0x00,0x00,0x00,0x00,
 0xe0,0x3f,0xfe,0x03,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//9                  
{0x00,0x00,0x00,0x00,
 0xe0,0x3f,0x00,0x00,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0x08,0x80,0x00,0x08,
 0xe0,0x3f,0xfe,0x03,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},                   
//:                  
{0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x03,0x18,0x00,
 0x00,0x03,0x18,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},
//+
{0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0xf8,0x0f,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x80,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
},
//-
{0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x80,0x01,0x00,
 0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,
}
};

//8X16 LED效果字符
const unsigned char Bitmap_LED_8X16[24][16] = {
{0x00,0x7C,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x7C,0x00,0x00},  //0
{0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00},  //1
{0x00,0x7C,0x02,0x02,0x02,0x02,0x02,0x7C,0x80,0x80,0x80,0x80,0x80,0x7C,0x00,0x00},  //2
{0x00,0x7C,0x02,0x02,0x02,0x02,0x02,0x7C,0x02,0x02,0x02,0x02,0x02,0x7C,0x00,0x00},  //3
{0x00,0x82,0x82,0x82,0x82,0x82,0x82,0x7C,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00},  //4
{0x00,0x7C,0x80,0x80,0x80,0x80,0x80,0x7C,0x02,0x02,0x02,0x02,0x02,0x7C,0x00,0x00},  //5
{0x00,0x7C,0x80,0x80,0x80,0x80,0x80,0x7C,0x82,0x82,0x82,0x82,0x82,0x7C,0x00,0x00},  //6
{0x00,0x7C,0x02,0x02,0x02,0x02,0x02,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00},  //7
{0x00,0x7C,0x82,0x82,0x82,0x82,0x82,0x7C,0x82,0x82,0x82,0x82,0x82,0x7C,0x00,0x00},  //8
{0x00,0x7C,0x82,0x82,0x82,0x82,0x82,0x7C,0x02,0x02,0x02,0x02,0x02,0x7C,0x00,0x00},  //9
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /*10    */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00},  /*11: . */
{0x10,0x28,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /*12: ` */
{0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00},  /*13: : */
{0x00,0x00,0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x40,0x40,0x00},  /*14: / */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /*15: - */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00},  /*16: _ */
{0x00,0x00,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /*17: ^ */
{0x00,0x80,0x80,0x84,0x88,0x90,0xa0,0xc0,0xa0,0x90,0x88,0x84,0x80,0x80,0x00,0x00},  /*18: K */
{0x00,0x7C,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x7C,0x00,0x00},  /*19: 0 */
{0x00,0x7C,0x82,0x82,0x80,0x80,0x80,0x9E,0x82,0x82,0x82,0x82,0x82,0x7C,0x00,0x00},  /*20: G */
{0x00,0x00,0x10,0x54,0x38,0x38,0x54,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /*21: * */
{0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00},  /*22: ! */
{0x00,0x00,0x20,0x52,0x22,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x24,0x4a,0x44,0x00},  /*23: % */
};
//5X7 LED效果字符
const unsigned char Bitmap_LED_5X7[65][5] = {
{ 0x00, 0x00, 0x00, 0x00, 0x00 },  //0  sp 
{ 0x00, 0x00, 0x2f, 0x00, 0x00 },  //1  ! 
{ 0x00, 0x07, 0x00, 0x07, 0x00 },  //2  " 
{ 0x14, 0x7f, 0x14, 0x7f, 0x14 },  //3  # 
{ 0x24, 0x2a, 0x7f, 0x2a, 0x12 },  //4  $ 
{ 0xc4, 0xc8, 0x10, 0x26, 0x46 },  //5  % 
{ 0x36, 0x49, 0x55, 0x22, 0x50 },  //6  & 
{ 0x00, 0x05, 0x03, 0x00, 0x00 },  //7  ' 
{ 0x00, 0x1c, 0x22, 0x41, 0x00 },  //8  ( 
{ 0x00, 0x41, 0x22, 0x1c, 0x00 },  //9  ) 
{ 0x14, 0x08, 0x3E, 0x08, 0x14 },  //10 * 
{ 0x08, 0x08, 0x3E, 0x08, 0x08 },  //11 + 
{ 0x00, 0x00, 0x50, 0x30, 0x00 },  //12 , 
{ 0x10, 0x10, 0x10, 0x10, 0x00 },  //13 - 
{ 0x00, 0x60, 0x60, 0x00, 0x00 },  //14 . 
{ 0x20, 0x10, 0x08, 0x04, 0x02 },  //15 / 
{ 0xfe, 0xa2, 0x92, 0xfe, 0x00 },  //16 0
{ 0x00, 0x00, 0x00, 0xfe, 0x00 },  //17 1
{ 0xf2, 0x92, 0x92, 0x9e, 0x00 },  //18 2
{ 0x82, 0x92, 0x92, 0xfe, 0x00 },  //19 3
{ 0x1e, 0x10, 0x10, 0xfe, 0x00 },  //20 4
{ 0x9e, 0x92, 0x92, 0xf2, 0x00 },  //21 5
{ 0xfe, 0x92, 0x92, 0xf2, 0x00 },  //22 6
{ 0x02, 0x02, 0x02, 0xfe, 0x00 },  //23 7
{ 0xfe, 0x92, 0x92, 0xfe, 0x00 },  //24 8
{ 0x9e, 0x92, 0x92, 0xfe, 0x00 },  //25 9
{ 0x00, 0x36, 0x36, 0x00, 0x00 },  //26 : 
{ 0x00, 0x56, 0x36, 0x00, 0x00 },  //27 ; 
{ 0x08, 0x14, 0x22, 0x41, 0x00 },  //28 < 
{ 0x14, 0x14, 0x14, 0x14, 0x14 },  //29 = 
{ 0x00, 0x41, 0x22, 0x14, 0x08 },  //30 > 
{ 0x02, 0x01, 0x51, 0x09, 0x06 },  //31 ? 
{ 0x32, 0x49, 0x59, 0x51, 0x3E },  //32 @ 
{ 0xf6, 0x12, 0x12, 0xf6, 0x00 },  //33 A
{ 0xfe, 0x92, 0x92, 0x6c, 0x00 },  //34 B
{ 0x7c, 0x82, 0x82, 0x44, 0x00 },  //35 C
{ 0xfe, 0x82, 0x82, 0x7c, 0x00 },  //36 D
{ 0xfe, 0x92, 0x92, 0x82, 0x00 },  //37 E
{ 0xfe, 0x12, 0x12, 0x02, 0x00 },  //38 F
{ 0xfe, 0x82, 0x92, 0xF2, 0x00 },  //39 G
{ 0xfe, 0x10, 0x10, 0xfe, 0x00 },  //40 H
{ 0x00, 0x82, 0xfe, 0x82, 0x00 },  //41 I
{ 0x80, 0x80, 0x82, 0x7E, 0x00 },  //42 J
{ 0xfe, 0x18, 0x24, 0x42, 0x00 },  //43 K
{ 0xfe, 0x80, 0x80, 0x80, 0x00 },  //44 L
{ 0x7F, 0x02, 0x0C, 0x02, 0x7F },  //45 M 
{ 0x7F, 0x04, 0x08, 0x10, 0x7F },  //46 N 
{ 0x3E, 0x41, 0x41, 0x41, 0x3E },  //47 O 
{ 0x7F, 0x09, 0x09, 0x09, 0x06 },  //48 P 
{ 0x3E, 0x41, 0x51, 0x21, 0x5E },  //49 Q 
{ 0x7F, 0x09, 0x19, 0x29, 0x46 },  //50 R 
{ 0x46, 0x49, 0x49, 0x49, 0x31 },  //51 S 
{ 0x02, 0x02, 0xFE, 0x02, 0x02 },  //52 T 
{ 0x7E, 0x80, 0x80, 0x80, 0x7E },  //53 U 
{ 0x1F, 0x20, 0x40, 0x20, 0x1F },  //54 V 
{ 0x3F, 0x40, 0x38, 0x40, 0x3F },  //55 W 
{ 0x63, 0x14, 0x08, 0x14, 0x63 },  //56 X 
{ 0x07, 0x08, 0x70, 0x08, 0x07 },  //57 Y 
{ 0x61, 0x51, 0x49, 0x45, 0x43 },  //58 Z 
{ 0x00, 0x7F, 0x41, 0x41, 0x00 },  //59 [ 
{ 0x55, 0x2A, 0x55, 0x2A, 0x55 },  //60 55 
{ 0x00, 0x41, 0x41, 0x7F, 0x00 },  //61 ] 
{ 0x04, 0x02, 0x01, 0x02, 0x04 },  //62 ^ 
{ 0x40, 0x40, 0x40, 0x40, 0x40 },  //63 _ 
{ 0x00, 0x04, 0x0A, 0x04, 0x00 },  //64 `
};                             
                               




const unsigned char Bitmap_ASCII_5X7[95][5]={
{ 0x00, 0x00, 0x00, 0x00, 0x00 }, //0  sp 
{ 0x00, 0x00, 0x2f, 0x00, 0x00 }, //1  ! 
{ 0x00, 0x07, 0x00, 0x07, 0x00 }, //2  " 
{ 0x14, 0x7f, 0x14, 0x7f, 0x14 }, //3  # 
{ 0x24, 0x2a, 0x7f, 0x2a, 0x12 }, //4  $ 
{ 0xc4, 0xc8, 0x10, 0x26, 0x46 }, //5  % 
{ 0x36, 0x49, 0x55, 0x22, 0x50 }, //6  & 
{ 0x00, 0x05, 0x03, 0x00, 0x00 }, //7  ' 
{ 0x00, 0x1c, 0x22, 0x41, 0x00 }, //8  ( 
{ 0x00, 0x41, 0x22, 0x1c, 0x00 }, //9  ) 
{ 0x14, 0x08, 0x3E, 0x08, 0x14 }, //10 * 
{ 0x08, 0x08, 0x3E, 0x08, 0x08 }, //11 + 
{ 0x00, 0x00, 0x50, 0x30, 0x00 }, //12 , 
{ 0x10, 0x10, 0x10, 0x10, 0x10 }, //13 - 
{ 0x00, 0x60, 0x60, 0x00, 0x00 }, //14 . 
{ 0x20, 0x10, 0x08, 0x04, 0x02 }, //15 / 
{ 0x3E, 0x51, 0x49, 0x45, 0x3E }, //16 0 
{ 0x00, 0x42, 0x7F, 0x40, 0x00 }, //17 1 
{ 0x42, 0x61, 0x51, 0x49, 0x46 }, //18 2 
{ 0x21, 0x41, 0x45, 0x4B, 0x31 }, //19 3 
{ 0x18, 0x14, 0x12, 0x7F, 0x10 }, //20 4 
{ 0x27, 0x45, 0x45, 0x45, 0x39 }, //21 5 
{ 0x3C, 0x4A, 0x49, 0x49, 0x30 }, //22 6 
{ 0x01, 0x71, 0x09, 0x05, 0x03 }, //23 7 
{ 0x36, 0x49, 0x49, 0x49, 0x36 }, //24 8 
{ 0x06, 0x49, 0x49, 0x29, 0x1E }, //25 9 
{ 0x00, 0x36, 0x36, 0x00, 0x00 }, //26 : 
{ 0x00, 0x56, 0x36, 0x00, 0x00 }, //27 ; 
{ 0x08, 0x14, 0x22, 0x41, 0x00 }, //28 < 
{ 0x14, 0x14, 0x14, 0x14, 0x14 }, //29 = 
{ 0x00, 0x41, 0x22, 0x14, 0x08 }, //30 > 
{ 0x02, 0x01, 0x51, 0x09, 0x06 }, //31 ? 
{ 0x32, 0x49, 0x59, 0x51, 0x3E }, //32 @ 
{ 0x7E, 0x11, 0x11, 0x11, 0x7E }, //33 A 
{ 0x7F, 0x49, 0x49, 0x49, 0x36 }, //34 B 
{ 0x3E, 0x41, 0x41, 0x41, 0x22 }, //35 C 
{ 0x7F, 0x41, 0x41, 0x22, 0x1C }, //36 D 
{ 0x7F, 0x49, 0x49, 0x49, 0x41 }, //37 E 
{ 0x7F, 0x09, 0x09, 0x09, 0x01 }, //38 F 
{ 0x3E, 0x41, 0x49, 0x49, 0x7A }, //39 G 
{ 0x7F, 0x08, 0x08, 0x08, 0x7F }, //40 H 
{ 0x00, 0x41, 0x7F, 0x41, 0x00 }, //41 I 
{ 0x20, 0x40, 0x41, 0x3F, 0x01 }, //42 J 
{ 0x7F, 0x08, 0x14, 0x22, 0x41 }, //43 K 
{ 0x7F, 0x40, 0x40, 0x40, 0x40 }, //44 L 
{ 0x7F, 0x02, 0x0C, 0x02, 0x7F }, //45 M 
{ 0x7F, 0x04, 0x08, 0x10, 0x7F }, //46 N 
{ 0x3E, 0x41, 0x41, 0x41, 0x3E }, //47 O 
{ 0x7F, 0x09, 0x09, 0x09, 0x06 }, //48 P 
{ 0x3E, 0x41, 0x51, 0x21, 0x5E }, //49 Q 
{ 0x7F, 0x09, 0x19, 0x29, 0x46 }, //50 R 
{ 0x46, 0x49, 0x49, 0x49, 0x31 }, //51 S 
{ 0x01, 0x01, 0x7F, 0x01, 0x01 }, //52 T 
{ 0x3F, 0x40, 0x40, 0x40, 0x3F }, //53 U 
{ 0x1F, 0x20, 0x40, 0x20, 0x1F }, //54 V 
{ 0x3F, 0x40, 0x38, 0x40, 0x3F }, //55 W 
{ 0x63, 0x14, 0x08, 0x14, 0x63 }, //56 X 
{ 0x07, 0x08, 0x70, 0x08, 0x07 }, //57 Y 
{ 0x61, 0x51, 0x49, 0x45, 0x43 }, //58 Z 
{ 0x00, 0x7F, 0x41, 0x41, 0x00 }, //59 [ 
{ 0x55, 0x2A, 0x55, 0x2A, 0x55 }, //60 55 
{ 0x00, 0x41, 0x41, 0x7F, 0x00 }, //61 ] 
{ 0x04, 0x02, 0x01, 0x02, 0x04 }, //62 ^ 
{ 0x40, 0x40, 0x40, 0x40, 0x40 }, //63 _ 
{ 0x00, 0x02, 0x05, 0x02, 0x00 }, //64 ` 
{ 0x20, 0x54, 0x54, 0x54, 0x78 }, //66 a 
{ 0x7F, 0x48, 0x44, 0x44, 0x38 }, //67 b 
{ 0x38, 0x44, 0x44, 0x44, 0x20 }, //68 c 
{ 0x38, 0x44, 0x44, 0x48, 0x7F }, //69 d 
{ 0x38, 0x54, 0x54, 0x54, 0x18 }, //70 e 
{ 0x08, 0x7E, 0x09, 0x01, 0x02 }, //71 f 
{ 0x0C, 0x52, 0x52, 0x52, 0x3E }, //72 g 
{ 0x7F, 0x08, 0x04, 0x04, 0x78 }, //73 h 
{ 0x00, 0x44, 0x7D, 0x40, 0x00 }, //74 i 
{ 0x20, 0x40, 0x44, 0x3D, 0x00 }, //75 j 
{ 0x7F, 0x10, 0x28, 0x44, 0x00 }, //76 k 
{ 0x00, 0x41, 0x7F, 0x40, 0x00 }, //77 l 
{ 0x7C, 0x04, 0x18, 0x04, 0x78 }, //78 m 
{ 0x7C, 0x08, 0x04, 0x04, 0x78 }, //79 n 
{ 0x38, 0x44, 0x44, 0x44, 0x38 }, //60 o 
{ 0x7C, 0x14, 0x14, 0x14, 0x08 }, //61 p 
{ 0x08, 0x14, 0x14, 0x18, 0x7C }, //62 q 
{ 0x7C, 0x08, 0x04, 0x04, 0x08 }, //63 r 
{ 0x48, 0x54, 0x54, 0x54, 0x20 }, //64 s 
{ 0x04, 0x3F, 0x44, 0x40, 0x20 }, //65 t 
{ 0x3C, 0x40, 0x40, 0x20, 0x7C }, //66 u 
{ 0x1C, 0x20, 0x40, 0x20, 0x1C }, //67 v 
{ 0x3C, 0x40, 0x30, 0x40, 0x3C }, //68 w 
{ 0x44, 0x28, 0x10, 0x28, 0x44 }, //69 x 
{ 0x0C, 0x50, 0x50, 0x50, 0x3C }, //70 y 
{ 0x44, 0x64, 0x54, 0x4C, 0x44 }  //71 z
};


#if (ASCII_MS_GOTHIC_8X16)

const unsigned char Bitmap_MsGothic_8X16[95][16] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x18,0x18,0x00,0x00},/*"!",1*/
{0x36,0x24,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x24,0x24,0x24,0x24,0xFE,0x48,0x48,0x48,0x48,0xFC,0x48,0x48,0x48,0x48,0x00},/*"#",3*/
{0x10,0x38,0x54,0x92,0x92,0x50,0x30,0x18,0x14,0x12,0x92,0x92,0x54,0x38,0x10,0x00},/*"$",4*/
{0x00,0x62,0x92,0x94,0x94,0x68,0x08,0x10,0x20,0x2C,0x52,0x52,0x92,0x8C,0x00,0x00},/*"%",5*/
{0x00,0x30,0x48,0x48,0x48,0x48,0x30,0x20,0x54,0x94,0x88,0x88,0x94,0x62,0x00,0x00},/*"&",6*/
{0x30,0x30,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x04,0x08,0x10,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x08,0x04,0x00},/*"(",8*/
{0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00},/*")",9*/
{0x00,0x00,0x00,0x10,0x92,0x54,0x38,0x10,0x38,0x54,0x92,0x10,0x00,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x00,0x00,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x10,0x20,0x00},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00},/*".",14*/
{0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x20,0x20,0x40,0x40,0x80,0x80,0x00,0x00},/*"/",15*/
{0x00,0x30,0x48,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x48,0x30,0x00,0x00},/*"0",16*/
{0x00,0x10,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"1",17*/
{0x00,0x30,0x48,0x84,0x84,0x04,0x08,0x08,0x10,0x20,0x20,0x40,0x80,0xFC,0x00,0x00},/*"2",18*/
{0x00,0x30,0x48,0x84,0x84,0x04,0x08,0x30,0x08,0x04,0x84,0x84,0x48,0x30,0x00,0x00},/*"3",19*/
{0x00,0x08,0x08,0x18,0x18,0x28,0x28,0x48,0x48,0x88,0xFC,0x08,0x08,0x08,0x00,0x00},/*"4",20*/
{0x00,0xFC,0x80,0x80,0x80,0xB0,0xC8,0x84,0x04,0x04,0x04,0x84,0x48,0x30,0x00,0x00},/*"5",21*/
{0x00,0x30,0x48,0x84,0x84,0x80,0xB0,0xC8,0x84,0x84,0x84,0x84,0x48,0x30,0x00,0x00},/*"6",22*/
{0x00,0xFC,0x04,0x04,0x08,0x08,0x08,0x10,0x10,0x10,0x20,0x20,0x20,0x20,0x00,0x00},/*"7",23*/
{0x00,0x30,0x48,0x84,0x84,0x84,0x48,0x30,0x48,0x84,0x84,0x84,0x48,0x30,0x00,0x00},/*"8",24*/
{0x00,0x30,0x48,0x84,0x84,0x84,0x84,0x4C,0x34,0x04,0x84,0x84,0x48,0x30,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x30,0x30,0x10,0x20,0x00},/*";",27*/
{0x00,0x00,0x04,0x08,0x10,0x20,0x40,0x80,0x40,0x20,0x10,0x08,0x04,0x00,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00},/*">",30*/
{0x00,0x30,0x48,0x84,0x84,0x04,0x08,0x10,0x20,0x20,0x00,0x00,0x30,0x30,0x00,0x00},/*"?",31*/
{0x00,0x38,0x44,0x82,0x9A,0xAA,0xAA,0xAA,0xAA,0xAA,0x9C,0x80,0x42,0x3C,0x00,0x00},/*"@",32*/
{0x00,0x10,0x10,0x28,0x28,0x28,0x28,0x44,0x44,0x44,0x7C,0x82,0x82,0x82,0x00,0x00},/*"A",33*/
{0x00,0xF8,0x84,0x82,0x82,0x82,0x84,0xF8,0x84,0x82,0x82,0x82,0x84,0xF8,0x00,0x00},/*"B",34*/
{0x00,0x38,0x44,0x82,0x82,0x80,0x80,0x80,0x80,0x80,0x82,0x82,0x44,0x38,0x00,0x00},/*"C",35*/
{0x00,0xF8,0x84,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x84,0xF8,0x00,0x00},/*"D",36*/
{0x00,0xFE,0x80,0x80,0x80,0x80,0x80,0xFC,0x80,0x80,0x80,0x80,0x80,0xFE,0x00,0x00},/*"E",37*/
{0x00,0xFE,0x80,0x80,0x80,0x80,0x80,0xFC,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00},/*"F",38*/
{0x00,0x38,0x44,0x82,0x82,0x80,0x80,0x80,0x8E,0x82,0x82,0x82,0x46,0x3A,0x00,0x00},/*"G",39*/
{0x00,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x82,0x82,0x00,0x00},/*"H",40*/
{0x00,0x38,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00},/*"I",41*/
{0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x84,0x84,0x48,0x30,0x00,0x00},/*"J",42*/
{0x00,0x82,0x84,0x84,0x88,0x90,0x90,0xA0,0xD0,0x88,0x88,0x84,0x82,0x82,0x00,0x00},/*"K",43*/
{0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFE,0x00,0x00},/*"L",44*/
{0x00,0x82,0x82,0xC6,0xC6,0xC6,0xC6,0xAA,0xAA,0xAA,0xAA,0x92,0x92,0x92,0x00,0x00},/*"M",45*/
{0x00,0x82,0x82,0xC2,0xC2,0xA2,0xA2,0x92,0x92,0x8A,0x8A,0x86,0x86,0x82,0x00,0x00},/*"N",46*/
{0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00},/*"O",47*/
{0x00,0xF8,0x84,0x82,0x82,0x82,0x84,0xF8,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00},/*"P",48*/
{0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x92,0x8A,0x44,0x3A,0x00,0x00},/*"Q",49*/
{0x00,0xF8,0x84,0x82,0x82,0x82,0x84,0xF8,0x88,0x88,0x84,0x84,0x82,0x82,0x00,0x00},/*"R",50*/
{0x00,0x38,0x44,0x82,0x82,0x80,0x60,0x18,0x04,0x02,0x82,0x82,0x44,0x38,0x00,0x00},/*"S",51*/
{0x00,0xFE,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"T",52*/
{0x00,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00},/*"U",53*/
{0x00,0x82,0x82,0x82,0x44,0x44,0x44,0x44,0x28,0x28,0x28,0x10,0x10,0x10,0x00,0x00},/*"V",54*/
{0x00,0x92,0x92,0x92,0x92,0xAA,0xAA,0xAA,0xAA,0x44,0x44,0x44,0x44,0x44,0x00,0x00},/*"W",55*/
{0x00,0x82,0x82,0x44,0x44,0x28,0x28,0x10,0x28,0x28,0x44,0x44,0x82,0x82,0x00,0x00},/*"X",56*/
{0x00,0x82,0x82,0x44,0x44,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"Y",57*/
{0x00,0xFE,0x02,0x04,0x04,0x08,0x08,0x10,0x20,0x20,0x40,0x40,0x80,0xFE,0x00,0x00},/*"Z",58*/
{0x7C,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7C,0x00},/*"[",59*/
{0x00,0x82,0x82,0x44,0x44,0x28,0x28,0x7C,0x10,0x10,0x7C,0x10,0x10,0x10,0x00,0x00},/*"\",60*/
{0x7C,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x7C,0x00},/*"]",61*/
{0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF},/*"_",63*/
{0x30,0x30,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",64*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x84,0x04,0x3C,0x44,0x84,0x8C,0x76,0x00,0x00},/*"a",65*/
{0x00,0x80,0x80,0x80,0x80,0x80,0xB8,0xC4,0x82,0x82,0x82,0x82,0xC4,0xB8,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x80,0x80,0x80,0x80,0x42,0x3C,0x00,0x00},/*"c",67*/
{0x00,0x02,0x02,0x02,0x02,0x02,0x3A,0x46,0x82,0x82,0x82,0x82,0x46,0x3A,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x82,0xFE,0x80,0x80,0x42,0x3C,0x00,0x00},/*"e",69*/
{0x00,0x18,0x20,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x3A,0x44,0x44,0x38,0x40,0x7C,0x82,0x82,0x7C,0x00},/*"g",71*/
{0x00,0x80,0x80,0x80,0x80,0x80,0xB8,0xC4,0x82,0x82,0x82,0x82,0x82,0x82,0x00,0x00},/*"h",72*/
{0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"i",73*/
{0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x60,0x00},/*"j",74*/
{0x00,0x80,0x80,0x80,0x80,0x80,0x84,0x88,0x90,0xA0,0xD0,0x88,0x84,0x82,0x00,0x00},/*"k",75*/
{0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xAC,0xD2,0x92,0x92,0x92,0x92,0x92,0x92,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xB8,0xC4,0x82,0x82,0x82,0x82,0x82,0x82,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xB8,0xC4,0x82,0x82,0x82,0xC4,0xB8,0x80,0x80,0x00},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x3A,0x46,0x82,0x82,0x82,0x46,0x3A,0x02,0x02,0x00},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x2E,0x30,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x82,0x80,0x60,0x1C,0x02,0x82,0x7C,0x00,0x00},/*"s",83*/
{0x00,0x00,0x20,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x18,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x82,0x82,0x82,0x82,0x82,0x46,0x3A,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x82,0x44,0x44,0x28,0x28,0x10,0x10,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x92,0x92,0x92,0xAA,0xAA,0x44,0x44,0x44,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x44,0x28,0x10,0x10,0x28,0x44,0x82,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x82,0x44,0x44,0x28,0x28,0x10,0x20,0xC0,0x00},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x04,0x08,0x10,0x20,0x40,0x80,0xFE,0x00,0x00},/*"z",90*/
{0x1C,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x1C,0x00},/*"{",91*/
{0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10},/*"|",92*/
{0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00},/*"}",93*/
{0x64,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/

};

#endif


#ifdef ASCII_8X16_System
const unsigned char Bitmap_System_8X16[95][16] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x18,0x3C,0x3C,0x3C,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x00,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x00,0x00,0x00,0x36,0x36,0x7F,0x36,0x36,0x36,0x7F,0x36,0x36,0x00,0x00,0x00,0x00},/*"#",3*/
{0x00,0x18,0x18,0x3C,0x66,0x60,0x30,0x18,0x0C,0x06,0x66,0x3C,0x18,0x18,0x00,0x00},/*"$",4*/
{0x00,0x00,0x70,0xD8,0xDA,0x76,0x0C,0x18,0x30,0x6E,0x5B,0x1B,0x0E,0x00,0x00,0x00},/*"%",5*/
{0x00,0x00,0x00,0x38,0x6C,0x6C,0x38,0x60,0x6F,0x66,0x66,0x3B,0x00,0x00,0x00,0x00},/*"&",6*/
{0x00,0x00,0x00,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x0C,0x18,0x18,0x30,0x30,0x30,0x30,0x30,0x18,0x18,0x0C,0x00,0x00},/*"(",8*/
{0x00,0x00,0x00,0x30,0x18,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x18,0x30,0x00,0x00},/*")",9*/
{0x00,0x00,0x00,0x00,0x00,0x36,0x1C,0x7F,0x1C,0x36,0x00,0x00,0x00,0x00,0x00,0x00},/*"*",10*/
{0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x7E,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x0C,0x18,0x00,0x00},/*",",12*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x00,0x00,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x60,0x60,0x00,0x00,0x00},/*"/",15*/
{0x00,0x00,0x00,0x1E,0x33,0x37,0x37,0x33,0x3B,0x3B,0x33,0x1E,0x00,0x00,0x00,0x00},/*"0",16*/
{0x00,0x00,0x00,0x0C,0x1C,0x7C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00},/*"1",17*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x06,0x0C,0x18,0x30,0x60,0x7E,0x00,0x00,0x00,0x00},/*"2",18*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x06,0x1C,0x06,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"3",19*/
{0x00,0x00,0x00,0x30,0x30,0x36,0x36,0x36,0x66,0x7F,0x06,0x06,0x00,0x00,0x00,0x00},/*"4",20*/
{0x00,0x00,0x00,0x7E,0x60,0x60,0x60,0x7C,0x06,0x06,0x0C,0x78,0x00,0x00,0x00,0x00},/*"5",21*/
{0x00,0x00,0x00,0x1C,0x18,0x30,0x7C,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"6",22*/
{0x00,0x00,0x00,0x7E,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x30,0x00,0x00,0x00,0x00},/*"7",23*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x76,0x3C,0x6E,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"8",24*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x3E,0x0C,0x18,0x38,0x00,0x00,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x1C,0x1C,0x0C,0x18,0x00,0x00},/*";",27*/
{0x00,0x00,0x00,0x06,0x0C,0x18,0x30,0x60,0x30,0x18,0x0C,0x06,0x00,0x00,0x00,0x00},/*"<",28*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x00,0x00,0x00,0x60,0x30,0x18,0x0C,0x06,0x0C,0x18,0x30,0x60,0x00,0x00,0x00,0x00},/*">",30*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x0C,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00},/*"?",31*/
{0x00,0x00,0x00,0x7E,0xC3,0xC3,0xCF,0xDB,0xDB,0xCF,0xC0,0x7F,0x00,0x00,0x00,0x00},/*"@",32*/
{0x00,0x00,0x00,0x18,0x3C,0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x00,0x00,0x00,0x00},/*"A",33*/
{0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x7C,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,0x00},/*"B",34*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x60,0x60,0x60,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"C",35*/
{0x00,0x00,0x00,0x78,0x6C,0x66,0x66,0x66,0x66,0x66,0x6C,0x78,0x00,0x00,0x00,0x00},/*"D",36*/
{0x00,0x00,0x00,0x7E,0x60,0x60,0x60,0x7C,0x60,0x60,0x60,0x7E,0x00,0x00,0x00,0x00},/*"E",37*/
{0x00,0x00,0x00,0x7E,0x60,0x60,0x60,0x7C,0x60,0x60,0x60,0x60,0x00,0x00,0x00,0x00},/*"F",38*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x60,0x60,0x6E,0x66,0x66,0x3E,0x00,0x00,0x00,0x00},/*"G",39*/
{0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00},/*"H",40*/
{0x00,0x00,0x00,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00},/*"I",41*/
{0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"J",42*/
{0x00,0x00,0x00,0x66,0x66,0x6C,0x6C,0x78,0x6C,0x6C,0x66,0x66,0x00,0x00,0x00,0x00},/*"K",43*/
{0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7E,0x00,0x00,0x00,0x00},/*"L",44*/
{0x00,0x00,0x00,0x63,0x63,0x77,0x6B,0x6B,0x6B,0x63,0x63,0x63,0x00,0x00,0x00,0x00},/*"M",45*/
{0x00,0x00,0x00,0x63,0x63,0x73,0x7B,0x6F,0x67,0x63,0x63,0x63,0x00,0x00,0x00,0x00},/*"N",46*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"O",47*/
{0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x7C,0x60,0x60,0x60,0x60,0x00,0x00,0x00,0x00},/*"P",48*/
{0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x0C,0x06,0x00,0x00},/*"Q",49*/
{0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x7C,0x6C,0x66,0x66,0x66,0x00,0x00,0x00,0x00},/*"R",50*/
{0x00,0x00,0x00,0x3C,0x66,0x60,0x30,0x18,0x0C,0x06,0x66,0x3C,0x00,0x00,0x00,0x00},/*"S",51*/
{0x00,0x00,0x00,0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00},/*"T",52*/
{0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"U",53*/
{0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x18,0x00,0x00,0x00,0x00},/*"V",54*/
{0x00,0x00,0x00,0x63,0x63,0x63,0x6B,0x6B,0x6B,0x36,0x36,0x36,0x00,0x00,0x00,0x00},/*"W",55*/
{0x00,0x00,0x00,0x66,0x66,0x34,0x18,0x18,0x2C,0x66,0x66,0x66,0x00,0x00,0x00,0x00},/*"X",56*/
{0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x3C,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00},/*"Y",57*/
{0x00,0x00,0x00,0x7E,0x06,0x06,0x0C,0x18,0x30,0x60,0x60,0x7E,0x00,0x00,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x3C,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3C,0x00},/*"[",59*/
{0x00,0x00,0x00,0x60,0x60,0x30,0x30,0x18,0x18,0x0C,0x0C,0x06,0x06,0x00,0x00,0x00},/*"\",60*/
{0x00,0x00,0x00,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3C,0x00},/*"]",61*/
{0x00,0x18,0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00},/*"_",63*/
{0x00,0x00,0x00,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",64*/
{0x00,0x00,0x00,0x00,0x00,0x3C,0x06,0x06,0x3E,0x66,0x66,0x3E,0x00,0x00,0x00,0x00},/*"a",65*/
{0x00,0x00,0x00,0x60,0x60,0x7C,0x66,0x66,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,0x00},/*"b",66*/
{0x00,0x00,0x00,0x00,0x00,0x3C,0x66,0x60,0x60,0x60,0x66,0x3C,0x00,0x00,0x00,0x00},/*"c",67*/
{0x00,0x00,0x00,0x06,0x06,0x3E,0x66,0x66,0x66,0x66,0x66,0x3E,0x00,0x00,0x00,0x00},/*"d",68*/
{0x00,0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x7E,0x60,0x60,0x3C,0x00,0x00,0x00,0x00},/*"e",69*/
{0x00,0x00,0x00,0x1E,0x30,0x30,0x30,0x7E,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00},/*"f",70*/
{0x00,0x00,0x00,0x00,0x00,0x3E,0x66,0x66,0x66,0x66,0x66,0x3E,0x06,0x06,0x7C,0x00},/*"g",71*/
{0x00,0x00,0x00,0x60,0x60,0x7C,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00},/*"h",72*/
{0x00,0x00,0x18,0x18,0x00,0x78,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x00,0x0C,0x0C,0x00,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x78,0x00},/*"j",74*/
{0x00,0x00,0x00,0x60,0x60,0x66,0x66,0x6C,0x78,0x6C,0x66,0x66,0x00,0x00,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x78,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,0x00,0x00,0x00},/*"l",76*/
{0x00,0x00,0x00,0x00,0x00,0x7E,0x6B,0x6B,0x6B,0x6B,0x6B,0x63,0x00,0x00,0x00,0x00},/*"m",77*/
{0x00,0x00,0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00},/*"n",78*/
{0x00,0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,0x00},/*"o",79*/
{0x00,0x00,0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x60,0x60,0x00},/*"p",80*/
{0x00,0x00,0x00,0x00,0x00,0x3E,0x66,0x66,0x66,0x66,0x66,0x3E,0x06,0x06,0x06,0x00},/*"q",81*/
{0x00,0x00,0x00,0x00,0x00,0x66,0x6E,0x70,0x60,0x60,0x60,0x60,0x00,0x00,0x00,0x00},/*"r",82*/
{0x00,0x00,0x00,0x00,0x00,0x3E,0x60,0x60,0x3C,0x06,0x06,0x7C,0x00,0x00,0x00,0x00},/*"s",83*/
{0x00,0x00,0x00,0x30,0x30,0x7E,0x30,0x30,0x30,0x30,0x30,0x1E,0x00,0x00,0x00,0x00},/*"t",84*/
{0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x3E,0x00,0x00,0x00,0x00},/*"u",85*/
{0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x3C,0x18,0x00,0x00,0x00,0x00},/*"v",86*/
{0x00,0x00,0x00,0x00,0x00,0x63,0x6B,0x6B,0x6B,0x6B,0x36,0x36,0x00,0x00,0x00,0x00},/*"w",87*/
{0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x3C,0x18,0x3C,0x66,0x66,0x00,0x00,0x00,0x00},/*"x",88*/
{0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x0C,0x18,0xF0,0x00},/*"y",89*/
{0x00,0x00,0x00,0x00,0x00,0x7E,0x06,0x0C,0x18,0x30,0x60,0x7E,0x00,0x00,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x0C,0x18,0x18,0x18,0x30,0x60,0x30,0x18,0x18,0x18,0x0C,0x00,0x00},/*"{",91*/
{0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00},/*"|",92*/
{0x00,0x00,0x00,0x30,0x18,0x18,0x18,0x0C,0x06,0x0C,0x18,0x18,0x18,0x30,0x00,0x00},/*"}",93*/
{0x00,0x00,0x00,0x71,0xDB,0x8E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};
#endif


/*********************************************************************************************************
      END FILE
*********************************************************************************************************/

