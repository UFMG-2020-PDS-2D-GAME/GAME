#ifndef ENGINE_APP_H
#define ENGINE_APP_H

#include <unordered_map>
#include <vector>
#include <string>

#include <Gunslinger/gs.h>
#include <Gunslinger/util/gs_idraw.h>
#include <Gunslinger/util/gs_asset.h>


#include "Entity.h"

class App {
public:
	App();
	virtual ~App();

	virtual void Start();
	virtual void Update();
	virtual void End();

	void Run();
	
	void LoadTexture(const std::string& name, const std::string& path);

	void AddEntity(Entity* e);

	float gravity;
protected:
	void UpdatePhysics();
	void Draw();
private:
	bool m_isRunning;

	std::vector<Entity*> m_entities;

	gs_engine_t* m_engine;
	gs_app_desc_t m_app;
	gs_command_buffer_t m_gcb; // Used for submitting rendering commands to graphics backend
	gs_immediate_draw_t m_gsi; // Immediate draw utility context
	gs_asset_manager_t m_gsa;  // Asset manager for storing textures

	// Name -> Asset Handle lookup:
	std::unordered_map<std::string, gs_asset_t> m_assetTable; 
};

#endif // !ENGINE_APP_H 