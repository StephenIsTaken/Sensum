#include "main_window.h"

namespace main_window
{
    bool is_open = false;

    void Draw()
    {
        ImGui::Begin("Sensum", 0, ImGuiWindowFlags_NoCollapse);

        ImGui::Checkbox("Box", &settings::visuals::m_bBoxEsp); ImGui::SameLine();
        ImGui::ColorEdit3("###boxcolor", (float*)&settings::visuals::m_fBoxColor, ImGuiColorEditFlags_NoInputs);
        ImGui::Checkbox("Name", &settings::visuals::m_bNameEsp); ImGui::SameLine();
        ImGui::ColorEdit3("###namecolor", (float*)&settings::visuals::m_fNameColor, ImGuiColorEditFlags_NoInputs);
        ImGui::Checkbox("Health", &settings::visuals::m_bHealthEsp); ImGui::SameLine();
        ImGui::ColorEdit3("###healthcolor", (float*)&settings::visuals::m_fHealthColor, ImGuiColorEditFlags_NoInputs);
        ImGui::Checkbox("Bone esp", &settings::visuals::m_bBoneEsp); ImGui::SameLine();
        ImGui::ColorEdit3("###bonecolor", (float*)&settings::visuals::m_fBoneColor, ImGuiColorEditFlags_NoInputs);

        ImGui::SliderFloat("Radius Min", &settings::visuals::radius_min, -5.f, 5.f);
        ImGui::SliderFloat("Radius Max", &settings::visuals::radius_max, -5.f, 5.f);

        ImGui::Checkbox("Fov changer", &settings::visuals::m_bFovChanger);

        if (settings::visuals::m_bFovChanger)
            ImGui::SliderInt("Fov slider", &settings::visuals::m_iFov, 10, 200);

        ImGui::End();
    }
}