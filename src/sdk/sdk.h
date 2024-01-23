#pragma once
#include <memory>
#include <list>
#include <dxgi.h>
#include "../sdk/interfaces/IVEngineClient.h"
#include "../sdk/interfaces/SchemaSystem.h"
#include "../sdk/interfaces/IMemAlloc.h"
#include "../sdk/interfaces/CGameResourceService.h"
#include "../sdk/interfaces/CSGOInput.h"

#include "../thirdparty/ImGui/imgui_internal.h"
#include "../thirdparty/ImGui/backends/imgui_impl_win32.h"
#include "../thirdparty/ImGui/backends/imgui_impl_dx11.h"

#include <dxgi.h>
#include <d3d11.h>

#include "../sdk/math/Viewmatrix.h"

namespace sdk
{
	void init_modules();
	void init_interfaces();
}

class CRenderSystem
{
public:
	std::byte pad001[0x178];
	IDXGISwapChain* swap_chain;
};

namespace interfaces
{
	extern IVEngineClient* engine_client;
	extern CSchemaSystem* schema_system;
	extern IMemAlloc* mem_alloc;
	extern CGameResourceService* game_resource_service;
	extern CGameEntitySystem* entity_system;
	extern CSGOInput* csgo_input;
	extern CRenderSystem* render_system;
	extern IDXGISwapChain* swap_chain;
}

namespace g = interfaces;
