/***************************************************************************//**
 * @file barometer_config.h
 * @brief Configuration file for the barometer module
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided \'as-is\', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *******************************************************************************
 * # Evaluation Quality
 * This code has been minimally tested to ensure that it builds and is suitable
 * as a demonstration for evaluation purposes only. This code will be maintained
 * at the sole discretion of Silicon Labs.
 ******************************************************************************/

#ifndef BAROMETER_CONFIG_H
#define BAROMETER_CONFIG_H

#include "em_device.h"
#include "em_gpio.h"

#define BAROMETER_DEFAULT_SCL_PORT          gpioPortB
#define BAROMETER_DEFAULT_SCL_PIN           2
#define BAROMETER_DEFAULT_SDA_PORT          gpioPortB
#define BAROMETER_DEFAULT_SDA_PIN           3
#define BAROMETER_DEFAULT_I2C_INSTANCE      I2C0
#define BAROMETER_DEFAULT_I2C_ADDR          0x77
#define BAROMETER_DEFAULT_OVERSAMP_INDEX    4

#endif /* BAROMETER_CONFIG_H */
