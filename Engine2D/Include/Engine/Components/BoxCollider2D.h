#ifndef BOX_COLLIDER_2D_COMPONENT_H
#define BOX_COLLIDER_2D_COMPONENT_H

#include <Gunslinger/gs.h>

#include "Engine/Component.h"

// Se uma Entidade tiver um BoxCollider2D, significa que a engine
// ir� usar a �rea definida pelo Transform2D da entidade para calcular
// Colis�es.
class BoxCollider2D : public Component {
public:
	BoxCollider2D();
	BoxCollider2D(float w, float h);
	virtual ~BoxCollider2D();

	gs_aabb_t GetBoundingBox();

	// Defaults: 1.0f
	// Use esses par�metros caso voc� queira deixar o BoundingBox
	// menor ou maior que a forma original do objeto.
	float width, height;
};

#endif // !BOX_COLLIDER_2D_COMPONENT_H