# Copyright (c) 2011 CSIRO
# Australia Telescope National Facility (ATNF)
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# PO Box 76, Epping NSW 1710, Australia
# atnf-enquiries@csiro.au
#
# The ASKAP software distribution is free software: you can redistribute it
# and/or modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of the License,
# or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
#
# To build normally:
# $ make
#

CXX = g++
CFLAGS = -Wall -Wextra -O3 -fstrict-aliasing -fPIC
INCLUDE = -I$(CUDA_INSTALL)/include -I../cub/cub

NVCC = nvcc
NVCCFLAGS = -O3 --compiler-options -fPIC

EXENAME = tHogbomCleanCuda
OBJS = $(EXENAME).o Stopwatch.o HogbomGolden.o HogbomCuda.o

all:		$(EXENAME)

HogbomCuda.o:	HogbomCuda.cu HogbomCuda.h Parameters.h
		$(NVCC) $(NVCCFLAGS) $(INCLUDE) -c $<

%.o:		%.cc %.h Parameters.h
		$(CXX) $(CFLAGS) $(INCLUDE) -c $<

$(EXENAME):	$(OBJS)
		$(NVCC) $(NVCCFLAGS) -o $(EXENAME) $(OBJS)

clean:
		rm -f $(EXENAME) *.o

