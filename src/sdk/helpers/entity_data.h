#pragma once
#include <list>
#include <mutex>
#include "../classes/CCSPlayerController.h"
#include "../classes/CCSPlayerPawn.h"
#include "../helpers/BBox_t.h"
#include "../math/QAngle.h"

namespace entity_data
{
	struct player_data_t
	{
		int m_iHealth;
		Vector m_vecOrigin;
		int m_iShotsFired;
		int clip;
		uint32_t index;

		const char* player_name;
		Vector m_vOldOrigin;
		CModelState* model_state;
		CStrongHandle<CModel> model;
		BBox_t bbox;
		QAngle aimpos;
		BBox_t head_bbox;
		CCSPlayerPawn* pawn;
		ABBox_t abbox;
	};

	struct entry_data_t
	{
		std::list<player_data_t> player_data;
	};

	struct instance_t
	{
		CEntityInstance* entity;
		CHandle handle;
	};

	extern std::list<instance_t> player_instances;
	extern std::list<instance_t> entity_instances;
	extern std::list<entry_data_t> player_entry_data;

	extern std::mutex locker;
	
	namespace view_matrix
	{
		extern VMatrix* matrix;
		extern std::mutex mutex;
	};

	void fetch_player_data();
	void destroy();
}
