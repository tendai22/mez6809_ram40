/* 
 * File:   param.h
 * Author: tendai22plus@gmail.com (Norihiro Kumagai)
 *
 * Created on 2023/02/09, 20:37
 */

#ifndef NEWFILE_H
#define	NEWFILE_H

#ifdef	__cplusplus
extern "C" {
#endif


// user defined types    
typedef unsigned short addr_t;
    
//#define ROM_SIZE 0x4000 // ROM size 8K bytes
#define RAM_SIZE ((addr_t)0x1000) // RAM size 4K bytes
#define RAM_TOP ((addr_t)0xF000) // RAM start address
#define UART_DREG ((unsigned short)0xffa1) // UART data register address
#define UART_CREG ((unsigned short)0xffa0) // UART control register address
//#define HALT_REG  ((unsigned long)0xE002) // System HALT activate
#define DBG_PORT ((unsigned long)0xffa2) // debug port address DBG_PORT

//extern const unsigned char rom[]; // Equivalent to ROM, see end of this file

#ifdef	__cplusplus
}
#endif

#endif	/* NEWFILE_H */

