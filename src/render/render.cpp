#include "render.h"
#include <Windows.h>
#include <iostream>

namespace render
{
	namespace fonts
	{
		ImFont* header_title;
		ImFont* header_buttons;
	}

	void apply_fonts()
	{
		ImFontConfig font_config;
		font_config.OversampleH = 1;
		font_config.OversampleV = 1;
		font_config.PixelSnapH = true;

		static const ImWchar ranges[] =
		{
			0x0020, 0x00FF,
			0x0400, 0x044F,
			0
		};

		auto io = &ImGui::GetIO();

		fonts::header_title = ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(droidsans_compressed_data, droidsans_compressed_size, 34.f);
		fonts::header_buttons = ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(droidsans_compressed_data, droidsans_compressed_size, 18.5f, &font_config, ranges); //17.f
	}
}