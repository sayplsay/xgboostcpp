#include "boston_test.h"
std::vector<std::vector<float>> get_boston_test()
{
    static std::vector<std::vector<float>> boston_test
    {
        {0.75026,0,8.14,0,0.538,5.924,94.1,4.3996,4,307,21,394.33,16.3,15.6,},
        {0.05479,33,2.18,0,0.472,6.616,58.1,3.37,7,222,18.4,393.36,8.93,28.4,},
        {0.14052,0,10.59,0,0.489,6.375,32.3,3.9454,4,277,18.6,385.81,9.38,28.1,},
        {0.03049,55,3.78,0,0.484,6.874,28.1,6.4654,5,370,17.6,387.97,4.61,31.2,},
        {23.6482,0,18.1,0,0.671,6.38,96.2,1.3861,24,666,20.2,396.9,23.69,13.1,},
        {0.0578,0,2.46,0,0.488,6.98,58.4,2.829,3,193,17.8,396.9,5.04,37.2,},
        {0.06899,0,25.65,0,0.581,5.87,69.7,2.2577,2,188,19.1,389.15,14.37,22,},
        {8.15174,0,18.1,0,0.7,5.39,98.9,1.7281,24,666,20.2,396.9,20.85,11.5,},
        {11.1081,0,18.1,0,0.668,4.906,100,1.1742,24,666,20.2,396.9,34.77,13.8,},
        {0.06588,0,2.46,0,0.488,7.765,83.3,2.741,3,193,17.8,395.56,7.56,39.8,},
        {0.03502,80,4.95,0,0.411,6.861,27.9,5.1167,4,245,19.2,396.9,3.33,28.5,},
        {1.23247,0,8.14,0,0.538,6.142,91.7,3.9769,4,307,21,396.9,18.72,15.2,},
        {0.3692,0,9.9,0,0.544,6.567,87.3,3.6023,4,304,18.4,395.69,9.28,23.8,},
        {0.03466,35,6.06,0,0.4379,6.031,23.3,6.6407,1,304,16.9,362.25,7.83,19.4,},
        {0.05372,0,13.92,0,0.437,6.549,51,5.9604,4,289,16,392.85,7.39,27.1,},
        {0.11747,12.5,7.87,0,0.524,6.009,82.9,6.2267,5,311,15.2,396.9,13.27,18.9,},
        {18.811,0,18.1,0,0.597,4.628,100,1.5539,24,666,20.2,28.79,34.37,17.9,},
        {0.03578,20,3.33,0,0.4429,7.82,64.5,4.6947,5,216,14.9,387.31,3.76,45.4,},
        {2.15505,0,19.58,0,0.871,5.628,100,1.5166,5,403,14.7,169.27,16.65,15.6,},
        {0.02731,0,7.07,0,0.469,6.421,78.9,4.9671,2,242,17.8,396.9,9.14,21.6,},
        {0.09512,0,12.83,0,0.437,6.286,45,4.5026,5,398,18.7,383.23,8.94,21.4,},
        {4.34879,0,18.1,0,0.58,6.167,84,3.0334,24,666,20.2,396.9,16.29,19.9,},
        {0.54452,0,21.89,0,0.624,6.151,97.9,1.6687,4,437,21.2,396.9,18.46,17.8,},
        {5.82401,0,18.1,0,0.532,6.242,64.7,3.4242,24,666,20.2,396.9,10.74,23,},
        {2.73397,0,19.58,0,0.871,5.597,94.9,1.5257,5,403,14.7,351.85,21.45,15.4,},
        {24.8017,0,18.1,0,0.693,5.349,96,1.7028,24,666,20.2,396.9,19.77,8.3,},
        {1.27346,0,19.58,1,0.605,6.25,92.6,1.7984,5,403,14.7,338.92,5.5,27,},
        {0.66351,20,3.97,0,0.647,7.333,100,1.8946,5,264,13,383.29,7.79,36,},
        {0.49298,0,9.9,0,0.544,6.635,82.5,3.3175,4,304,18.4,396.9,4.54,22.8,},
        {0.05023,35,6.06,0,0.4379,5.706,28.4,6.6407,1,304,16.9,394.02,12.43,17.1,},
        {0.06724,0,3.24,0,0.46,6.333,17.2,5.2146,4,430,16.9,375.21,7.34,22.6,},
        {0.06076,0,11.93,0,0.573,6.976,91,2.1675,1,273,21,396.9,5.64,23.9,},
        {3.69311,0,18.1,0,0.713,6.376,88.4,2.5671,24,666,20.2,391.43,14.65,17.7,},
        {0.44178,0,6.2,0,0.504,6.552,21.4,3.3751,8,307,17.4,380.34,3.76,31.5,},
        {13.6781,0,18.1,0,0.74,5.935,87.9,1.8206,24,666,20.2,68.95,34.02,8.4,},
        {8.49213,0,18.1,0,0.584,6.348,86.1,2.0527,24,666,20.2,83.45,17.64,14.5,},
        {6.71772,0,18.1,0,0.713,6.749,92.6,2.3236,24,666,20.2,0.32,17.44,13.4,},
        {0.38735,0,25.65,0,0.581,5.613,95.6,1.7572,2,188,19.1,359.29,27.26,15.7,},
        {0.17783,0,9.69,0,0.585,5.569,73.5,2.3999,6,391,19.2,395.77,15.1,17.5,},
        {51.1358,0,18.1,0,0.597,5.757,100,1.413,24,666,20.2,2.6,10.11,15,},
        {2.81838,0,18.1,0,0.532,5.762,40.3,4.0983,24,666,20.2,392.92,10.42,21.8,},
        {5.66637,0,18.1,0,0.74,6.219,100,2.0048,24,666,20.2,395.69,16.59,18.4,},
        {0.52058,0,6.2,1,0.507,6.631,76.5,4.148,8,307,17.4,388.45,9.54,25.1,},
        {2.14918,0,19.58,0,0.871,5.709,98.5,1.6232,5,403,14.7,261.95,15.79,19.4,},
        {0.20608,22,5.86,0,0.431,5.593,76.5,7.9549,7,330,19.1,372.49,12.5,17.6,},
        {0.04301,80,1.91,0,0.413,5.663,21.9,10.5857,4,334,22,382.8,8.05,18.2,},
        {0.537,0,6.2,0,0.504,5.981,68.1,3.6715,8,307,17.4,378.35,11.65,24.3,},
        {1.05393,0,8.14,0,0.538,5.935,29.3,4.4986,4,307,21,386.85,6.58,23.1,},
        {0.07896,0,12.83,0,0.437,6.273,6,4.2515,5,398,18.7,394.92,6.78,24.1,},
        {0.07022,0,4.05,0,0.51,6.02,47.2,3.5549,5,296,16.6,393.23,10.11,23.2,},
        {0.03306,0,5.19,0,0.515,6.059,37.3,4.8122,5,224,20.2,396.14,8.51,20.6,}
    };
    
    return boston_test;
};
