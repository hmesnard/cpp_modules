#include "Point.hpp"

static bool	check_half_plane(Point const p1, Point const p2, Point const ref, Point const to_check)
{
	Fixed	u(p2.getX() - p1.getX());
	Fixed	v(p2.getY() - p1.getY());
	Fixed	a(v * Fixed(-1));
	Fixed	b(u);
	Fixed	c(v * p1.getX() - u * p1.getY());
	Fixed	res1(a * ref.getX() + b * ref.getY() + c);
	Fixed	res2(a * to_check.getX() + b * to_check.getY() + c);

	return (res2 != Fixed(0) && ((res1 > Fixed(0)) == (res2 > Fixed(0))));
}

bool		bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (check_half_plane(a, b, c, point) &&
			check_half_plane(b, c, a, point) &&
			check_half_plane(c, a, b, point));
}
