#include <iostream>
#include <cmath>

int main() 
{
    double alpha = 1;
    double beta = 2;

    double cos_alpha = cos(alpha);
    double cos_beta = cos(beta);
    double sin_alpha = sin(alpha);
    double sin_beta = sin(beta);

    double z1 = pow(cos_alpha - cos_beta, 2) - pow(sin_alpha - sin_beta, 2);
    std::cout << "z1: " << z1 << std::endl;

    double difference = alpha - beta;
    double half_difference = difference / 2.0;
    double sum = alpha + beta;

    double sin_half_difference = sin(half_difference);
    double cos_sum = cos(sum);

    double Z2 = -4.0 * pow(sin_half_difference, 2) * cos_sum;

    std::cout << "Z2: " << Z2 << std::endl;

    return 0;
}
