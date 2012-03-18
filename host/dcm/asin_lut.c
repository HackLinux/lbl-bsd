	static const accum_t lut[512] = {
		0x0000, 0x0010, 0x0020, 0x0030, 0x0040, 0x0050, 0x0060, 0x0070,
		0x0080, 0x0090, 0x00A0, 0x00B0, 0x00C0, 0x00D0, 0x00E0, 0x00F0,
		0x0100, 0x0110, 0x0120, 0x0130, 0x0140, 0x0150, 0x0160, 0x0170,
		0x0180, 0x0190, 0x01A0, 0x01B0, 0x01C0, 0x01D0, 0x01E0, 0x01F0,
		0x0200, 0x0210, 0x0220, 0x0230, 0x0240, 0x0251, 0x0261, 0x0271,
		0x0281, 0x0291, 0x02A1, 0x02B1, 0x02C1, 0x02D1, 0x02E1, 0x02F1,
		0x0301, 0x0311, 0x0321, 0x0331, 0x0341, 0x0352, 0x0362, 0x0372,
		0x0382, 0x0392, 0x03A2, 0x03B2, 0x03C2, 0x03D2, 0x03E2, 0x03F3,
		0x0403, 0x0413, 0x0423, 0x0433, 0x0443, 0x0453, 0x0464, 0x0474,
		0x0484, 0x0494, 0x04A4, 0x04B4, 0x04C5, 0x04D5, 0x04E5, 0x04F5,
		0x0505, 0x0515, 0x0526, 0x0536, 0x0546, 0x0556, 0x0567, 0x0577,
		0x0587, 0x0597, 0x05A8, 0x05B8, 0x05C8, 0x05D8, 0x05E9, 0x05F9,
		0x0609, 0x0619, 0x062A, 0x063A, 0x064A, 0x065B, 0x066B, 0x067B,
		0x068C, 0x069C, 0x06AC, 0x06BD, 0x06CD, 0x06DD, 0x06EE, 0x06FE,
		0x070F, 0x071F, 0x072F, 0x0740, 0x0750, 0x0761, 0x0771, 0x0782,
		0x0792, 0x07A2, 0x07B3, 0x07C3, 0x07D4, 0x07E4, 0x07F5, 0x0805,
		0x0816, 0x0826, 0x0837, 0x0848, 0x0858, 0x0869, 0x0879, 0x088A,
		0x089A, 0x08AB, 0x08BC, 0x08CC, 0x08DD, 0x08EE, 0x08FE, 0x090F,
		0x0920, 0x0930, 0x0941, 0x0952, 0x0962, 0x0973, 0x0984, 0x0994,
		0x09A5, 0x09B6, 0x09C7, 0x09D8, 0x09E8, 0x09F9, 0x0A0A, 0x0A1B,
		0x0A2C, 0x0A3C, 0x0A4D, 0x0A5E, 0x0A6F, 0x0A80, 0x0A91, 0x0AA2,
		0x0AB3, 0x0AC4, 0x0AD5, 0x0AE6, 0x0AF7, 0x0B08, 0x0B19, 0x0B2A,
		0x0B3B, 0x0B4C, 0x0B5D, 0x0B6E, 0x0B7F, 0x0B90, 0x0BA1, 0x0BB2,
		0x0BC3, 0x0BD5, 0x0BE6, 0x0BF7, 0x0C08, 0x0C19, 0x0C2A, 0x0C3C,
		0x0C4D, 0x0C5E, 0x0C70, 0x0C81, 0x0C92, 0x0CA3, 0x0CB5, 0x0CC6,
		0x0CD8, 0x0CE9, 0x0CFA, 0x0D0C, 0x0D1D, 0x0D2F, 0x0D40, 0x0D52,
		0x0D63, 0x0D75, 0x0D86, 0x0D98, 0x0DA9, 0x0DBB, 0x0DCC, 0x0DDE,
		0x0DF0, 0x0E01, 0x0E13, 0x0E25, 0x0E36, 0x0E48, 0x0E5A, 0x0E6C,
		0x0E7D, 0x0E8F, 0x0EA1, 0x0EB3, 0x0EC5, 0x0ED7, 0x0EE9, 0x0EFA,
		0x0F0C, 0x0F1E, 0x0F30, 0x0F42, 0x0F54, 0x0F66, 0x0F78, 0x0F8B,
		0x0F9D, 0x0FAF, 0x0FC1, 0x0FD3, 0x0FE5, 0x0FF8, 0x100A, 0x101C,
		0x102E, 0x1041, 0x1053, 0x1065, 0x1078, 0x108A, 0x109C, 0x10AF,
		0x10C1, 0x10D4, 0x10E6, 0x10F9, 0x110B, 0x111E, 0x1131, 0x1143,
		0x1156, 0x1169, 0x117B, 0x118E, 0x11A1, 0x11B4, 0x11C6, 0x11D9,
		0x11EC, 0x11FF, 0x1212, 0x1225, 0x1238, 0x124B, 0x125E, 0x1271,
		0x1284, 0x1297, 0x12AA, 0x12BE, 0x12D1, 0x12E4, 0x12F7, 0x130B,
		0x131E, 0x1331, 0x1345, 0x1358, 0x136C, 0x137F, 0x1393, 0x13A6,
		0x13BA, 0x13CD, 0x13E1, 0x13F5, 0x1408, 0x141C, 0x1430, 0x1444,
		0x1458, 0x146C, 0x1480, 0x1494, 0x14A8, 0x14BC, 0x14D0, 0x14E4,
		0x14F8, 0x150C, 0x1520, 0x1535, 0x1549, 0x155D, 0x1572, 0x1586,
		0x159B, 0x15AF, 0x15C4, 0x15D8, 0x15ED, 0x1602, 0x1616, 0x162B,
		0x1640, 0x1655, 0x166A, 0x167F, 0x1694, 0x16A9, 0x16BE, 0x16D3,
		0x16E8, 0x16FD, 0x1713, 0x1728, 0x173D, 0x1753, 0x1768, 0x177E,
		0x1793, 0x17A9, 0x17BF, 0x17D4, 0x17EA, 0x1800, 0x1816, 0x182C,
		0x1842, 0x1858, 0x186E, 0x1884, 0x189A, 0x18B1, 0x18C7, 0x18DE,
		0x18F4, 0x190B, 0x1921, 0x1938, 0x194E, 0x1965, 0x197C, 0x1993,
		0x19AA, 0x19C1, 0x19D8, 0x19EF, 0x1A07, 0x1A1E, 0x1A35, 0x1A4D,
		0x1A64, 0x1A7C, 0x1A94, 0x1AAB, 0x1AC3, 0x1ADB, 0x1AF3, 0x1B0B,
		0x1B23, 0x1B3C, 0x1B54, 0x1B6C, 0x1B85, 0x1B9D, 0x1BB6, 0x1BCF,
		0x1BE8, 0x1C00, 0x1C19, 0x1C33, 0x1C4C, 0x1C65, 0x1C7E, 0x1C98,
		0x1CB1, 0x1CCB, 0x1CE5, 0x1CFF, 0x1D19, 0x1D33, 0x1D4D, 0x1D67,
		0x1D82, 0x1D9C, 0x1DB7, 0x1DD2, 0x1DED, 0x1E08, 0x1E23, 0x1E3E,
		0x1E5A, 0x1E75, 0x1E91, 0x1EAC, 0x1EC8, 0x1EE4, 0x1F01, 0x1F1D,
		0x1F39, 0x1F56, 0x1F73, 0x1F90, 0x1FAD, 0x1FCA, 0x1FE7, 0x2005,
		0x2023, 0x2041, 0x205F, 0x207D, 0x209B, 0x20BA, 0x20D9, 0x20F8,
		0x2117, 0x2136, 0x2156, 0x2176, 0x2196, 0x21B6, 0x21D6, 0x21F7,
		0x2218, 0x2239, 0x225B, 0x227C, 0x229E, 0x22C0, 0x22E3, 0x2306,
		0x2329, 0x234C, 0x2370, 0x2394, 0x23B8, 0x23DD, 0x2401, 0x2427,
		0x244C, 0x2472, 0x2499, 0x24C0, 0x24E7, 0x250F, 0x2537, 0x255F,
		0x2588, 0x25B2, 0x25DC, 0x2607, 0x2632, 0x265D, 0x268A, 0x26B7,
		0x26E4, 0x2713, 0x2742, 0x2772, 0x27A2, 0x27D4, 0x2806, 0x2839,
		0x286E, 0x28A3, 0x28DA, 0x2912, 0x294B, 0x2985, 0x29C1, 0x29FF,
		0x2A3F, 0x2A80, 0x2AC4, 0x2B0A, 0x2B53, 0x2B9F, 0x2BEE, 0x2C42,
		0x2C9A, 0x2CF8, 0x2D5D, 0x2DCA, 0x2E43, 0x2ECD, 0x2F70, 0x3044,
	};