/**
 * @file PackagePins.h
 * @brief Physical terminal and ball mappings for 100-terminal packages.
 */

#ifndef ATMEGA2560_DEFINITIONS_PACKAGE_PINS_H
#define ATMEGA2560_DEFINITIONS_PACKAGE_PINS_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Package pin assignments definitions. */
    namespace package
    {
        /** @brief Tqfp100 definitions. */
        namespace tqfp100
        {
            /** @brief TQFP-100 numbered terminals. */
            enum : uint8_t
            {
                PG5 = 1,    ///< PG5 terminal 1.
                PE0 = 2,    ///< PE0 terminal 2.
                PE1 = 3,    ///< PE1 terminal 3.
                PE2 = 4,    ///< PE2 terminal 4.
                PE3 = 5,    ///< PE3 terminal 5.
                PE4 = 6,    ///< PE4 terminal 6.
                PE5 = 7,    ///< PE5 terminal 7.
                PE6 = 8,    ///< PE6 terminal 8.
                PE7 = 9,    ///< PE7 terminal 9.
                VCC1 = 10,  ///< VCC terminal 10.
                GND1 = 11,  ///< GND terminal 11.
                PH0 = 12,   ///< PH0 terminal 12.
                PH1 = 13,   ///< PH1 terminal 13.
                PH2 = 14,   ///< PH2 terminal 14.
                PH3 = 15,   ///< PH3 terminal 15.
                PH4 = 16,   ///< PH4 terminal 16.
                PH5 = 17,   ///< PH5 terminal 17.
                PH6 = 18,   ///< PH6 terminal 18.
                PB0 = 19,   ///< PB0 terminal 19.
                PB1 = 20,   ///< PB1 terminal 20.
                PB2 = 21,   ///< PB2 terminal 21.
                PB3 = 22,   ///< PB3 terminal 22.
                PB4 = 23,   ///< PB4 terminal 23.
                PB5 = 24,   ///< PB5 terminal 24.
                PB6 = 25,   ///< PB6 terminal 25.
                PB7 = 26,   ///< PB7 terminal 26.
                PH7 = 27,   ///< PH7 terminal 27.
                PG3 = 28,   ///< PG3 terminal 28.
                PG4 = 29,   ///< PG4 terminal 29.
                RESET = 30, ///< RESET terminal 30.
                VCC2 = 31,  ///< VCC terminal 31.
                GND2 = 32,  ///< GND terminal 32.
                XTAL2 = 33, ///< XTAL2 terminal 33.
                XTAL1 = 34, ///< XTAL1 terminal 34.
                PL0 = 35,   ///< PL0 terminal 35.
                PL1 = 36,   ///< PL1 terminal 36.
                PL2 = 37,   ///< PL2 terminal 37.
                PL3 = 38,   ///< PL3 terminal 38.
                PL4 = 39,   ///< PL4 terminal 39.
                PL5 = 40,   ///< PL5 terminal 40.
                PL6 = 41,   ///< PL6 terminal 41.
                PL7 = 42,   ///< PL7 terminal 42.
                PD0 = 43,   ///< PD0 terminal 43.
                PD1 = 44,   ///< PD1 terminal 44.
                PD2 = 45,   ///< PD2 terminal 45.
                PD3 = 46,   ///< PD3 terminal 46.
                PD4 = 47,   ///< PD4 terminal 47.
                PD5 = 48,   ///< PD5 terminal 48.
                PD6 = 49,   ///< PD6 terminal 49.
                PD7 = 50,   ///< PD7 terminal 50.
                PG0 = 51,   ///< PG0 terminal 51.
                PG1 = 52,   ///< PG1 terminal 52.
                PC0 = 53,   ///< PC0 terminal 53.
                PC1 = 54,   ///< PC1 terminal 54.
                PC2 = 55,   ///< PC2 terminal 55.
                PC3 = 56,   ///< PC3 terminal 56.
                PC4 = 57,   ///< PC4 terminal 57.
                PC5 = 58,   ///< PC5 terminal 58.
                PC6 = 59,   ///< PC6 terminal 59.
                PC7 = 60,   ///< PC7 terminal 60.
                VCC3 = 61,  ///< VCC terminal 61.
                GND3 = 62,  ///< GND terminal 62.
                PJ0 = 63,   ///< PJ0 terminal 63.
                PJ1 = 64,   ///< PJ1 terminal 64.
                PJ2 = 65,   ///< PJ2 terminal 65.
                PJ3 = 66,   ///< PJ3 terminal 66.
                PJ4 = 67,   ///< PJ4 terminal 67.
                PJ5 = 68,   ///< PJ5 terminal 68.
                PJ6 = 69,   ///< PJ6 terminal 69.
                PG2 = 70,   ///< PG2 terminal 70.
                PA7 = 71,   ///< PA7 terminal 71.
                PA6 = 72,   ///< PA6 terminal 72.
                PA5 = 73,   ///< PA5 terminal 73.
                PA4 = 74,   ///< PA4 terminal 74.
                PA3 = 75,   ///< PA3 terminal 75.
                PA2 = 76,   ///< PA2 terminal 76.
                PA1 = 77,   ///< PA1 terminal 77.
                PA0 = 78,   ///< PA0 terminal 78.
                PJ7 = 79,   ///< PJ7 terminal 79.
                VCC4 = 80,  ///< VCC terminal 80.
                GND4 = 81,  ///< GND terminal 81.
                PK7 = 82,   ///< PK7 terminal 82.
                PK6 = 83,   ///< PK6 terminal 83.
                PK5 = 84,   ///< PK5 terminal 84.
                PK4 = 85,   ///< PK4 terminal 85.
                PK3 = 86,   ///< PK3 terminal 86.
                PK2 = 87,   ///< PK2 terminal 87.
                PK1 = 88,   ///< PK1 terminal 88.
                PK0 = 89,   ///< PK0 terminal 89.
                PF7 = 90,   ///< PF7 terminal 90.
                PF6 = 91,   ///< PF6 terminal 91.
                PF5 = 92,   ///< PF5 terminal 92.
                PF4 = 93,   ///< PF4 terminal 93.
                PF3 = 94,   ///< PF3 terminal 94.
                PF2 = 95,   ///< PF2 terminal 95.
                PF1 = 96,   ///< PF1 terminal 96.
                PF0 = 97,   ///< PF0 terminal 97.
                AREF = 98,  ///< AREF terminal 98.
                GND5 = 99,  ///< GND terminal 99.
                AVCC = 100, ///< AVCC terminal 100.
            };
        }
        /** @brief Cbga100 definitions. */
        namespace cbga100
        {
            /** @brief CBGA-100 ball ordinals in top-view A1..K10 order. */
            enum : uint8_t
            {
                A1 = 1,    ///< Ball A1: GND.
                A2 = 2,    ///< Ball A2: AREF.
                A3 = 3,    ///< Ball A3: PF0.
                A4 = 4,    ///< Ball A4: PF2.
                A5 = 5,    ///< Ball A5: PF5.
                A6 = 6,    ///< Ball A6: PK0.
                A7 = 7,    ///< Ball A7: PK3.
                A8 = 8,    ///< Ball A8: PK6.
                A9 = 9,    ///< Ball A9: GND.
                A10 = 10,  ///< Ball A10: VCC.
                B1 = 11,   ///< Ball B1: AVCC.
                B2 = 12,   ///< Ball B2: PG5.
                B3 = 13,   ///< Ball B3: PF1.
                B4 = 14,   ///< Ball B4: PF3.
                B5 = 15,   ///< Ball B5: PF6.
                B6 = 16,   ///< Ball B6: PK1.
                B7 = 17,   ///< Ball B7: PK4.
                B8 = 18,   ///< Ball B8: PK7.
                B9 = 19,   ///< Ball B9: PA0.
                B10 = 20,  ///< Ball B10: PA2.
                C1 = 21,   ///< Ball C1: PE2.
                C2 = 22,   ///< Ball C2: PE0.
                C3 = 23,   ///< Ball C3: PE1.
                C4 = 24,   ///< Ball C4: PF4.
                C5 = 25,   ///< Ball C5: PF7.
                C6 = 26,   ///< Ball C6: PK2.
                C7 = 27,   ///< Ball C7: PK5.
                C8 = 28,   ///< Ball C8: PJ7.
                C9 = 29,   ///< Ball C9: PA1.
                C10 = 30,  ///< Ball C10: PA3.
                D1 = 31,   ///< Ball D1: PE3.
                D2 = 32,   ///< Ball D2: PE4.
                D3 = 33,   ///< Ball D3: PE5.
                D4 = 34,   ///< Ball D4: PE6.
                D5 = 35,   ///< Ball D5: PH2.
                D6 = 36,   ///< Ball D6: PA4.
                D7 = 37,   ///< Ball D7: PA5.
                D8 = 38,   ///< Ball D8: PA6.
                D9 = 39,   ///< Ball D9: PA7.
                D10 = 40,  ///< Ball D10: PG2.
                E1 = 41,   ///< Ball E1: PE7.
                E2 = 42,   ///< Ball E2: PH0.
                E3 = 43,   ///< Ball E3: PH1.
                E4 = 44,   ///< Ball E4: PH3.
                E5 = 45,   ///< Ball E5: PH5.
                E6 = 46,   ///< Ball E6: PJ6.
                E7 = 47,   ///< Ball E7: PJ5.
                E8 = 48,   ///< Ball E8: PJ4.
                E9 = 49,   ///< Ball E9: PJ3.
                E10 = 50,  ///< Ball E10: PJ2.
                F1 = 51,   ///< Ball F1: VCC.
                F2 = 52,   ///< Ball F2: PH4.
                F3 = 53,   ///< Ball F3: PH6.
                F4 = 54,   ///< Ball F4: PB0.
                F5 = 55,   ///< Ball F5: PL4.
                F6 = 56,   ///< Ball F6: PD1.
                F7 = 57,   ///< Ball F7: PJ1.
                F8 = 58,   ///< Ball F8: PJ0.
                F9 = 59,   ///< Ball F9: PC7.
                F10 = 60,  ///< Ball F10: GND.
                G1 = 61,   ///< Ball G1: GND.
                G2 = 62,   ///< Ball G2: PB1.
                G3 = 63,   ///< Ball G3: PB2.
                G4 = 64,   ///< Ball G4: PB5.
                G5 = 65,   ///< Ball G5: PL2.
                G6 = 66,   ///< Ball G6: PD0.
                G7 = 67,   ///< Ball G7: PD5.
                G8 = 68,   ///< Ball G8: PC5.
                G9 = 69,   ///< Ball G9: PC6.
                G10 = 70,  ///< Ball G10: VCC.
                H1 = 71,   ///< Ball H1: PB3.
                H2 = 72,   ///< Ball H2: PB4.
                H3 = 73,   ///< Ball H3: RESET.
                H4 = 74,   ///< Ball H4: PL1.
                H5 = 75,   ///< Ball H5: PL3.
                H6 = 76,   ///< Ball H6: PL7.
                H7 = 77,   ///< Ball H7: PD4.
                H8 = 78,   ///< Ball H8: PC4.
                H9 = 79,   ///< Ball H9: PC3.
                H10 = 80,  ///< Ball H10: PC2.
                J1 = 81,   ///< Ball J1: PH7.
                J2 = 82,   ///< Ball J2: PG3.
                J3 = 83,   ///< Ball J3: PB6.
                J4 = 84,   ///< Ball J4: PL0.
                J5 = 85,   ///< Ball J5: XTAL2.
                J6 = 86,   ///< Ball J6: PL6.
                J7 = 87,   ///< Ball J7: PD3.
                J8 = 88,   ///< Ball J8: PC1.
                J9 = 89,   ///< Ball J9: PC0.
                J10 = 90,  ///< Ball J10: PG1.
                K1 = 91,   ///< Ball K1: PB7.
                K2 = 92,   ///< Ball K2: PG4.
                K3 = 93,   ///< Ball K3: VCC.
                K4 = 94,   ///< Ball K4: GND.
                K5 = 95,   ///< Ball K5: XTAL1.
                K6 = 96,   ///< Ball K6: PL5.
                K7 = 97,   ///< Ball K7: PD2.
                K8 = 98,   ///< Ball K8: PD6.
                K9 = 99,   ///< Ball K9: PD7.
                K10 = 100, ///< Ball K10: PG0.
            };
            /** @brief CBGA-100 ball assignments by signal. */
            enum : uint8_t
            {
                GND1 = 1,   ///< GND terminal 1.
                AREF = 2,   ///< AREF terminal 2.
                PF0 = 3,    ///< PF0 terminal 3.
                PF2 = 4,    ///< PF2 terminal 4.
                PF5 = 5,    ///< PF5 terminal 5.
                PK0 = 6,    ///< PK0 terminal 6.
                PK3 = 7,    ///< PK3 terminal 7.
                PK6 = 8,    ///< PK6 terminal 8.
                GND2 = 9,   ///< GND terminal 9.
                VCC1 = 10,  ///< VCC terminal 10.
                AVCC = 11,  ///< AVCC terminal 11.
                PG5 = 12,   ///< PG5 terminal 12.
                PF1 = 13,   ///< PF1 terminal 13.
                PF3 = 14,   ///< PF3 terminal 14.
                PF6 = 15,   ///< PF6 terminal 15.
                PK1 = 16,   ///< PK1 terminal 16.
                PK4 = 17,   ///< PK4 terminal 17.
                PK7 = 18,   ///< PK7 terminal 18.
                PA0 = 19,   ///< PA0 terminal 19.
                PA2 = 20,   ///< PA2 terminal 20.
                PE2 = 21,   ///< PE2 terminal 21.
                PE0 = 22,   ///< PE0 terminal 22.
                PE1 = 23,   ///< PE1 terminal 23.
                PF4 = 24,   ///< PF4 terminal 24.
                PF7 = 25,   ///< PF7 terminal 25.
                PK2 = 26,   ///< PK2 terminal 26.
                PK5 = 27,   ///< PK5 terminal 27.
                PJ7 = 28,   ///< PJ7 terminal 28.
                PA1 = 29,   ///< PA1 terminal 29.
                PA3 = 30,   ///< PA3 terminal 30.
                PE3 = 31,   ///< PE3 terminal 31.
                PE4 = 32,   ///< PE4 terminal 32.
                PE5 = 33,   ///< PE5 terminal 33.
                PE6 = 34,   ///< PE6 terminal 34.
                PH2 = 35,   ///< PH2 terminal 35.
                PA4 = 36,   ///< PA4 terminal 36.
                PA5 = 37,   ///< PA5 terminal 37.
                PA6 = 38,   ///< PA6 terminal 38.
                PA7 = 39,   ///< PA7 terminal 39.
                PG2 = 40,   ///< PG2 terminal 40.
                PE7 = 41,   ///< PE7 terminal 41.
                PH0 = 42,   ///< PH0 terminal 42.
                PH1 = 43,   ///< PH1 terminal 43.
                PH3 = 44,   ///< PH3 terminal 44.
                PH5 = 45,   ///< PH5 terminal 45.
                PJ6 = 46,   ///< PJ6 terminal 46.
                PJ5 = 47,   ///< PJ5 terminal 47.
                PJ4 = 48,   ///< PJ4 terminal 48.
                PJ3 = 49,   ///< PJ3 terminal 49.
                PJ2 = 50,   ///< PJ2 terminal 50.
                VCC2 = 51,  ///< VCC terminal 51.
                PH4 = 52,   ///< PH4 terminal 52.
                PH6 = 53,   ///< PH6 terminal 53.
                PB0 = 54,   ///< PB0 terminal 54.
                PL4 = 55,   ///< PL4 terminal 55.
                PD1 = 56,   ///< PD1 terminal 56.
                PJ1 = 57,   ///< PJ1 terminal 57.
                PJ0 = 58,   ///< PJ0 terminal 58.
                PC7 = 59,   ///< PC7 terminal 59.
                GND3 = 60,  ///< GND terminal 60.
                GND4 = 61,  ///< GND terminal 61.
                PB1 = 62,   ///< PB1 terminal 62.
                PB2 = 63,   ///< PB2 terminal 63.
                PB5 = 64,   ///< PB5 terminal 64.
                PL2 = 65,   ///< PL2 terminal 65.
                PD0 = 66,   ///< PD0 terminal 66.
                PD5 = 67,   ///< PD5 terminal 67.
                PC5 = 68,   ///< PC5 terminal 68.
                PC6 = 69,   ///< PC6 terminal 69.
                VCC3 = 70,  ///< VCC terminal 70.
                PB3 = 71,   ///< PB3 terminal 71.
                PB4 = 72,   ///< PB4 terminal 72.
                RESET = 73, ///< RESET terminal 73.
                PL1 = 74,   ///< PL1 terminal 74.
                PL3 = 75,   ///< PL3 terminal 75.
                PL7 = 76,   ///< PL7 terminal 76.
                PD4 = 77,   ///< PD4 terminal 77.
                PC4 = 78,   ///< PC4 terminal 78.
                PC3 = 79,   ///< PC3 terminal 79.
                PC2 = 80,   ///< PC2 terminal 80.
                PH7 = 81,   ///< PH7 terminal 81.
                PG3 = 82,   ///< PG3 terminal 82.
                PB6 = 83,   ///< PB6 terminal 83.
                PL0 = 84,   ///< PL0 terminal 84.
                XTAL2 = 85, ///< XTAL2 terminal 85.
                PL6 = 86,   ///< PL6 terminal 86.
                PD3 = 87,   ///< PD3 terminal 87.
                PC1 = 88,   ///< PC1 terminal 88.
                PC0 = 89,   ///< PC0 terminal 89.
                PG1 = 90,   ///< PG1 terminal 90.
                PB7 = 91,   ///< PB7 terminal 91.
                PG4 = 92,   ///< PG4 terminal 92.
                VCC4 = 93,  ///< VCC terminal 93.
                GND5 = 94,  ///< GND terminal 94.
                XTAL1 = 95, ///< XTAL1 terminal 95.
                PL5 = 96,   ///< PL5 terminal 96.
                PD2 = 97,   ///< PD2 terminal 97.
                PD6 = 98,   ///< PD6 terminal 98.
                PD7 = 99,   ///< PD7 terminal 99.
                PG0 = 100,  ///< PG0 terminal 100.
            };
        }
    }
}

#endif
