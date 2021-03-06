/*********************************************************************************************
* 文件：htu21d.h
* 作者：zonesion
* 说明：htu21d头文件
* 修改：Chenkm 2017.01.10 修改代码格式，增加代码注释和文件说明
* 注释：
*********************************************************************************************/
#ifndef __HTU21D_H__
#define __HTU21D_H__

/*********************************************************************************************
* 宏定义
*********************************************************************************************/
#define	   HTU21DADDR           0x80		                //HTU21的IIC地址
#define	   TEMPERATURE          0XF3		                //HTU21的温度地址
#define	   HUMIDITY             0XF5		                //HTU21的湿度地址
/*********************************************************************************************
* 外部原型函数
*********************************************************************************************/
void  htu21d_init(void);
unsigned char htu21d_read_reg(unsigned char cmd);
int   htu21d_get_data(unsigned char order);

#endif //__HTU21D_H__