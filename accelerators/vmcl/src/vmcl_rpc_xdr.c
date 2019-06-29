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

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "vmcl_rpc.h"

bool_t xdr_VMCLCaps(XDR *xdrs, VMCLCaps *objp) {
   if (!xdr_u_int(xdrs, objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelLanguage(XDR *xdrs, VMCLKernelLanguage *objp) {
   if (!xdr_u_int(xdrs, objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLContextId(XDR *xdrs, VMCLContextId *objp) {
   if (!xdr_VMAccelId(xdrs, objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLContextAllocateDesc(XDR *xdrs, VMCLContextAllocateDesc *objp) {
   if (!xdr_VMAccelId(xdrs, &objp->accelId))
      return FALSE;
   if (!xdr_VMCLContextId(xdrs, &objp->clientId))
      return FALSE;
   if (!xdr_VMAccelSelectionMask(xdrs, &objp->selectionMask))
      return FALSE;
   if (!xdr_VMCLCaps(xdrs, &objp->requiredCaps))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLContextAllocateStatus(XDR *xdrs,
                                     VMCLContextAllocateStatus *objp) {
   if (!xdr_VMAccelStatusCode(xdrs, &objp->status))
      return FALSE;
   if (!xdr_VMCLCaps(xdrs, &objp->caps))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSurfaceId(XDR *xdrs, VMCLSurfaceId *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelSurfaceId(xdrs, &objp->accel))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSurfaceAllocateDesc(XDR *xdrs, VMCLSurfaceAllocateDesc *objp) {
   if (!xdr_VMCLSurfaceId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMAccelSurfaceDesc(xdrs, &objp->desc))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSharedHandle(XDR *xdrs, VMCLSharedHandle *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelSurfaceId(xdrs, &objp->surf))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLQueueId(XDR *xdrs, VMCLQueueId *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLQueueAllocateDesc(XDR *xdrs, VMCLQueueAllocateDesc *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMAccelQueueDesc(xdrs, &objp->desc))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLEventId(XDR *xdrs, VMCLEventId *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLEventAllocateDesc(XDR *xdrs, VMCLEventAllocateDesc *objp) {
   if (!xdr_VMCLEventId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMAccelEventDesc(xdrs, &objp->desc))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLFenceId(XDR *xdrs, VMCLFenceId *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLFenceAllocateDesc(XDR *xdrs, VMCLFenceAllocateDesc *objp) {
   if (!xdr_VMCLFenceId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMAccelFenceDesc(xdrs, &objp->desc))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLQueueFlushOp(XDR *xdrs, VMCLQueueFlushOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLEventInsertOp(XDR *xdrs, VMCLEventInsertOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLFenceInsertOp(XDR *xdrs, VMCLFenceInsertOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSurfaceCopyOp(XDR *xdrs, VMCLSurfaceCopyOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMCLSurfaceId(xdrs, &objp->dst))
      return FALSE;
   if (!xdr_VMCLSurfaceId(xdrs, &objp->src))
      return FALSE;
   if (!xdr_VMAccelSurfaceCopyOp(xdrs, &objp->op))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLImageFillOp(XDR *xdrs, VMCLImageFillOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMCLSurfaceId(xdrs, &objp->img))
      return FALSE;
   if (!xdr_VMAccelImageFillOp(xdrs, &objp->op))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLImageUploadOp(XDR *xdrs, VMCLImageUploadOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMCLSurfaceId(xdrs, &objp->img))
      return FALSE;
   if (!xdr_VMAccelImageTransferOp(xdrs, &objp->op))
      return FALSE;
   if (!xdr_VMAccelSurfaceWriteConsistency(xdrs, &objp->mode))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLImageDownloadOp(XDR *xdrs, VMCLImageDownloadOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMCLSurfaceId(xdrs, &objp->img))
      return FALSE;
   if (!xdr_VMAccelImageTransferOp(xdrs, &objp->op))
      return FALSE;
   if (!xdr_VMAccelSurfaceReadConsistency(xdrs, &objp->mode))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSurfaceMapOp(XDR *xdrs, VMCLSurfaceMapOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMAccelSurfaceMapOp(xdrs, &objp->op))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSurfaceUnmapOp(XDR *xdrs, VMCLSurfaceUnmapOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMAccelSurfaceUnmapOp(xdrs, &objp->op))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSamplerId(XDR *xdrs, VMCLSamplerId *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSamplerAddressingMode(XDR *xdrs,
                                     VMCLSamplerAddressingMode *objp) {
   if (!xdr_enum(xdrs, (enum_t *)objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSamplerFilterMode(XDR *xdrs, VMCLSamplerFilterMode *objp) {
   if (!xdr_enum(xdrs, (enum_t *)objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSamplerDesc(XDR *xdrs, VMCLSamplerDesc *objp) {
   if (!xdr_bool(xdrs, &objp->normalizedCoords))
      return FALSE;
   if (!xdr_VMCLSamplerAddressingMode(xdrs, &objp->addressMode))
      return FALSE;
   if (!xdr_VMCLSamplerFilterMode(xdrs, &objp->filterMode))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSamplerAllocateDesc(XDR *xdrs, VMCLSamplerAllocateDesc *objp) {
   if (!xdr_VMCLSamplerId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMCLSamplerDesc(xdrs, &objp->desc))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLSamplerAllocateStatus(XDR *xdrs,
                                     VMCLSamplerAllocateStatus *objp) {
   if (!xdr_VMAccelStatusCode(xdrs, &objp->status))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelId(XDR *xdrs, VMCLKernelId *objp) {
   if (!xdr_VMCLContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelId(xdrs, &objp->id))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelAllocateDesc(XDR *xdrs, VMCLKernelAllocateDesc *objp) {
   if (!xdr_VMCLKernelId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMCLKernelLanguage(xdrs, &objp->language))
      return FALSE;
   if (!xdr_bytes(xdrs, (char **)&objp->source.source_val,
                  (u_int *)&objp->source.source_len, ~0))
      return FALSE;
   if (!xdr_bytes(xdrs, (char **)&objp->kernelName.kernelName_val,
                  (u_int *)&objp->kernelName.kernelName_len, ~0))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelAllocateStatus(XDR *xdrs, VMCLKernelAllocateStatus *objp) {
   if (!xdr_VMAccelStatusCode(xdrs, &objp->status))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelSemanticType(XDR *xdrs, VMCLKernelSemanticType *objp) {
   if (!xdr_enum(xdrs, (enum_t *)objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelArgType(XDR *xdrs, VMCLKernelArgType *objp) {
   if (!xdr_enum(xdrs, (enum_t *)objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLKernelArgDesc(XDR *xdrs, VMCLKernelArgDesc *objp) {
   if (!xdr_u_int(xdrs, &objp->index))
      return FALSE;
   if (!xdr_VMCLKernelArgType(xdrs, &objp->type))
      return FALSE;
   if (!xdr_VMAccelSurfaceUsage(xdrs, &objp->usage))
      return FALSE;
   if (!xdr_VMAccelSurfaceId(xdrs, &objp->surf))
      return FALSE;
   if (!xdr_VMCLSamplerId(xdrs, &objp->sampler))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCLDispatchOp(XDR *xdrs, VMCLDispatchOp *objp) {
   if (!xdr_VMCLQueueId(xdrs, &objp->queue))
      return FALSE;
   if (!xdr_VMCLKernelId(xdrs, &objp->kernel))
      return FALSE;
   if (!xdr_u_int(xdrs, &objp->dimension))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->globalWorkOffset.globalWorkOffset_val,
                  (u_int *)&objp->globalWorkOffset.globalWorkOffset_len, ~0,
                  sizeof(u_int), (xdrproc_t)xdr_u_int))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->globalWorkSize.globalWorkSize_val,
                  (u_int *)&objp->globalWorkSize.globalWorkSize_len, ~0,
                  sizeof(u_int), (xdrproc_t)xdr_u_int))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->localWorkSize.localWorkSize_val,
                  (u_int *)&objp->localWorkSize.localWorkSize_len, ~0,
                  sizeof(u_int), (xdrproc_t)xdr_u_int))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->args.args_val,
                  (u_int *)&objp->args.args_len, ~0, sizeof(VMCLKernelArgDesc),
                  (xdrproc_t)xdr_VMCLKernelArgDesc))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->refs.refs_val,
                  (u_int *)&objp->refs.refs_len, ~0, sizeof(VMAccelSurfaceId),
                  (xdrproc_t)xdr_VMAccelSurfaceId))
      return FALSE;
   return TRUE;
}

bool_t
xdr_VMCLContextAllocateReturnStatus(XDR *xdrs,
                                    VMCLContextAllocateReturnStatus *objp) {
   if (!xdr_int(xdrs, &objp->errno))
      return FALSE;
   switch (objp->errno) {
      case 0:
         if (!xdr_pointer(xdrs,
                          (char **)&objp->VMCLContextAllocateReturnStatus_u.ret,
                          sizeof(VMCLContextAllocateStatus),
                          (xdrproc_t)xdr_VMCLContextAllocateStatus))
            return FALSE;
         break;
      default:
         break;
   }
   return TRUE;
}

bool_t
xdr_VMCLSamplerAllocateReturnStatus(XDR *xdrs,
                                    VMCLSamplerAllocateReturnStatus *objp) {
   if (!xdr_int(xdrs, &objp->errno))
      return FALSE;
   switch (objp->errno) {
      case 0:
         if (!xdr_pointer(xdrs,
                          (char **)&objp->VMCLSamplerAllocateReturnStatus_u.ret,
                          sizeof(VMCLSamplerAllocateStatus),
                          (xdrproc_t)xdr_VMCLSamplerAllocateStatus))
            return FALSE;
         break;
      default:
         break;
   }
   return TRUE;
}

bool_t
xdr_VMCLKernelAllocateReturnStatus(XDR *xdrs,
                                   VMCLKernelAllocateReturnStatus *objp) {
   if (!xdr_int(xdrs, &objp->errno))
      return FALSE;
   switch (objp->errno) {
      case 0:
         if (!xdr_pointer(xdrs,
                          (char **)&objp->VMCLKernelAllocateReturnStatus_u.ret,
                          sizeof(VMCLKernelAllocateStatus),
                          (xdrproc_t)xdr_VMCLKernelAllocateStatus))
            return FALSE;
         break;
      default:
         break;
   }
   return TRUE;
}
