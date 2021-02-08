#ifndef RIGID_BODY_2D_COMPONENT_H
#define RIGID_BODY_2D_COMPONENT_H

#include "Engine/Component.h"

// Se uma entidade tiver um RigidBody2D, ela ir� cair com
// a gravidade e, se tamb�m tiver um BoxCollider2D, ir� reagir
// ao colidir com outras entidades (que tamb�m tenham um 
 // BoxCollider2D)
class RigidBody2D : public Component {
public:
	RigidBody2D();
	virtual ~RigidBody2D();
};

#endif //!RIGID_BODY_2D_COMPONENT_H