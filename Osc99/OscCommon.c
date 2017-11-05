/**
 * @file OscCommon.c
 * @author Seb Madgwick
 * @brief Definitions, types, and functions used throughout library.
 * @see http://opensoundcontrol.org/spec-1_0
 */

//------------------------------------------------------------------------------
// Includes

#include "OscCommon.h"

//------------------------------------------------------------------------------
// Functions

/**
 * @brief Returns true if the OSC contents is an OSC message. 
 * @param oscContents Address of OSC packet, OSC bundle, or OSC message.
 * @return True if the OSC contents is an OSC message.
 */
bool OscContentsIsMessage(const void * const oscContents) {
    return (*(char *) (oscContents) == '/');
}

/**
 * @brief Returns true if the OSC contents is an OSC bundle. 
 * @param oscContents Address of OSC packet, OSC bundle, or OSC message.
 * @return True if the OSC contents is an OSC bundle.
 */
bool OscContentsIsBundle(const void * const oscContents) {
    return (*(char *) (oscContents) == '#');
}

//------------------------------------------------------------------------------
// End of file