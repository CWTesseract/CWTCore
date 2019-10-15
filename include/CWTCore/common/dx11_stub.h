#pragma once

#define STUB_D3D11

#ifndef STUB_D3D11
#include <d3d11.h>
#else
struct ID3D11DeviceVtbl
{
	__int64 QueryInterface;
	__int64 AddRef;
	__int64 Release;
	__int64 CreateBuffer;
	__int64 CreateTexture1D;
	__int64 CreateTexture2D;
	__int64 CreateTexture3D;
	__int64 CreateShaderResourceView;
	__int64 CreateUnorderedAccessView;
	__int64 CreateRenderTargetView;
	__int64 CreateDepthStencilView;
	__int64 CreateInputLayout;
	__int64 CreateVertexShader;
	__int64 CreateGeometryShader;
	__int64 CreateGeometryShaderWithStreamOutput;
	__int64 CreatePixelShader;
	__int64 CreateHullShader;
	__int64 CreateDomainShader;
	__int64 CreateComputeShader;
	__int64 CreateClassLinkage;
	__int64 CreateBlendState;
	__int64 CreateDepthStencilState;
	__int64 CreateRasterizerState;
	__int64 CreateSamplerState;
	__int64 CreateQuery;
	__int64 CreatePredicate;
	__int64 CreateCounter;
	__int64 CreateDeferredContext;
	__int64 OpenSharedResource;
	__int64 CheckFormatSupport;
	__int64 CheckMultisampleQualityLevels;
	__int64 CheckCounterInfo;
	__int64 CheckCounter;
	__int64 CheckFeatureSupport;
	__int64 GetPrivateData;
	__int64 SetPrivateData;
	__int64 SetPrivateDataInterface;
	__int64 GetFeatureLevel;
	__int64 GetCreationFlags;
	__int64 GetDeviceRemovedReason;
	__int64 GetImmediateContext;
	__int64 SetExceptionMode;
	__int64 GetExceptionMode;
};

struct ID3D11DeviceContextVtbl
{
	__int64 QueryInterface;
	__int64 AddRef;
	__int64 Release;
	__int64 GetDevice;
	__int64 GetPrivateData;
	__int64 SetPrivateData;
	__int64 SetPrivateDataInterface;
	__int64 VSSetConstantBuffers;
	__int64 PSSetShaderResources;
	__int64 PSSetShader;
	__int64 PSSetSamplers;
	__int64 VSSetShader;
	__int64 DrawIndexed;
	__int64 Draw;
	__int64 Map;
	__int64 Unmap;
	__int64 PSSetConstantBuffers;
	__int64 IASetInputLayout;
	__int64 IASetVertexBuffers;
	__int64 IASetIndexBuffer;
	__int64 DrawIndexedInstanced;
	__int64 DrawInstanced;
	__int64 GSSetConstantBuffers;
	__int64 GSSetShader;
	__int64 IASetPrimitiveTopology;
	__int64 VSSetShaderResources;
	__int64 VSSetSamplers;
	__int64 Begin;
	__int64 End;
	__int64 GetData;
	__int64 SetPredication;
	__int64 GSSetShaderResources;
	__int64 GSSetSamplers;
	__int64 OMSetRenderTargets;
	__int64 OMSetRenderTargetsAndUnorderedAccessViews;
	__int64 OMSetBlendState;
	__int64 OMSetDepthStencilState;
	__int64 SOSetTargets;
	__int64 DrawAuto;
	__int64 DrawIndexedInstancedIndirect;
	__int64 DrawInstancedIndirect;
	__int64 Dispatch;
	__int64 DispatchIndirect;
	__int64 RSSetState;
	__int64 RSSetViewports;
	__int64 RSSetScissorRects;
	__int64 CopySubresourceRegion;
	__int64 CopyResource;
	__int64 UpdateSubresource;
	__int64 CopyStructureCount;
	__int64 ClearRenderTargetView;
	__int64 ClearUnorderedAccessViewUint;
	__int64 ClearUnorderedAccessViewFloat;
	__int64 ClearDepthStencilView;
	__int64 GenerateMips;
	__int64 SetResourceMinLOD;
	__int64 GetResourceMinLOD;
	__int64 ResolveSubresource;
	__int64 ExecuteCommandList;
	__int64 HSSetShaderResources;
	__int64 HSSetShader;
	__int64 HSSetSamplers;
	__int64 HSSetConstantBuffers;
	__int64 DSSetShaderResources;
	__int64 DSSetShader;
	__int64 DSSetSamplers;
	__int64 DSSetConstantBuffers;
	__int64 CSSetShaderResources;
	__int64 CSSetUnorderedAccessViews;
	__int64 CSSetShader;
	__int64 CSSetSamplers;
	__int64 CSSetConstantBuffers;
	__int64 VSGetConstantBuffers;
	__int64 PSGetShaderResources;
	__int64 PSGetShader;
	__int64 PSGetSamplers;
	__int64 VSGetShader;
	__int64 PSGetConstantBuffers;
	__int64 IAGetInputLayout;
	__int64 IAGetVertexBuffers;
	__int64 IAGetIndexBuffer;
	__int64 GSGetConstantBuffers;
	__int64 GSGetShader;
	__int64 IAGetPrimitiveTopology;
	__int64 VSGetShaderResources;
	__int64 VSGetSamplers;
	__int64 GetPredication;
	__int64 GSGetShaderResources;
	__int64 GSGetSamplers;
	__int64 OMGetRenderTargets;
	__int64 OMGetRenderTargetsAndUnorderedAccessViews;
	__int64 OMGetBlendState;
	__int64 OMGetDepthStencilState;
	__int64 SOGetTargets;
	__int64 RSGetState;
	__int64 RSGetViewports;
	__int64 RSGetScissorRects;
	__int64 HSGetShaderResources;
	__int64 HSGetShader;
	__int64 HSGetSamplers;
	__int64 HSGetConstantBuffers;
	__int64 DSGetShaderResources;
	__int64 DSGetShader;
	__int64 DSGetSamplers;
	__int64 DSGetConstantBuffers;
	__int64 CSGetShaderResources;
	__int64 CSGetUnorderedAccessViews;
	__int64 CSGetShader;
	__int64 CSGetSamplers;
	__int64 CSGetConstantBuffers;
	__int64 ClearState;
	__int64 Flush;
	__int64 GetType;
	__int64 GetContextFlags;
	__int64 FinishCommandList;
};

// This stub struct does not represent the true struct's size and should only be used for pointer types.
struct ID3D11Device {
	ID3D11DeviceVtbl* vtable;
};

// This stub struct does not represent the true struct's size and should only be used for pointer types.
struct ID3D11DeviceContext {
	ID3D11DeviceContextVtbl* vtable;
};

// This stub struct does not represent the true struct's size and should only be used for pointer types.
struct ID3D11Buffer {

};
#endif

