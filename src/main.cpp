
#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;

class $modify(PlayerObject) {
	void update(float dt) {
	if (this->m_playerSpeed == 0.9f)
	{
		this->m_playerSpeed = 1.0f;
	}
	else if (this->m_playerSpeed == 1.1f)
	{
		this->m_playerSpeed = 1.2f;
	}
	else if (this->m_playerSpeed == 1.3f)
	{
		this->m_playerSpeed = 1.4f;
	}
	else if (this->m_playerSpeed == 0.7f)
	{
		this->m_playerSpeed = 0.8f;
	}
		return PlayerObject::update(dt);
	}
};
