#include <stdio.h>

typedef struct{
    int x, y, z, t;
} vector4d;

typedef struct{
    double massOfPlanet;
    double radiusOfPlanet;
    vector4d positionOfPlanet;
    vector4d velocityOfPlanet;
} planet;

vector4d createVector4D(int x, int y, int z, int t)
{
    vector4d v;
    v.x = x;
    v.y = y;
    v.z = z;
    v.t = t;
    return v;
}

planet createPlanet(double MassOfPlanet, double RadiusOfPlanet, vector4d PositionOfPlanet, vector4d VelocityOfPlanet)
{
    planet PlanetProperties;
    PlanetProperties.massOfPlanet = MassOfPlanet;
    PlanetProperties.radiusOfPlanet = RadiusOfPlanet;
    PlanetProperties.positionOfPlanet = PositionOfPlanet;
    PlanetProperties.velocityOfPlanet = VelocityOfPlanet;
    return PlanetProperties;
}
