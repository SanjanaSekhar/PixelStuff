#!/usr/bin/env /bin/bash
#
# $Id: atlas_build_run.sh.in 779014 2016-10-18 14:21:49Z krasznaa $
#
# This script is used during the build to set up a functional runtime
# environment for running scripts/executables.
#

# Transmit errors:
set -e

# Set up the environment:
source /afs/cern.ch/work/s/ssekhar/RadiationStudies17/build/x86_64-slc6-gcc49-opt/setup.sh || exit 1

# Run the command:
exec $* || exit 1
