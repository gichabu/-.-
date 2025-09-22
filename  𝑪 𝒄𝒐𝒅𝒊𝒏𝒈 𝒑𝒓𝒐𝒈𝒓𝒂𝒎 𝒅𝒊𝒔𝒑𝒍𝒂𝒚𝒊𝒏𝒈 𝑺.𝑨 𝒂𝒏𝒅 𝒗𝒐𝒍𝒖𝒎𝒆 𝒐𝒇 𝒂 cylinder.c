/*
𝑵𝒂𝒎𝒆:𝑰𝒂𝒏 Gichabu
𝑹𝒆𝒈:𝑪𝑻100/26174/25
𝑫𝒆𝒔𝒄𝒓𝒊𝒑𝒕𝒊𝒐𝒏: 𝑨 𝒑𝒓𝒐𝒈𝒓𝒂𝒎 𝒅𝒊𝒑𝒍𝒂𝒚𝒊𝒏𝒈 𝒕𝒉𝒆 𝒗𝒐𝒍𝒖𝒎𝒆 𝒂𝒏𝒅 𝑺.𝑨 𝒐𝒇 𝒂 cylinder
*/ 

//
#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, height;
    double volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    // Display results
    printf("\nCylinder Dimensions:\n");
    printf("Radius: %.2lf\n", radius);
    printf("Height: %.2lf\n", height);
    printf("Volume: %.2lf cubic units\n", volume);
    printf("Surface Area: %.2lf square units\n", surface_area);

    return 0;
}