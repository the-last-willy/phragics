#pragma once

#include <phragics/dep/imgui/all.hpp>

namespace phragics::windowing {

class SceneManager {
public:
	bool isOpen_ = true;


};

inline void update(SceneManager& manager) {
	if(ImGui::Begin("Scene Manager", &manager.isOpen_)) {
		if(ImGui::CollapsingHeader("Elements")) {

		}
	}
}

}