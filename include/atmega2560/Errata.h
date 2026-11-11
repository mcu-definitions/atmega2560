/**
 * @file Errata.h
 * @brief Datasheet revision and device silicon errata references.
 */

#ifndef ATMEGA2560_DEFINITIONS_ERRATA_H
#define ATMEGA2560_DEFINITIONS_ERRATA_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Errata definitions. */
    namespace errata
    {
        /** @brief Datasheet revision identifier. */
        static const char *const datasheet_revision = "DS40002211A";
        /** @brief Published errata document ID. */
        static const char *const silicon_errata_document = "DS80001074";
        /** @brief Errata status. */
        enum : uint8_t
        {
            errata_document_available = 1,                       ///< errata document available.
            errata_must_be_checked_against_silicon_revision = 1, ///< errata must be checked against silicon revision.
        };
    }
}

#endif
