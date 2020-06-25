/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

// Copyright 2020 Adventium Labs

// This is a kernal data structure. To get your kernal compiled with this
// domain schedule you need to modify the top level settings.cmake file to have
// these lines.  Make sure you replace the existing "set(KernelNumDomains"
// line.
//
// camkes-project/projects/camkes/settings.cmake
//
// set(KernelDomainSchedule "${CMAKE_CURRENT_LIST_DIR}/apps/test_data_port_periodic_domains/behavior_code/kernel/domain_schedule.c" CACHE INTERNAL "")
// set(KernelNumDomains 4 CACHE STRING "" FORCE)

#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// An arbitrary hand generated schedule. The lenght is in seL4 ticks
// (2 ms default). This schedule shoule be generated from the AADL
// using execution time and data flow latency specifications.
//
// Pacer runs at highest rate
//
// This schedule is single-rate, 1Hz, run each thread at 200ms ticks for simplicity.
// Fill space in with domain 0.
//
//         +
// 3 dest  |        -              -              -              -      
// 2 src   |     -              -              -              -         
// 1 pacer |  -              -              -              -            
// 0 dom0  |-- -- -- -------- -- -- -------- -- -- -------- -- -- ------
//         |______________|______________________________________________\time
//           seconds      1              2              3              4 /
//
// Major frame is 1 seconds, since destination has 1 second period
//
const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
//    { .domain = 0, .length = 100 }, // all other seL4 threads, init, 200ms
//    { .domain = 1, .length =   5 }, // pacer        10ms
//    { .domain = 0, .length =  95 }, // domain0     190ms
//    { .domain = 2, .length =   5 }, // source       10ms
//    { .domain = 0, .length =  95 }, // domain0     190ms
//    { .domain = 3, .length =   5 }, // destination  10ms
//    { .domain = 0, .length = 195 }, // domain0     390ms

    { .domain = 0, .length =   1 }, // all other seL4 threads, init, 200ms
    { .domain = 1, .length =   1 }, // pacer        10ms
    { .domain = 0, .length =   1 }, // domain0     190ms
    { .domain = 2, .length =   5 }, // source       10ms
    { .domain = 0, .length =   1 }, // domain0     190ms
    { .domain = 3, .length =   1 }, // destination  10ms
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);