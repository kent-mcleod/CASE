#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e

if [ -z "${SIREUM_HOME}" ]; then
  echo "SIREUM_HOME not set. Refer to https://github.com/sireum/kekinian/#installing"
  exit 1
fi

PATH_SEP=":"
if [ -n "$COMSPEC" -a -x "$COMSPEC" ]; then
  PATH_SEP=";"
fi

SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )

${SIREUM_HOME}/bin/sireum slang transpilers c \
  --sourcepath "${SCRIPT_HOME}/../src/main" \
  --output-dir "${SCRIPT_HOME}/../src/c/nix" \
  --name "main" \
  --apps "uav_project_extern.WaypointManager_Impl_App,uav_project_extern.FlightPlanner_Impl_App,uav_project_extern.UARTDriver_Impl_App,uav_project_extern.RadioDriver_Impl_App,uav_project_extern.Main" \
  --fingerprint 3 \
  --bits 64 \
  --string-size 256 \
  --sequence-size 16 \
  --forward "art.ArtNative=uav_project_extern.ArtNix,uav_project_extern.Platform=uav_project_extern.PlatformNix" \
  --stack-size "16*1024*1024" \
  --stable-type-id \
  --exts "${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ipc.c" \
  --exclude-build "uav_project_extern.SW.WaypointManager_Impl_Impl,uav_project_extern.SW.FlightPlanner_Impl_Impl,uav_project_extern.SW.UARTDriver_Impl_Impl,uav_project_extern.SW.RadioDriver_Impl_Impl" \
  --verbose