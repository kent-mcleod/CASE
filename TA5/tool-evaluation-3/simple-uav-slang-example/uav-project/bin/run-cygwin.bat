#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME
cygstart mintty /bin/bash win/UART_Impl_App.exe &
cygstart mintty /bin/bash win/WaypointManager_Impl_App.exe &
cygstart mintty /bin/bash win/Radio_Impl_App.exe &
cygstart mintty /bin/bash win/FlightPlanner_Impl_App.exe &
cygstart mintty /bin/bash win/UARTDriver_Impl_App.exe &
cygstart mintty /bin/bash win/RadioDriver_Impl_App.exe &
read -p "Press enter to call component initialize entry points ..."
win/Main.exe
read -p "Press enter again to start ..."
win/Main.exe