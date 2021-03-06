#
# Copyright (c) 2012, Akamai Technologies
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 
#   Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# 
#   Redistributions in binary form must reproduce the above
#   copyright notice, this list of conditions and the following
#   disclaimer in the documentation and/or other materials provided
#   with the distribution.
# 
#   Neither the name of the Akamai Technologies nor the names of its
#   contributors may be used to endorse or promote products derived
#   from this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
# INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
# OF THE POSSIBILITY OF SUCH DAMAGE.
#

# - Find uriparser
# Find the uriparser include directory and libraries (http://uriparser.sourceforge.net)

FIND_PATH(URIPARSER_INCLUDE_DIR NAMES uriparser/Uri.h)
MARK_AS_ADVANCED(URIPARSER_INCLUDE_DIR)

FIND_LIBRARY(URIPARSER_LIBRARY NAMES uriparser)
MARK_AS_ADVANCED(URIPARSER_LIBRARY)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(URIPARSER DEFAULT_MSG URIPARSER_LIBRARY URIPARSER_INCLUDE_DIR)

IF (URIPARSER_FOUND)
  SET(URIPARSER_LIBRARIES ${URIPARSER_LIBRARY})
  SET(URIPARSER_INCLUDE_DIRS ${URIPARSER_INCLUDE_DIR})
ELSE (URIPARSER_FOUND)
  SET(URIPARSER_LIBRARIES)
  SET(URIPARSER_INCLUDE_DIRS)
ENDIF (URIPARSER_FOUND)

