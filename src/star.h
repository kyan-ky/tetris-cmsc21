////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
// ImageAsCode exporter v1.0 - Image pixel data exported as an array of bytes         //
//                                                                                    //
// more info and bugs-report:  github.com/raysan5/raylib                              //
// feedback and support:       ray[at]raylib.com                                      //
//                                                                                    //
// Copyright (c) 2018-2024 Ramon Santamaria (@raysan5)                                //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

// Image data information
#define STAR_WIDTH    30
#define STAR_HEIGHT   30
#define STAR_FORMAT   7          // raylib internal pixel format

static unsigned char STAR_DATA[3600] = { 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x8, 0x8, 0xf8, 0x16,
0x16, 0x16, 0xea, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0x1, 0xaa, 0xaa, 0xaa, 0x3, 0x24, 0x19, 0x11, 0xff, 0x20,
0x1a, 0xd, 0xec, 0xff, 0xff, 0xff, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x51, 0x22, 0x1c, 0x27, 0xff, 0xe9, 0xe1, 0x40, 0xff, 0xe1,
0xd9, 0x57, 0xff, 0x24, 0x1f, 0x1f, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x88, 0x88, 0x88, 0x4f, 0x20, 0x1e, 0x21, 0xff, 0xee, 0xe2, 0x3f, 0xff, 0xdf,
0xd9, 0x50, 0xff, 0x1f, 0x1f, 0x21, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8a, 0x84, 0x81, 0x53, 0x25, 0x1d, 0x19, 0xff, 0xef, 0xe1, 0x42, 0xff, 0xdc,
0xd9, 0x51, 0xff, 0x20, 0x1c, 0x12, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x25, 0x1d, 0x28, 0xff, 0x6d, 0x4f, 0x1e, 0xff, 0xee, 0xae, 0x3e, 0xff, 0xf6, 0xe0, 0x34, 0xff, 0xf0,
0xe5, 0x32, 0xff, 0xee, 0xe3, 0x3c, 0xff, 0x1e, 0x18, 0xf, 0xff, 0x1d, 0x19, 0x1e, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x24, 0x1f, 0x20, 0xff, 0x6f, 0x4f, 0x21, 0xff, 0xf4, 0xac, 0x3d, 0xff, 0xf7, 0xf0, 0x86, 0xff, 0xf6,
0xf3, 0x71, 0xff, 0xf0, 0xe6, 0x33, 0xff, 0x1d, 0x1a, 0xd, 0xff, 0x1a, 0x19, 0x1f, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x25, 0x1e, 0x18, 0xff, 0x72, 0x4e, 0x23, 0xff, 0xee, 0xae, 0x36, 0xff, 0xff, 0xf2, 0xf3, 0xff, 0xfe,
0xf4, 0xbf, 0xff, 0xf4, 0xe4, 0x35, 0xff, 0x21, 0x18, 0xc, 0xff, 0x18, 0x18, 0x8, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1a, 0x1a, 0x18, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x1f,
0x1f, 0x21, 0xff, 0x22, 0x1e, 0x1f, 0xff, 0x22, 0x1e, 0x1f, 0xff, 0x22, 0x1e, 0x1f, 0xff, 0x20, 0x1e, 0x1f, 0xff, 0x20,
0x1d, 0x18, 0xff, 0xee, 0xaa, 0x45, 0xff, 0xf2, 0xbe, 0x38, 0xff, 0xf3, 0xe7, 0x36, 0xff, 0xf7, 0xf8, 0xe0, 0xff, 0xfa,
0xf9, 0xc7, 0xff, 0xf0, 0xe7, 0x28, 0xff, 0xf0, 0xe5, 0x32, 0xff, 0xe2, 0xe1, 0x50, 0xff, 0x23, 0x1c, 0x28, 0xff, 0x1f,
0x20, 0x19, 0xff, 0x22, 0x1e, 0x1f, 0xff, 0x22, 0x1e, 0x1f, 0xff, 0x22, 0x1e, 0x20, 0xff, 0x22, 0x1e, 0x1e, 0xff, 0x1f,
0x21, 0x1d, 0xff, 0x4a, 0x4a, 0x4a, 0x6b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x34, 0x34, 0x2e, 0x27, 0x39, 0x28, 0x12, 0xff, 0x2e, 0x2a, 0xc, 0xff, 0x35,
0x2d, 0xe, 0xff, 0x33, 0x2c, 0xe, 0xff, 0x34, 0x2b, 0xe, 0xff, 0x35, 0x29, 0xe, 0xff, 0x36, 0x2a, 0xe, 0xff, 0x39,
0x2e, 0xe, 0xff, 0xe7, 0xbc, 0x36, 0xff, 0xe9, 0xca, 0x34, 0xff, 0xf3, 0xe8, 0x31, 0xff, 0xfc, 0xf4, 0xb0, 0xff, 0xf8,
0xf2, 0xa5, 0xff, 0xe5, 0xe2, 0x66, 0xff, 0xec, 0xe5, 0x39, 0xff, 0xe3, 0xe1, 0x3a, 0xff, 0x31, 0x2c, 0xf, 0xff, 0x31,
0x2b, 0xf, 0xff, 0x34, 0x2b, 0xe, 0xff, 0x31, 0x2c, 0xe, 0xff, 0x33, 0x2b, 0xe, 0xff, 0x34, 0x2b, 0xe, 0xff, 0x38,
0x29, 0xd, 0xff, 0x56, 0x4f, 0x3b, 0x85, 0x2f, 0x2f, 0x28, 0x26, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x7f, 0x7f, 0x7f, 0x2, 0x24, 0x21, 0x21, 0xff, 0xe2, 0xa2, 0x57, 0xff, 0xef, 0xaf, 0x3b, 0xff, 0xf1,
0xe5, 0x34, 0xff, 0xf0, 0xe5, 0x35, 0xff, 0xf0, 0xe5, 0x35, 0xff, 0xec, 0xe9, 0x2f, 0xff, 0xee, 0xe7, 0x31, 0xff, 0xf5,
0xe5, 0x32, 0xff, 0xf0, 0xe5, 0x32, 0xff, 0xed, 0xe7, 0x30, 0xff, 0xf0, 0xe4, 0x33, 0xff, 0xf7, 0xe4, 0x33, 0xff, 0xe3,
0xe4, 0x58, 0xff, 0xf8, 0xf5, 0xf5, 0xff, 0xeb, 0xe4, 0x43, 0xff, 0xf1, 0xe7, 0x2a, 0xff, 0xee, 0xe6, 0x30, 0xff, 0xf1,
0xe4, 0x33, 0xff, 0xed, 0xe6, 0x2f, 0xff, 0xf1, 0xe5, 0x34, 0xff, 0xed, 0xe7, 0x30, 0xff, 0xf0, 0xe4, 0x36, 0xff, 0xf1,
0xe7, 0x2b, 0xff, 0x63, 0x5e, 0x1a, 0xff, 0x20, 0x21, 0x1c, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x23, 0x1c, 0x10, 0xfe, 0x2a, 0x1b, 0x8, 0xff, 0xef,
0xac, 0x3c, 0xff, 0xf3, 0xac, 0x39, 0xff, 0xea, 0xb2, 0x2f, 0xff, 0xf6, 0xe1, 0x36, 0xff, 0xf1, 0xe3, 0x33, 0xff, 0xf3,
0xe4, 0x30, 0xff, 0xef, 0xe5, 0x34, 0xff, 0xf3, 0xe4, 0x31, 0xff, 0xec, 0xe6, 0x35, 0xff, 0xf2, 0xe5, 0x2c, 0xff, 0xed,
0xe5, 0x38, 0xff, 0xe7, 0xe5, 0x42, 0xff, 0xfd, 0xfc, 0xd1, 0xff, 0xfa, 0xf9, 0xec, 0xff, 0xfa, 0xfa, 0xe2, 0xff, 0xeb,
0xea, 0x53, 0xff, 0xf9, 0xde, 0x3c, 0xff, 0xf0, 0xae, 0x34, 0xff, 0xef, 0xae, 0x34, 0xff, 0xee, 0xaf, 0x3c, 0xff, 0x26,
0x1c, 0x14, 0xff, 0x48, 0x48, 0x39, 0x67, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0x22, 0x29, 0xed, 0x33, 0x22, 0x1d, 0xf0, 0xd1,
0xa8, 0x62, 0xff, 0xdc, 0xa3, 0x5e, 0xff, 0xd2, 0xa8, 0x58, 0xff, 0xf9, 0xdb, 0x40, 0xff, 0xfa, 0xe3, 0x3a, 0xff, 0xf5,
0xe0, 0x36, 0xff, 0xec, 0xe8, 0x2d, 0xff, 0xf3, 0xe3, 0x34, 0xff, 0xee, 0xe6, 0x2e, 0xff, 0xf0, 0xe5, 0x32, 0xff, 0xf1,
0xe4, 0x37, 0xff, 0xee, 0xe3, 0x30, 0xff, 0xfe, 0xfb, 0xb5, 0xff, 0xfd, 0xfa, 0xbd, 0xff, 0xfd, 0xf7, 0xc3, 0xff, 0xf7,
0xe2, 0x5a, 0xff, 0xfa, 0xdd, 0x4c, 0xff, 0xd8, 0xab, 0x5e, 0xff, 0xd8, 0xa5, 0x5d, 0xff, 0xd3, 0xa7, 0x5f, 0xff, 0x29,
0x29, 0x28, 0xec, 0x51, 0x4f, 0x54, 0x61, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0x1, 0x24,
0x1d, 0x1a, 0xff, 0x1f, 0x1f, 0x1f, 0xff, 0x2a, 0x1c, 0x8, 0xff, 0xf1, 0xae, 0x42, 0xff, 0xf0, 0xc9, 0x2f, 0xff, 0xf5,
0xdf, 0x36, 0xff, 0xec, 0xe9, 0x2c, 0xff, 0xf2, 0xe3, 0x35, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xef,
0xe4, 0x30, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf3, 0xe3, 0x34, 0xff, 0xef, 0xe6, 0x2c, 0xff, 0xee, 0xe3, 0x2f, 0xff, 0xeb,
0xb3, 0x2f, 0xff, 0xed, 0xb0, 0x4b, 0xff, 0x28, 0x19, 0x1b, 0xff, 0x1e, 0x1d, 0x1d, 0xff, 0x1e, 0x1c, 0x25, 0xff, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb9,
0xb9, 0xb9, 0xb, 0xb9, 0xb9, 0xb9, 0xb, 0xb9, 0xb9, 0xb9, 0xb, 0x30, 0x20, 0xb, 0xff, 0x92, 0x71, 0x27, 0xff, 0xea,
0xb4, 0x32, 0xff, 0xf1, 0xe5, 0x32, 0xff, 0xf1, 0xe4, 0x33, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf0,
0xe5, 0x31, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xed, 0xe7, 0x2f, 0xff, 0xed, 0xe6, 0x33, 0xff, 0xec, 0xe8, 0x30, 0xff, 0x41,
0x2d, 0x7, 0xff, 0x31, 0x23, 0xd, 0xff, 0xb9, 0xb9, 0xd1, 0xb, 0xaa, 0xaa, 0xaa, 0xc, 0xbf, 0xaa, 0xaa, 0xc, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1d, 0x1c, 0x21, 0xff, 0x94, 0x67, 0x37, 0xff, 0xf4,
0xaa, 0x3c, 0xff, 0xf2, 0xe4, 0x33, 0xff, 0xf0, 0xe5, 0x32, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf0,
0xe5, 0x31, 0xff, 0xf0, 0xe5, 0x31, 0xff, 0xf0, 0xe6, 0x2e, 0xff, 0xf4, 0xe3, 0x35, 0xff, 0xf4, 0xe3, 0x31, 0xff, 0x30,
0x2a, 0x9, 0xff, 0x26, 0x1b, 0x23, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x1b, 0x1d, 0xff, 0x8e, 0x6c, 0x34, 0xff, 0xef,
0xaf, 0x3a, 0xff, 0xee, 0xe3, 0x2f, 0xff, 0xf1, 0xe4, 0x38, 0xff, 0xf0, 0xe3, 0x2b, 0xff, 0xf7, 0xe2, 0x2f, 0xff, 0xf5,
0xe5, 0x2d, 0xff, 0xed, 0xe7, 0x30, 0xff, 0xf0, 0xe5, 0x32, 0xff, 0xef, 0xe5, 0x36, 0xff, 0xee, 0xe8, 0x2b, 0xff, 0x31,
0x27, 0x9, 0xff, 0x24, 0x1e, 0x20, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x3f, 0x3d, 0x41, 0xb1, 0x41, 0x36, 0x24, 0xe4, 0xd8, 0xa0, 0x4e, 0xff, 0xe2, 0xbd, 0x37, 0xff, 0xf4,
0xda, 0x37, 0xff, 0xf1, 0xe5, 0x2d, 0xff, 0xef, 0xd7, 0x38, 0xff, 0xef, 0xb4, 0x37, 0xff, 0x3e, 0x3a, 0x5, 0xff, 0x59,
0x40, 0x4, 0xff, 0xf2, 0xb4, 0x38, 0xff, 0xf5, 0xe2, 0x32, 0xff, 0xf0, 0xe4, 0x3b, 0xff, 0xf3, 0xe4, 0x2f, 0xff, 0xd3,
0xca, 0x3e, 0xff, 0xcd, 0xcc, 0x4d, 0xff, 0x37, 0x34, 0x37, 0xe5, 0xcc, 0xcc, 0xc5, 0x23, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x14, 0x1e, 0x1e, 0xce, 0x26, 0x1c, 0x15, 0xff, 0xf8, 0xab, 0x3f, 0xff, 0xf1, 0xc5, 0x39, 0xff, 0xf4,
0xe3, 0x39, 0xff, 0xf5, 0xe3, 0x32, 0xff, 0xfd, 0xcf, 0x40, 0xff, 0xec, 0xae, 0x45, 0xff, 0x21, 0x17, 0xb, 0xff, 0x3b,
0x1d, 0x7, 0xff, 0xeb, 0xae, 0x43, 0xff, 0xf6, 0xe1, 0x39, 0xff, 0xf3, 0xe6, 0x2c, 0xff, 0xf6, 0xe3, 0x34, 0xff, 0xf0,
0xe8, 0x32, 0xff, 0xeb, 0xe2, 0x48, 0xff, 0x24, 0x1c, 0x20, 0xff, 0xc5, 0xbf, 0xb9, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x16, 0x1d, 0x19, 0xcd, 0x26, 0x1e, 0x15, 0xff, 0xef, 0xad, 0x3b, 0xff, 0xf0, 0xac, 0x3b, 0xff, 0xf0,
0xad, 0x41, 0xff, 0xf7, 0xa8, 0x44, 0xff, 0xac, 0x83, 0x3f, 0xff, 0x26, 0x20, 0x22, 0xff, 0x0, 0x0, 0x0, 0x0, 0x86,
0x86, 0x86, 0x13, 0x28, 0x1d, 0x13, 0xff, 0xed, 0xac, 0x4c, 0xff, 0xf9, 0xa9, 0x3d, 0xff, 0xf6, 0xaa, 0x3c, 0xff, 0xfc,
0xdb, 0x32, 0xff, 0xeb, 0xe1, 0x4e, 0xff, 0x22, 0x1f, 0x1d, 0xff, 0xc4, 0xc4, 0xbe, 0x2b, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3b,
0x3c, 0x3c, 0xba, 0x99, 0x76, 0x51, 0xeb, 0xac, 0x80, 0x39, 0xff, 0xf4, 0xae, 0x42, 0xff, 0xaf, 0x78, 0x31, 0xff, 0x69,
0x4b, 0x1e, 0xff, 0x6d, 0x4b, 0x20, 0xff, 0x7b, 0x65, 0x4b, 0xbb, 0x67, 0x64, 0x60, 0x52, 0x0, 0x0, 0x0, 0x0, 0x7f,
0x7f, 0x7f, 0x4, 0x65, 0x65, 0x62, 0x53, 0x5f, 0x49, 0x26, 0xff, 0x6e, 0x49, 0x1e, 0xff, 0x67, 0x4f, 0x18, 0xff, 0xe0,
0xbd, 0x40, 0xff, 0xe3, 0xbc, 0x3a, 0xff, 0xae, 0x7d, 0x3e, 0xff, 0x65, 0x4f, 0x32, 0xbe, 0x40, 0x40, 0x40, 0xbb, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20,
0x20, 0x1e, 0xff, 0xbb, 0x8e, 0x51, 0xff, 0xf1, 0xab, 0x43, 0xff, 0xf0, 0xa6, 0x4a, 0xff, 0x7f, 0x5f, 0x2c, 0xff, 0x1e,
0x1e, 0x20, 0xff, 0x1f, 0x20, 0x1d, 0xff, 0x4b, 0x4e, 0x4b, 0x9c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1e, 0x1a, 0x23, 0xff, 0x1e, 0x1f, 0x1e, 0xff, 0x1d, 0x1b, 0x20, 0xff, 0xdb,
0xa4, 0x54, 0xff, 0xf6, 0xa7, 0x54, 0xff, 0xeb, 0xaa, 0x3e, 0xff, 0x55, 0x37, 0x12, 0xff, 0x1e, 0x1c, 0x24, 0xff, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x1f, 0x18, 0x1e, 0xce, 0x22, 0x20, 0x26, 0xff, 0x22, 0x18, 0x18, 0xff, 0x87, 0x7c, 0x81, 0x79, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x21,
0x25, 0x1e, 0xe9, 0x21, 0x20, 0xf, 0xff, 0x27, 0x1b, 0x1f, 0xff, 0xc4, 0xc4, 0xbe, 0x2b, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x76, 0x78, 0x72, 0x7b, 0x7a, 0x75, 0x71, 0x8e, 0x79, 0x78, 0x79, 0x93, 0xa5, 0xa5, 0xa5, 0x4a, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x81,
0x7a, 0x7c, 0x88, 0x7a, 0x78, 0x7e, 0x8c, 0x7a, 0x78, 0x70, 0x88, 0xde, 0xde, 0xde, 0x17, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };