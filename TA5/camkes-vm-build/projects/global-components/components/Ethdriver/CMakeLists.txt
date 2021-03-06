#
# Copyright 2019, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#
# @TAG(DATA61_BSD)
#

cmake_minimum_required(VERSION 3.8.2)

project(Ethdriver C)

set(CAmkESCPP ON CACHE BOOL "" FORCE)

CAmkESAddCPPInclude("${CMAKE_CURRENT_LIST_DIR}/include/plat/${KernelPlatform}/")

set(ETHDRIVER_LIBS sel4utils sel4vka sel4allocman sel4vspace sel4simple sel4platsupport ethdrivers)

DeclareCAmkESComponent(
    Ethdriver82574
    SOURCES
    src/ethdriver.c
    src/plat/${KernelPlatform}/common.c
    src/plat/${KernelPlatform}/82574.c
    INCLUDES
    include
    LIBS
    "${ETHDRIVER_LIBS}"
)

DeclareCAmkESComponent(
    Ethdriver82580
    SOURCES
    src/ethdriver.c
    src/plat/${KernelPlatform}/common.c
    src/plat/${KernelPlatform}/82580.c
    INCLUDES
    include
    LIBS
    "${ETHDRIVER_LIBS}"
)

DeclareCAmkESComponent(
    EthdriverARMPlat
    SOURCES
    src/ethdriver.c
    src/plat/${KernelPlatform}/plat.c
    INCLUDES
    include
    LIBS
    "${ETHDRIVER_LIBS}"
)
