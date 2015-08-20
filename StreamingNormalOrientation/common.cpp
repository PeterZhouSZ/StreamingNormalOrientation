#include "common.h"

inline std::ostream& operator<<(std::ostream& os, const VertexPosition& v)
{
	return os << v.position.x() << " " << v.position.y() << " " << v.position.z();
}

inline std::ostream& operator<<(std::ostream& os, const VertexPositionNormal& v)
{
	return os << v.position.x() << " " << v.position.y() << " " << v.position.z() << " " << v.normal.x() << " " << v.normal.y() << " " << v.normal.z();
}

#include <iostream>
inline std::ostream& operator<<(std::ostream& os, const VertexPositionNormalColor& v)
{
	return os << v.position.x() << " " << v.position.y() << " " << v.position.z() << " " << v.normal.x() << " " << v.normal.y() << " " << v.normal.z() << " " << (int)v.color[0] << " " << (int)v.color[1] << " " << (int)v.color[2];
}