/******************************************************************************

Copyright (c) 2016-2019 VMware, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

******************************************************************************/

#include "vmaccel_rpc.h"

VMAccelResourceAllocateReturnStatus *
vmaccel_resourcealloc_1_svc(VMAccelResourceDesc *argp, struct svc_req *rqstp) {
   static VMAccelResourceAllocateReturnStatus result;

   /*
    * insert server code here
    */

   return &result;
}

VMAccelReturnStatus *vmaccel_resourcerelease_1_svc(VMAccelId *argp,
                                                   struct svc_req *rqstp) {
   static VMAccelReturnStatus result;

   /*
    * insert server code here
    */

   return &result;
}

VMAccelComputeReturnStatus *vmaccel_compute_1_svc(VMAccelComputeOp *argp,
                                                  struct svc_req *rqstp) {
   static VMAccelComputeReturnStatus result;

   /*
    * insert server code here
    */

   return &result;
}
