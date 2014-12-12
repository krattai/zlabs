/*  =========================================================================
    zlabs - ZLABS wrapper

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef __zlabs_library_H_INCLUDED__
#define __zlabs_library_H_INCLUDED__

//  External dependencies
#include <zmq.h>
#include <czmq.h>

//  ZLABS version macros for compile-time API detection

#define ZLABS_VERSION_MAJOR 1
#define ZLABS_VERSION_MINOR 0
#define ZLABS_VERSION_PATCH 0

#define ZLABS_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define ZLABS_VERSION \
    ZLABS_MAKE_VERSION(ZLABS_VERSION_MAJOR, ZLABS_VERSION_MINOR, ZLABS_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBZLABS_STATIC
#       define ZLABS_EXPORT
#   elif defined LIBZLABS_EXPORTS
#       define ZLABS_EXPORT __declspec(dllexport)
#   else
#       define ZLABS_EXPORT __declspec(dllimport)
#   endif
#else
#   define ZLABS_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _zpubsub_t zpubsub_t;
#define ZPUBSUB_T_DEFINED
typedef struct _zpubsub_option_t zpubsub_option_t;
#define ZPUBSUB_OPTION_T_DEFINED
typedef struct _zpipe_t zpipe_t;
#define ZPIPE_T_DEFINED
typedef struct _zpubsub_filter_t zpubsub_filter_t;
#define ZPUBSUB_FILTER_T_DEFINED


//  Public API classes
#include "zpubsub.h"
#include "zpubsub_option.h"
#include "zpipe.h"
#include "zpubsub_filter.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
