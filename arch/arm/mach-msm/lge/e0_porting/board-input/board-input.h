#ifndef __ARCH_MSM_BOARD_E0_INPUT_H
#define __ARCH_MSM_BOARD_E0_INPUT_H

void __init add_bosch_sensors(void);

void __init add_gp2ap_proximity(void);

void __init add_melfes_touchscreen(void);

void __init add_gpio_keypad(void); //always available

#endif // __ARCH_MSM_BOARD_E0_INPUT_H