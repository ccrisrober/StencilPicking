#include "MonkeyHead.h"
#include <GL/glew.h>
#include <vector>

MonkeyHead::MonkeyHead()
{

	std::vector< float > vertices(5904);
	std::vector< float > normals(5904);
	std::vector< unsigned int > mesh(2904);

	// Vertices.
	vertices[0] = 1.46882;
	vertices[1] = 1.16272;
	vertices[2] = 0.665068;

	vertices[3] = 1.43757;
	vertices[4] = 1.0846;
	vertices[5] = 0.672881;

	vertices[6] = 1.50007;
	vertices[7] = 1.01429;
	vertices[8] = 0.594756;

	vertices[9] = 1.56257;
	vertices[10] = 1.16272;
	vertices[11] = 0.579131;

	vertices[12] = 0.500072;
	vertices[13] = 1.01429;
	vertices[14] = 0.594756;

	vertices[15] = 0.562572;
	vertices[16] = 1.0846;
	vertices[17] = 0.672881;

	vertices[18] = 0.531322;
	vertices[19] = 1.16272;
	vertices[20] = 0.665068;

	vertices[21] = 0.437572;
	vertices[22] = 1.16272;
	vertices[23] = 0.579131;

	vertices[24] = 1.56257;
	vertices[25] = 1.16272;
	vertices[26] = 0.579131;

	vertices[27] = 1.50007;
	vertices[28] = 1.01429;
	vertices[29] = 0.594756;

	vertices[30] = 1.54695;
	vertices[31] = 0.975224;
	vertices[32] = 0.485381;

	vertices[33] = 1.62507;
	vertices[34] = 1.16272;
	vertices[35] = 0.469756;

	vertices[36] = 0.453197;
	vertices[37] = 0.975224;
	vertices[38] = 0.485381;

	vertices[39] = 0.500072;
	vertices[40] = 1.01429;
	vertices[41] = 0.594756;

	vertices[42] = 0.437572;
	vertices[43] = 1.16272;
	vertices[44] = 0.579131;

	vertices[45] = 0.375072;
	vertices[46] = 1.16272;
	vertices[47] = 0.469756;

	vertices[48] = 1.50007;
	vertices[49] = 1.01429;
	vertices[50] = 0.594756;

	vertices[51] = 1.35163;
	vertices[52] = 0.951787;
	vertices[53] = 0.626006;

	vertices[54] = 1.35163;
	vertices[55] = 0.897099;
	vertices[56] = 0.524443;

	vertices[57] = 1.54695;
	vertices[58] = 0.975224;
	vertices[59] = 0.485381;

	vertices[60] = 0.648509;
	vertices[61] = 0.897099;
	vertices[62] = 0.524443;

	vertices[63] = 0.648509;
	vertices[64] = 0.951787;
	vertices[65] = 0.626006;

	vertices[66] = 0.500072;
	vertices[67] = 1.01429;
	vertices[68] = 0.594756;

	vertices[69] = 0.453197;
	vertices[70] = 0.975224;
	vertices[71] = 0.485381;

	vertices[72] = 1.43757;
	vertices[73] = 1.0846;
	vertices[74] = 0.672881;

	vertices[75] = 1.35163;
	vertices[76] = 1.05335;
	vertices[77] = 0.688506;

	vertices[78] = 1.35163;
	vertices[79] = 0.951787;
	vertices[80] = 0.626006;

	vertices[81] = 1.50007;
	vertices[82] = 1.01429;
	vertices[83] = 0.594756;

	vertices[84] = 0.648509;
	vertices[85] = 0.951787;
	vertices[86] = 0.626006;

	vertices[87] = 0.648509;
	vertices[88] = 1.05335;
	vertices[89] = 0.688506;

	vertices[90] = 0.562572;
	vertices[91] = 1.0846;
	vertices[92] = 0.672881;

	vertices[93] = 0.500072;
	vertices[94] = 1.01429;
	vertices[95] = 0.594756;

	vertices[96] = 1.35163;
	vertices[97] = 1.05335;
	vertices[98] = 0.688506;

	vertices[99] = 1.27351;
	vertices[100] = 1.0846;
	vertices[101] = 0.704131;

	vertices[102] = 1.2032;
	vertices[103] = 1.01429;
	vertices[104] = 0.649443;

	vertices[105] = 1.35163;
	vertices[106] = 0.951787;
	vertices[107] = 0.626006;

	vertices[108] = 0.796947;
	vertices[109] = 1.01429;
	vertices[110] = 0.649443;

	vertices[111] = 0.726634;
	vertices[112] = 1.0846;
	vertices[113] = 0.704131;

	vertices[114] = 0.648509;
	vertices[115] = 1.05335;
	vertices[116] = 0.688506;

	vertices[117] = 0.648509;
	vertices[118] = 0.951787;
	vertices[119] = 0.626006;

	vertices[120] = 1.35163;
	vertices[121] = 0.951787;
	vertices[122] = 0.626006;

	vertices[123] = 1.2032;
	vertices[124] = 1.01429;
	vertices[125] = 0.649443;

	vertices[126] = 1.15632;
	vertices[127] = 0.975224;
	vertices[128] = 0.555693;

	vertices[129] = 1.35163;
	vertices[130] = 0.897099;
	vertices[131] = 0.524443;

	vertices[132] = 0.843822;
	vertices[133] = 0.975224;
	vertices[134] = 0.555693;

	vertices[135] = 0.796947;
	vertices[136] = 1.01429;
	vertices[137] = 0.649443;

	vertices[138] = 0.648509;
	vertices[139] = 0.951787;
	vertices[140] = 0.626006;

	vertices[141] = 0.648509;
	vertices[142] = 0.897099;
	vertices[143] = 0.524443;

	vertices[144] = 1.2032;
	vertices[145] = 1.01429;
	vertices[146] = 0.649443;

	vertices[147] = 1.1407;
	vertices[148] = 1.16272;
	vertices[149] = 0.649443;

	vertices[150] = 1.0782;
	vertices[151] = 1.16272;
	vertices[152] = 0.563506;

	vertices[153] = 1.15632;
	vertices[154] = 0.975224;
	vertices[155] = 0.555693;

	vertices[156] = 0.921947;
	vertices[157] = 1.16272;
	vertices[158] = 0.563506;

	vertices[159] = 0.859447;
	vertices[160] = 1.16272;
	vertices[161] = 0.649443;

	vertices[162] = 0.796947;
	vertices[163] = 1.01429;
	vertices[164] = 0.649443;

	vertices[165] = 0.843822;
	vertices[166] = 0.975224;
	vertices[167] = 0.555693;

	vertices[168] = 1.27351;
	vertices[169] = 1.0846;
	vertices[170] = 0.704131;

	vertices[171] = 1.24226;
	vertices[172] = 1.16272;
	vertices[173] = 0.704131;

	vertices[174] = 1.1407;
	vertices[175] = 1.16272;
	vertices[176] = 0.649443;

	vertices[177] = 1.2032;
	vertices[178] = 1.01429;
	vertices[179] = 0.649443;

	vertices[180] = 0.859447;
	vertices[181] = 1.16272;
	vertices[182] = 0.649443;

	vertices[183] = 0.757884;
	vertices[184] = 1.16272;
	vertices[185] = 0.704131;

	vertices[186] = 0.726634;
	vertices[187] = 1.0846;
	vertices[188] = 0.704131;

	vertices[189] = 0.796947;
	vertices[190] = 1.01429;
	vertices[191] = 0.649443;

	vertices[192] = 1.24226;
	vertices[193] = 1.16272;
	vertices[194] = 0.704131;

	vertices[195] = 1.27351;
	vertices[196] = 1.24866;
	vertices[197] = 0.704131;

	vertices[198] = 1.2032;
	vertices[199] = 1.31116;
	vertices[200] = 0.649443;

	vertices[201] = 1.1407;
	vertices[202] = 1.16272;
	vertices[203] = 0.649443;

	vertices[204] = 0.796947;
	vertices[205] = 1.31116;
	vertices[206] = 0.649443;

	vertices[207] = 0.726634;
	vertices[208] = 1.24866;
	vertices[209] = 0.704131;

	vertices[210] = 0.757884;
	vertices[211] = 1.16272;
	vertices[212] = 0.704131;

	vertices[213] = 0.859447;
	vertices[214] = 1.16272;
	vertices[215] = 0.649443;

	vertices[216] = 1.1407;
	vertices[217] = 1.16272;
	vertices[218] = 0.649443;

	vertices[219] = 1.2032;
	vertices[220] = 1.31116;
	vertices[221] = 0.649443;

	vertices[222] = 1.15632;
	vertices[223] = 1.35804;
	vertices[224] = 0.555693;

	vertices[225] = 1.0782;
	vertices[226] = 1.16272;
	vertices[227] = 0.563506;

	vertices[228] = 0.843822;
	vertices[229] = 1.35804;
	vertices[230] = 0.555693;

	vertices[231] = 0.796947;
	vertices[232] = 1.31116;
	vertices[233] = 0.649443;

	vertices[234] = 0.859447;
	vertices[235] = 1.16272;
	vertices[236] = 0.649443;

	vertices[237] = 0.921947;
	vertices[238] = 1.16272;
	vertices[239] = 0.563506;

	vertices[240] = 1.2032;
	vertices[241] = 1.31116;
	vertices[242] = 0.649443;

	vertices[243] = 1.35163;
	vertices[244] = 1.37366;
	vertices[245] = 0.626006;

	vertices[246] = 1.35163;
	vertices[247] = 1.43616;
	vertices[248] = 0.524443;

	vertices[249] = 1.15632;
	vertices[250] = 1.35804;
	vertices[251] = 0.555693;

	vertices[252] = 0.648509;
	vertices[253] = 1.43616;
	vertices[254] = 0.524443;

	vertices[255] = 0.648509;
	vertices[256] = 1.37366;
	vertices[257] = 0.626006;

	vertices[258] = 0.796947;
	vertices[259] = 1.31116;
	vertices[260] = 0.649443;

	vertices[261] = 0.843822;
	vertices[262] = 1.35804;
	vertices[263] = 0.555693;

	vertices[264] = 1.27351;
	vertices[265] = 1.24866;
	vertices[266] = 0.704131;

	vertices[267] = 1.35163;
	vertices[268] = 1.27991;
	vertices[269] = 0.688506;

	vertices[270] = 1.35163;
	vertices[271] = 1.37366;
	vertices[272] = 0.626006;

	vertices[273] = 1.2032;
	vertices[274] = 1.31116;
	vertices[275] = 0.649443;

	vertices[276] = 0.648509;
	vertices[277] = 1.37366;
	vertices[278] = 0.626006;

	vertices[279] = 0.648509;
	vertices[280] = 1.27991;
	vertices[281] = 0.688506;

	vertices[282] = 0.726634;
	vertices[283] = 1.24866;
	vertices[284] = 0.704131;

	vertices[285] = 0.796947;
	vertices[286] = 1.31116;
	vertices[287] = 0.649443;

	vertices[288] = 1.35163;
	vertices[289] = 1.27991;
	vertices[290] = 0.688506;

	vertices[291] = 1.43757;
	vertices[292] = 1.24866;
	vertices[293] = 0.672881;

	vertices[294] = 1.50007;
	vertices[295] = 1.31116;
	vertices[296] = 0.594756;

	vertices[297] = 1.35163;
	vertices[298] = 1.37366;
	vertices[299] = 0.626006;

	vertices[300] = 0.500072;
	vertices[301] = 1.31116;
	vertices[302] = 0.594756;

	vertices[303] = 0.562572;
	vertices[304] = 1.24866;
	vertices[305] = 0.672881;

	vertices[306] = 0.648509;
	vertices[307] = 1.27991;
	vertices[308] = 0.688506;

	vertices[309] = 0.648509;
	vertices[310] = 1.37366;
	vertices[311] = 0.626006;

	vertices[312] = 1.35163;
	vertices[313] = 1.37366;
	vertices[314] = 0.626006;

	vertices[315] = 1.50007;
	vertices[316] = 1.31116;
	vertices[317] = 0.594756;

	vertices[318] = 1.54695;
	vertices[319] = 1.35804;
	vertices[320] = 0.485381;

	vertices[321] = 1.35163;
	vertices[322] = 1.43616;
	vertices[323] = 0.524443;

	vertices[324] = 0.453197;
	vertices[325] = 1.35804;
	vertices[326] = 0.485381;

	vertices[327] = 0.500072;
	vertices[328] = 1.31116;
	vertices[329] = 0.594756;

	vertices[330] = 0.648509;
	vertices[331] = 1.37366;
	vertices[332] = 0.626006;

	vertices[333] = 0.648509;
	vertices[334] = 1.43616;
	vertices[335] = 0.524443;

	vertices[336] = 1.50007;
	vertices[337] = 1.31116;
	vertices[338] = 0.594756;

	vertices[339] = 1.56257;
	vertices[340] = 1.16272;
	vertices[341] = 0.579131;

	vertices[342] = 1.62507;
	vertices[343] = 1.16272;
	vertices[344] = 0.469756;

	vertices[345] = 1.54695;
	vertices[346] = 1.35804;
	vertices[347] = 0.485381;

	vertices[348] = 0.375072;
	vertices[349] = 1.16272;
	vertices[350] = 0.469756;

	vertices[351] = 0.437572;
	vertices[352] = 1.16272;
	vertices[353] = 0.579131;

	vertices[354] = 0.500072;
	vertices[355] = 1.31116;
	vertices[356] = 0.594756;

	vertices[357] = 0.453197;
	vertices[358] = 1.35804;
	vertices[359] = 0.485381;

	vertices[360] = 1.43757;
	vertices[361] = 1.24866;
	vertices[362] = 0.672881;

	vertices[363] = 1.46882;
	vertices[364] = 1.16272;
	vertices[365] = 0.665068;

	vertices[366] = 1.56257;
	vertices[367] = 1.16272;
	vertices[368] = 0.579131;

	vertices[369] = 1.50007;
	vertices[370] = 1.31116;
	vertices[371] = 0.594756;

	vertices[372] = 0.437572;
	vertices[373] = 1.16272;
	vertices[374] = 0.579131;

	vertices[375] = 0.531322;
	vertices[376] = 1.16272;
	vertices[377] = 0.665068;

	vertices[378] = 0.562572;
	vertices[379] = 1.24866;
	vertices[380] = 0.672881;

	vertices[381] = 0.500072;
	vertices[382] = 1.31116;
	vertices[383] = 0.594756;

	vertices[384] = 1.46882;
	vertices[385] = 1.16272;
	vertices[386] = 0.665068;

	vertices[387] = 1.43757;
	vertices[388] = 1.24866;
	vertices[389] = 0.672881;

	vertices[390] = 1.44538;
	vertices[391] = 1.25647;
	vertices[392] = 0.688506;

	vertices[393] = 1.47663;
	vertices[394] = 1.16272;
	vertices[395] = 0.680693;

	vertices[396] = 0.554759;
	vertices[397] = 1.25647;
	vertices[398] = 0.688506;

	vertices[399] = 0.562572;
	vertices[400] = 1.24866;
	vertices[401] = 0.672881;

	vertices[402] = 0.531322;
	vertices[403] = 1.16272;
	vertices[404] = 0.665068;

	vertices[405] = 0.523509;
	vertices[406] = 1.16272;
	vertices[407] = 0.680693;

	vertices[408] = 1.43757;
	vertices[409] = 1.24866;
	vertices[410] = 0.672881;

	vertices[411] = 1.35163;
	vertices[412] = 1.27991;
	vertices[413] = 0.688506;

	vertices[414] = 1.35163;
	vertices[415] = 1.29554;
	vertices[416] = 0.711943;

	vertices[417] = 1.44538;
	vertices[418] = 1.25647;
	vertices[419] = 0.688506;

	vertices[420] = 0.648509;
	vertices[421] = 1.29554;
	vertices[422] = 0.711943;

	vertices[423] = 0.648509;
	vertices[424] = 1.27991;
	vertices[425] = 0.688506;

	vertices[426] = 0.562572;
	vertices[427] = 1.24866;
	vertices[428] = 0.672881;

	vertices[429] = 0.554759;
	vertices[430] = 1.25647;
	vertices[431] = 0.688506;

	vertices[432] = 1.35163;
	vertices[433] = 1.27991;
	vertices[434] = 0.688506;

	vertices[435] = 1.27351;
	vertices[436] = 1.24866;
	vertices[437] = 0.704131;

	vertices[438] = 1.2657;
	vertices[439] = 1.25647;
	vertices[440] = 0.727568;

	vertices[441] = 1.35163;
	vertices[442] = 1.29554;
	vertices[443] = 0.711943;

	vertices[444] = 0.734447;
	vertices[445] = 1.25647;
	vertices[446] = 0.727568;

	vertices[447] = 0.726634;
	vertices[448] = 1.24866;
	vertices[449] = 0.704131;

	vertices[450] = 0.648509;
	vertices[451] = 1.27991;
	vertices[452] = 0.688506;

	vertices[453] = 0.648509;
	vertices[454] = 1.29554;
	vertices[455] = 0.711943;

	vertices[456] = 1.27351;
	vertices[457] = 1.24866;
	vertices[458] = 0.704131;

	vertices[459] = 1.24226;
	vertices[460] = 1.16272;
	vertices[461] = 0.704131;

	vertices[462] = 1.22663;
	vertices[463] = 1.16272;
	vertices[464] = 0.727568;

	vertices[465] = 1.2657;
	vertices[466] = 1.25647;
	vertices[467] = 0.727568;

	vertices[468] = 0.773509;
	vertices[469] = 1.16272;
	vertices[470] = 0.727568;

	vertices[471] = 0.757884;
	vertices[472] = 1.16272;
	vertices[473] = 0.704131;

	vertices[474] = 0.726634;
	vertices[475] = 1.24866;
	vertices[476] = 0.704131;

	vertices[477] = 0.734447;
	vertices[478] = 1.25647;
	vertices[479] = 0.727568;

	vertices[480] = 1.24226;
	vertices[481] = 1.16272;
	vertices[482] = 0.704131;

	vertices[483] = 1.27351;
	vertices[484] = 1.0846;
	vertices[485] = 0.704131;

	vertices[486] = 1.2657;
	vertices[487] = 1.07679;
	vertices[488] = 0.727568;

	vertices[489] = 1.22663;
	vertices[490] = 1.16272;
	vertices[491] = 0.727568;

	vertices[492] = 0.734447;
	vertices[493] = 1.07679;
	vertices[494] = 0.727568;

	vertices[495] = 0.726634;
	vertices[496] = 1.0846;
	vertices[497] = 0.704131;

	vertices[498] = 0.757884;
	vertices[499] = 1.16272;
	vertices[500] = 0.704131;

	vertices[501] = 0.773509;
	vertices[502] = 1.16272;
	vertices[503] = 0.727568;

	vertices[504] = 1.27351;
	vertices[505] = 1.0846;
	vertices[506] = 0.704131;

	vertices[507] = 1.35163;
	vertices[508] = 1.05335;
	vertices[509] = 0.688506;

	vertices[510] = 1.35163;
	vertices[511] = 1.03772;
	vertices[512] = 0.711943;

	vertices[513] = 1.2657;
	vertices[514] = 1.07679;
	vertices[515] = 0.727568;

	vertices[516] = 0.648509;
	vertices[517] = 1.03772;
	vertices[518] = 0.711943;

	vertices[519] = 0.648509;
	vertices[520] = 1.05335;
	vertices[521] = 0.688506;

	vertices[522] = 0.726634;
	vertices[523] = 1.0846;
	vertices[524] = 0.704131;

	vertices[525] = 0.734447;
	vertices[526] = 1.07679;
	vertices[527] = 0.727568;

	vertices[528] = 1.35163;
	vertices[529] = 1.05335;
	vertices[530] = 0.688506;

	vertices[531] = 1.43757;
	vertices[532] = 1.0846;
	vertices[533] = 0.672881;

	vertices[534] = 1.44538;
	vertices[535] = 1.07679;
	vertices[536] = 0.688506;

	vertices[537] = 1.35163;
	vertices[538] = 1.03772;
	vertices[539] = 0.711943;

	vertices[540] = 0.554759;
	vertices[541] = 1.07679;
	vertices[542] = 0.688506;

	vertices[543] = 0.562572;
	vertices[544] = 1.0846;
	vertices[545] = 0.672881;

	vertices[546] = 0.648509;
	vertices[547] = 1.05335;
	vertices[548] = 0.688506;

	vertices[549] = 0.648509;
	vertices[550] = 1.03772;
	vertices[551] = 0.711943;

	vertices[552] = 1.43757;
	vertices[553] = 1.0846;
	vertices[554] = 0.672881;

	vertices[555] = 1.46882;
	vertices[556] = 1.16272;
	vertices[557] = 0.665068;

	vertices[558] = 1.47663;
	vertices[559] = 1.16272;
	vertices[560] = 0.680693;

	vertices[561] = 1.44538;
	vertices[562] = 1.07679;
	vertices[563] = 0.688506;

	vertices[564] = 0.523509;
	vertices[565] = 1.16272;
	vertices[566] = 0.680693;

	vertices[567] = 0.531322;
	vertices[568] = 1.16272;
	vertices[569] = 0.665068;

	vertices[570] = 0.562572;
	vertices[571] = 1.0846;
	vertices[572] = 0.672881;

	vertices[573] = 0.554759;
	vertices[574] = 1.07679;
	vertices[575] = 0.688506;

	vertices[576] = 1.35163;
	vertices[577] = 1.16272;
	vertices[578] = 0.735381;

	vertices[579] = 1.44538;
	vertices[580] = 1.07679;
	vertices[581] = 0.688506;

	vertices[582] = 1.47663;
	vertices[583] = 1.16272;
	vertices[584] = 0.680693;

	vertices[585] = 0.523509;
	vertices[586] = 1.16272;
	vertices[587] = 0.680693;

	vertices[588] = 0.554759;
	vertices[589] = 1.07679;
	vertices[590] = 0.688506;

	vertices[591] = 0.648509;
	vertices[592] = 1.16272;
	vertices[593] = 0.735381;

	vertices[594] = 1.35163;
	vertices[595] = 1.03772;
	vertices[596] = 0.711943;

	vertices[597] = 1.44538;
	vertices[598] = 1.07679;
	vertices[599] = 0.688506;

	vertices[600] = 1.35163;
	vertices[601] = 1.16272;
	vertices[602] = 0.735381;

	vertices[603] = 0.648509;
	vertices[604] = 1.16272;
	vertices[605] = 0.735381;

	vertices[606] = 0.554759;
	vertices[607] = 1.07679;
	vertices[608] = 0.688506;

	vertices[609] = 0.648509;
	vertices[610] = 1.03772;
	vertices[611] = 0.711943;

	vertices[612] = 1.35163;
	vertices[613] = 1.16272;
	vertices[614] = 0.735381;

	vertices[615] = 1.2657;
	vertices[616] = 1.07679;
	vertices[617] = 0.727568;

	vertices[618] = 1.35163;
	vertices[619] = 1.03772;
	vertices[620] = 0.711943;

	vertices[621] = 0.648509;
	vertices[622] = 1.03772;
	vertices[623] = 0.711943;

	vertices[624] = 0.734447;
	vertices[625] = 1.07679;
	vertices[626] = 0.727568;

	vertices[627] = 0.648509;
	vertices[628] = 1.16272;
	vertices[629] = 0.735381;

	vertices[630] = 1.35163;
	vertices[631] = 1.16272;
	vertices[632] = 0.735381;

	vertices[633] = 1.22663;
	vertices[634] = 1.16272;
	vertices[635] = 0.727568;

	vertices[636] = 1.2657;
	vertices[637] = 1.07679;
	vertices[638] = 0.727568;

	vertices[639] = 0.734447;
	vertices[640] = 1.07679;
	vertices[641] = 0.727568;

	vertices[642] = 0.773509;
	vertices[643] = 1.16272;
	vertices[644] = 0.727568;

	vertices[645] = 0.648509;
	vertices[646] = 1.16272;
	vertices[647] = 0.735381;

	vertices[648] = 1.35163;
	vertices[649] = 1.16272;
	vertices[650] = 0.735381;

	vertices[651] = 1.2657;
	vertices[652] = 1.25647;
	vertices[653] = 0.727568;

	vertices[654] = 1.22663;
	vertices[655] = 1.16272;
	vertices[656] = 0.727568;

	vertices[657] = 0.773509;
	vertices[658] = 1.16272;
	vertices[659] = 0.727568;

	vertices[660] = 0.734447;
	vertices[661] = 1.25647;
	vertices[662] = 0.727568;

	vertices[663] = 0.648509;
	vertices[664] = 1.16272;
	vertices[665] = 0.735381;

	vertices[666] = 1.35163;
	vertices[667] = 1.16272;
	vertices[668] = 0.735381;

	vertices[669] = 1.35163;
	vertices[670] = 1.29554;
	vertices[671] = 0.711943;

	vertices[672] = 1.2657;
	vertices[673] = 1.25647;
	vertices[674] = 0.727568;

	vertices[675] = 0.734447;
	vertices[676] = 1.25647;
	vertices[677] = 0.727568;

	vertices[678] = 0.648509;
	vertices[679] = 1.29554;
	vertices[680] = 0.711943;

	vertices[681] = 0.648509;
	vertices[682] = 1.16272;
	vertices[683] = 0.735381;

	vertices[684] = 1.35163;
	vertices[685] = 1.16272;
	vertices[686] = 0.735381;

	vertices[687] = 1.44538;
	vertices[688] = 1.25647;
	vertices[689] = 0.688506;

	vertices[690] = 1.35163;
	vertices[691] = 1.29554;
	vertices[692] = 0.711943;

	vertices[693] = 0.648509;
	vertices[694] = 1.29554;
	vertices[695] = 0.711943;

	vertices[696] = 0.554759;
	vertices[697] = 1.25647;
	vertices[698] = 0.688506;

	vertices[699] = 0.648509;
	vertices[700] = 1.16272;
	vertices[701] = 0.735381;

	vertices[702] = 1.35163;
	vertices[703] = 1.16272;
	vertices[704] = 0.735381;

	vertices[705] = 1.47663;
	vertices[706] = 1.16272;
	vertices[707] = 0.680693;

	vertices[708] = 1.44538;
	vertices[709] = 1.25647;
	vertices[710] = 0.688506;

	vertices[711] = 0.554759;
	vertices[712] = 1.25647;
	vertices[713] = 0.688506;

	vertices[714] = 0.523509;
	vertices[715] = 1.16272;
	vertices[716] = 0.680693;

	vertices[717] = 0.648509;
	vertices[718] = 1.16272;
	vertices[719] = 0.735381;

	vertices[720] = 1.17976;
	vertices[721] = -0.048213;
	vertices[722] = 0.461943;

	vertices[723] = 1.16413;
	vertices[724] = -0.009151;
	vertices[725] = 0.540068;

	vertices[726] = 1.00007;
	vertices[727] = -0.024776;
	vertices[728] = 0.547881;

	vertices[729] = 1.00007;
	vertices[730] = -0.063838;
	vertices[731] = 0.485381;

	vertices[732] = 1.00007;
	vertices[733] = -0.024776;
	vertices[734] = 0.547881;

	vertices[735] = 0.836009;
	vertices[736] = -0.009151;
	vertices[737] = 0.540068;

	vertices[738] = 0.820384;
	vertices[739] = -0.048213;
	vertices[740] = 0.461943;

	vertices[741] = 1.00007;
	vertices[742] = -0.063838;
	vertices[743] = 0.485381;

	vertices[744] = 1.3282;
	vertices[745] = -0.024776;
	vertices[746] = 0.430693;

	vertices[747] = 1.23445;
	vertices[748] = 0.006474;
	vertices[749] = 0.540068;

	vertices[750] = 1.16413;
	vertices[751] = -0.009151;
	vertices[752] = 0.540068;

	vertices[753] = 1.17976;
	vertices[754] = -0.048213;
	vertices[755] = 0.461943;

	vertices[756] = 0.836009;
	vertices[757] = -0.009151;
	vertices[758] = 0.540068;

	vertices[759] = 0.765697;
	vertices[760] = 0.006474;
	vertices[761] = 0.540068;

	vertices[762] = 0.671947;
	vertices[763] = -0.024776;
	vertices[764] = 0.430693;

	vertices[765] = 0.820384;
	vertices[766] = -0.048213;
	vertices[767] = 0.461943;

	vertices[768] = 1.36726;
	vertices[769] = 0.029912;
	vertices[770] = 0.438506;

	vertices[771] = 1.2657;
	vertices[772] = 0.100224;
	vertices[773] = 0.571318;

	vertices[774] = 1.23445;
	vertices[775] = 0.006474;
	vertices[776] = 0.540068;

	vertices[777] = 1.3282;
	vertices[778] = -0.024776;
	vertices[779] = 0.430693;

	vertices[780] = 0.765697;
	vertices[781] = 0.006474;
	vertices[782] = 0.540068;

	vertices[783] = 0.734447;
	vertices[784] = 0.100224;
	vertices[785] = 0.571318;

	vertices[786] = 0.632884;
	vertices[787] = 0.029912;
	vertices[788] = 0.438506;

	vertices[789] = 0.671947;
	vertices[790] = -0.024776;
	vertices[791] = 0.430693;

	vertices[792] = 1.35163;
	vertices[793] = 0.225224;
	vertices[794] = 0.477568;

	vertices[795] = 1.25007;
	vertices[796] = 0.217412;
	vertices[797] = 0.594756;

	vertices[798] = 1.2657;
	vertices[799] = 0.100224;
	vertices[800] = 0.571318;

	vertices[801] = 1.36726;
	vertices[802] = 0.029912;
	vertices[803] = 0.438506;

	vertices[804] = 0.734447;
	vertices[805] = 0.100224;
	vertices[806] = 0.571318;

	vertices[807] = 0.750072;
	vertices[808] = 0.217412;
	vertices[809] = 0.594756;

	vertices[810] = 0.648509;
	vertices[811] = 0.225224;
	vertices[812] = 0.477568;

	vertices[813] = 0.632884;
	vertices[814] = 0.029912;
	vertices[815] = 0.438506;

	vertices[816] = 1.31257;
	vertices[817] = 0.483037;
	vertices[818] = 0.477568;

	vertices[819] = 1.21101;
	vertices[820] = 0.475224;
	vertices[821] = 0.618193;

	vertices[822] = 1.25007;
	vertices[823] = 0.217412;
	vertices[824] = 0.594756;

	vertices[825] = 1.35163;
	vertices[826] = 0.225224;
	vertices[827] = 0.477568;

	vertices[828] = 0.750072;
	vertices[829] = 0.217412;
	vertices[830] = 0.594756;

	vertices[831] = 0.789134;
	vertices[832] = 0.475224;
	vertices[833] = 0.618193;

	vertices[834] = 0.687572;
	vertices[835] = 0.483037;
	vertices[836] = 0.477568;

	vertices[837] = 0.648509;
	vertices[838] = 0.225224;
	vertices[839] = 0.477568;

	vertices[840] = 1.2032;
	vertices[841] = 0.733037;
	vertices[842] = 0.469756;

	vertices[843] = 1.43757;
	vertices[844] = 0.779912;
	vertices[845] = 0.438506;

	vertices[846] = 1.39851;
	vertices[847] = 0.873662;
	vertices[848] = 0.579131;

	vertices[849] = 1.12507;
	vertices[850] = 0.818974;
	vertices[851] = 0.719756;

	vertices[852] = 0.601634;
	vertices[853] = 0.873662;
	vertices[854] = 0.579131;

	vertices[855] = 0.562572;
	vertices[856] = 0.779912;
	vertices[857] = 0.438506;

	vertices[858] = 0.796947;
	vertices[859] = 0.733037;
	vertices[860] = 0.469756;

	vertices[861] = 0.875072;
	vertices[862] = 0.818974;
	vertices[863] = 0.719756;

	vertices[864] = 1.43757;
	vertices[865] = 0.779912;
	vertices[866] = 0.438506;

	vertices[867] = 1.63288;
	vertices[868] = 0.881474;
	vertices[869] = 0.446318;

	vertices[870] = 1.61726;
	vertices[871] = 0.975224;
	vertices[872] = 0.532256;

	vertices[873] = 1.39851;
	vertices[874] = 0.873662;
	vertices[875] = 0.579131;

	vertices[876] = 0.382884;
	vertices[877] = 0.975224;
	vertices[878] = 0.532256;

	vertices[879] = 0.367259;
	vertices[880] = 0.881474;
	vertices[881] = 0.446318;

	vertices[882] = 0.562572;
	vertices[883] = 0.779912;
	vertices[884] = 0.438506;

	vertices[885] = 0.601634;
	vertices[886] = 0.873662;
	vertices[887] = 0.579131;

	vertices[888] = 1.63288;
	vertices[889] = 0.881474;
	vertices[890] = 0.446318;

	vertices[891] = 1.8282;
	vertices[892] = 1.06897;
	vertices[893] = 0.352568;

	vertices[894] = 1.72663;
	vertices[895] = 1.12366;
	vertices[896] = 0.508818;

	vertices[897] = 1.61726;
	vertices[898] = 0.975224;
	vertices[899] = 0.532256;

	vertices[900] = 0.273509;
	vertices[901] = 1.12366;
	vertices[902] = 0.508818;

	vertices[903] = 0.171947;
	vertices[904] = 1.06897;
	vertices[905] = 0.352568;

	vertices[906] = 0.367259;
	vertices[907] = 0.881474;
	vertices[908] = 0.446318;

	vertices[909] = 0.382884;
	vertices[910] = 0.975224;
	vertices[911] = 0.532256;

	vertices[912] = 1.8282;
	vertices[913] = 1.06897;
	vertices[914] = 0.352568;

	vertices[915] = 1.85945;
	vertices[916] = 1.35022;
	vertices[917] = 0.501006;

	vertices[918] = 1.74226;
	vertices[919] = 1.29554;
	vertices[920] = 0.563506;

	vertices[921] = 1.72663;
	vertices[922] = 1.12366;
	vertices[923] = 0.508818;

	vertices[924] = 0.257884;
	vertices[925] = 1.29554;
	vertices[926] = 0.563506;

	vertices[927] = 0.140697;
	vertices[928] = 1.35022;
	vertices[929] = 0.501006;

	vertices[930] = 0.171947;
	vertices[931] = 1.06897;
	vertices[932] = 0.352568;

	vertices[933] = 0.273509;
	vertices[934] = 1.12366;
	vertices[935] = 0.508818;

	vertices[936] = 1.85945;
	vertices[937] = 1.35022;
	vertices[938] = 0.501006;

	vertices[939] = 1.71101;
	vertices[940] = 1.40491;
	vertices[941] = 0.532256;

	vertices[942] = 1.68757;
	vertices[943] = 1.3346;
	vertices[944] = 0.633818;

	vertices[945] = 1.74226;
	vertices[946] = 1.29554;
	vertices[947] = 0.563506;

	vertices[948] = 0.312572;
	vertices[949] = 1.3346;
	vertices[950] = 0.633818;

	vertices[951] = 0.289134;
	vertices[952] = 1.40491;
	vertices[953] = 0.532256;

	vertices[954] = 0.140697;
	vertices[955] = 1.35022;
	vertices[956] = 0.501006;

	vertices[957] = 0.257884;
	vertices[958] = 1.29554;
	vertices[959] = 0.563506;

	vertices[960] = 1.71101;
	vertices[961] = 1.40491;
	vertices[962] = 0.532256;

	vertices[963] = 1.49226;
	vertices[964] = 1.5221;
	vertices[965] = 0.594756;

	vertices[966] = 1.43757;
	vertices[967] = 1.46741;
	vertices[968] = 0.704131;

	vertices[969] = 1.68757;
	vertices[970] = 1.3346;
	vertices[971] = 0.633818;

	vertices[972] = 0.562572;
	vertices[973] = 1.46741;
	vertices[974] = 0.704131;

	vertices[975] = 0.507884;
	vertices[976] = 1.5221;
	vertices[977] = 0.594756;

	vertices[978] = 0.289134;
	vertices[979] = 1.40491;
	vertices[980] = 0.532256;

	vertices[981] = 0.312572;
	vertices[982] = 1.3346;
	vertices[983] = 0.633818;

	vertices[984] = 1.49226;
	vertices[985] = 1.5221;
	vertices[986] = 0.594756;

	vertices[987] = 1.32038;
	vertices[988] = 1.67835;
	vertices[989] = 0.641631;

	vertices[990] = 1.31257;
	vertices[991] = 1.56116;
	vertices[992] = 0.743193;

	vertices[993] = 1.43757;
	vertices[994] = 1.46741;
	vertices[995] = 0.704131;

	vertices[996] = 0.687572;
	vertices[997] = 1.56116;
	vertices[998] = 0.743193;

	vertices[999] = 0.679759;
	vertices[1000] = 1.67835;
	vertices[1001] = 0.641631;

	vertices[1002] = 0.507884;
	vertices[1003] = 1.5221;
	vertices[1004] = 0.594756;

	vertices[1005] = 0.562572;
	vertices[1006] = 1.46741;
	vertices[1007] = 0.704131;

	vertices[1008] = 1.32038;
	vertices[1009] = 1.67835;
	vertices[1010] = 0.641631;

	vertices[1011] = 1.15632;
	vertices[1012] = 1.63929;
	vertices[1013] = 0.665068;

	vertices[1014] = 1.2032;
	vertices[1015] = 1.53772;
	vertices[1016] = 0.758818;

	vertices[1017] = 1.31257;
	vertices[1018] = 1.56116;
	vertices[1019] = 0.743193;

	vertices[1020] = 0.796947;
	vertices[1021] = 1.53772;
	vertices[1022] = 0.758818;

	vertices[1023] = 0.843822;
	vertices[1024] = 1.63929;
	vertices[1025] = 0.665068;

	vertices[1026] = 0.679759;
	vertices[1027] = 1.67835;
	vertices[1028] = 0.641631;

	vertices[1029] = 0.687572;
	vertices[1030] = 1.56116;
	vertices[1031] = 0.743193;

	vertices[1032] = 1.15632;
	vertices[1033] = 1.63929;
	vertices[1034] = 0.665068;

	vertices[1035] = 1.06257;
	vertices[1036] = 1.41272;
	vertices[1037] = 0.657256;

	vertices[1038] = 1.10163;
	vertices[1039] = 1.35022;
	vertices[1040] = 0.751006;

	vertices[1041] = 1.2032;
	vertices[1042] = 1.53772;
	vertices[1043] = 0.758818;

	vertices[1044] = 0.898509;
	vertices[1045] = 1.35022;
	vertices[1046] = 0.751006;

	vertices[1047] = 0.937572;
	vertices[1048] = 1.41272;
	vertices[1049] = 0.657256;

	vertices[1050] = 0.843822;
	vertices[1051] = 1.63929;
	vertices[1052] = 0.665068;

	vertices[1053] = 0.796947;
	vertices[1054] = 1.53772;
	vertices[1055] = 0.758818;

	vertices[1056] = 1.06257;
	vertices[1057] = 1.41272;
	vertices[1058] = 0.657256;

	vertices[1059] = 1.00007;
	vertices[1060] = 1.35022;
	vertices[1061] = 0.649443;

	vertices[1062] = 1.00007;
	vertices[1063] = 1.2721;
	vertices[1064] = 0.727568;

	vertices[1065] = 1.10163;
	vertices[1066] = 1.35022;
	vertices[1067] = 0.751006;

	vertices[1068] = 1.00007;
	vertices[1069] = 1.2721;
	vertices[1070] = 0.727568;

	vertices[1071] = 1.00007;
	vertices[1072] = 1.35022;
	vertices[1073] = 0.649443;

	vertices[1074] = 0.937572;
	vertices[1075] = 1.41272;
	vertices[1076] = 0.657256;

	vertices[1077] = 0.898509;
	vertices[1078] = 1.35022;
	vertices[1079] = 0.751006;

	vertices[1080] = 1.16413;
	vertices[1081] = 1.3346;
	vertices[1082] = 0.680693;

	vertices[1083] = 1.25007;
	vertices[1084] = 1.38929;
	vertices[1085] = 0.665068;

	vertices[1086] = 1.2032;
	vertices[1087] = 1.53772;
	vertices[1088] = 0.758818;

	vertices[1089] = 1.10163;
	vertices[1090] = 1.35022;
	vertices[1091] = 0.751006;

	vertices[1092] = 0.796947;
	vertices[1093] = 1.53772;
	vertices[1094] = 0.758818;

	vertices[1095] = 0.750072;
	vertices[1096] = 1.38929;
	vertices[1097] = 0.665068;

	vertices[1098] = 0.836009;
	vertices[1099] = 1.3346;
	vertices[1100] = 0.680693;

	vertices[1101] = 0.898509;
	vertices[1102] = 1.35022;
	vertices[1103] = 0.751006;

	vertices[1104] = 1.25007;
	vertices[1105] = 1.38929;
	vertices[1106] = 0.665068;

	vertices[1107] = 1.3282;
	vertices[1108] = 1.3971;
	vertices[1109] = 0.649443;

	vertices[1110] = 1.31257;
	vertices[1111] = 1.56116;
	vertices[1112] = 0.743193;

	vertices[1113] = 1.2032;
	vertices[1114] = 1.53772;
	vertices[1115] = 0.758818;

	vertices[1116] = 0.687572;
	vertices[1117] = 1.56116;
	vertices[1118] = 0.743193;

	vertices[1119] = 0.671947;
	vertices[1120] = 1.3971;
	vertices[1121] = 0.649443;

	vertices[1122] = 0.750072;
	vertices[1123] = 1.38929;
	vertices[1124] = 0.665068;

	vertices[1125] = 0.796947;
	vertices[1126] = 1.53772;
	vertices[1127] = 0.758818;

	vertices[1128] = 1.42976;
	vertices[1129] = 1.35804;
	vertices[1130] = 0.626006;

	vertices[1131] = 1.43757;
	vertices[1132] = 1.46741;
	vertices[1133] = 0.704131;

	vertices[1134] = 1.31257;
	vertices[1135] = 1.56116;
	vertices[1136] = 0.743193;

	vertices[1137] = 1.3282;
	vertices[1138] = 1.3971;
	vertices[1139] = 0.649443;

	vertices[1140] = 0.687572;
	vertices[1141] = 1.56116;
	vertices[1142] = 0.743193;

	vertices[1143] = 0.562572;
	vertices[1144] = 1.46741;
	vertices[1145] = 0.704131;

	vertices[1146] = 0.570384;
	vertices[1147] = 1.35804;
	vertices[1148] = 0.626006;

	vertices[1149] = 0.671947;
	vertices[1150] = 1.3971;
	vertices[1151] = 0.649443;

	vertices[1152] = 1.60163;
	vertices[1153] = 1.29554;
	vertices[1154] = 0.571318;

	vertices[1155] = 1.68757;
	vertices[1156] = 1.3346;
	vertices[1157] = 0.633818;

	vertices[1158] = 1.43757;
	vertices[1159] = 1.46741;
	vertices[1160] = 0.704131;

	vertices[1161] = 1.42976;
	vertices[1162] = 1.35804;
	vertices[1163] = 0.626006;

	vertices[1164] = 0.562572;
	vertices[1165] = 1.46741;
	vertices[1166] = 0.704131;

	vertices[1167] = 0.312572;
	vertices[1168] = 1.3346;
	vertices[1169] = 0.633818;

	vertices[1170] = 0.398509;
	vertices[1171] = 1.29554;
	vertices[1172] = 0.571318;

	vertices[1173] = 0.570384;
	vertices[1174] = 1.35804;
	vertices[1175] = 0.626006;

	vertices[1176] = 1.6407;
	vertices[1177] = 1.21741;
	vertices[1178] = 0.555693;

	vertices[1179] = 1.74226;
	vertices[1180] = 1.29554;
	vertices[1181] = 0.563506;

	vertices[1182] = 1.68757;
	vertices[1183] = 1.3346;
	vertices[1184] = 0.633818;

	vertices[1185] = 1.60163;
	vertices[1186] = 1.29554;
	vertices[1187] = 0.571318;

	vertices[1188] = 0.312572;
	vertices[1189] = 1.3346;
	vertices[1190] = 0.633818;

	vertices[1191] = 0.257884;
	vertices[1192] = 1.29554;
	vertices[1193] = 0.563506;

	vertices[1194] = 0.359447;
	vertices[1195] = 1.21741;
	vertices[1196] = 0.555693;

	vertices[1197] = 0.398509;
	vertices[1198] = 1.29554;
	vertices[1199] = 0.571318;

	vertices[1200] = 1.62507;
	vertices[1201] = 1.10804;
	vertices[1202] = 0.555693;

	vertices[1203] = 1.72663;
	vertices[1204] = 1.12366;
	vertices[1205] = 0.508818;

	vertices[1206] = 1.74226;
	vertices[1207] = 1.29554;
	vertices[1208] = 0.563506;

	vertices[1209] = 1.6407;
	vertices[1210] = 1.21741;
	vertices[1211] = 0.555693;

	vertices[1212] = 0.257884;
	vertices[1213] = 1.29554;
	vertices[1214] = 0.563506;

	vertices[1215] = 0.273509;
	vertices[1216] = 1.12366;
	vertices[1217] = 0.508818;

	vertices[1218] = 0.375072;
	vertices[1219] = 1.10804;
	vertices[1220] = 0.555693;

	vertices[1221] = 0.359447;
	vertices[1222] = 1.21741;
	vertices[1223] = 0.555693;

	vertices[1224] = 1.49226;
	vertices[1225] = 0.983037;
	vertices[1226] = 0.579131;

	vertices[1227] = 1.61726;
	vertices[1228] = 0.975224;
	vertices[1229] = 0.532256;

	vertices[1230] = 1.72663;
	vertices[1231] = 1.12366;
	vertices[1232] = 0.508818;

	vertices[1233] = 1.62507;
	vertices[1234] = 1.10804;
	vertices[1235] = 0.555693;

	vertices[1236] = 0.273509;
	vertices[1237] = 1.12366;
	vertices[1238] = 0.508818;

	vertices[1239] = 0.382884;
	vertices[1240] = 0.975224;
	vertices[1241] = 0.532256;

	vertices[1242] = 0.507884;
	vertices[1243] = 0.983037;
	vertices[1244] = 0.579131;

	vertices[1245] = 0.375072;
	vertices[1246] = 1.10804;
	vertices[1247] = 0.555693;

	vertices[1248] = 1.37507;
	vertices[1249] = 0.936162;
	vertices[1250] = 0.610381;

	vertices[1251] = 1.39851;
	vertices[1252] = 0.873662;
	vertices[1253] = 0.579131;

	vertices[1254] = 1.61726;
	vertices[1255] = 0.975224;
	vertices[1256] = 0.532256;

	vertices[1257] = 1.49226;
	vertices[1258] = 0.983037;
	vertices[1259] = 0.579131;

	vertices[1260] = 0.382884;
	vertices[1261] = 0.975224;
	vertices[1262] = 0.532256;

	vertices[1263] = 0.601634;
	vertices[1264] = 0.873662;
	vertices[1265] = 0.579131;

	vertices[1266] = 0.625072;
	vertices[1267] = 0.936162;
	vertices[1268] = 0.610381;

	vertices[1269] = 0.507884;
	vertices[1270] = 0.983037;
	vertices[1271] = 0.579131;

	vertices[1272] = 1.2032;
	vertices[1273] = 1.01429;
	vertices[1274] = 0.649443;

	vertices[1275] = 1.12507;
	vertices[1276] = 0.818974;
	vertices[1277] = 0.719756;

	vertices[1278] = 1.39851;
	vertices[1279] = 0.873662;
	vertices[1280] = 0.579131;

	vertices[1281] = 1.37507;
	vertices[1282] = 0.936162;
	vertices[1283] = 0.610381;

	vertices[1284] = 0.601634;
	vertices[1285] = 0.873662;
	vertices[1286] = 0.579131;

	vertices[1287] = 0.875072;
	vertices[1288] = 0.818974;
	vertices[1289] = 0.719756;

	vertices[1290] = 0.796947;
	vertices[1291] = 1.01429;
	vertices[1292] = 0.649443;

	vertices[1293] = 0.625072;
	vertices[1294] = 0.936162;
	vertices[1295] = 0.610381;

	vertices[1296] = 1.2032;
	vertices[1297] = 1.01429;
	vertices[1298] = 0.649443;

	vertices[1299] = 1.16413;
	vertices[1300] = 1.06116;
	vertices[1301] = 0.657256;

	vertices[1302] = 1.00007;
	vertices[1303] = 0.967412;
	vertices[1304] = 0.633818;

	vertices[1305] = 1.12507;
	vertices[1306] = 0.818974;
	vertices[1307] = 0.719756;

	vertices[1308] = 1.00007;
	vertices[1309] = 0.967412;
	vertices[1310] = 0.633818;

	vertices[1311] = 0.836009;
	vertices[1312] = 1.06116;
	vertices[1313] = 0.657256;

	vertices[1314] = 0.796947;
	vertices[1315] = 1.01429;
	vertices[1316] = 0.649443;

	vertices[1317] = 0.875072;
	vertices[1318] = 0.818974;
	vertices[1319] = 0.719756;

	vertices[1320] = 1.16413;
	vertices[1321] = 1.3346;
	vertices[1322] = 0.680693;

	vertices[1323] = 1.10163;
	vertices[1324] = 1.35022;
	vertices[1325] = 0.751006;

	vertices[1326] = 1.00007;
	vertices[1327] = 1.2721;
	vertices[1328] = 0.727568;

	vertices[1329] = 1.12507;
	vertices[1330] = 1.22522;
	vertices[1331] = 0.672881;

	vertices[1332] = 1.00007;
	vertices[1333] = 1.2721;
	vertices[1334] = 0.727568;

	vertices[1335] = 0.898509;
	vertices[1336] = 1.35022;
	vertices[1337] = 0.751006;

	vertices[1338] = 0.836009;
	vertices[1339] = 1.3346;
	vertices[1340] = 0.680693;

	vertices[1341] = 0.875072;
	vertices[1342] = 1.22522;
	vertices[1343] = 0.672881;

	vertices[1344] = 1.12507;
	vertices[1345] = 1.22522;
	vertices[1346] = 0.672881;

	vertices[1347] = 1.00007;
	vertices[1348] = 1.2721;
	vertices[1349] = 0.727568;

	vertices[1350] = 1.00007;
	vertices[1351] = 1.13147;
	vertices[1352] = 0.672881;

	vertices[1353] = 1.13288;
	vertices[1354] = 1.13147;
	vertices[1355] = 0.665068;

	vertices[1356] = 1.00007;
	vertices[1357] = 1.13147;
	vertices[1358] = 0.672881;

	vertices[1359] = 1.00007;
	vertices[1360] = 1.2721;
	vertices[1361] = 0.727568;

	vertices[1362] = 0.875072;
	vertices[1363] = 1.22522;
	vertices[1364] = 0.672881;

	vertices[1365] = 0.867259;
	vertices[1366] = 1.13147;
	vertices[1367] = 0.665068;

	vertices[1368] = 1.00007;
	vertices[1369] = 0.967412;
	vertices[1370] = 0.633818;

	vertices[1371] = 1.16413;
	vertices[1372] = 1.06116;
	vertices[1373] = 0.657256;

	vertices[1374] = 1.13288;
	vertices[1375] = 1.13147;
	vertices[1376] = 0.665068;

	vertices[1377] = 1.00007;
	vertices[1378] = 1.13147;
	vertices[1379] = 0.672881;

	vertices[1380] = 0.867259;
	vertices[1381] = 1.13147;
	vertices[1382] = 0.665068;

	vertices[1383] = 0.836009;
	vertices[1384] = 1.06116;
	vertices[1385] = 0.657256;

	vertices[1386] = 1.00007;
	vertices[1387] = 0.967412;
	vertices[1388] = 0.633818;

	vertices[1389] = 1.00007;
	vertices[1390] = 1.13147;
	vertices[1391] = 0.672881;

	vertices[1392] = 1.06257;
	vertices[1393] = 0.037724;
	vertices[1394] = 0.602568;

	vertices[1395] = 1.00007;
	vertices[1396] = 0.029912;
	vertices[1397] = 0.594756;

	vertices[1398] = 1.00007;
	vertices[1399] = -0.024776;
	vertices[1400] = 0.547881;

	vertices[1401] = 1.16413;
	vertices[1402] = -0.009151;
	vertices[1403] = 0.540068;

	vertices[1404] = 1.00007;
	vertices[1405] = -0.024776;
	vertices[1406] = 0.547881;

	vertices[1407] = 1.00007;
	vertices[1408] = 0.029912;
	vertices[1409] = 0.594756;

	vertices[1410] = 0.937572;
	vertices[1411] = 0.037724;
	vertices[1412] = 0.602568;

	vertices[1413] = 0.836009;
	vertices[1414] = -0.009151;
	vertices[1415] = 0.540068;

	vertices[1416] = 1.11726;
	vertices[1417] = 0.084599;
	vertices[1418] = 0.618193;

	vertices[1419] = 1.06257;
	vertices[1420] = 0.037724;
	vertices[1421] = 0.602568;

	vertices[1422] = 1.16413;
	vertices[1423] = -0.009151;
	vertices[1424] = 0.540068;

	vertices[1425] = 1.23445;
	vertices[1426] = 0.006474;
	vertices[1427] = 0.540068;

	vertices[1428] = 0.836009;
	vertices[1429] = -0.009151;
	vertices[1430] = 0.540068;

	vertices[1431] = 0.937572;
	vertices[1432] = 0.037724;
	vertices[1433] = 0.602568;

	vertices[1434] = 0.882884;
	vertices[1435] = 0.084599;
	vertices[1436] = 0.618193;

	vertices[1437] = 0.765697;
	vertices[1438] = 0.006474;
	vertices[1439] = 0.540068;

	vertices[1440] = 1.10945;
	vertices[1441] = 0.201787;
	vertices[1442] = 0.641631;

	vertices[1443] = 1.11726;
	vertices[1444] = 0.084599;
	vertices[1445] = 0.618193;

	vertices[1446] = 1.23445;
	vertices[1447] = 0.006474;
	vertices[1448] = 0.540068;

	vertices[1449] = 1.2657;
	vertices[1450] = 0.100224;
	vertices[1451] = 0.571318;

	vertices[1452] = 0.765697;
	vertices[1453] = 0.006474;
	vertices[1454] = 0.540068;

	vertices[1455] = 0.882884;
	vertices[1456] = 0.084599;
	vertices[1457] = 0.618193;

	vertices[1458] = 0.890697;
	vertices[1459] = 0.201787;
	vertices[1460] = 0.641631;

	vertices[1461] = 0.734447;
	vertices[1462] = 0.100224;
	vertices[1463] = 0.571318;

	vertices[1464] = 1.21101;
	vertices[1465] = 0.475224;
	vertices[1466] = 0.618193;

	vertices[1467] = 1.0782;
	vertices[1468] = 0.475224;
	vertices[1469] = 0.657256;

	vertices[1470] = 1.11726;
	vertices[1471] = 0.233037;
	vertices[1472] = 0.641631;

	vertices[1473] = 1.25007;
	vertices[1474] = 0.217412;
	vertices[1475] = 0.594756;

	vertices[1476] = 0.882884;
	vertices[1477] = 0.233037;
	vertices[1478] = 0.641631;

	vertices[1479] = 0.921947;
	vertices[1480] = 0.475224;
	vertices[1481] = 0.657256;

	vertices[1482] = 0.789134;
	vertices[1483] = 0.475224;
	vertices[1484] = 0.618193;

	vertices[1485] = 0.750072;
	vertices[1486] = 0.217412;
	vertices[1487] = 0.594756;

	vertices[1488] = 1.10945;
	vertices[1489] = 0.201787;
	vertices[1490] = 0.641631;

	vertices[1491] = 1.2657;
	vertices[1492] = 0.100224;
	vertices[1493] = 0.571318;

	vertices[1494] = 1.25007;
	vertices[1495] = 0.217412;
	vertices[1496] = 0.594756;

	vertices[1497] = 1.11726;
	vertices[1498] = 0.233037;
	vertices[1499] = 0.641631;

	vertices[1500] = 0.750072;
	vertices[1501] = 0.217412;
	vertices[1502] = 0.594756;

	vertices[1503] = 0.734447;
	vertices[1504] = 0.100224;
	vertices[1505] = 0.571318;

	vertices[1506] = 0.890697;
	vertices[1507] = 0.201787;
	vertices[1508] = 0.641631;

	vertices[1509] = 0.882884;
	vertices[1510] = 0.233037;
	vertices[1511] = 0.641631;

	vertices[1512] = 1.08601;
	vertices[1513] = 0.631474;
	vertices[1514] = 0.649443;

	vertices[1515] = 1.00007;
	vertices[1516] = 0.592412;
	vertices[1517] = 0.649443;

	vertices[1518] = 1.00007;
	vertices[1519] = 0.475224;
	vertices[1520] = 0.657256;

	vertices[1521] = 1.0782;
	vertices[1522] = 0.475224;
	vertices[1523] = 0.657256;

	vertices[1524] = 1.00007;
	vertices[1525] = 0.475224;
	vertices[1526] = 0.657256;

	vertices[1527] = 1.00007;
	vertices[1528] = 0.592412;
	vertices[1529] = 0.649443;

	vertices[1530] = 0.914134;
	vertices[1531] = 0.631474;
	vertices[1532] = 0.649443;

	vertices[1533] = 0.921947;
	vertices[1534] = 0.475224;
	vertices[1535] = 0.657256;

	vertices[1536] = 1.11726;
	vertices[1537] = 0.233037;
	vertices[1538] = 0.641631;

	vertices[1539] = 1.0782;
	vertices[1540] = 0.475224;
	vertices[1541] = 0.657256;

	vertices[1542] = 1.00007;
	vertices[1543] = 0.475224;
	vertices[1544] = 0.657256;

	vertices[1545] = 1.00007;
	vertices[1546] = 0.240849;
	vertices[1547] = 0.641631;

	vertices[1548] = 1.00007;
	vertices[1549] = 0.475224;
	vertices[1550] = 0.657256;

	vertices[1551] = 0.921947;
	vertices[1552] = 0.475224;
	vertices[1553] = 0.657256;

	vertices[1554] = 0.882884;
	vertices[1555] = 0.233037;
	vertices[1556] = 0.641631;

	vertices[1557] = 1.00007;
	vertices[1558] = 0.240849;
	vertices[1559] = 0.641631;

	vertices[1560] = 1.00007;
	vertices[1561] = 0.154912;
	vertices[1562] = 0.641631;

	vertices[1563] = 1.10945;
	vertices[1564] = 0.201787;
	vertices[1565] = 0.641631;

	vertices[1566] = 1.11726;
	vertices[1567] = 0.233037;
	vertices[1568] = 0.641631;

	vertices[1569] = 1.00007;
	vertices[1570] = 0.240849;
	vertices[1571] = 0.641631;

	vertices[1572] = 0.882884;
	vertices[1573] = 0.233037;
	vertices[1574] = 0.641631;

	vertices[1575] = 0.890697;
	vertices[1576] = 0.201787;
	vertices[1577] = 0.641631;

	vertices[1578] = 1.00007;
	vertices[1579] = 0.154912;
	vertices[1580] = 0.641631;

	vertices[1581] = 1.00007;
	vertices[1582] = 0.240849;
	vertices[1583] = 0.641631;

	vertices[1584] = 1.12507;
	vertices[1585] = 0.693974;
	vertices[1586] = 0.657256;

	vertices[1587] = 1.13288;
	vertices[1588] = 0.693974;
	vertices[1589] = 0.704131;

	vertices[1590] = 1.09382;
	vertices[1591] = 0.647099;
	vertices[1592] = 0.688506;

	vertices[1593] = 1.08601;
	vertices[1594] = 0.631474;
	vertices[1595] = 0.649443;

	vertices[1596] = 0.906322;
	vertices[1597] = 0.647099;
	vertices[1598] = 0.688506;

	vertices[1599] = 0.867259;
	vertices[1600] = 0.693974;
	vertices[1601] = 0.704131;

	vertices[1602] = 0.875072;
	vertices[1603] = 0.693974;
	vertices[1604] = 0.657256;

	vertices[1605] = 0.914134;
	vertices[1606] = 0.631474;
	vertices[1607] = 0.649443;

	vertices[1608] = 1.10163;
	vertices[1609] = 0.772099;
	vertices[1610] = 0.649443;

	vertices[1611] = 1.10945;
	vertices[1612] = 0.787724;
	vertices[1613] = 0.688506;

	vertices[1614] = 1.13288;
	vertices[1615] = 0.693974;
	vertices[1616] = 0.704131;

	vertices[1617] = 1.12507;
	vertices[1618] = 0.693974;
	vertices[1619] = 0.657256;

	vertices[1620] = 0.867259;
	vertices[1621] = 0.693974;
	vertices[1622] = 0.704131;

	vertices[1623] = 0.890697;
	vertices[1624] = 0.787724;
	vertices[1625] = 0.688506;

	vertices[1626] = 0.898509;
	vertices[1627] = 0.772099;
	vertices[1628] = 0.649443;

	vertices[1629] = 0.875072;
	vertices[1630] = 0.693974;
	vertices[1631] = 0.657256;

	vertices[1632] = 1.00007;
	vertices[1633] = 0.779912;
	vertices[1634] = 0.649443;

	vertices[1635] = 1.03913;
	vertices[1636] = 0.795537;
	vertices[1637] = 0.688506;

	vertices[1638] = 1.10945;
	vertices[1639] = 0.787724;
	vertices[1640] = 0.688506;

	vertices[1641] = 1.10163;
	vertices[1642] = 0.772099;
	vertices[1643] = 0.649443;

	vertices[1644] = 0.890697;
	vertices[1645] = 0.787724;
	vertices[1646] = 0.688506;

	vertices[1647] = 0.961009;
	vertices[1648] = 0.795537;
	vertices[1649] = 0.688506;

	vertices[1650] = 1.00007;
	vertices[1651] = 0.779912;
	vertices[1652] = 0.649443;

	vertices[1653] = 0.898509;
	vertices[1654] = 0.772099;
	vertices[1655] = 0.649443;

	vertices[1656] = 1.00007;
	vertices[1657] = 0.725224;
	vertices[1658] = 0.657256;

	vertices[1659] = 1.00007;
	vertices[1660] = 0.733037;
	vertices[1661] = 0.704131;

	vertices[1662] = 1.03913;
	vertices[1663] = 0.795537;
	vertices[1664] = 0.688506;

	vertices[1665] = 1.00007;
	vertices[1666] = 0.779912;
	vertices[1667] = 0.649443;

	vertices[1668] = 0.961009;
	vertices[1669] = 0.795537;
	vertices[1670] = 0.688506;

	vertices[1671] = 1.00007;
	vertices[1672] = 0.733037;
	vertices[1673] = 0.704131;

	vertices[1674] = 1.00007;
	vertices[1675] = 0.725224;
	vertices[1676] = 0.657256;

	vertices[1677] = 1.00007;
	vertices[1678] = 0.779912;
	vertices[1679] = 0.649443;

	vertices[1680] = 1.00007;
	vertices[1681] = 0.592412;
	vertices[1682] = 0.649443;

	vertices[1683] = 1.08601;
	vertices[1684] = 0.631474;
	vertices[1685] = 0.649443;

	vertices[1686] = 1.09382;
	vertices[1687] = 0.647099;
	vertices[1688] = 0.688506;

	vertices[1689] = 1.00007;
	vertices[1690] = 0.600224;
	vertices[1691] = 0.688506;

	vertices[1692] = 0.906322;
	vertices[1693] = 0.647099;
	vertices[1694] = 0.688506;

	vertices[1695] = 0.914134;
	vertices[1696] = 0.631474;
	vertices[1697] = 0.649443;

	vertices[1698] = 1.00007;
	vertices[1699] = 0.592412;
	vertices[1700] = 0.649443;

	vertices[1701] = 1.00007;
	vertices[1702] = 0.600224;
	vertices[1703] = 0.688506;

	vertices[1704] = 1.00007;
	vertices[1705] = 0.600224;
	vertices[1706] = 0.688506;

	vertices[1707] = 1.09382;
	vertices[1708] = 0.647099;
	vertices[1709] = 0.688506;

	vertices[1710] = 1.0782;
	vertices[1711] = 0.670537;
	vertices[1712] = 0.711943;

	vertices[1713] = 1.00007;
	vertices[1714] = 0.631474;
	vertices[1715] = 0.711943;

	vertices[1716] = 0.921947;
	vertices[1717] = 0.670537;
	vertices[1718] = 0.711943;

	vertices[1719] = 0.906322;
	vertices[1720] = 0.647099;
	vertices[1721] = 0.688506;

	vertices[1722] = 1.00007;
	vertices[1723] = 0.600224;
	vertices[1724] = 0.688506;

	vertices[1725] = 1.00007;
	vertices[1726] = 0.631474;
	vertices[1727] = 0.711943;

	vertices[1728] = 1.00007;
	vertices[1729] = 0.733037;
	vertices[1730] = 0.704131;

	vertices[1731] = 1.00007;
	vertices[1732] = 0.717412;
	vertices[1733] = 0.735381;

	vertices[1734] = 1.04695;
	vertices[1735] = 0.772099;
	vertices[1736] = 0.719756;

	vertices[1737] = 1.03913;
	vertices[1738] = 0.795537;
	vertices[1739] = 0.688506;

	vertices[1740] = 0.953197;
	vertices[1741] = 0.772099;
	vertices[1742] = 0.719756;

	vertices[1743] = 1.00007;
	vertices[1744] = 0.717412;
	vertices[1745] = 0.735381;

	vertices[1746] = 1.00007;
	vertices[1747] = 0.733037;
	vertices[1748] = 0.704131;

	vertices[1749] = 0.961009;
	vertices[1750] = 0.795537;
	vertices[1751] = 0.688506;

	vertices[1752] = 1.03913;
	vertices[1753] = 0.795537;
	vertices[1754] = 0.688506;

	vertices[1755] = 1.04695;
	vertices[1756] = 0.772099;
	vertices[1757] = 0.719756;

	vertices[1758] = 1.09382;
	vertices[1759] = 0.764287;
	vertices[1760] = 0.719756;

	vertices[1761] = 1.10945;
	vertices[1762] = 0.787724;
	vertices[1763] = 0.688506;

	vertices[1764] = 0.906322;
	vertices[1765] = 0.764287;
	vertices[1766] = 0.719756;

	vertices[1767] = 0.953197;
	vertices[1768] = 0.772099;
	vertices[1769] = 0.719756;

	vertices[1770] = 0.961009;
	vertices[1771] = 0.795537;
	vertices[1772] = 0.688506;

	vertices[1773] = 0.890697;
	vertices[1774] = 0.787724;
	vertices[1775] = 0.688506;

	vertices[1776] = 1.10945;
	vertices[1777] = 0.787724;
	vertices[1778] = 0.688506;

	vertices[1779] = 1.09382;
	vertices[1780] = 0.764287;
	vertices[1781] = 0.719756;

	vertices[1782] = 1.10945;
	vertices[1783] = 0.693974;
	vertices[1784] = 0.735381;

	vertices[1785] = 1.13288;
	vertices[1786] = 0.693974;
	vertices[1787] = 0.704131;

	vertices[1788] = 0.890697;
	vertices[1789] = 0.693974;
	vertices[1790] = 0.735381;

	vertices[1791] = 0.906322;
	vertices[1792] = 0.764287;
	vertices[1793] = 0.719756;

	vertices[1794] = 0.890697;
	vertices[1795] = 0.787724;
	vertices[1796] = 0.688506;

	vertices[1797] = 0.867259;
	vertices[1798] = 0.693974;
	vertices[1799] = 0.704131;

	vertices[1800] = 1.13288;
	vertices[1801] = 0.693974;
	vertices[1802] = 0.704131;

	vertices[1803] = 1.10945;
	vertices[1804] = 0.693974;
	vertices[1805] = 0.735381;

	vertices[1806] = 1.0782;
	vertices[1807] = 0.670537;
	vertices[1808] = 0.711943;

	vertices[1809] = 1.09382;
	vertices[1810] = 0.647099;
	vertices[1811] = 0.688506;

	vertices[1812] = 0.921947;
	vertices[1813] = 0.670537;
	vertices[1814] = 0.711943;

	vertices[1815] = 0.890697;
	vertices[1816] = 0.693974;
	vertices[1817] = 0.735381;

	vertices[1818] = 0.867259;
	vertices[1819] = 0.693974;
	vertices[1820] = 0.704131;

	vertices[1821] = 0.906322;
	vertices[1822] = 0.647099;
	vertices[1823] = 0.688506;

	vertices[1824] = 1.00007;
	vertices[1825] = 0.717412;
	vertices[1826] = 0.735381;

	vertices[1827] = 1.10945;
	vertices[1828] = 0.693974;
	vertices[1829] = 0.735381;

	vertices[1830] = 1.09382;
	vertices[1831] = 0.764287;
	vertices[1832] = 0.719756;

	vertices[1833] = 1.04695;
	vertices[1834] = 0.772099;
	vertices[1835] = 0.719756;

	vertices[1836] = 0.906322;
	vertices[1837] = 0.764287;
	vertices[1838] = 0.719756;

	vertices[1839] = 0.890697;
	vertices[1840] = 0.693974;
	vertices[1841] = 0.735381;

	vertices[1842] = 1.00007;
	vertices[1843] = 0.717412;
	vertices[1844] = 0.735381;

	vertices[1845] = 0.953197;
	vertices[1846] = 0.772099;
	vertices[1847] = 0.719756;

	vertices[1848] = 1.00007;
	vertices[1849] = 0.717412;
	vertices[1850] = 0.735381;

	vertices[1851] = 1.00007;
	vertices[1852] = 0.631474;
	vertices[1853] = 0.711943;

	vertices[1854] = 1.0782;
	vertices[1855] = 0.670537;
	vertices[1856] = 0.711943;

	vertices[1857] = 1.10945;
	vertices[1858] = 0.693974;
	vertices[1859] = 0.735381;

	vertices[1860] = 0.921947;
	vertices[1861] = 0.670537;
	vertices[1862] = 0.711943;

	vertices[1863] = 1.00007;
	vertices[1864] = 0.631474;
	vertices[1865] = 0.711943;

	vertices[1866] = 1.00007;
	vertices[1867] = 0.717412;
	vertices[1868] = 0.735381;

	vertices[1869] = 0.890697;
	vertices[1870] = 0.693974;
	vertices[1871] = 0.735381;

	vertices[1872] = 1.00007;
	vertices[1873] = 0.779912;
	vertices[1874] = 0.649443;

	vertices[1875] = 1.10163;
	vertices[1876] = 0.772099;
	vertices[1877] = 0.649443;

	vertices[1878] = 1.12507;
	vertices[1879] = 0.818974;
	vertices[1880] = 0.719756;

	vertices[1881] = 1.00007;
	vertices[1882] = 0.967412;
	vertices[1883] = 0.633818;

	vertices[1884] = 0.875072;
	vertices[1885] = 0.818974;
	vertices[1886] = 0.719756;

	vertices[1887] = 0.898509;
	vertices[1888] = 0.772099;
	vertices[1889] = 0.649443;

	vertices[1890] = 1.00007;
	vertices[1891] = 0.779912;
	vertices[1892] = 0.649443;

	vertices[1893] = 1.00007;
	vertices[1894] = 0.967412;
	vertices[1895] = 0.633818;

	vertices[1896] = 1.10163;
	vertices[1897] = 0.772099;
	vertices[1898] = 0.649443;

	vertices[1899] = 1.12507;
	vertices[1900] = 0.693974;
	vertices[1901] = 0.657256;

	vertices[1902] = 1.16413;
	vertices[1903] = 0.678349;
	vertices[1904] = 0.618193;

	vertices[1905] = 1.12507;
	vertices[1906] = 0.818974;
	vertices[1907] = 0.719756;

	vertices[1908] = 0.836009;
	vertices[1909] = 0.678349;
	vertices[1910] = 0.618193;

	vertices[1911] = 0.875072;
	vertices[1912] = 0.693974;
	vertices[1913] = 0.657256;

	vertices[1914] = 0.898509;
	vertices[1915] = 0.772099;
	vertices[1916] = 0.649443;

	vertices[1917] = 0.875072;
	vertices[1918] = 0.818974;
	vertices[1919] = 0.719756;

	vertices[1920] = 1.12507;
	vertices[1921] = 0.693974;
	vertices[1922] = 0.657256;

	vertices[1923] = 1.08601;
	vertices[1924] = 0.631474;
	vertices[1925] = 0.649443;

	vertices[1926] = 1.17976;
	vertices[1927] = 0.608037;
	vertices[1928] = 0.618193;

	vertices[1929] = 1.16413;
	vertices[1930] = 0.678349;
	vertices[1931] = 0.618193;

	vertices[1932] = 0.820384;
	vertices[1933] = 0.608037;
	vertices[1934] = 0.618193;

	vertices[1935] = 0.914134;
	vertices[1936] = 0.631474;
	vertices[1937] = 0.649443;

	vertices[1938] = 0.875072;
	vertices[1939] = 0.693974;
	vertices[1940] = 0.657256;

	vertices[1941] = 0.836009;
	vertices[1942] = 0.678349;
	vertices[1943] = 0.618193;

	vertices[1944] = 1.08601;
	vertices[1945] = 0.631474;
	vertices[1946] = 0.649443;

	vertices[1947] = 1.0782;
	vertices[1948] = 0.475224;
	vertices[1949] = 0.657256;

	vertices[1950] = 1.21101;
	vertices[1951] = 0.475224;
	vertices[1952] = 0.618193;

	vertices[1953] = 1.17976;
	vertices[1954] = 0.608037;
	vertices[1955] = 0.618193;

	vertices[1956] = 0.789134;
	vertices[1957] = 0.475224;
	vertices[1958] = 0.618193;

	vertices[1959] = 0.921947;
	vertices[1960] = 0.475224;
	vertices[1961] = 0.657256;

	vertices[1962] = 0.914134;
	vertices[1963] = 0.631474;
	vertices[1964] = 0.649443;

	vertices[1965] = 0.820384;
	vertices[1966] = 0.608037;
	vertices[1967] = 0.618193;

	vertices[1968] = 1.31257;
	vertices[1969] = 0.483037;
	vertices[1970] = 0.477568;

	vertices[1971] = 1.25788;
	vertices[1972] = 0.608037;
	vertices[1973] = 0.461943;

	vertices[1974] = 1.17976;
	vertices[1975] = 0.608037;
	vertices[1976] = 0.618193;

	vertices[1977] = 1.21101;
	vertices[1978] = 0.475224;
	vertices[1979] = 0.618193;

	vertices[1980] = 0.820384;
	vertices[1981] = 0.608037;
	vertices[1982] = 0.618193;

	vertices[1983] = 0.742259;
	vertices[1984] = 0.608037;
	vertices[1985] = 0.461943;

	vertices[1986] = 0.687572;
	vertices[1987] = 0.483037;
	vertices[1988] = 0.477568;

	vertices[1989] = 0.789134;
	vertices[1990] = 0.475224;
	vertices[1991] = 0.618193;

	vertices[1992] = 1.25788;
	vertices[1993] = 0.608037;
	vertices[1994] = 0.461943;

	vertices[1995] = 1.23445;
	vertices[1996] = 0.670537;
	vertices[1997] = 0.461943;

	vertices[1998] = 1.16413;
	vertices[1999] = 0.678349;
	vertices[2000] = 0.618193;

	vertices[2001] = 1.17976;
	vertices[2002] = 0.608037;
	vertices[2003] = 0.618193;

	vertices[2004] = 0.836009;
	vertices[2005] = 0.678349;
	vertices[2006] = 0.618193;

	vertices[2007] = 0.765697;
	vertices[2008] = 0.670537;
	vertices[2009] = 0.461943;

	vertices[2010] = 0.742259;
	vertices[2011] = 0.608037;
	vertices[2012] = 0.461943;

	vertices[2013] = 0.820384;
	vertices[2014] = 0.608037;
	vertices[2015] = 0.618193;

	vertices[2016] = 1.2032;
	vertices[2017] = 0.733037;
	vertices[2018] = 0.469756;

	vertices[2019] = 1.12507;
	vertices[2020] = 0.818974;
	vertices[2021] = 0.719756;

	vertices[2022] = 1.16413;
	vertices[2023] = 0.678349;
	vertices[2024] = 0.618193;

	vertices[2025] = 1.23445;
	vertices[2026] = 0.670537;
	vertices[2027] = 0.461943;

	vertices[2028] = 0.836009;
	vertices[2029] = 0.678349;
	vertices[2030] = 0.618193;

	vertices[2031] = 0.875072;
	vertices[2032] = 0.818974;
	vertices[2033] = 0.719756;

	vertices[2034] = 0.796947;
	vertices[2035] = 0.733037;
	vertices[2036] = 0.469756;

	vertices[2037] = 0.765697;
	vertices[2038] = 0.670537;
	vertices[2039] = 0.461943;

	vertices[2040] = 1.10945;
	vertices[2041] = 0.201787;
	vertices[2042] = 0.641631;

	vertices[2043] = 1.00007;
	vertices[2044] = 0.154912;
	vertices[2045] = 0.641631;

	vertices[2046] = 1.00007;
	vertices[2047] = 0.147099;
	vertices[2048] = 0.626006;

	vertices[2049] = 1.09382;
	vertices[2050] = 0.178349;
	vertices[2051] = 0.633818;

	vertices[2052] = 1.00007;
	vertices[2053] = 0.147099;
	vertices[2054] = 0.626006;

	vertices[2055] = 1.00007;
	vertices[2056] = 0.154912;
	vertices[2057] = 0.641631;

	vertices[2058] = 0.890697;
	vertices[2059] = 0.201787;
	vertices[2060] = 0.641631;

	vertices[2061] = 0.906322;
	vertices[2062] = 0.178349;
	vertices[2063] = 0.633818;

	vertices[2064] = 1.11726;
	vertices[2065] = 0.084599;
	vertices[2066] = 0.618193;

	vertices[2067] = 1.10945;
	vertices[2068] = 0.201787;
	vertices[2069] = 0.641631;

	vertices[2070] = 1.09382;
	vertices[2071] = 0.178349;
	vertices[2072] = 0.633818;

	vertices[2073] = 1.09382;
	vertices[2074] = 0.100224;
	vertices[2075] = 0.618193;

	vertices[2076] = 0.906322;
	vertices[2077] = 0.178349;
	vertices[2078] = 0.633818;

	vertices[2079] = 0.890697;
	vertices[2080] = 0.201787;
	vertices[2081] = 0.641631;

	vertices[2082] = 0.882884;
	vertices[2083] = 0.084599;
	vertices[2084] = 0.618193;

	vertices[2085] = 0.906322;
	vertices[2086] = 0.100224;
	vertices[2087] = 0.618193;

	vertices[2088] = 1.06257;
	vertices[2089] = 0.037724;
	vertices[2090] = 0.602568;

	vertices[2091] = 1.11726;
	vertices[2092] = 0.084599;
	vertices[2093] = 0.618193;

	vertices[2094] = 1.09382;
	vertices[2095] = 0.100224;
	vertices[2096] = 0.618193;

	vertices[2097] = 1.04695;
	vertices[2098] = 0.053349;
	vertices[2099] = 0.594756;

	vertices[2100] = 0.906322;
	vertices[2101] = 0.100224;
	vertices[2102] = 0.618193;

	vertices[2103] = 0.882884;
	vertices[2104] = 0.084599;
	vertices[2105] = 0.618193;

	vertices[2106] = 0.937572;
	vertices[2107] = 0.037724;
	vertices[2108] = 0.602568;

	vertices[2109] = 0.953197;
	vertices[2110] = 0.053349;
	vertices[2111] = 0.594756;

	vertices[2112] = 1.00007;
	vertices[2113] = 0.029912;
	vertices[2114] = 0.594756;

	vertices[2115] = 1.06257;
	vertices[2116] = 0.037724;
	vertices[2117] = 0.602568;

	vertices[2118] = 1.04695;
	vertices[2119] = 0.053349;
	vertices[2120] = 0.594756;

	vertices[2121] = 1.00007;
	vertices[2122] = 0.045537;
	vertices[2123] = 0.594756;

	vertices[2124] = 0.953197;
	vertices[2125] = 0.053349;
	vertices[2126] = 0.594756;

	vertices[2127] = 0.937572;
	vertices[2128] = 0.037724;
	vertices[2129] = 0.602568;

	vertices[2130] = 1.00007;
	vertices[2131] = 0.029912;
	vertices[2132] = 0.594756;

	vertices[2133] = 1.00007;
	vertices[2134] = 0.045537;
	vertices[2135] = 0.594756;

	vertices[2136] = 1.00007;
	vertices[2137] = 0.045537;
	vertices[2138] = 0.594756;

	vertices[2139] = 1.04695;
	vertices[2140] = 0.053349;
	vertices[2141] = 0.594756;

	vertices[2142] = 1.04695;
	vertices[2143] = 0.068974;
	vertices[2144] = 0.540068;

	vertices[2145] = 1.00007;
	vertices[2146] = 0.061162;
	vertices[2147] = 0.540068;

	vertices[2148] = 0.953197;
	vertices[2149] = 0.068974;
	vertices[2150] = 0.540068;

	vertices[2151] = 0.953197;
	vertices[2152] = 0.053349;
	vertices[2153] = 0.594756;

	vertices[2154] = 1.00007;
	vertices[2155] = 0.045537;
	vertices[2156] = 0.594756;

	vertices[2157] = 1.00007;
	vertices[2158] = 0.061162;
	vertices[2159] = 0.540068;

	vertices[2160] = 1.04695;
	vertices[2161] = 0.053349;
	vertices[2162] = 0.594756;

	vertices[2163] = 1.09382;
	vertices[2164] = 0.100224;
	vertices[2165] = 0.618193;

	vertices[2166] = 1.09382;
	vertices[2167] = 0.108037;
	vertices[2168] = 0.547881;

	vertices[2169] = 1.04695;
	vertices[2170] = 0.068974;
	vertices[2171] = 0.540068;

	vertices[2172] = 0.906322;
	vertices[2173] = 0.108037;
	vertices[2174] = 0.547881;

	vertices[2175] = 0.906322;
	vertices[2176] = 0.100224;
	vertices[2177] = 0.618193;

	vertices[2178] = 0.953197;
	vertices[2179] = 0.053349;
	vertices[2180] = 0.594756;

	vertices[2181] = 0.953197;
	vertices[2182] = 0.068974;
	vertices[2183] = 0.540068;

	vertices[2184] = 1.09382;
	vertices[2185] = 0.100224;
	vertices[2186] = 0.618193;

	vertices[2187] = 1.09382;
	vertices[2188] = 0.178349;
	vertices[2189] = 0.633818;

	vertices[2190] = 1.09382;
	vertices[2191] = 0.170537;
	vertices[2192] = 0.571318;

	vertices[2193] = 1.09382;
	vertices[2194] = 0.108037;
	vertices[2195] = 0.547881;

	vertices[2196] = 0.906322;
	vertices[2197] = 0.170537;
	vertices[2198] = 0.571318;

	vertices[2199] = 0.906322;
	vertices[2200] = 0.178349;
	vertices[2201] = 0.633818;

	vertices[2202] = 0.906322;
	vertices[2203] = 0.100224;
	vertices[2204] = 0.618193;

	vertices[2205] = 0.906322;
	vertices[2206] = 0.108037;
	vertices[2207] = 0.547881;

	vertices[2208] = 1.09382;
	vertices[2209] = 0.178349;
	vertices[2210] = 0.633818;

	vertices[2211] = 1.00007;
	vertices[2212] = 0.147099;
	vertices[2213] = 0.626006;

	vertices[2214] = 1.00007;
	vertices[2215] = 0.139287;
	vertices[2216] = 0.563506;

	vertices[2217] = 1.09382;
	vertices[2218] = 0.170537;
	vertices[2219] = 0.571318;

	vertices[2220] = 1.00007;
	vertices[2221] = 0.139287;
	vertices[2222] = 0.563506;

	vertices[2223] = 1.00007;
	vertices[2224] = 0.147099;
	vertices[2225] = 0.626006;

	vertices[2226] = 0.906322;
	vertices[2227] = 0.178349;
	vertices[2228] = 0.633818;

	vertices[2229] = 0.906322;
	vertices[2230] = 0.170537;
	vertices[2231] = 0.571318;

	vertices[2232] = 1.00007;
	vertices[2233] = 0.139287;
	vertices[2234] = 0.563506;

	vertices[2235] = 1.00007;
	vertices[2236] = 0.061162;
	vertices[2237] = 0.540068;

	vertices[2238] = 1.04695;
	vertices[2239] = 0.068974;
	vertices[2240] = 0.540068;

	vertices[2241] = 1.09382;
	vertices[2242] = 0.170537;
	vertices[2243] = 0.571318;

	vertices[2244] = 0.953197;
	vertices[2245] = 0.068974;
	vertices[2246] = 0.540068;

	vertices[2247] = 1.00007;
	vertices[2248] = 0.061162;
	vertices[2249] = 0.540068;

	vertices[2250] = 1.00007;
	vertices[2251] = 0.139287;
	vertices[2252] = 0.563506;

	vertices[2253] = 0.906322;
	vertices[2254] = 0.170537;
	vertices[2255] = 0.571318;

	vertices[2256] = 1.09382;
	vertices[2257] = 0.170537;
	vertices[2258] = 0.571318;

	vertices[2259] = 1.04695;
	vertices[2260] = 0.068974;
	vertices[2261] = 0.540068;

	vertices[2262] = 1.09382;
	vertices[2263] = 0.108037;
	vertices[2264] = 0.547881;

	vertices[2265] = 0.906322;
	vertices[2266] = 0.108037;
	vertices[2267] = 0.547881;

	vertices[2268] = 0.953197;
	vertices[2269] = 0.068974;
	vertices[2270] = 0.540068;

	vertices[2271] = 0.906322;
	vertices[2272] = 0.170537;
	vertices[2273] = 0.571318;

	vertices[2274] = 1.13288;
	vertices[2275] = 1.13147;
	vertices[2276] = 0.665068;

	vertices[2277] = 1.16413;
	vertices[2278] = 1.06116;
	vertices[2279] = 0.657256;

	vertices[2280] = 1.18757;
	vertices[2281] = 1.07679;
	vertices[2282] = 0.680693;

	vertices[2283] = 1.17195;
	vertices[2284] = 1.13929;
	vertices[2285] = 0.688506;

	vertices[2286] = 0.812572;
	vertices[2287] = 1.07679;
	vertices[2288] = 0.680693;

	vertices[2289] = 0.836009;
	vertices[2290] = 1.06116;
	vertices[2291] = 0.657256;

	vertices[2292] = 0.867259;
	vertices[2293] = 1.13147;
	vertices[2294] = 0.665068;

	vertices[2295] = 0.828197;
	vertices[2296] = 1.13929;
	vertices[2297] = 0.688506;

	vertices[2298] = 1.12507;
	vertices[2299] = 1.22522;
	vertices[2300] = 0.672881;

	vertices[2301] = 1.13288;
	vertices[2302] = 1.13147;
	vertices[2303] = 0.665068;

	vertices[2304] = 1.17195;
	vertices[2305] = 1.13929;
	vertices[2306] = 0.688506;

	vertices[2307] = 1.17976;
	vertices[2308] = 1.21741;
	vertices[2309] = 0.688506;

	vertices[2310] = 0.828197;
	vertices[2311] = 1.13929;
	vertices[2312] = 0.688506;

	vertices[2313] = 0.867259;
	vertices[2314] = 1.13147;
	vertices[2315] = 0.665068;

	vertices[2316] = 0.875072;
	vertices[2317] = 1.22522;
	vertices[2318] = 0.672881;

	vertices[2319] = 0.820384;
	vertices[2320] = 1.21741;
	vertices[2321] = 0.688506;

	vertices[2322] = 1.16413;
	vertices[2323] = 1.3346;
	vertices[2324] = 0.680693;

	vertices[2325] = 1.12507;
	vertices[2326] = 1.22522;
	vertices[2327] = 0.672881;

	vertices[2328] = 1.17976;
	vertices[2329] = 1.21741;
	vertices[2330] = 0.688506;

	vertices[2331] = 1.21101;
	vertices[2332] = 1.29554;
	vertices[2333] = 0.688506;

	vertices[2334] = 0.820384;
	vertices[2335] = 1.21741;
	vertices[2336] = 0.688506;

	vertices[2337] = 0.875072;
	vertices[2338] = 1.22522;
	vertices[2339] = 0.672881;

	vertices[2340] = 0.836009;
	vertices[2341] = 1.3346;
	vertices[2342] = 0.680693;

	vertices[2343] = 0.789134;
	vertices[2344] = 1.29554;
	vertices[2345] = 0.688506;

	vertices[2346] = 1.16413;
	vertices[2347] = 1.06116;
	vertices[2348] = 0.657256;

	vertices[2349] = 1.2032;
	vertices[2350] = 1.01429;
	vertices[2351] = 0.649443;

	vertices[2352] = 1.22663;
	vertices[2353] = 1.02991;
	vertices[2354] = 0.688506;

	vertices[2355] = 1.18757;
	vertices[2356] = 1.07679;
	vertices[2357] = 0.680693;

	vertices[2358] = 0.773509;
	vertices[2359] = 1.02991;
	vertices[2360] = 0.688506;

	vertices[2361] = 0.796947;
	vertices[2362] = 1.01429;
	vertices[2363] = 0.649443;

	vertices[2364] = 0.836009;
	vertices[2365] = 1.06116;
	vertices[2366] = 0.657256;

	vertices[2367] = 0.812572;
	vertices[2368] = 1.07679;
	vertices[2369] = 0.680693;

	vertices[2370] = 1.2032;
	vertices[2371] = 1.01429;
	vertices[2372] = 0.649443;

	vertices[2373] = 1.37507;
	vertices[2374] = 0.936162;
	vertices[2375] = 0.610381;

	vertices[2376] = 1.37507;
	vertices[2377] = 0.983037;
	vertices[2378] = 0.649443;

	vertices[2379] = 1.22663;
	vertices[2380] = 1.02991;
	vertices[2381] = 0.688506;

	vertices[2382] = 0.625072;
	vertices[2383] = 0.983037;
	vertices[2384] = 0.649443;

	vertices[2385] = 0.625072;
	vertices[2386] = 0.936162;
	vertices[2387] = 0.610381;

	vertices[2388] = 0.796947;
	vertices[2389] = 1.01429;
	vertices[2390] = 0.649443;

	vertices[2391] = 0.773509;
	vertices[2392] = 1.02991;
	vertices[2393] = 0.688506;

	vertices[2394] = 1.37507;
	vertices[2395] = 0.936162;
	vertices[2396] = 0.610381;

	vertices[2397] = 1.49226;
	vertices[2398] = 0.983037;
	vertices[2399] = 0.579131;

	vertices[2400] = 1.47663;
	vertices[2401] = 1.0221;
	vertices[2402] = 0.626006;

	vertices[2403] = 1.37507;
	vertices[2404] = 0.983037;
	vertices[2405] = 0.649443;

	vertices[2406] = 0.523509;
	vertices[2407] = 1.0221;
	vertices[2408] = 0.626006;

	vertices[2409] = 0.507884;
	vertices[2410] = 0.983037;
	vertices[2411] = 0.579131;

	vertices[2412] = 0.625072;
	vertices[2413] = 0.936162;
	vertices[2414] = 0.610381;

	vertices[2415] = 0.625072;
	vertices[2416] = 0.983037;
	vertices[2417] = 0.649443;

	vertices[2418] = 1.49226;
	vertices[2419] = 0.983037;
	vertices[2420] = 0.579131;

	vertices[2421] = 1.62507;
	vertices[2422] = 1.10804;
	vertices[2423] = 0.555693;

	vertices[2424] = 1.5782;
	vertices[2425] = 1.11585;
	vertices[2426] = 0.586943;

	vertices[2427] = 1.47663;
	vertices[2428] = 1.0221;
	vertices[2429] = 0.626006;

	vertices[2430] = 0.421947;
	vertices[2431] = 1.11585;
	vertices[2432] = 0.586943;

	vertices[2433] = 0.375072;
	vertices[2434] = 1.10804;
	vertices[2435] = 0.555693;

	vertices[2436] = 0.507884;
	vertices[2437] = 0.983037;
	vertices[2438] = 0.579131;

	vertices[2439] = 0.523509;
	vertices[2440] = 1.0221;
	vertices[2441] = 0.626006;

	vertices[2442] = 1.62507;
	vertices[2443] = 1.10804;
	vertices[2444] = 0.555693;

	vertices[2445] = 1.6407;
	vertices[2446] = 1.21741;
	vertices[2447] = 0.555693;

	vertices[2448] = 1.58601;
	vertices[2449] = 1.2096;
	vertices[2450] = 0.594756;

	vertices[2451] = 1.5782;
	vertices[2452] = 1.11585;
	vertices[2453] = 0.586943;

	vertices[2454] = 0.414134;
	vertices[2455] = 1.2096;
	vertices[2456] = 0.594756;

	vertices[2457] = 0.359447;
	vertices[2458] = 1.21741;
	vertices[2459] = 0.555693;

	vertices[2460] = 0.375072;
	vertices[2461] = 1.10804;
	vertices[2462] = 0.555693;

	vertices[2463] = 0.421947;
	vertices[2464] = 1.11585;
	vertices[2465] = 0.586943;

	vertices[2466] = 1.6407;
	vertices[2467] = 1.21741;
	vertices[2468] = 0.555693;

	vertices[2469] = 1.60163;
	vertices[2470] = 1.29554;
	vertices[2471] = 0.571318;

	vertices[2472] = 1.56257;
	vertices[2473] = 1.2721;
	vertices[2474] = 0.602568;

	vertices[2475] = 1.58601;
	vertices[2476] = 1.2096;
	vertices[2477] = 0.594756;

	vertices[2478] = 0.437572;
	vertices[2479] = 1.2721;
	vertices[2480] = 0.602568;

	vertices[2481] = 0.398509;
	vertices[2482] = 1.29554;
	vertices[2483] = 0.571318;

	vertices[2484] = 0.359447;
	vertices[2485] = 1.21741;
	vertices[2486] = 0.555693;

	vertices[2487] = 0.414134;
	vertices[2488] = 1.2096;
	vertices[2489] = 0.594756;

	vertices[2490] = 1.60163;
	vertices[2491] = 1.29554;
	vertices[2492] = 0.571318;

	vertices[2493] = 1.42976;
	vertices[2494] = 1.35804;
	vertices[2495] = 0.626006;

	vertices[2496] = 1.42195;
	vertices[2497] = 1.31897;
	vertices[2498] = 0.680693;

	vertices[2499] = 1.56257;
	vertices[2500] = 1.2721;
	vertices[2501] = 0.602568;

	vertices[2502] = 0.578197;
	vertices[2503] = 1.31897;
	vertices[2504] = 0.680693;

	vertices[2505] = 0.570384;
	vertices[2506] = 1.35804;
	vertices[2507] = 0.626006;

	vertices[2508] = 0.398509;
	vertices[2509] = 1.29554;
	vertices[2510] = 0.571318;

	vertices[2511] = 0.437572;
	vertices[2512] = 1.2721;
	vertices[2513] = 0.602568;

	vertices[2514] = 1.42976;
	vertices[2515] = 1.35804;
	vertices[2516] = 0.626006;

	vertices[2517] = 1.3282;
	vertices[2518] = 1.3971;
	vertices[2519] = 0.649443;

	vertices[2520] = 1.33601;
	vertices[2521] = 1.35022;
	vertices[2522] = 0.665068;

	vertices[2523] = 1.42195;
	vertices[2524] = 1.31897;
	vertices[2525] = 0.680693;

	vertices[2526] = 0.664134;
	vertices[2527] = 1.35022;
	vertices[2528] = 0.665068;

	vertices[2529] = 0.671947;
	vertices[2530] = 1.3971;
	vertices[2531] = 0.649443;

	vertices[2532] = 0.570384;
	vertices[2533] = 1.35804;
	vertices[2534] = 0.626006;

	vertices[2535] = 0.578197;
	vertices[2536] = 1.31897;
	vertices[2537] = 0.680693;

	vertices[2538] = 1.3282;
	vertices[2539] = 1.3971;
	vertices[2540] = 0.649443;

	vertices[2541] = 1.25007;
	vertices[2542] = 1.38929;
	vertices[2543] = 0.665068;

	vertices[2544] = 1.27351;
	vertices[2545] = 1.34241;
	vertices[2546] = 0.680693;

	vertices[2547] = 1.33601;
	vertices[2548] = 1.35022;
	vertices[2549] = 0.665068;

	vertices[2550] = 0.726634;
	vertices[2551] = 1.34241;
	vertices[2552] = 0.680693;

	vertices[2553] = 0.750072;
	vertices[2554] = 1.38929;
	vertices[2555] = 0.665068;

	vertices[2556] = 0.671947;
	vertices[2557] = 1.3971;
	vertices[2558] = 0.649443;

	vertices[2559] = 0.664134;
	vertices[2560] = 1.35022;
	vertices[2561] = 0.665068;

	vertices[2562] = 1.25007;
	vertices[2563] = 1.38929;
	vertices[2564] = 0.665068;

	vertices[2565] = 1.16413;
	vertices[2566] = 1.3346;
	vertices[2567] = 0.680693;

	vertices[2568] = 1.21101;
	vertices[2569] = 1.29554;
	vertices[2570] = 0.688506;

	vertices[2571] = 1.27351;
	vertices[2572] = 1.34241;
	vertices[2573] = 0.680693;

	vertices[2574] = 0.789134;
	vertices[2575] = 1.29554;
	vertices[2576] = 0.688506;

	vertices[2577] = 0.836009;
	vertices[2578] = 1.3346;
	vertices[2579] = 0.680693;

	vertices[2580] = 0.750072;
	vertices[2581] = 1.38929;
	vertices[2582] = 0.665068;

	vertices[2583] = 0.726634;
	vertices[2584] = 1.34241;
	vertices[2585] = 0.680693;

	vertices[2586] = 1.27351;
	vertices[2587] = 1.34241;
	vertices[2588] = 0.680693;

	vertices[2589] = 1.21101;
	vertices[2590] = 1.29554;
	vertices[2591] = 0.688506;

	vertices[2592] = 1.23445;
	vertices[2593] = 1.27991;
	vertices[2594] = 0.665068;

	vertices[2595] = 1.28132;
	vertices[2596] = 1.31897;
	vertices[2597] = 0.672881;

	vertices[2598] = 0.765697;
	vertices[2599] = 1.27991;
	vertices[2600] = 0.665068;

	vertices[2601] = 0.789134;
	vertices[2602] = 1.29554;
	vertices[2603] = 0.688506;

	vertices[2604] = 0.726634;
	vertices[2605] = 1.34241;
	vertices[2606] = 0.680693;

	vertices[2607] = 0.718822;
	vertices[2608] = 1.31897;
	vertices[2609] = 0.672881;

	vertices[2610] = 1.33601;
	vertices[2611] = 1.35022;
	vertices[2612] = 0.665068;

	vertices[2613] = 1.27351;
	vertices[2614] = 1.34241;
	vertices[2615] = 0.680693;

	vertices[2616] = 1.28132;
	vertices[2617] = 1.31897;
	vertices[2618] = 0.672881;

	vertices[2619] = 1.33601;
	vertices[2620] = 1.32679;
	vertices[2621] = 0.657256;

	vertices[2622] = 0.718822;
	vertices[2623] = 1.31897;
	vertices[2624] = 0.672881;

	vertices[2625] = 0.726634;
	vertices[2626] = 1.34241;
	vertices[2627] = 0.680693;

	vertices[2628] = 0.664134;
	vertices[2629] = 1.35022;
	vertices[2630] = 0.665068;

	vertices[2631] = 0.664134;
	vertices[2632] = 1.32679;
	vertices[2633] = 0.657256;

	vertices[2634] = 1.42195;
	vertices[2635] = 1.31897;
	vertices[2636] = 0.680693;

	vertices[2637] = 1.33601;
	vertices[2638] = 1.35022;
	vertices[2639] = 0.665068;

	vertices[2640] = 1.33601;
	vertices[2641] = 1.32679;
	vertices[2642] = 0.657256;

	vertices[2643] = 1.41413;
	vertices[2644] = 1.31116;
	vertices[2645] = 0.657256;

	vertices[2646] = 0.664134;
	vertices[2647] = 1.32679;
	vertices[2648] = 0.657256;

	vertices[2649] = 0.664134;
	vertices[2650] = 1.35022;
	vertices[2651] = 0.665068;

	vertices[2652] = 0.578197;
	vertices[2653] = 1.31897;
	vertices[2654] = 0.680693;

	vertices[2655] = 0.586009;
	vertices[2656] = 1.31116;
	vertices[2657] = 0.657256;

	vertices[2658] = 1.56257;
	vertices[2659] = 1.2721;
	vertices[2660] = 0.602568;

	vertices[2661] = 1.42195;
	vertices[2662] = 1.31897;
	vertices[2663] = 0.680693;

	vertices[2664] = 1.41413;
	vertices[2665] = 1.31116;
	vertices[2666] = 0.657256;

	vertices[2667] = 1.53132;
	vertices[2668] = 1.25647;
	vertices[2669] = 0.586943;

	vertices[2670] = 0.586009;
	vertices[2671] = 1.31116;
	vertices[2672] = 0.657256;

	vertices[2673] = 0.578197;
	vertices[2674] = 1.31897;
	vertices[2675] = 0.680693;

	vertices[2676] = 0.437572;
	vertices[2677] = 1.2721;
	vertices[2678] = 0.602568;

	vertices[2679] = 0.468822;
	vertices[2680] = 1.25647;
	vertices[2681] = 0.586943;

	vertices[2682] = 1.58601;
	vertices[2683] = 1.2096;
	vertices[2684] = 0.594756;

	vertices[2685] = 1.56257;
	vertices[2686] = 1.2721;
	vertices[2687] = 0.602568;

	vertices[2688] = 1.53132;
	vertices[2689] = 1.25647;
	vertices[2690] = 0.586943;

	vertices[2691] = 1.55476;
	vertices[2692] = 1.20179;
	vertices[2693] = 0.579131;

	vertices[2694] = 0.468822;
	vertices[2695] = 1.25647;
	vertices[2696] = 0.586943;

	vertices[2697] = 0.437572;
	vertices[2698] = 1.2721;
	vertices[2699] = 0.602568;

	vertices[2700] = 0.414134;
	vertices[2701] = 1.2096;
	vertices[2702] = 0.594756;

	vertices[2703] = 0.445384;
	vertices[2704] = 1.20179;
	vertices[2705] = 0.579131;

	vertices[2706] = 1.5782;
	vertices[2707] = 1.11585;
	vertices[2708] = 0.586943;

	vertices[2709] = 1.58601;
	vertices[2710] = 1.2096;
	vertices[2711] = 0.594756;

	vertices[2712] = 1.55476;
	vertices[2713] = 1.20179;
	vertices[2714] = 0.579131;

	vertices[2715] = 1.54695;
	vertices[2716] = 1.13147;
	vertices[2717] = 0.579131;

	vertices[2718] = 0.445384;
	vertices[2719] = 1.20179;
	vertices[2720] = 0.579131;

	vertices[2721] = 0.414134;
	vertices[2722] = 1.2096;
	vertices[2723] = 0.594756;

	vertices[2724] = 0.421947;
	vertices[2725] = 1.11585;
	vertices[2726] = 0.586943;

	vertices[2727] = 0.453197;
	vertices[2728] = 1.13147;
	vertices[2729] = 0.579131;

	vertices[2730] = 1.47663;
	vertices[2731] = 1.0221;
	vertices[2732] = 0.626006;

	vertices[2733] = 1.5782;
	vertices[2734] = 1.11585;
	vertices[2735] = 0.586943;

	vertices[2736] = 1.54695;
	vertices[2737] = 1.13147;
	vertices[2738] = 0.579131;

	vertices[2739] = 1.46101;
	vertices[2740] = 1.03772;
	vertices[2741] = 0.610381;

	vertices[2742] = 0.453197;
	vertices[2743] = 1.13147;
	vertices[2744] = 0.579131;

	vertices[2745] = 0.421947;
	vertices[2746] = 1.11585;
	vertices[2747] = 0.586943;

	vertices[2748] = 0.523509;
	vertices[2749] = 1.0221;
	vertices[2750] = 0.626006;

	vertices[2751] = 0.539134;
	vertices[2752] = 1.03772;
	vertices[2753] = 0.610381;

	vertices[2754] = 1.37507;
	vertices[2755] = 0.983037;
	vertices[2756] = 0.649443;

	vertices[2757] = 1.47663;
	vertices[2758] = 1.0221;
	vertices[2759] = 0.626006;

	vertices[2760] = 1.46101;
	vertices[2761] = 1.03772;
	vertices[2762] = 0.610381;

	vertices[2763] = 1.37507;
	vertices[2764] = 1.00647;
	vertices[2765] = 0.633818;

	vertices[2766] = 0.539134;
	vertices[2767] = 1.03772;
	vertices[2768] = 0.610381;

	vertices[2769] = 0.523509;
	vertices[2770] = 1.0221;
	vertices[2771] = 0.626006;

	vertices[2772] = 0.625072;
	vertices[2773] = 0.983037;
	vertices[2774] = 0.649443;

	vertices[2775] = 0.625072;
	vertices[2776] = 1.00647;
	vertices[2777] = 0.633818;

	vertices[2778] = 1.22663;
	vertices[2779] = 1.02991;
	vertices[2780] = 0.688506;

	vertices[2781] = 1.37507;
	vertices[2782] = 0.983037;
	vertices[2783] = 0.649443;

	vertices[2784] = 1.37507;
	vertices[2785] = 1.00647;
	vertices[2786] = 0.633818;

	vertices[2787] = 1.24226;
	vertices[2788] = 1.04554;
	vertices[2789] = 0.665068;

	vertices[2790] = 0.625072;
	vertices[2791] = 1.00647;
	vertices[2792] = 0.633818;

	vertices[2793] = 0.625072;
	vertices[2794] = 0.983037;
	vertices[2795] = 0.649443;

	vertices[2796] = 0.773509;
	vertices[2797] = 1.02991;
	vertices[2798] = 0.688506;

	vertices[2799] = 0.757884;
	vertices[2800] = 1.04554;
	vertices[2801] = 0.665068;

	vertices[2802] = 1.18757;
	vertices[2803] = 1.07679;
	vertices[2804] = 0.680693;

	vertices[2805] = 1.22663;
	vertices[2806] = 1.02991;
	vertices[2807] = 0.688506;

	vertices[2808] = 1.24226;
	vertices[2809] = 1.04554;
	vertices[2810] = 0.665068;

	vertices[2811] = 1.2032;
	vertices[2812] = 1.09241;
	vertices[2813] = 0.657256;

	vertices[2814] = 0.757884;
	vertices[2815] = 1.04554;
	vertices[2816] = 0.665068;

	vertices[2817] = 0.773509;
	vertices[2818] = 1.02991;
	vertices[2819] = 0.688506;

	vertices[2820] = 0.812572;
	vertices[2821] = 1.07679;
	vertices[2822] = 0.680693;

	vertices[2823] = 0.796947;
	vertices[2824] = 1.09241;
	vertices[2825] = 0.657256;

	vertices[2826] = 1.21101;
	vertices[2827] = 1.29554;
	vertices[2828] = 0.688506;

	vertices[2829] = 1.17976;
	vertices[2830] = 1.21741;
	vertices[2831] = 0.688506;

	vertices[2832] = 1.19538;
	vertices[2833] = 1.21741;
	vertices[2834] = 0.665068;

	vertices[2835] = 1.23445;
	vertices[2836] = 1.27991;
	vertices[2837] = 0.665068;

	vertices[2838] = 0.804759;
	vertices[2839] = 1.21741;
	vertices[2840] = 0.665068;

	vertices[2841] = 0.820384;
	vertices[2842] = 1.21741;
	vertices[2843] = 0.688506;

	vertices[2844] = 0.789134;
	vertices[2845] = 1.29554;
	vertices[2846] = 0.688506;

	vertices[2847] = 0.765697;
	vertices[2848] = 1.27991;
	vertices[2849] = 0.665068;

	vertices[2850] = 1.17976;
	vertices[2851] = 1.21741;
	vertices[2852] = 0.688506;

	vertices[2853] = 1.17195;
	vertices[2854] = 1.13929;
	vertices[2855] = 0.688506;

	vertices[2856] = 1.19538;
	vertices[2857] = 1.1471;
	vertices[2858] = 0.657256;

	vertices[2859] = 1.19538;
	vertices[2860] = 1.21741;
	vertices[2861] = 0.665068;

	vertices[2862] = 0.804759;
	vertices[2863] = 1.1471;
	vertices[2864] = 0.657256;

	vertices[2865] = 0.828197;
	vertices[2866] = 1.13929;
	vertices[2867] = 0.688506;

	vertices[2868] = 0.820384;
	vertices[2869] = 1.21741;
	vertices[2870] = 0.688506;

	vertices[2871] = 0.804759;
	vertices[2872] = 1.21741;
	vertices[2873] = 0.665068;

	vertices[2874] = 1.17195;
	vertices[2875] = 1.13929;
	vertices[2876] = 0.688506;

	vertices[2877] = 1.18757;
	vertices[2878] = 1.07679;
	vertices[2879] = 0.680693;

	vertices[2880] = 1.2032;
	vertices[2881] = 1.09241;
	vertices[2882] = 0.657256;

	vertices[2883] = 1.19538;
	vertices[2884] = 1.1471;
	vertices[2885] = 0.657256;

	vertices[2886] = 0.796947;
	vertices[2887] = 1.09241;
	vertices[2888] = 0.657256;

	vertices[2889] = 0.812572;
	vertices[2890] = 1.07679;
	vertices[2891] = 0.680693;

	vertices[2892] = 0.828197;
	vertices[2893] = 1.13929;
	vertices[2894] = 0.688506;

	vertices[2895] = 0.804759;
	vertices[2896] = 1.1471;
	vertices[2897] = 0.657256;

	vertices[2898] = 1.00007;
	vertices[2899] = 1.35022;
	vertices[2900] = 0.649443;

	vertices[2901] = 1.06257;
	vertices[2902] = 1.41272;
	vertices[2903] = 0.657256;

	vertices[2904] = 1.10945;
	vertices[2905] = 1.38147;
	vertices[2906] = 0.516631;

	vertices[2907] = 1.00007;
	vertices[2908] = 1.32679;
	vertices[2909] = 0.508818;

	vertices[2910] = 0.890697;
	vertices[2911] = 1.38147;
	vertices[2912] = 0.516631;

	vertices[2913] = 0.937572;
	vertices[2914] = 1.41272;
	vertices[2915] = 0.657256;

	vertices[2916] = 1.00007;
	vertices[2917] = 1.35022;
	vertices[2918] = 0.649443;

	vertices[2919] = 1.00007;
	vertices[2920] = 1.32679;
	vertices[2921] = 0.508818;

	vertices[2922] = 1.06257;
	vertices[2923] = 1.41272;
	vertices[2924] = 0.657256;

	vertices[2925] = 1.15632;
	vertices[2926] = 1.63929;
	vertices[2927] = 0.665068;

	vertices[2928] = 1.19538;
	vertices[2929] = 1.5846;
	vertices[2930] = 0.524443;

	vertices[2931] = 1.10945;
	vertices[2932] = 1.38147;
	vertices[2933] = 0.516631;

	vertices[2934] = 0.804759;
	vertices[2935] = 1.5846;
	vertices[2936] = 0.524443;

	vertices[2937] = 0.843822;
	vertices[2938] = 1.63929;
	vertices[2939] = 0.665068;

	vertices[2940] = 0.937572;
	vertices[2941] = 1.41272;
	vertices[2942] = 0.657256;

	vertices[2943] = 0.890697;
	vertices[2944] = 1.38147;
	vertices[2945] = 0.516631;

	vertices[2946] = 1.15632;
	vertices[2947] = 1.63929;
	vertices[2948] = 0.665068;

	vertices[2949] = 1.32038;
	vertices[2950] = 1.67835;
	vertices[2951] = 0.641631;

	vertices[2952] = 1.33601;
	vertices[2953] = 1.60804;
	vertices[2954] = 0.501006;

	vertices[2955] = 1.19538;
	vertices[2956] = 1.5846;
	vertices[2957] = 0.524443;

	vertices[2958] = 0.664134;
	vertices[2959] = 1.60804;
	vertices[2960] = 0.501006;

	vertices[2961] = 0.679759;
	vertices[2962] = 1.67835;
	vertices[2963] = 0.641631;

	vertices[2964] = 0.843822;
	vertices[2965] = 1.63929;
	vertices[2966] = 0.665068;

	vertices[2967] = 0.804759;
	vertices[2968] = 1.5846;
	vertices[2969] = 0.524443;

	vertices[2970] = 1.32038;
	vertices[2971] = 1.67835;
	vertices[2972] = 0.641631;

	vertices[2973] = 1.49226;
	vertices[2974] = 1.5221;
	vertices[2975] = 0.594756;

	vertices[2976] = 1.48445;
	vertices[2977] = 1.47522;
	vertices[2978] = 0.461943;

	vertices[2979] = 1.33601;
	vertices[2980] = 1.60804;
	vertices[2981] = 0.501006;

	vertices[2982] = 0.515697;
	vertices[2983] = 1.47522;
	vertices[2984] = 0.461943;

	vertices[2985] = 0.507884;
	vertices[2986] = 1.5221;
	vertices[2987] = 0.594756;

	vertices[2988] = 0.679759;
	vertices[2989] = 1.67835;
	vertices[2990] = 0.641631;

	vertices[2991] = 0.664134;
	vertices[2992] = 1.60804;
	vertices[2993] = 0.501006;

	vertices[2994] = 1.49226;
	vertices[2995] = 1.5221;
	vertices[2996] = 0.594756;

	vertices[2997] = 1.71101;
	vertices[2998] = 1.40491;
	vertices[2999] = 0.532256;

	vertices[3000] = 1.67976;
	vertices[3001] = 1.37366;
	vertices[3002] = 0.399443;

	vertices[3003] = 1.48445;
	vertices[3004] = 1.47522;
	vertices[3005] = 0.461943;

	vertices[3006] = 0.320384;
	vertices[3007] = 1.37366;
	vertices[3008] = 0.399443;

	vertices[3009] = 0.289134;
	vertices[3010] = 1.40491;
	vertices[3011] = 0.532256;

	vertices[3012] = 0.507884;
	vertices[3013] = 1.5221;
	vertices[3014] = 0.594756;

	vertices[3015] = 0.515697;
	vertices[3016] = 1.47522;
	vertices[3017] = 0.461943;

	vertices[3018] = 1.71101;
	vertices[3019] = 1.40491;
	vertices[3020] = 0.532256;

	vertices[3021] = 1.85945;
	vertices[3022] = 1.35022;
	vertices[3023] = 0.501006;

	vertices[3024] = 1.79695;
	vertices[3025] = 1.32679;
	vertices[3026] = 0.368193;

	vertices[3027] = 1.67976;
	vertices[3028] = 1.37366;
	vertices[3029] = 0.399443;

	vertices[3030] = 0.203197;
	vertices[3031] = 1.32679;
	vertices[3032] = 0.368193;

	vertices[3033] = 0.140697;
	vertices[3034] = 1.35022;
	vertices[3035] = 0.501006;

	vertices[3036] = 0.289134;
	vertices[3037] = 1.40491;
	vertices[3038] = 0.532256;

	vertices[3039] = 0.320384;
	vertices[3040] = 1.37366;
	vertices[3041] = 0.399443;

	vertices[3042] = 1.85945;
	vertices[3043] = 1.35022;
	vertices[3044] = 0.501006;

	vertices[3045] = 1.8282;
	vertices[3046] = 1.06897;
	vertices[3047] = 0.352568;

	vertices[3048] = 1.77351;
	vertices[3049] = 1.0846;
	vertices[3050] = 0.282256;

	vertices[3051] = 1.79695;
	vertices[3052] = 1.32679;
	vertices[3053] = 0.368193;

	vertices[3054] = 0.226634;
	vertices[3055] = 1.0846;
	vertices[3056] = 0.282256;

	vertices[3057] = 0.171947;
	vertices[3058] = 1.06897;
	vertices[3059] = 0.352568;

	vertices[3060] = 0.140697;
	vertices[3061] = 1.35022;
	vertices[3062] = 0.501006;

	vertices[3063] = 0.203197;
	vertices[3064] = 1.32679;
	vertices[3065] = 0.368193;

	vertices[3066] = 1.8282;
	vertices[3067] = 1.06897;
	vertices[3068] = 0.352568;

	vertices[3069] = 1.63288;
	vertices[3070] = 0.881474;
	vertices[3071] = 0.446318;

	vertices[3072] = 1.60163;
	vertices[3073] = 0.920537;
	vertices[3074] = 0.321318;

	vertices[3075] = 1.77351;
	vertices[3076] = 1.0846;
	vertices[3077] = 0.282256;

	vertices[3078] = 0.398509;
	vertices[3079] = 0.920537;
	vertices[3080] = 0.321318;

	vertices[3081] = 0.367259;
	vertices[3082] = 0.881474;
	vertices[3083] = 0.446318;

	vertices[3084] = 0.171947;
	vertices[3085] = 1.06897;
	vertices[3086] = 0.352568;

	vertices[3087] = 0.226634;
	vertices[3088] = 1.0846;
	vertices[3089] = 0.282256;

	vertices[3090] = 1.63288;
	vertices[3091] = 0.881474;
	vertices[3092] = 0.446318;

	vertices[3093] = 1.43757;
	vertices[3094] = 0.779912;
	vertices[3095] = 0.438506;

	vertices[3096] = 1.43757;
	vertices[3097] = 0.826787;
	vertices[3098] = 0.376006;

	vertices[3099] = 1.60163;
	vertices[3100] = 0.920537;
	vertices[3101] = 0.321318;

	vertices[3102] = 0.562572;
	vertices[3103] = 0.826787;
	vertices[3104] = 0.376006;

	vertices[3105] = 0.562572;
	vertices[3106] = 0.779912;
	vertices[3107] = 0.438506;

	vertices[3108] = 0.367259;
	vertices[3109] = 0.881474;
	vertices[3110] = 0.446318;

	vertices[3111] = 0.398509;
	vertices[3112] = 0.920537;
	vertices[3113] = 0.321318;

	vertices[3114] = 1.00007;
	vertices[3115] = 0.350224;
	vertices[3116] = 0.227568;

	vertices[3117] = 1.00007;
	vertices[3118] = 0.436162;
	vertices[3119] = 0.188506;

	vertices[3120] = 1.17976;
	vertices[3121] = 0.506474;
	vertices[3122] = 0.165068;

	vertices[3123] = 1.12507;
	vertices[3124] = 0.381474;
	vertices[3125] = 0.266631;

	vertices[3126] = 0.820384;
	vertices[3127] = 0.506474;
	vertices[3128] = 0.165068;

	vertices[3129] = 1.00007;
	vertices[3130] = 0.436162;
	vertices[3131] = 0.188506;

	vertices[3132] = 1.00007;
	vertices[3133] = 0.350224;
	vertices[3134] = 0.227568;

	vertices[3135] = 0.875072;
	vertices[3136] = 0.381474;
	vertices[3137] = 0.266631;

	vertices[3138] = 1.00007;
	vertices[3139] = 0.115849;
	vertices[3140] = 0.251006;

	vertices[3141] = 1.00007;
	vertices[3142] = 0.350224;
	vertices[3143] = 0.227568;

	vertices[3144] = 1.12507;
	vertices[3145] = 0.381474;
	vertices[3146] = 0.266631;

	vertices[3147] = 1.1407;
	vertices[3148] = 0.162724;
	vertices[3149] = 0.274443;

	vertices[3150] = 0.875072;
	vertices[3151] = 0.381474;
	vertices[3152] = 0.266631;

	vertices[3153] = 1.00007;
	vertices[3154] = 0.350224;
	vertices[3155] = 0.227568;

	vertices[3156] = 1.00007;
	vertices[3157] = 0.115849;
	vertices[3158] = 0.251006;

	vertices[3159] = 0.859447;
	vertices[3160] = 0.162724;
	vertices[3161] = 0.274443;

	vertices[3162] = 1.00007;
	vertices[3163] = -0.056026;
	vertices[3164] = 0.368193;

	vertices[3165] = 1.00007;
	vertices[3166] = 0.115849;
	vertices[3167] = 0.251006;

	vertices[3168] = 1.1407;
	vertices[3169] = 0.162724;
	vertices[3170] = 0.274443;

	vertices[3171] = 1.16413;
	vertices[3172] = -0.024776;
	vertices[3173] = 0.344756;

	vertices[3174] = 0.859447;
	vertices[3175] = 0.162724;
	vertices[3176] = 0.274443;

	vertices[3177] = 1.00007;
	vertices[3178] = 0.115849;
	vertices[3179] = 0.251006;

	vertices[3180] = 1.00007;
	vertices[3181] = -0.056026;
	vertices[3182] = 0.368193;

	vertices[3183] = 0.836009;
	vertices[3184] = -0.024776;
	vertices[3185] = 0.344756;

	vertices[3186] = 1.17976;
	vertices[3187] = -0.048213;
	vertices[3188] = 0.461943;

	vertices[3189] = 1.00007;
	vertices[3190] = -0.063838;
	vertices[3191] = 0.485381;

	vertices[3192] = 1.00007;
	vertices[3193] = -0.056026;
	vertices[3194] = 0.368193;

	vertices[3195] = 1.16413;
	vertices[3196] = -0.024776;
	vertices[3197] = 0.344756;

	vertices[3198] = 1.00007;
	vertices[3199] = -0.056026;
	vertices[3200] = 0.368193;

	vertices[3201] = 1.00007;
	vertices[3202] = -0.063838;
	vertices[3203] = 0.485381;

	vertices[3204] = 0.820384;
	vertices[3205] = -0.048213;
	vertices[3206] = 0.461943;

	vertices[3207] = 0.836009;
	vertices[3208] = -0.024776;
	vertices[3209] = 0.344756;

	vertices[3210] = 1.3282;
	vertices[3211] = -0.024776;
	vertices[3212] = 0.430693;

	vertices[3213] = 1.17976;
	vertices[3214] = -0.048213;
	vertices[3215] = 0.461943;

	vertices[3216] = 1.16413;
	vertices[3217] = -0.024776;
	vertices[3218] = 0.344756;

	vertices[3219] = 1.3282;
	vertices[3220] = 0.006474;
	vertices[3221] = 0.305693;

	vertices[3222] = 0.836009;
	vertices[3223] = -0.024776;
	vertices[3224] = 0.344756;

	vertices[3225] = 0.820384;
	vertices[3226] = -0.048213;
	vertices[3227] = 0.461943;

	vertices[3228] = 0.671947;
	vertices[3229] = -0.024776;
	vertices[3230] = 0.430693;

	vertices[3231] = 0.671947;
	vertices[3232] = 0.006474;
	vertices[3233] = 0.305693;

	vertices[3234] = 1.36726;
	vertices[3235] = 0.029912;
	vertices[3236] = 0.438506;

	vertices[3237] = 1.3282;
	vertices[3238] = -0.024776;
	vertices[3239] = 0.430693;

	vertices[3240] = 1.3282;
	vertices[3241] = 0.006474;
	vertices[3242] = 0.305693;

	vertices[3243] = 1.28913;
	vertices[3244] = 0.209599;
	vertices[3245] = 0.290068;

	vertices[3246] = 0.671947;
	vertices[3247] = 0.006474;
	vertices[3248] = 0.305693;

	vertices[3249] = 0.671947;
	vertices[3250] = -0.024776;
	vertices[3251] = 0.430693;

	vertices[3252] = 0.632884;
	vertices[3253] = 0.029912;
	vertices[3254] = 0.438506;

	vertices[3255] = 0.711009;
	vertices[3256] = 0.209599;
	vertices[3257] = 0.290068;

	vertices[3258] = 1.35163;
	vertices[3259] = 0.225224;
	vertices[3260] = 0.477568;

	vertices[3261] = 1.36726;
	vertices[3262] = 0.029912;
	vertices[3263] = 0.438506;

	vertices[3264] = 1.28913;
	vertices[3265] = 0.209599;
	vertices[3266] = 0.290068;

	vertices[3267] = 1.25007;
	vertices[3268] = 0.420537;
	vertices[3269] = 0.297881;

	vertices[3270] = 0.711009;
	vertices[3271] = 0.209599;
	vertices[3272] = 0.290068;

	vertices[3273] = 0.632884;
	vertices[3274] = 0.029912;
	vertices[3275] = 0.438506;

	vertices[3276] = 0.648509;
	vertices[3277] = 0.225224;
	vertices[3278] = 0.477568;

	vertices[3279] = 0.750072;
	vertices[3280] = 0.420537;
	vertices[3281] = 0.297881;

	vertices[3282] = 1.28913;
	vertices[3283] = 0.209599;
	vertices[3284] = 0.290068;

	vertices[3285] = 1.1407;
	vertices[3286] = 0.162724;
	vertices[3287] = 0.274443;

	vertices[3288] = 1.12507;
	vertices[3289] = 0.381474;
	vertices[3290] = 0.266631;

	vertices[3291] = 1.25007;
	vertices[3292] = 0.420537;
	vertices[3293] = 0.297881;

	vertices[3294] = 0.875072;
	vertices[3295] = 0.381474;
	vertices[3296] = 0.266631;

	vertices[3297] = 0.859447;
	vertices[3298] = 0.162724;
	vertices[3299] = 0.274443;

	vertices[3300] = 0.711009;
	vertices[3301] = 0.209599;
	vertices[3302] = 0.290068;

	vertices[3303] = 0.750072;
	vertices[3304] = 0.420537;
	vertices[3305] = 0.297881;

	vertices[3306] = 1.28913;
	vertices[3307] = 0.209599;
	vertices[3308] = 0.290068;

	vertices[3309] = 1.3282;
	vertices[3310] = 0.006474;
	vertices[3311] = 0.305693;

	vertices[3312] = 1.16413;
	vertices[3313] = -0.024776;
	vertices[3314] = 0.344756;

	vertices[3315] = 1.1407;
	vertices[3316] = 0.162724;
	vertices[3317] = 0.274443;

	vertices[3318] = 0.836009;
	vertices[3319] = -0.024776;
	vertices[3320] = 0.344756;

	vertices[3321] = 0.671947;
	vertices[3322] = 0.006474;
	vertices[3323] = 0.305693;

	vertices[3324] = 0.711009;
	vertices[3325] = 0.209599;
	vertices[3326] = 0.290068;

	vertices[3327] = 0.859447;
	vertices[3328] = 0.162724;
	vertices[3329] = 0.274443;

	vertices[3330] = 1.23445;
	vertices[3331] = 0.568974;
	vertices[3332] = 0.313506;

	vertices[3333] = 1.25007;
	vertices[3334] = 0.420537;
	vertices[3335] = 0.297881;

	vertices[3336] = 1.12507;
	vertices[3337] = 0.381474;
	vertices[3338] = 0.266631;

	vertices[3339] = 1.17976;
	vertices[3340] = 0.506474;
	vertices[3341] = 0.165068;

	vertices[3342] = 0.875072;
	vertices[3343] = 0.381474;
	vertices[3344] = 0.266631;

	vertices[3345] = 0.750072;
	vertices[3346] = 0.420537;
	vertices[3347] = 0.297881;

	vertices[3348] = 0.765697;
	vertices[3349] = 0.568974;
	vertices[3350] = 0.313506;

	vertices[3351] = 0.820384;
	vertices[3352] = 0.506474;
	vertices[3353] = 0.165068;

	vertices[3354] = 1.31257;
	vertices[3355] = 0.483037;
	vertices[3356] = 0.477568;

	vertices[3357] = 1.35163;
	vertices[3358] = 0.225224;
	vertices[3359] = 0.477568;

	vertices[3360] = 1.25007;
	vertices[3361] = 0.420537;
	vertices[3362] = 0.297881;

	vertices[3363] = 1.23445;
	vertices[3364] = 0.568974;
	vertices[3365] = 0.313506;

	vertices[3366] = 0.750072;
	vertices[3367] = 0.420537;
	vertices[3368] = 0.297881;

	vertices[3369] = 0.648509;
	vertices[3370] = 0.225224;
	vertices[3371] = 0.477568;

	vertices[3372] = 0.687572;
	vertices[3373] = 0.483037;
	vertices[3374] = 0.477568;

	vertices[3375] = 0.765697;
	vertices[3376] = 0.568974;
	vertices[3377] = 0.313506;

	vertices[3378] = 1.25788;
	vertices[3379] = 0.608037;
	vertices[3380] = 0.461943;

	vertices[3381] = 1.21882;
	vertices[3382] = 0.639287;
	vertices[3383] = 0.336943;

	vertices[3384] = 1.21101;
	vertices[3385] = 0.693974;
	vertices[3386] = 0.376006;

	vertices[3387] = 1.23445;
	vertices[3388] = 0.670537;
	vertices[3389] = 0.461943;

	vertices[3390] = 0.789134;
	vertices[3391] = 0.693974;
	vertices[3392] = 0.376006;

	vertices[3393] = 0.781322;
	vertices[3394] = 0.639287;
	vertices[3395] = 0.336943;

	vertices[3396] = 0.742259;
	vertices[3397] = 0.608037;
	vertices[3398] = 0.461943;

	vertices[3399] = 0.765697;
	vertices[3400] = 0.670537;
	vertices[3401] = 0.461943;

	vertices[3402] = 1.31257;
	vertices[3403] = 0.483037;
	vertices[3404] = 0.477568;

	vertices[3405] = 1.23445;
	vertices[3406] = 0.568974;
	vertices[3407] = 0.313506;

	vertices[3408] = 1.21882;
	vertices[3409] = 0.639287;
	vertices[3410] = 0.336943;

	vertices[3411] = 1.25788;
	vertices[3412] = 0.608037;
	vertices[3413] = 0.461943;

	vertices[3414] = 0.781322;
	vertices[3415] = 0.639287;
	vertices[3416] = 0.336943;

	vertices[3417] = 0.765697;
	vertices[3418] = 0.568974;
	vertices[3419] = 0.313506;

	vertices[3420] = 0.687572;
	vertices[3421] = 0.483037;
	vertices[3422] = 0.477568;

	vertices[3423] = 0.742259;
	vertices[3424] = 0.608037;
	vertices[3425] = 0.461943;

	vertices[3426] = 1.2032;
	vertices[3427] = 0.733037;
	vertices[3428] = 0.469756;

	vertices[3429] = 1.23445;
	vertices[3430] = 0.670537;
	vertices[3431] = 0.461943;

	vertices[3432] = 1.21101;
	vertices[3433] = 0.693974;
	vertices[3434] = 0.376006;

	vertices[3435] = 1.2032;
	vertices[3436] = 0.748662;
	vertices[3437] = 0.407256;

	vertices[3438] = 0.789134;
	vertices[3439] = 0.693974;
	vertices[3440] = 0.376006;

	vertices[3441] = 0.765697;
	vertices[3442] = 0.670537;
	vertices[3443] = 0.461943;

	vertices[3444] = 0.796947;
	vertices[3445] = 0.733037;
	vertices[3446] = 0.469756;

	vertices[3447] = 0.796947;
	vertices[3448] = 0.748662;
	vertices[3449] = 0.407256;

	vertices[3450] = 1.2032;
	vertices[3451] = 0.733037;
	vertices[3452] = 0.469756;

	vertices[3453] = 1.2032;
	vertices[3454] = 0.748662;
	vertices[3455] = 0.407256;

	vertices[3456] = 1.43757;
	vertices[3457] = 0.826787;
	vertices[3458] = 0.376006;

	vertices[3459] = 1.43757;
	vertices[3460] = 0.779912;
	vertices[3461] = 0.438506;

	vertices[3462] = 0.562572;
	vertices[3463] = 0.826787;
	vertices[3464] = 0.376006;

	vertices[3465] = 0.796947;
	vertices[3466] = 0.748662;
	vertices[3467] = 0.407256;

	vertices[3468] = 0.796947;
	vertices[3469] = 0.733037;
	vertices[3470] = 0.469756;

	vertices[3471] = 0.562572;
	vertices[3472] = 0.779912;
	vertices[3473] = 0.438506;

	vertices[3474] = 1.00007;
	vertices[3475] = 0.990849;
	vertices[3476] = -0.920869;

	vertices[3477] = 1.33601;
	vertices[3478] = 0.975224;
	vertices[3479] = -0.756807;

	vertices[3480] = 1.34382;
	vertices[3481] = 0.772099;
	vertices[3482] = -0.631807;

	vertices[3483] = 1.00007;
	vertices[3484] = 0.725224;
	vertices[3485] = -0.764619;

	vertices[3486] = 0.656322;
	vertices[3487] = 0.772099;
	vertices[3488] = -0.631807;

	vertices[3489] = 0.664134;
	vertices[3490] = 0.975224;
	vertices[3491] = -0.756807;

	vertices[3492] = 1.00007;
	vertices[3493] = 0.990849;
	vertices[3494] = -0.920869;

	vertices[3495] = 1.00007;
	vertices[3496] = 0.725224;
	vertices[3497] = -0.764619;

	vertices[3498] = 1.00007;
	vertices[3499] = 0.725224;
	vertices[3500] = -0.764619;

	vertices[3501] = 1.34382;
	vertices[3502] = 0.772099;
	vertices[3503] = -0.631807;

	vertices[3504] = 1.29695;
	vertices[3505] = 0.608037;
	vertices[3506] = -0.358369;

	vertices[3507] = 1.00007;
	vertices[3508] = 0.537724;
	vertices[3509] = -0.444307;

	vertices[3510] = 0.703197;
	vertices[3511] = 0.608037;
	vertices[3512] = -0.358369;

	vertices[3513] = 0.656322;
	vertices[3514] = 0.772099;
	vertices[3515] = -0.631807;

	vertices[3516] = 1.00007;
	vertices[3517] = 0.725224;
	vertices[3518] = -0.764619;

	vertices[3519] = 1.00007;
	vertices[3520] = 0.537724;
	vertices[3521] = -0.444307;

	vertices[3522] = 1.00007;
	vertices[3523] = 0.537724;
	vertices[3524] = -0.444307;

	vertices[3525] = 1.29695;
	vertices[3526] = 0.608037;
	vertices[3527] = -0.358369;

	vertices[3528] = 1.21101;
	vertices[3529] = 0.529912;
	vertices[3530] = 0.071318;

	vertices[3531] = 1.00007;
	vertices[3532] = 0.459599;
	vertices[3533] = 0.094756;

	vertices[3534] = 0.789134;
	vertices[3535] = 0.529912;
	vertices[3536] = 0.071318;

	vertices[3537] = 0.703197;
	vertices[3538] = 0.608037;
	vertices[3539] = -0.358369;

	vertices[3540] = 1.00007;
	vertices[3541] = 0.537724;
	vertices[3542] = -0.444307;

	vertices[3543] = 1.00007;
	vertices[3544] = 0.459599;
	vertices[3545] = 0.094756;

	vertices[3546] = 1.00007;
	vertices[3547] = 0.459599;
	vertices[3548] = 0.094756;

	vertices[3549] = 1.21101;
	vertices[3550] = 0.529912;
	vertices[3551] = 0.071318;

	vertices[3552] = 1.17976;
	vertices[3553] = 0.506474;
	vertices[3554] = 0.165068;

	vertices[3555] = 1.00007;
	vertices[3556] = 0.436162;
	vertices[3557] = 0.188506;

	vertices[3558] = 0.820384;
	vertices[3559] = 0.506474;
	vertices[3560] = 0.165068;

	vertices[3561] = 0.789134;
	vertices[3562] = 0.529912;
	vertices[3563] = 0.071318;

	vertices[3564] = 1.00007;
	vertices[3565] = 0.459599;
	vertices[3566] = 0.094756;

	vertices[3567] = 1.00007;
	vertices[3568] = 0.436162;
	vertices[3569] = 0.188506;

	vertices[3570] = 1.23445;
	vertices[3571] = 0.568974;
	vertices[3572] = 0.313506;

	vertices[3573] = 1.17976;
	vertices[3574] = 0.506474;
	vertices[3575] = 0.165068;

	vertices[3576] = 1.21101;
	vertices[3577] = 0.529912;
	vertices[3578] = 0.071318;

	vertices[3579] = 1.21882;
	vertices[3580] = 0.639287;
	vertices[3581] = 0.336943;

	vertices[3582] = 0.789134;
	vertices[3583] = 0.529912;
	vertices[3584] = 0.071318;

	vertices[3585] = 0.820384;
	vertices[3586] = 0.506474;
	vertices[3587] = 0.165068;

	vertices[3588] = 0.765697;
	vertices[3589] = 0.568974;
	vertices[3590] = 0.313506;

	vertices[3591] = 0.781322;
	vertices[3592] = 0.639287;
	vertices[3593] = 0.336943;

	vertices[3594] = 1.77351;
	vertices[3595] = 1.0846;
	vertices[3596] = 0.282256;

	vertices[3597] = 1.60163;
	vertices[3598] = 0.920537;
	vertices[3599] = 0.321318;

	vertices[3600] = 1.73445;
	vertices[3601] = 0.873662;
	vertices[3602] = -0.022432;

	vertices[3603] = 1.85163;
	vertices[3604] = 1.15491;
	vertices[3605] = -0.038057;

	vertices[3606] = 0.265697;
	vertices[3607] = 0.873662;
	vertices[3608] = -0.022432;

	vertices[3609] = 0.398509;
	vertices[3610] = 0.920537;
	vertices[3611] = 0.321318;

	vertices[3612] = 0.226634;
	vertices[3613] = 1.0846;
	vertices[3614] = 0.282256;

	vertices[3615] = 0.148509;
	vertices[3616] = 1.15491;
	vertices[3617] = -0.038057;

	vertices[3618] = 1.00007;
	vertices[3619] = 1.48304;
	vertices[3620] = -0.944307;

	vertices[3621] = 1.46101;
	vertices[3622] = 1.35804;
	vertices[3623] = -0.795869;

	vertices[3624] = 1.33601;
	vertices[3625] = 0.975224;
	vertices[3626] = -0.756807;

	vertices[3627] = 1.00007;
	vertices[3628] = 0.990849;
	vertices[3629] = -0.920869;

	vertices[3630] = 0.664134;
	vertices[3631] = 0.975224;
	vertices[3632] = -0.756807;

	vertices[3633] = 0.539134;
	vertices[3634] = 1.35804;
	vertices[3635] = -0.795869;

	vertices[3636] = 1.00007;
	vertices[3637] = 1.48304;
	vertices[3638] = -0.944307;

	vertices[3639] = 1.00007;
	vertices[3640] = 0.990849;
	vertices[3641] = -0.920869;

	vertices[3642] = 1.00007;
	vertices[3643] = 1.81897;
	vertices[3644] = 0.196318;

	vertices[3645] = 1.4532;
	vertices[3646] = 1.7721;
	vertices[3647] = 0.141631;

	vertices[3648] = 1.4532;
	vertices[3649] = 1.85022;
	vertices[3650] = -0.163057;

	vertices[3651] = 1.00007;
	vertices[3652] = 1.90491;
	vertices[3653] = -0.170869;

	vertices[3654] = 0.546947;
	vertices[3655] = 1.85022;
	vertices[3656] = -0.163057;

	vertices[3657] = 0.546947;
	vertices[3658] = 1.7721;
	vertices[3659] = 0.141631;

	vertices[3660] = 1.00007;
	vertices[3661] = 1.81897;
	vertices[3662] = 0.196318;

	vertices[3663] = 1.00007;
	vertices[3664] = 1.90491;
	vertices[3665] = -0.170869;

	vertices[3666] = 1.00007;
	vertices[3667] = 1.90491;
	vertices[3668] = -0.170869;

	vertices[3669] = 1.4532;
	vertices[3670] = 1.85022;
	vertices[3671] = -0.163057;

	vertices[3672] = 1.4532;
	vertices[3673] = 1.78772;
	vertices[3674] = -0.475557;

	vertices[3675] = 1.00007;
	vertices[3676] = 1.81897;
	vertices[3677] = -0.639619;

	vertices[3678] = 0.546947;
	vertices[3679] = 1.78772;
	vertices[3680] = -0.475557;

	vertices[3681] = 0.546947;
	vertices[3682] = 1.85022;
	vertices[3683] = -0.163057;

	vertices[3684] = 1.00007;
	vertices[3685] = 1.90491;
	vertices[3686] = -0.170869;

	vertices[3687] = 1.00007;
	vertices[3688] = 1.81897;
	vertices[3689] = -0.639619;

	vertices[3690] = 1.00007;
	vertices[3691] = 1.81897;
	vertices[3692] = -0.639619;

	vertices[3693] = 1.4532;
	vertices[3694] = 1.78772;
	vertices[3695] = -0.475557;

	vertices[3696] = 1.46101;
	vertices[3697] = 1.35804;
	vertices[3698] = -0.795869;

	vertices[3699] = 1.00007;
	vertices[3700] = 1.48304;
	vertices[3701] = -0.944307;

	vertices[3702] = 0.539134;
	vertices[3703] = 1.35804;
	vertices[3704] = -0.795869;

	vertices[3705] = 0.546947;
	vertices[3706] = 1.78772;
	vertices[3707] = -0.475557;

	vertices[3708] = 1.00007;
	vertices[3709] = 1.81897;
	vertices[3710] = -0.639619;

	vertices[3711] = 1.00007;
	vertices[3712] = 1.48304;
	vertices[3713] = -0.944307;

	vertices[3714] = 1.67976;
	vertices[3715] = 1.37366;
	vertices[3716] = 0.399443;

	vertices[3717] = 1.79695;
	vertices[3718] = 1.32679;
	vertices[3719] = 0.368193;

	vertices[3720] = 1.72663;
	vertices[3721] = 1.32679;
	vertices[3722] = 0.243193;

	vertices[3723] = 1.63288;
	vertices[3724] = 1.37366;
	vertices[3725] = 0.188506;

	vertices[3726] = 0.273509;
	vertices[3727] = 1.32679;
	vertices[3728] = 0.243193;

	vertices[3729] = 0.203197;
	vertices[3730] = 1.32679;
	vertices[3731] = 0.368193;

	vertices[3732] = 0.320384;
	vertices[3733] = 1.37366;
	vertices[3734] = 0.399443;

	vertices[3735] = 0.367259;
	vertices[3736] = 1.37366;
	vertices[3737] = 0.188506;

	vertices[3738] = 1.63288;
	vertices[3739] = 1.37366;
	vertices[3740] = 0.188506;

	vertices[3741] = 1.72663;
	vertices[3742] = 1.32679;
	vertices[3743] = 0.243193;

	vertices[3744] = 1.79695;
	vertices[3745] = 1.48304;
	vertices[3746] = 0.032256;

	vertices[3747] = 1.6407;
	vertices[3748] = 1.62366;
	vertices[3749] = -0.038057;

	vertices[3750] = 0.203197;
	vertices[3751] = 1.48304;
	vertices[3752] = 0.032256;

	vertices[3753] = 0.273509;
	vertices[3754] = 1.32679;
	vertices[3755] = 0.243193;

	vertices[3756] = 0.367259;
	vertices[3757] = 1.37366;
	vertices[3758] = 0.188506;

	vertices[3759] = 0.359447;
	vertices[3760] = 1.62366;
	vertices[3761] = -0.038057;

	vertices[3762] = 1.6407;
	vertices[3763] = 1.62366;
	vertices[3764] = -0.038057;

	vertices[3765] = 1.79695;
	vertices[3766] = 1.48304;
	vertices[3767] = 0.032256;

	vertices[3768] = 1.79695;
	vertices[3769] = 1.53772;
	vertices[3770] = -0.209932;

	vertices[3771] = 1.6407;
	vertices[3772] = 1.67054;
	vertices[3773] = -0.288057;

	vertices[3774] = 0.203197;
	vertices[3775] = 1.53772;
	vertices[3776] = -0.209932;

	vertices[3777] = 0.203197;
	vertices[3778] = 1.48304;
	vertices[3779] = 0.032256;

	vertices[3780] = 0.359447;
	vertices[3781] = 1.62366;
	vertices[3782] = -0.038057;

	vertices[3783] = 0.359447;
	vertices[3784] = 1.67054;
	vertices[3785] = -0.288057;

	vertices[3786] = 1.6407;
	vertices[3787] = 1.67054;
	vertices[3788] = -0.288057;

	vertices[3789] = 1.79695;
	vertices[3790] = 1.53772;
	vertices[3791] = -0.209932;

	vertices[3792] = 1.79695;
	vertices[3793] = 1.4596;
	vertices[3794] = -0.452119;

	vertices[3795] = 1.6407;
	vertices[3796] = 1.60022;
	vertices[3797] = -0.538057;

	vertices[3798] = 0.203197;
	vertices[3799] = 1.4596;
	vertices[3800] = -0.452119;

	vertices[3801] = 0.203197;
	vertices[3802] = 1.53772;
	vertices[3803] = -0.209932;

	vertices[3804] = 0.359447;
	vertices[3805] = 1.67054;
	vertices[3806] = -0.288057;

	vertices[3807] = 0.359447;
	vertices[3808] = 1.60022;
	vertices[3809] = -0.538057;

	vertices[3810] = 1.77351;
	vertices[3811] = 1.18616;
	vertices[3812] = -0.530244;

	vertices[3813] = 1.61726;
	vertices[3814] = 1.24866;
	vertices[3815] = -0.678682;

	vertices[3816] = 1.6407;
	vertices[3817] = 1.60022;
	vertices[3818] = -0.538057;

	vertices[3819] = 1.79695;
	vertices[3820] = 1.4596;
	vertices[3821] = -0.452119;

	vertices[3822] = 0.359447;
	vertices[3823] = 1.60022;
	vertices[3824] = -0.538057;

	vertices[3825] = 0.382884;
	vertices[3826] = 1.24866;
	vertices[3827] = -0.678682;

	vertices[3828] = 0.226634;
	vertices[3829] = 1.18616;
	vertices[3830] = -0.530244;

	vertices[3831] = 0.203197;
	vertices[3832] = 1.4596;
	vertices[3833] = -0.452119;

	vertices[3834] = 1.46101;
	vertices[3835] = 1.35804;
	vertices[3836] = -0.795869;

	vertices[3837] = 1.4532;
	vertices[3838] = 1.78772;
	vertices[3839] = -0.475557;

	vertices[3840] = 1.6407;
	vertices[3841] = 1.60022;
	vertices[3842] = -0.538057;

	vertices[3843] = 1.61726;
	vertices[3844] = 1.24866;
	vertices[3845] = -0.678682;

	vertices[3846] = 0.359447;
	vertices[3847] = 1.60022;
	vertices[3848] = -0.538057;

	vertices[3849] = 0.546947;
	vertices[3850] = 1.78772;
	vertices[3851] = -0.475557;

	vertices[3852] = 0.539134;
	vertices[3853] = 1.35804;
	vertices[3854] = -0.795869;

	vertices[3855] = 0.382884;
	vertices[3856] = 1.24866;
	vertices[3857] = -0.678682;

	vertices[3858] = 1.4532;
	vertices[3859] = 1.78772;
	vertices[3860] = -0.475557;

	vertices[3861] = 1.4532;
	vertices[3862] = 1.85022;
	vertices[3863] = -0.163057;

	vertices[3864] = 1.6407;
	vertices[3865] = 1.67054;
	vertices[3866] = -0.288057;

	vertices[3867] = 1.6407;
	vertices[3868] = 1.60022;
	vertices[3869] = -0.538057;

	vertices[3870] = 0.359447;
	vertices[3871] = 1.67054;
	vertices[3872] = -0.288057;

	vertices[3873] = 0.546947;
	vertices[3874] = 1.85022;
	vertices[3875] = -0.163057;

	vertices[3876] = 0.546947;
	vertices[3877] = 1.78772;
	vertices[3878] = -0.475557;

	vertices[3879] = 0.359447;
	vertices[3880] = 1.60022;
	vertices[3881] = -0.538057;

	vertices[3882] = 1.4532;
	vertices[3883] = 1.85022;
	vertices[3884] = -0.163057;

	vertices[3885] = 1.4532;
	vertices[3886] = 1.7721;
	vertices[3887] = 0.141631;

	vertices[3888] = 1.6407;
	vertices[3889] = 1.62366;
	vertices[3890] = -0.038057;

	vertices[3891] = 1.6407;
	vertices[3892] = 1.67054;
	vertices[3893] = -0.288057;

	vertices[3894] = 0.359447;
	vertices[3895] = 1.62366;
	vertices[3896] = -0.038057;

	vertices[3897] = 0.546947;
	vertices[3898] = 1.7721;
	vertices[3899] = 0.141631;

	vertices[3900] = 0.546947;
	vertices[3901] = 1.85022;
	vertices[3902] = -0.163057;

	vertices[3903] = 0.359447;
	vertices[3904] = 1.67054;
	vertices[3905] = -0.288057;

	vertices[3906] = 1.4532;
	vertices[3907] = 1.7721;
	vertices[3908] = 0.141631;

	vertices[3909] = 1.46101;
	vertices[3910] = 1.44397;
	vertices[3911] = 0.336943;

	vertices[3912] = 1.63288;
	vertices[3913] = 1.37366;
	vertices[3914] = 0.188506;

	vertices[3915] = 1.6407;
	vertices[3916] = 1.62366;
	vertices[3917] = -0.038057;

	vertices[3918] = 0.367259;
	vertices[3919] = 1.37366;
	vertices[3920] = 0.188506;

	vertices[3921] = 0.539134;
	vertices[3922] = 1.44397;
	vertices[3923] = 0.336943;

	vertices[3924] = 0.546947;
	vertices[3925] = 1.7721;
	vertices[3926] = 0.141631;

	vertices[3927] = 0.359447;
	vertices[3928] = 1.62366;
	vertices[3929] = -0.038057;

	vertices[3930] = 1.48445;
	vertices[3931] = 1.47522;
	vertices[3932] = 0.461943;

	vertices[3933] = 1.67976;
	vertices[3934] = 1.37366;
	vertices[3935] = 0.399443;

	vertices[3936] = 1.63288;
	vertices[3937] = 1.37366;
	vertices[3938] = 0.188506;

	vertices[3939] = 1.46101;
	vertices[3940] = 1.44397;
	vertices[3941] = 0.336943;

	vertices[3942] = 0.367259;
	vertices[3943] = 1.37366;
	vertices[3944] = 0.188506;

	vertices[3945] = 0.320384;
	vertices[3946] = 1.37366;
	vertices[3947] = 0.399443;

	vertices[3948] = 0.515697;
	vertices[3949] = 1.47522;
	vertices[3950] = 0.461943;

	vertices[3951] = 0.539134;
	vertices[3952] = 1.44397;
	vertices[3953] = 0.336943;

	vertices[3954] = 1.00007;
	vertices[3955] = 1.49085;
	vertices[3956] = 0.477568;

	vertices[3957] = 1.46101;
	vertices[3958] = 1.44397;
	vertices[3959] = 0.336943;

	vertices[3960] = 1.4532;
	vertices[3961] = 1.7721;
	vertices[3962] = 0.141631;

	vertices[3963] = 1.00007;
	vertices[3964] = 1.81897;
	vertices[3965] = 0.196318;

	vertices[3966] = 0.546947;
	vertices[3967] = 1.7721;
	vertices[3968] = 0.141631;

	vertices[3969] = 0.539134;
	vertices[3970] = 1.44397;
	vertices[3971] = 0.336943;

	vertices[3972] = 1.00007;
	vertices[3973] = 1.49085;
	vertices[3974] = 0.477568;

	vertices[3975] = 1.00007;
	vertices[3976] = 1.81897;
	vertices[3977] = 0.196318;

	vertices[3978] = 1.10945;
	vertices[3979] = 1.38147;
	vertices[3980] = 0.516631;

	vertices[3981] = 1.19538;
	vertices[3982] = 1.5846;
	vertices[3983] = 0.524443;

	vertices[3984] = 1.33601;
	vertices[3985] = 1.60804;
	vertices[3986] = 0.501006;

	vertices[3987] = 1.48445;
	vertices[3988] = 1.47522;
	vertices[3989] = 0.461943;

	vertices[3990] = 0.664134;
	vertices[3991] = 1.60804;
	vertices[3992] = 0.501006;

	vertices[3993] = 0.804759;
	vertices[3994] = 1.5846;
	vertices[3995] = 0.524443;

	vertices[3996] = 0.890697;
	vertices[3997] = 1.38147;
	vertices[3998] = 0.516631;

	vertices[3999] = 0.515697;
	vertices[4000] = 1.47522;
	vertices[4001] = 0.461943;

	vertices[4002] = 1.10945;
	vertices[4003] = 1.38147;
	vertices[4004] = 0.516631;

	vertices[4005] = 1.48445;
	vertices[4006] = 1.47522;
	vertices[4007] = 0.461943;

	vertices[4008] = 1.46101;
	vertices[4009] = 1.44397;
	vertices[4010] = 0.336943;

	vertices[4011] = 1.00007;
	vertices[4012] = 1.49085;
	vertices[4013] = 0.477568;

	vertices[4014] = 0.539134;
	vertices[4015] = 1.44397;
	vertices[4016] = 0.336943;

	vertices[4017] = 0.515697;
	vertices[4018] = 1.47522;
	vertices[4019] = 0.461943;

	vertices[4020] = 0.890697;
	vertices[4021] = 1.38147;
	vertices[4022] = 0.516631;

	vertices[4023] = 1.00007;
	vertices[4024] = 1.49085;
	vertices[4025] = 0.477568;

	vertices[4026] = 1.00007;
	vertices[4027] = 1.32679;
	vertices[4028] = 0.508818;

	vertices[4029] = 1.10945;
	vertices[4030] = 1.38147;
	vertices[4031] = 0.516631;

	vertices[4032] = 1.00007;
	vertices[4033] = 1.49085;
	vertices[4034] = 0.477568;

	vertices[4035] = 1.00007;
	vertices[4036] = 1.49085;
	vertices[4037] = 0.477568;

	vertices[4038] = 0.890697;
	vertices[4039] = 1.38147;
	vertices[4040] = 0.516631;

	vertices[4041] = 1.00007;
	vertices[4042] = 1.32679;
	vertices[4043] = 0.508818;

	vertices[4044] = 1.79695;
	vertices[4045] = 1.32679;
	vertices[4046] = 0.368193;

	vertices[4047] = 1.77351;
	vertices[4048] = 1.0846;
	vertices[4049] = 0.282256;

	vertices[4050] = 1.85163;
	vertices[4051] = 1.15491;
	vertices[4052] = -0.038057;

	vertices[4053] = 1.72663;
	vertices[4054] = 1.32679;
	vertices[4055] = 0.243193;

	vertices[4056] = 0.148509;
	vertices[4057] = 1.15491;
	vertices[4058] = -0.038057;

	vertices[4059] = 0.226634;
	vertices[4060] = 1.0846;
	vertices[4061] = 0.282256;

	vertices[4062] = 0.203197;
	vertices[4063] = 1.32679;
	vertices[4064] = 0.368193;

	vertices[4065] = 0.273509;
	vertices[4066] = 1.32679;
	vertices[4067] = 0.243193;

	vertices[4068] = 1.85163;
	vertices[4069] = 1.15491;
	vertices[4070] = -0.038057;

	vertices[4071] = 1.85945;
	vertices[4072] = 1.24085;
	vertices[4073] = -0.139619;

	vertices[4074] = 1.79695;
	vertices[4075] = 1.48304;
	vertices[4076] = 0.032256;

	vertices[4077] = 1.72663;
	vertices[4078] = 1.32679;
	vertices[4079] = 0.243193;

	vertices[4080] = 0.203197;
	vertices[4081] = 1.48304;
	vertices[4082] = 0.032256;

	vertices[4083] = 0.140697;
	vertices[4084] = 1.24085;
	vertices[4085] = -0.139619;

	vertices[4086] = 0.148509;
	vertices[4087] = 1.15491;
	vertices[4088] = -0.038057;

	vertices[4089] = 0.273509;
	vertices[4090] = 1.32679;
	vertices[4091] = 0.243193;

	vertices[4092] = 1.85945;
	vertices[4093] = 1.24085;
	vertices[4094] = -0.139619;

	vertices[4095] = 1.82038;
	vertices[4096] = 1.24866;
	vertices[4097] = -0.295869;

	vertices[4098] = 1.79695;
	vertices[4099] = 1.53772;
	vertices[4100] = -0.209932;

	vertices[4101] = 1.79695;
	vertices[4102] = 1.48304;
	vertices[4103] = 0.032256;

	vertices[4104] = 0.203197;
	vertices[4105] = 1.53772;
	vertices[4106] = -0.209932;

	vertices[4107] = 0.179759;
	vertices[4108] = 1.24866;
	vertices[4109] = -0.295869;

	vertices[4110] = 0.140697;
	vertices[4111] = 1.24085;
	vertices[4112] = -0.139619;

	vertices[4113] = 0.203197;
	vertices[4114] = 1.48304;
	vertices[4115] = 0.032256;

	vertices[4116] = 1.77351;
	vertices[4117] = 1.18616;
	vertices[4118] = -0.530244;

	vertices[4119] = 1.79695;
	vertices[4120] = 1.4596;
	vertices[4121] = -0.452119;

	vertices[4122] = 1.79695;
	vertices[4123] = 1.53772;
	vertices[4124] = -0.209932;

	vertices[4125] = 1.82038;
	vertices[4126] = 1.24866;
	vertices[4127] = -0.295869;

	vertices[4128] = 0.203197;
	vertices[4129] = 1.53772;
	vertices[4130] = -0.209932;

	vertices[4131] = 0.203197;
	vertices[4132] = 1.4596;
	vertices[4133] = -0.452119;

	vertices[4134] = 0.226634;
	vertices[4135] = 1.18616;
	vertices[4136] = -0.530244;

	vertices[4137] = 0.179759;
	vertices[4138] = 1.24866;
	vertices[4139] = -0.295869;

	vertices[4140] = 1.21101;
	vertices[4141] = 0.529912;
	vertices[4142] = 0.071318;

	vertices[4143] = 1.29695;
	vertices[4144] = 0.608037;
	vertices[4145] = -0.358369;

	vertices[4146] = 1.42976;
	vertices[4147] = 0.725224;
	vertices[4148] = -0.303682;

	vertices[4149] = 1.40632;
	vertices[4150] = 0.748662;
	vertices[4151] = 0.055693;

	vertices[4152] = 0.570384;
	vertices[4153] = 0.725224;
	vertices[4154] = -0.303682;

	vertices[4155] = 0.703197;
	vertices[4156] = 0.608037;
	vertices[4157] = -0.358369;

	vertices[4158] = 0.789134;
	vertices[4159] = 0.529912;
	vertices[4160] = 0.071318;

	vertices[4161] = 0.593822;
	vertices[4162] = 0.748662;
	vertices[4163] = 0.055693;

	vertices[4164] = 1.73445;
	vertices[4165] = 0.873662;
	vertices[4166] = -0.022432;

	vertices[4167] = 1.40632;
	vertices[4168] = 0.748662;
	vertices[4169] = 0.055693;

	vertices[4170] = 1.42976;
	vertices[4171] = 0.725224;
	vertices[4172] = -0.303682;

	vertices[4173] = 1.59382;
	vertices[4174] = 0.795537;
	vertices[4175] = -0.256807;

	vertices[4176] = 0.570384;
	vertices[4177] = 0.725224;
	vertices[4178] = -0.303682;

	vertices[4179] = 0.593822;
	vertices[4180] = 0.748662;
	vertices[4181] = 0.055693;

	vertices[4182] = 0.265697;
	vertices[4183] = 0.873662;
	vertices[4184] = -0.022432;

	vertices[4185] = 0.406322;
	vertices[4186] = 0.795537;
	vertices[4187] = -0.256807;

	vertices[4188] = 1.60163;
	vertices[4189] = 0.920537;
	vertices[4190] = 0.321318;

	vertices[4191] = 1.43757;
	vertices[4192] = 0.826787;
	vertices[4193] = 0.376006;

	vertices[4194] = 1.40632;
	vertices[4195] = 0.748662;
	vertices[4196] = 0.055693;

	vertices[4197] = 1.73445;
	vertices[4198] = 0.873662;
	vertices[4199] = -0.022432;

	vertices[4200] = 0.593822;
	vertices[4201] = 0.748662;
	vertices[4202] = 0.055693;

	vertices[4203] = 0.562572;
	vertices[4204] = 0.826787;
	vertices[4205] = 0.376006;

	vertices[4206] = 0.398509;
	vertices[4207] = 0.920537;
	vertices[4208] = 0.321318;

	vertices[4209] = 0.265697;
	vertices[4210] = 0.873662;
	vertices[4211] = -0.022432;

	vertices[4212] = 1.43757;
	vertices[4213] = 0.826787;
	vertices[4214] = 0.376006;

	vertices[4215] = 1.21101;
	vertices[4216] = 0.693974;
	vertices[4217] = 0.376006;

	vertices[4218] = 1.21882;
	vertices[4219] = 0.639287;
	vertices[4220] = 0.336943;

	vertices[4221] = 1.40632;
	vertices[4222] = 0.748662;
	vertices[4223] = 0.055693;

	vertices[4224] = 0.781322;
	vertices[4225] = 0.639287;
	vertices[4226] = 0.336943;

	vertices[4227] = 0.789134;
	vertices[4228] = 0.693974;
	vertices[4229] = 0.376006;

	vertices[4230] = 0.562572;
	vertices[4231] = 0.826787;
	vertices[4232] = 0.376006;

	vertices[4233] = 0.593822;
	vertices[4234] = 0.748662;
	vertices[4235] = 0.055693;

	vertices[4236] = 1.21882;
	vertices[4237] = 0.639287;
	vertices[4238] = 0.336943;

	vertices[4239] = 1.21101;
	vertices[4240] = 0.529912;
	vertices[4241] = 0.071318;

	vertices[4242] = 1.40632;
	vertices[4243] = 0.748662;
	vertices[4244] = 0.055693;

	vertices[4245] = 0.593822;
	vertices[4246] = 0.748662;
	vertices[4247] = 0.055693;

	vertices[4248] = 0.789134;
	vertices[4249] = 0.529912;
	vertices[4250] = 0.071318;

	vertices[4251] = 0.781322;
	vertices[4252] = 0.639287;
	vertices[4253] = 0.336943;

	vertices[4254] = 1.43757;
	vertices[4255] = 0.826787;
	vertices[4256] = 0.376006;

	vertices[4257] = 1.2032;
	vertices[4258] = 0.748662;
	vertices[4259] = 0.407256;

	vertices[4260] = 1.21101;
	vertices[4261] = 0.693974;
	vertices[4262] = 0.376006;

	vertices[4263] = 0.789134;
	vertices[4264] = 0.693974;
	vertices[4265] = 0.376006;

	vertices[4266] = 0.796947;
	vertices[4267] = 0.748662;
	vertices[4268] = 0.407256;

	vertices[4269] = 0.562572;
	vertices[4270] = 0.826787;
	vertices[4271] = 0.376006;

	vertices[4272] = 1.77351;
	vertices[4273] = 1.18616;
	vertices[4274] = -0.530244;

	vertices[4275] = 1.6407;
	vertices[4276] = 0.912724;
	vertices[4277] = -0.522432;

	vertices[4278] = 1.48445;
	vertices[4279] = 0.943974;
	vertices[4280] = -0.639619;

	vertices[4281] = 1.61726;
	vertices[4282] = 1.24866;
	vertices[4283] = -0.678682;

	vertices[4284] = 0.515697;
	vertices[4285] = 0.943974;
	vertices[4286] = -0.639619;

	vertices[4287] = 0.359447;
	vertices[4288] = 0.912724;
	vertices[4289] = -0.522432;

	vertices[4290] = 0.226634;
	vertices[4291] = 1.18616;
	vertices[4292] = -0.530244;

	vertices[4293] = 0.382884;
	vertices[4294] = 1.24866;
	vertices[4295] = -0.678682;

	vertices[4296] = 1.46101;
	vertices[4297] = 1.35804;
	vertices[4298] = -0.795869;

	vertices[4299] = 1.61726;
	vertices[4300] = 1.24866;
	vertices[4301] = -0.678682;

	vertices[4302] = 1.48445;
	vertices[4303] = 0.943974;
	vertices[4304] = -0.639619;

	vertices[4305] = 1.33601;
	vertices[4306] = 0.975224;
	vertices[4307] = -0.756807;

	vertices[4308] = 0.515697;
	vertices[4309] = 0.943974;
	vertices[4310] = -0.639619;

	vertices[4311] = 0.382884;
	vertices[4312] = 1.24866;
	vertices[4313] = -0.678682;

	vertices[4314] = 0.539134;
	vertices[4315] = 1.35804;
	vertices[4316] = -0.795869;

	vertices[4317] = 0.664134;
	vertices[4318] = 0.975224;
	vertices[4319] = -0.756807;

	vertices[4320] = 1.59382;
	vertices[4321] = 0.795537;
	vertices[4322] = -0.256807;

	vertices[4323] = 1.42976;
	vertices[4324] = 0.725224;
	vertices[4325] = -0.303682;

	vertices[4326] = 1.48445;
	vertices[4327] = 0.943974;
	vertices[4328] = -0.639619;

	vertices[4329] = 1.6407;
	vertices[4330] = 0.912724;
	vertices[4331] = -0.522432;

	vertices[4332] = 0.515697;
	vertices[4333] = 0.943974;
	vertices[4334] = -0.639619;

	vertices[4335] = 0.570384;
	vertices[4336] = 0.725224;
	vertices[4337] = -0.303682;

	vertices[4338] = 0.406322;
	vertices[4339] = 0.795537;
	vertices[4340] = -0.256807;

	vertices[4341] = 0.359447;
	vertices[4342] = 0.912724;
	vertices[4343] = -0.522432;

	vertices[4344] = 1.29695;
	vertices[4345] = 0.608037;
	vertices[4346] = -0.358369;

	vertices[4347] = 1.34382;
	vertices[4348] = 0.772099;
	vertices[4349] = -0.631807;

	vertices[4350] = 1.48445;
	vertices[4351] = 0.943974;
	vertices[4352] = -0.639619;

	vertices[4353] = 1.42976;
	vertices[4354] = 0.725224;
	vertices[4355] = -0.303682;

	vertices[4356] = 0.515697;
	vertices[4357] = 0.943974;
	vertices[4358] = -0.639619;

	vertices[4359] = 0.656322;
	vertices[4360] = 0.772099;
	vertices[4361] = -0.631807;

	vertices[4362] = 0.703197;
	vertices[4363] = 0.608037;
	vertices[4364] = -0.358369;

	vertices[4365] = 0.570384;
	vertices[4366] = 0.725224;
	vertices[4367] = -0.303682;

	vertices[4368] = 1.33601;
	vertices[4369] = 0.975224;
	vertices[4370] = -0.756807;

	vertices[4371] = 1.48445;
	vertices[4372] = 0.943974;
	vertices[4373] = -0.639619;

	vertices[4374] = 1.34382;
	vertices[4375] = 0.772099;
	vertices[4376] = -0.631807;

	vertices[4377] = 0.656322;
	vertices[4378] = 0.772099;
	vertices[4379] = -0.631807;

	vertices[4380] = 0.515697;
	vertices[4381] = 0.943974;
	vertices[4382] = -0.639619;

	vertices[4383] = 0.664134;
	vertices[4384] = 0.975224;
	vertices[4385] = -0.756807;

	vertices[4386] = 2.02351;
	vertices[4387] = 1.3971;
	vertices[4388] = -0.405244;

	vertices[4389] = 1.8907;
	vertices[4390] = 1.32679;
	vertices[4391] = -0.327119;

	vertices[4392] = 1.92195;
	vertices[4393] = 1.27991;
	vertices[4394] = -0.311494;

	vertices[4395] = 2.0157;
	vertices[4396] = 1.3346;
	vertices[4397] = -0.381807;

	vertices[4398] = 0.078197;
	vertices[4399] = 1.27991;
	vertices[4400] = -0.311494;

	vertices[4401] = 0.109447;
	vertices[4402] = 1.32679;
	vertices[4403] = -0.327119;

	vertices[4404] = -0.023366;
	vertices[4405] = 1.3971;
	vertices[4406] = -0.405244;

	vertices[4407] = -0.015553;
	vertices[4408] = 1.3346;
	vertices[4409] = -0.381807;

	vertices[4410] = 2.02351;
	vertices[4411] = 1.3971;
	vertices[4412] = -0.405244;

	vertices[4413] = 2.0157;
	vertices[4414] = 1.3346;
	vertices[4415] = -0.381807;

	vertices[4416] = 2.18757;
	vertices[4417] = 1.35804;
	vertices[4418] = -0.483369;

	vertices[4419] = 2.23445;
	vertices[4420] = 1.42835;
	vertices[4421] = -0.514619;

	vertices[4422] = -0.187428;
	vertices[4423] = 1.35804;
	vertices[4424] = -0.483369;

	vertices[4425] = -0.015553;
	vertices[4426] = 1.3346;
	vertices[4427] = -0.381807;

	vertices[4428] = -0.023366;
	vertices[4429] = 1.3971;
	vertices[4430] = -0.405244;

	vertices[4431] = -0.234303;
	vertices[4432] = 1.42835;
	vertices[4433] = -0.514619;

	vertices[4434] = 2.23445;
	vertices[4435] = 1.42835;
	vertices[4436] = -0.514619;

	vertices[4437] = 2.18757;
	vertices[4438] = 1.35804;
	vertices[4439] = -0.483369;

	vertices[4440] = 2.2657;
	vertices[4441] = 1.2096;
	vertices[4442] = -0.498994;

	vertices[4443] = 2.35163;
	vertices[4444] = 1.24085;
	vertices[4445] = -0.514619;

	vertices[4446] = -0.265553;
	vertices[4447] = 1.2096;
	vertices[4448] = -0.498994;

	vertices[4449] = -0.187428;
	vertices[4450] = 1.35804;
	vertices[4451] = -0.483369;

	vertices[4452] = -0.234303;
	vertices[4453] = 1.42835;
	vertices[4454] = -0.514619;

	vertices[4455] = -0.351491;
	vertices[4456] = 1.24085;
	vertices[4457] = -0.514619;

	vertices[4458] = 2.35163;
	vertices[4459] = 1.24085;
	vertices[4460] = -0.514619;

	vertices[4461] = 2.2657;
	vertices[4462] = 1.2096;
	vertices[4463] = -0.498994;

	vertices[4464] = 2.21101;
	vertices[4465] = 0.998662;
	vertices[4466] = -0.498994;

	vertices[4467] = 2.28132;
	vertices[4468] = 0.975224;
	vertices[4469] = -0.522432;

	vertices[4470] = -0.210866;
	vertices[4471] = 0.998662;
	vertices[4472] = -0.498994;

	vertices[4473] = -0.265553;
	vertices[4474] = 1.2096;
	vertices[4475] = -0.498994;

	vertices[4476] = -0.351491;
	vertices[4477] = 1.24085;
	vertices[4478] = -0.514619;

	vertices[4479] = -0.281178;
	vertices[4480] = 0.975224;
	vertices[4481] = -0.522432;

	vertices[4482] = 2.28132;
	vertices[4483] = 0.975224;
	vertices[4484] = -0.522432;

	vertices[4485] = 2.21101;
	vertices[4486] = 0.998662;
	vertices[4487] = -0.498994;

	vertices[4488] = 2.03132;
	vertices[4489] = 0.881474;
	vertices[4490] = -0.397432;

	vertices[4491] = 2.03913;
	vertices[4492] = 0.818974;
	vertices[4493] = -0.420869;

	vertices[4494] = -0.031178;
	vertices[4495] = 0.881474;
	vertices[4496] = -0.397432;

	vertices[4497] = -0.210866;
	vertices[4498] = 0.998662;
	vertices[4499] = -0.498994;

	vertices[4500] = -0.281178;
	vertices[4501] = 0.975224;
	vertices[4502] = -0.522432;

	vertices[4503] = -0.038991;
	vertices[4504] = 0.818974;
	vertices[4505] = -0.420869;

	vertices[4506] = 2.03913;
	vertices[4507] = 0.818974;
	vertices[4508] = -0.420869;

	vertices[4509] = 2.03132;
	vertices[4510] = 0.881474;
	vertices[4511] = -0.397432;

	vertices[4512] = 1.8282;
	vertices[4513] = 0.850224;
	vertices[4514] = -0.225557;

	vertices[4515] = 1.77351;
	vertices[4516] = 0.779912;
	vertices[4517] = -0.217744;

	vertices[4518] = 0.171947;
	vertices[4519] = 0.850224;
	vertices[4520] = -0.225557;

	vertices[4521] = -0.031178;
	vertices[4522] = 0.881474;
	vertices[4523] = -0.397432;

	vertices[4524] = -0.038991;
	vertices[4525] = 0.818974;
	vertices[4526] = -0.420869;

	vertices[4527] = 0.226634;
	vertices[4528] = 0.779912;
	vertices[4529] = -0.217744;

	vertices[4530] = 2.03132;
	vertices[4531] = 0.881474;
	vertices[4532] = -0.397432;

	vertices[4533] = 2.03913;
	vertices[4534] = 0.920537;
	vertices[4535] = -0.459932;

	vertices[4536] = 1.88288;
	vertices[4537] = 0.897099;
	vertices[4538] = -0.303682;

	vertices[4539] = 1.8282;
	vertices[4540] = 0.850224;
	vertices[4541] = -0.225557;

	vertices[4542] = 0.117259;
	vertices[4543] = 0.897099;
	vertices[4544] = -0.303682;

	vertices[4545] = -0.038991;
	vertices[4546] = 0.920537;
	vertices[4547] = -0.459932;

	vertices[4548] = -0.031178;
	vertices[4549] = 0.881474;
	vertices[4550] = -0.397432;

	vertices[4551] = 0.171947;
	vertices[4552] = 0.850224;
	vertices[4553] = -0.225557;

	vertices[4554] = 2.21101;
	vertices[4555] = 0.998662;
	vertices[4556] = -0.498994;

	vertices[4557] = 2.18757;
	vertices[4558] = 1.01429;
	vertices[4559] = -0.538057;

	vertices[4560] = 2.03913;
	vertices[4561] = 0.920537;
	vertices[4562] = -0.459932;

	vertices[4563] = 2.03132;
	vertices[4564] = 0.881474;
	vertices[4565] = -0.397432;

	vertices[4566] = -0.038991;
	vertices[4567] = 0.920537;
	vertices[4568] = -0.459932;

	vertices[4569] = -0.187428;
	vertices[4570] = 1.01429;
	vertices[4571] = -0.538057;

	vertices[4572] = -0.210866;
	vertices[4573] = 0.998662;
	vertices[4574] = -0.498994;

	vertices[4575] = -0.031178;
	vertices[4576] = 0.881474;
	vertices[4577] = -0.397432;

	vertices[4578] = 2.2657;
	vertices[4579] = 1.2096;
	vertices[4580] = -0.498994;

	vertices[4581] = 2.23445;
	vertices[4582] = 1.17054;
	vertices[4583] = -0.538057;

	vertices[4584] = 2.18757;
	vertices[4585] = 1.01429;
	vertices[4586] = -0.538057;

	vertices[4587] = 2.21101;
	vertices[4588] = 0.998662;
	vertices[4589] = -0.498994;

	vertices[4590] = -0.187428;
	vertices[4591] = 1.01429;
	vertices[4592] = -0.538057;

	vertices[4593] = -0.234303;
	vertices[4594] = 1.17054;
	vertices[4595] = -0.538057;

	vertices[4596] = -0.265553;
	vertices[4597] = 1.2096;
	vertices[4598] = -0.498994;

	vertices[4599] = -0.210866;
	vertices[4600] = 0.998662;
	vertices[4601] = -0.498994;

	vertices[4602] = 2.18757;
	vertices[4603] = 1.35804;
	vertices[4604] = -0.483369;

	vertices[4605] = 2.17195;
	vertices[4606] = 1.27991;
	vertices[4607] = -0.530244;

	vertices[4608] = 2.23445;
	vertices[4609] = 1.17054;
	vertices[4610] = -0.538057;

	vertices[4611] = 2.2657;
	vertices[4612] = 1.2096;
	vertices[4613] = -0.498994;

	vertices[4614] = -0.234303;
	vertices[4615] = 1.17054;
	vertices[4616] = -0.538057;

	vertices[4617] = -0.171803;
	vertices[4618] = 1.27991;
	vertices[4619] = -0.530244;

	vertices[4620] = -0.187428;
	vertices[4621] = 1.35804;
	vertices[4622] = -0.483369;

	vertices[4623] = -0.265553;
	vertices[4624] = 1.2096;
	vertices[4625] = -0.498994;

	vertices[4626] = 2.0157;
	vertices[4627] = 1.3346;
	vertices[4628] = -0.381807;

	vertices[4629] = 2.02351;
	vertices[4630] = 1.26429;
	vertices[4631] = -0.452119;

	vertices[4632] = 2.17195;
	vertices[4633] = 1.27991;
	vertices[4634] = -0.530244;

	vertices[4635] = 2.18757;
	vertices[4636] = 1.35804;
	vertices[4637] = -0.483369;

	vertices[4638] = -0.171803;
	vertices[4639] = 1.27991;
	vertices[4640] = -0.530244;

	vertices[4641] = -0.023366;
	vertices[4642] = 1.26429;
	vertices[4643] = -0.452119;

	vertices[4644] = -0.015553;
	vertices[4645] = 1.3346;
	vertices[4646] = -0.381807;

	vertices[4647] = -0.187428;
	vertices[4648] = 1.35804;
	vertices[4649] = -0.483369;

	vertices[4650] = 2.0157;
	vertices[4651] = 1.3346;
	vertices[4652] = -0.381807;

	vertices[4653] = 1.92195;
	vertices[4654] = 1.27991;
	vertices[4655] = -0.311494;

	vertices[4656] = 1.94538;
	vertices[4657] = 1.22522;
	vertices[4658] = -0.381807;

	vertices[4659] = 2.02351;
	vertices[4660] = 1.26429;
	vertices[4661] = -0.452119;

	vertices[4662] = 0.054759;
	vertices[4663] = 1.22522;
	vertices[4664] = -0.381807;

	vertices[4665] = 0.078197;
	vertices[4666] = 1.27991;
	vertices[4667] = -0.311494;

	vertices[4668] = -0.015553;
	vertices[4669] = 1.3346;
	vertices[4670] = -0.381807;

	vertices[4671] = -0.023366;
	vertices[4672] = 1.26429;
	vertices[4673] = -0.452119;

	vertices[4674] = 1.73445;
	vertices[4675] = 0.873662;
	vertices[4676] = -0.022432;

	vertices[4677] = 1.59382;
	vertices[4678] = 0.795537;
	vertices[4679] = -0.256807;

	vertices[4680] = 1.71882;
	vertices[4681] = 0.897099;
	vertices[4682] = -0.264619;

	vertices[4683] = 1.72663;
	vertices[4684] = 0.920537;
	vertices[4685] = -0.163057;

	vertices[4686] = 0.281322;
	vertices[4687] = 0.897099;
	vertices[4688] = -0.264619;

	vertices[4689] = 0.406322;
	vertices[4690] = 0.795537;
	vertices[4691] = -0.256807;

	vertices[4692] = 0.265697;
	vertices[4693] = 0.873662;
	vertices[4694] = -0.022432;

	vertices[4695] = 0.273509;
	vertices[4696] = 0.920537;
	vertices[4697] = -0.163057;

	vertices[4698] = 1.59382;
	vertices[4699] = 0.795537;
	vertices[4700] = -0.256807;

	vertices[4701] = 1.77351;
	vertices[4702] = 0.779912;
	vertices[4703] = -0.217744;

	vertices[4704] = 1.8282;
	vertices[4705] = 0.850224;
	vertices[4706] = -0.225557;

	vertices[4707] = 1.71882;
	vertices[4708] = 0.897099;
	vertices[4709] = -0.264619;

	vertices[4710] = 0.171947;
	vertices[4711] = 0.850224;
	vertices[4712] = -0.225557;

	vertices[4713] = 0.226634;
	vertices[4714] = 0.779912;
	vertices[4715] = -0.217744;

	vertices[4716] = 0.406322;
	vertices[4717] = 0.795537;
	vertices[4718] = -0.256807;

	vertices[4719] = 0.281322;
	vertices[4720] = 0.897099;
	vertices[4721] = -0.264619;

	vertices[4722] = 1.85163;
	vertices[4723] = 1.15491;
	vertices[4724] = -0.038057;

	vertices[4725] = 1.73445;
	vertices[4726] = 0.873662;
	vertices[4727] = -0.022432;

	vertices[4728] = 1.72663;
	vertices[4729] = 0.920537;
	vertices[4730] = -0.163057;

	vertices[4731] = 1.85945;
	vertices[4732] = 1.24085;
	vertices[4733] = -0.139619;

	vertices[4734] = 0.273509;
	vertices[4735] = 0.920537;
	vertices[4736] = -0.163057;

	vertices[4737] = 0.265697;
	vertices[4738] = 0.873662;
	vertices[4739] = -0.022432;

	vertices[4740] = 0.148509;
	vertices[4741] = 1.15491;
	vertices[4742] = -0.038057;

	vertices[4743] = 0.140697;
	vertices[4744] = 1.24085;
	vertices[4745] = -0.139619;

	vertices[4746] = 1.82038;
	vertices[4747] = 1.24866;
	vertices[4748] = -0.295869;

	vertices[4749] = 1.84382;
	vertices[4750] = 1.2096;
	vertices[4751] = -0.303682;

	vertices[4752] = 1.92195;
	vertices[4753] = 1.27991;
	vertices[4754] = -0.311494;

	vertices[4755] = 1.8907;
	vertices[4756] = 1.32679;
	vertices[4757] = -0.327119;

	vertices[4758] = 0.078197;
	vertices[4759] = 1.27991;
	vertices[4760] = -0.311494;

	vertices[4761] = 0.156322;
	vertices[4762] = 1.2096;
	vertices[4763] = -0.303682;

	vertices[4764] = 0.179759;
	vertices[4765] = 1.24866;
	vertices[4766] = -0.295869;

	vertices[4767] = 0.109447;
	vertices[4768] = 1.32679;
	vertices[4769] = -0.327119;

	vertices[4770] = 1.8282;
	vertices[4771] = 0.850224;
	vertices[4772] = -0.225557;

	vertices[4773] = 1.88288;
	vertices[4774] = 0.897099;
	vertices[4775] = -0.303682;

	vertices[4776] = 1.81257;
	vertices[4777] = 0.904912;
	vertices[4778] = -0.366182;

	vertices[4779] = 1.71882;
	vertices[4780] = 0.897099;
	vertices[4781] = -0.264619;

	vertices[4782] = 0.187572;
	vertices[4783] = 0.904912;
	vertices[4784] = -0.366182;

	vertices[4785] = 0.117259;
	vertices[4786] = 0.897099;
	vertices[4787] = -0.303682;

	vertices[4788] = 0.171947;
	vertices[4789] = 0.850224;
	vertices[4790] = -0.225557;

	vertices[4791] = 0.281322;
	vertices[4792] = 0.897099;
	vertices[4793] = -0.264619;

	vertices[4794] = 1.84382;
	vertices[4795] = 0.936162;
	vertices[4796] = -0.366182;

	vertices[4797] = 1.71882;
	vertices[4798] = 0.959599;
	vertices[4799] = -0.280244;

	vertices[4800] = 1.71882;
	vertices[4801] = 0.897099;
	vertices[4802] = -0.264619;

	vertices[4803] = 1.81257;
	vertices[4804] = 0.904912;
	vertices[4805] = -0.366182;

	vertices[4806] = 0.281322;
	vertices[4807] = 0.897099;
	vertices[4808] = -0.264619;

	vertices[4809] = 0.281322;
	vertices[4810] = 0.959599;
	vertices[4811] = -0.280244;

	vertices[4812] = 0.156322;
	vertices[4813] = 0.936162;
	vertices[4814] = -0.366182;

	vertices[4815] = 0.187572;
	vertices[4816] = 0.904912;
	vertices[4817] = -0.366182;

	vertices[4818] = 1.75788;
	vertices[4819] = 1.01429;
	vertices[4820] = -0.366182;

	vertices[4821] = 1.71882;
	vertices[4822] = 0.959599;
	vertices[4823] = -0.280244;

	vertices[4824] = 1.84382;
	vertices[4825] = 0.936162;
	vertices[4826] = -0.366182;

	vertices[4827] = 1.82038;
	vertices[4828] = 1.00647;
	vertices[4829] = -0.366182;

	vertices[4830] = 0.156322;
	vertices[4831] = 0.936162;
	vertices[4832] = -0.366182;

	vertices[4833] = 0.281322;
	vertices[4834] = 0.959599;
	vertices[4835] = -0.280244;

	vertices[4836] = 0.242259;
	vertices[4837] = 1.01429;
	vertices[4838] = -0.366182;

	vertices[4839] = 0.179759;
	vertices[4840] = 1.00647;
	vertices[4841] = -0.366182;

	vertices[4842] = 1.83601;
	vertices[4843] = 1.09241;
	vertices[4844] = -0.366182;

	vertices[4845] = 1.79695;
	vertices[4846] = 1.12366;
	vertices[4847] = -0.303682;

	vertices[4848] = 1.71882;
	vertices[4849] = 0.959599;
	vertices[4850] = -0.280244;

	vertices[4851] = 1.75788;
	vertices[4852] = 1.01429;
	vertices[4853] = -0.366182;

	vertices[4854] = 0.281322;
	vertices[4855] = 0.959599;
	vertices[4856] = -0.280244;

	vertices[4857] = 0.203197;
	vertices[4858] = 1.12366;
	vertices[4859] = -0.303682;

	vertices[4860] = 0.164134;
	vertices[4861] = 1.09241;
	vertices[4862] = -0.366182;

	vertices[4863] = 0.242259;
	vertices[4864] = 1.01429;
	vertices[4865] = -0.366182;

	vertices[4866] = 1.84382;
	vertices[4867] = 1.2096;
	vertices[4868] = -0.303682;

	vertices[4869] = 1.79695;
	vertices[4870] = 1.12366;
	vertices[4871] = -0.303682;

	vertices[4872] = 1.83601;
	vertices[4873] = 1.09241;
	vertices[4874] = -0.366182;

	vertices[4875] = 1.8907;
	vertices[4876] = 1.16272;
	vertices[4877] = -0.358369;

	vertices[4878] = 0.164134;
	vertices[4879] = 1.09241;
	vertices[4880] = -0.366182;

	vertices[4881] = 0.203197;
	vertices[4882] = 1.12366;
	vertices[4883] = -0.303682;

	vertices[4884] = 0.156322;
	vertices[4885] = 1.2096;
	vertices[4886] = -0.303682;

	vertices[4887] = 0.109447;
	vertices[4888] = 1.16272;
	vertices[4889] = -0.358369;

	vertices[4890] = 1.92195;
	vertices[4891] = 1.27991;
	vertices[4892] = -0.311494;

	vertices[4893] = 1.84382;
	vertices[4894] = 1.2096;
	vertices[4895] = -0.303682;

	vertices[4896] = 1.8907;
	vertices[4897] = 1.16272;
	vertices[4898] = -0.358369;

	vertices[4899] = 1.94538;
	vertices[4900] = 1.22522;
	vertices[4901] = -0.381807;

	vertices[4902] = 0.109447;
	vertices[4903] = 1.16272;
	vertices[4904] = -0.358369;

	vertices[4905] = 0.156322;
	vertices[4906] = 1.2096;
	vertices[4907] = -0.303682;

	vertices[4908] = 0.078197;
	vertices[4909] = 1.27991;
	vertices[4910] = -0.311494;

	vertices[4911] = 0.054759;
	vertices[4912] = 1.22522;
	vertices[4913] = -0.381807;

	vertices[4914] = 1.85945;
	vertices[4915] = 1.24085;
	vertices[4916] = -0.139619;

	vertices[4917] = 1.79695;
	vertices[4918] = 1.12366;
	vertices[4919] = -0.303682;

	vertices[4920] = 1.84382;
	vertices[4921] = 1.2096;
	vertices[4922] = -0.303682;

	vertices[4923] = 1.82038;
	vertices[4924] = 1.24866;
	vertices[4925] = -0.295869;

	vertices[4926] = 0.156322;
	vertices[4927] = 1.2096;
	vertices[4928] = -0.303682;

	vertices[4929] = 0.203197;
	vertices[4930] = 1.12366;
	vertices[4931] = -0.303682;

	vertices[4932] = 0.140697;
	vertices[4933] = 1.24085;
	vertices[4934] = -0.139619;

	vertices[4935] = 0.179759;
	vertices[4936] = 1.24866;
	vertices[4937] = -0.295869;

	vertices[4938] = 1.85945;
	vertices[4939] = 1.24085;
	vertices[4940] = -0.139619;

	vertices[4941] = 1.72663;
	vertices[4942] = 0.920537;
	vertices[4943] = -0.163057;

	vertices[4944] = 1.71882;
	vertices[4945] = 0.959599;
	vertices[4946] = -0.280244;

	vertices[4947] = 1.79695;
	vertices[4948] = 1.12366;
	vertices[4949] = -0.303682;

	vertices[4950] = 0.281322;
	vertices[4951] = 0.959599;
	vertices[4952] = -0.280244;

	vertices[4953] = 0.273509;
	vertices[4954] = 0.920537;
	vertices[4955] = -0.163057;

	vertices[4956] = 0.140697;
	vertices[4957] = 1.24085;
	vertices[4958] = -0.139619;

	vertices[4959] = 0.203197;
	vertices[4960] = 1.12366;
	vertices[4961] = -0.303682;

	vertices[4962] = 1.72663;
	vertices[4963] = 0.920537;
	vertices[4964] = -0.163057;

	vertices[4965] = 1.71882;
	vertices[4966] = 0.897099;
	vertices[4967] = -0.264619;

	vertices[4968] = 1.71882;
	vertices[4969] = 0.959599;
	vertices[4970] = -0.280244;

	vertices[4971] = 0.281322;
	vertices[4972] = 0.959599;
	vertices[4973] = -0.280244;

	vertices[4974] = 0.281322;
	vertices[4975] = 0.897099;
	vertices[4976] = -0.264619;

	vertices[4977] = 0.273509;
	vertices[4978] = 0.920537;
	vertices[4979] = -0.163057;

	vertices[4980] = 1.94538;
	vertices[4981] = 1.22522;
	vertices[4982] = -0.381807;

	vertices[4983] = 1.8907;
	vertices[4984] = 1.16272;
	vertices[4985] = -0.358369;

	vertices[4986] = 1.8907;
	vertices[4987] = 1.15491;
	vertices[4988] = -0.413057;

	vertices[4989] = 1.9532;
	vertices[4990] = 1.2096;
	vertices[4991] = -0.436494;

	vertices[4992] = 0.109447;
	vertices[4993] = 1.15491;
	vertices[4994] = -0.413057;

	vertices[4995] = 0.109447;
	vertices[4996] = 1.16272;
	vertices[4997] = -0.358369;

	vertices[4998] = 0.054759;
	vertices[4999] = 1.22522;
	vertices[5000] = -0.381807;

	vertices[5001] = 0.046947;
	vertices[5002] = 1.2096;
	vertices[5003] = -0.436494;

	vertices[5004] = 1.8907;
	vertices[5005] = 1.16272;
	vertices[5006] = -0.358369;

	vertices[5007] = 1.83601;
	vertices[5008] = 1.09241;
	vertices[5009] = -0.366182;

	vertices[5010] = 1.84382;
	vertices[5011] = 1.09241;
	vertices[5012] = -0.413057;

	vertices[5013] = 1.8907;
	vertices[5014] = 1.15491;
	vertices[5015] = -0.413057;

	vertices[5016] = 0.156322;
	vertices[5017] = 1.09241;
	vertices[5018] = -0.413057;

	vertices[5019] = 0.164134;
	vertices[5020] = 1.09241;
	vertices[5021] = -0.366182;

	vertices[5022] = 0.109447;
	vertices[5023] = 1.16272;
	vertices[5024] = -0.358369;

	vertices[5025] = 0.109447;
	vertices[5026] = 1.15491;
	vertices[5027] = -0.413057;

	vertices[5028] = 1.83601;
	vertices[5029] = 1.09241;
	vertices[5030] = -0.366182;

	vertices[5031] = 1.75788;
	vertices[5032] = 1.01429;
	vertices[5033] = -0.366182;

	vertices[5034] = 1.7657;
	vertices[5035] = 1.01429;
	vertices[5036] = -0.413057;

	vertices[5037] = 1.84382;
	vertices[5038] = 1.09241;
	vertices[5039] = -0.413057;

	vertices[5040] = 0.234447;
	vertices[5041] = 1.01429;
	vertices[5042] = -0.413057;

	vertices[5043] = 0.242259;
	vertices[5044] = 1.01429;
	vertices[5045] = -0.366182;

	vertices[5046] = 0.164134;
	vertices[5047] = 1.09241;
	vertices[5048] = -0.366182;

	vertices[5049] = 0.156322;
	vertices[5050] = 1.09241;
	vertices[5051] = -0.413057;

	vertices[5052] = 1.75788;
	vertices[5053] = 1.01429;
	vertices[5054] = -0.366182;

	vertices[5055] = 1.82038;
	vertices[5056] = 1.00647;
	vertices[5057] = -0.366182;

	vertices[5058] = 1.8282;
	vertices[5059] = 0.998662;
	vertices[5060] = -0.413057;

	vertices[5061] = 1.7657;
	vertices[5062] = 1.01429;
	vertices[5063] = -0.413057;

	vertices[5064] = 0.171947;
	vertices[5065] = 0.998662;
	vertices[5066] = -0.413057;

	vertices[5067] = 0.179759;
	vertices[5068] = 1.00647;
	vertices[5069] = -0.366182;

	vertices[5070] = 0.242259;
	vertices[5071] = 1.01429;
	vertices[5072] = -0.366182;

	vertices[5073] = 0.234447;
	vertices[5074] = 1.01429;
	vertices[5075] = -0.413057;

	vertices[5076] = 1.82038;
	vertices[5077] = 1.00647;
	vertices[5078] = -0.366182;

	vertices[5079] = 1.84382;
	vertices[5080] = 0.936162;
	vertices[5081] = -0.366182;

	vertices[5082] = 1.85163;
	vertices[5083] = 0.936162;
	vertices[5084] = -0.413057;

	vertices[5085] = 1.8282;
	vertices[5086] = 0.998662;
	vertices[5087] = -0.413057;

	vertices[5088] = 0.148509;
	vertices[5089] = 0.936162;
	vertices[5090] = -0.413057;

	vertices[5091] = 0.156322;
	vertices[5092] = 0.936162;
	vertices[5093] = -0.366182;

	vertices[5094] = 0.179759;
	vertices[5095] = 1.00647;
	vertices[5096] = -0.366182;

	vertices[5097] = 0.171947;
	vertices[5098] = 0.998662;
	vertices[5099] = -0.413057;

	vertices[5100] = 1.84382;
	vertices[5101] = 0.936162;
	vertices[5102] = -0.366182;

	vertices[5103] = 1.81257;
	vertices[5104] = 0.904912;
	vertices[5105] = -0.366182;

	vertices[5106] = 1.81257;
	vertices[5107] = 0.904912;
	vertices[5108] = -0.413057;

	vertices[5109] = 1.85163;
	vertices[5110] = 0.936162;
	vertices[5111] = -0.413057;

	vertices[5112] = 0.187572;
	vertices[5113] = 0.904912;
	vertices[5114] = -0.413057;

	vertices[5115] = 0.187572;
	vertices[5116] = 0.904912;
	vertices[5117] = -0.366182;

	vertices[5118] = 0.156322;
	vertices[5119] = 0.936162;
	vertices[5120] = -0.366182;

	vertices[5121] = 0.148509;
	vertices[5122] = 0.936162;
	vertices[5123] = -0.413057;

	vertices[5124] = 1.81257;
	vertices[5125] = 0.904912;
	vertices[5126] = -0.366182;

	vertices[5127] = 1.88288;
	vertices[5128] = 0.897099;
	vertices[5129] = -0.303682;

	vertices[5130] = 1.88288;
	vertices[5131] = 0.904912;
	vertices[5132] = -0.358369;

	vertices[5133] = 1.81257;
	vertices[5134] = 0.904912;
	vertices[5135] = -0.413057;

	vertices[5136] = 0.117259;
	vertices[5137] = 0.904912;
	vertices[5138] = -0.358369;

	vertices[5139] = 0.117259;
	vertices[5140] = 0.897099;
	vertices[5141] = -0.303682;

	vertices[5142] = 0.187572;
	vertices[5143] = 0.904912;
	vertices[5144] = -0.366182;

	vertices[5145] = 0.187572;
	vertices[5146] = 0.904912;
	vertices[5147] = -0.413057;

	vertices[5148] = 2.02351;
	vertices[5149] = 1.26429;
	vertices[5150] = -0.452119;

	vertices[5151] = 1.94538;
	vertices[5152] = 1.22522;
	vertices[5153] = -0.381807;

	vertices[5154] = 1.9532;
	vertices[5155] = 1.2096;
	vertices[5156] = -0.436494;

	vertices[5157] = 2.03913;
	vertices[5158] = 1.24866;
	vertices[5159] = -0.506807;

	vertices[5160] = 0.046947;
	vertices[5161] = 1.2096;
	vertices[5162] = -0.436494;

	vertices[5163] = 0.054759;
	vertices[5164] = 1.22522;
	vertices[5165] = -0.381807;

	vertices[5166] = -0.023366;
	vertices[5167] = 1.26429;
	vertices[5168] = -0.452119;

	vertices[5169] = -0.038991;
	vertices[5170] = 1.24866;
	vertices[5171] = -0.506807;

	vertices[5172] = 2.17195;
	vertices[5173] = 1.27991;
	vertices[5174] = -0.530244;

	vertices[5175] = 2.02351;
	vertices[5176] = 1.26429;
	vertices[5177] = -0.452119;

	vertices[5178] = 2.03913;
	vertices[5179] = 1.24866;
	vertices[5180] = -0.506807;

	vertices[5181] = 2.18757;
	vertices[5182] = 1.26429;
	vertices[5183] = -0.577119;

	vertices[5184] = -0.038991;
	vertices[5185] = 1.24866;
	vertices[5186] = -0.506807;

	vertices[5187] = -0.023366;
	vertices[5188] = 1.26429;
	vertices[5189] = -0.452119;

	vertices[5190] = -0.171803;
	vertices[5191] = 1.27991;
	vertices[5192] = -0.530244;

	vertices[5193] = -0.187428;
	vertices[5194] = 1.26429;
	vertices[5195] = -0.577119;

	vertices[5196] = 2.23445;
	vertices[5197] = 1.17054;
	vertices[5198] = -0.538057;

	vertices[5199] = 2.17195;
	vertices[5200] = 1.27991;
	vertices[5201] = -0.530244;

	vertices[5202] = 2.18757;
	vertices[5203] = 1.26429;
	vertices[5204] = -0.577119;

	vertices[5205] = 2.25788;
	vertices[5206] = 1.16272;
	vertices[5207] = -0.584932;

	vertices[5208] = -0.187428;
	vertices[5209] = 1.26429;
	vertices[5210] = -0.577119;

	vertices[5211] = -0.171803;
	vertices[5212] = 1.27991;
	vertices[5213] = -0.530244;

	vertices[5214] = -0.234303;
	vertices[5215] = 1.17054;
	vertices[5216] = -0.538057;

	vertices[5217] = -0.257741;
	vertices[5218] = 1.16272;
	vertices[5219] = -0.584932;

	vertices[5220] = 2.18757;
	vertices[5221] = 1.01429;
	vertices[5222] = -0.538057;

	vertices[5223] = 2.23445;
	vertices[5224] = 1.17054;
	vertices[5225] = -0.538057;

	vertices[5226] = 2.25788;
	vertices[5227] = 1.16272;
	vertices[5228] = -0.584932;

	vertices[5229] = 2.21101;
	vertices[5230] = 1.00647;
	vertices[5231] = -0.577119;

	vertices[5232] = -0.257741;
	vertices[5233] = 1.16272;
	vertices[5234] = -0.584932;

	vertices[5235] = -0.234303;
	vertices[5236] = 1.17054;
	vertices[5237] = -0.538057;

	vertices[5238] = -0.187428;
	vertices[5239] = 1.01429;
	vertices[5240] = -0.538057;

	vertices[5241] = -0.210866;
	vertices[5242] = 1.00647;
	vertices[5243] = -0.577119;

	vertices[5244] = 2.03913;
	vertices[5245] = 0.920537;
	vertices[5246] = -0.459932;

	vertices[5247] = 2.18757;
	vertices[5248] = 1.01429;
	vertices[5249] = -0.538057;

	vertices[5250] = 2.21101;
	vertices[5251] = 1.00647;
	vertices[5252] = -0.577119;

	vertices[5253] = 2.04695;
	vertices[5254] = 0.920537;
	vertices[5255] = -0.514619;

	vertices[5256] = -0.210866;
	vertices[5257] = 1.00647;
	vertices[5258] = -0.577119;

	vertices[5259] = -0.187428;
	vertices[5260] = 1.01429;
	vertices[5261] = -0.538057;

	vertices[5262] = -0.038991;
	vertices[5263] = 0.920537;
	vertices[5264] = -0.459932;

	vertices[5265] = -0.046803;
	vertices[5266] = 0.920537;
	vertices[5267] = -0.514619;

	vertices[5268] = 1.88288;
	vertices[5269] = 0.897099;
	vertices[5270] = -0.303682;

	vertices[5271] = 2.03913;
	vertices[5272] = 0.920537;
	vertices[5273] = -0.459932;

	vertices[5274] = 2.04695;
	vertices[5275] = 0.920537;
	vertices[5276] = -0.514619;

	vertices[5277] = 1.88288;
	vertices[5278] = 0.904912;
	vertices[5279] = -0.358369;

	vertices[5280] = -0.046803;
	vertices[5281] = 0.920537;
	vertices[5282] = -0.514619;

	vertices[5283] = -0.038991;
	vertices[5284] = 0.920537;
	vertices[5285] = -0.459932;

	vertices[5286] = 0.117259;
	vertices[5287] = 0.897099;
	vertices[5288] = -0.303682;

	vertices[5289] = 0.117259;
	vertices[5290] = 0.904912;
	vertices[5291] = -0.358369;

	vertices[5292] = 1.8282;
	vertices[5293] = 0.998662;
	vertices[5294] = -0.413057;

	vertices[5295] = 1.85163;
	vertices[5296] = 0.936162;
	vertices[5297] = -0.413057;

	vertices[5298] = 1.93757;
	vertices[5299] = 0.983037;
	vertices[5300] = -0.428682;

	vertices[5301] = 1.8907;
	vertices[5302] = 1.02991;
	vertices[5303] = -0.420869;

	vertices[5304] = 0.062572;
	vertices[5305] = 0.983037;
	vertices[5306] = -0.428682;

	vertices[5307] = 0.148509;
	vertices[5308] = 0.936162;
	vertices[5309] = -0.413057;

	vertices[5310] = 0.171947;
	vertices[5311] = 0.998662;
	vertices[5312] = -0.413057;

	vertices[5313] = 0.109447;
	vertices[5314] = 1.02991;
	vertices[5315] = -0.420869;

	vertices[5316] = 1.8907;
	vertices[5317] = 1.02991;
	vertices[5318] = -0.420869;

	vertices[5319] = 1.93757;
	vertices[5320] = 0.983037;
	vertices[5321] = -0.428682;

	vertices[5322] = 2.00007;
	vertices[5323] = 1.04554;
	vertices[5324] = -0.459932;

	vertices[5325] = 1.96101;
	vertices[5326] = 1.09241;
	vertices[5327] = -0.444307;

	vertices[5328] = 7.2e-005;
	vertices[5329] = 1.04554;
	vertices[5330] = -0.459932;

	vertices[5331] = 0.062572;
	vertices[5332] = 0.983037;
	vertices[5333] = -0.428682;

	vertices[5334] = 0.109447;
	vertices[5335] = 1.02991;
	vertices[5336] = -0.420869;

	vertices[5337] = 0.039134;
	vertices[5338] = 1.09241;
	vertices[5339] = -0.444307;

	vertices[5340] = 1.96101;
	vertices[5341] = 1.09241;
	vertices[5342] = -0.444307;

	vertices[5343] = 2.00007;
	vertices[5344] = 1.04554;
	vertices[5345] = -0.459932;

	vertices[5346] = 2.05476;
	vertices[5347] = 1.10804;
	vertices[5348] = -0.475557;

	vertices[5349] = 2.0157;
	vertices[5350] = 1.15491;
	vertices[5351] = -0.467744;

	vertices[5352] = -0.054616;
	vertices[5353] = 1.10804;
	vertices[5354] = -0.475557;

	vertices[5355] = 7.2e-005;
	vertices[5356] = 1.04554;
	vertices[5357] = -0.459932;

	vertices[5358] = 0.039134;
	vertices[5359] = 1.09241;
	vertices[5360] = -0.444307;

	vertices[5361] = -0.015553;
	vertices[5362] = 1.15491;
	vertices[5363] = -0.467744;

	vertices[5364] = 2.0157;
	vertices[5365] = 1.15491;
	vertices[5366] = -0.467744;

	vertices[5367] = 2.05476;
	vertices[5368] = 1.10804;
	vertices[5369] = -0.475557;

	vertices[5370] = 2.10945;
	vertices[5371] = 1.13147;
	vertices[5372] = -0.483369;

	vertices[5373] = 2.08601;
	vertices[5374] = 1.19397;
	vertices[5375] = -0.483369;

	vertices[5376] = -0.109303;
	vertices[5377] = 1.13147;
	vertices[5378] = -0.483369;

	vertices[5379] = -0.054616;
	vertices[5380] = 1.10804;
	vertices[5381] = -0.475557;

	vertices[5382] = -0.015553;
	vertices[5383] = 1.15491;
	vertices[5384] = -0.467744;

	vertices[5385] = -0.085866;
	vertices[5386] = 1.19397;
	vertices[5387] = -0.483369;

	vertices[5388] = 2.03913;
	vertices[5389] = 1.24866;
	vertices[5390] = -0.506807;

	vertices[5391] = 1.9532;
	vertices[5392] = 1.2096;
	vertices[5393] = -0.436494;

	vertices[5394] = 2.0157;
	vertices[5395] = 1.15491;
	vertices[5396] = -0.467744;

	vertices[5397] = 2.08601;
	vertices[5398] = 1.19397;
	vertices[5399] = -0.483369;

	vertices[5400] = -0.015553;
	vertices[5401] = 1.15491;
	vertices[5402] = -0.467744;

	vertices[5403] = 0.046947;
	vertices[5404] = 1.2096;
	vertices[5405] = -0.436494;

	vertices[5406] = -0.038991;
	vertices[5407] = 1.24866;
	vertices[5408] = -0.506807;

	vertices[5409] = -0.085866;
	vertices[5410] = 1.19397;
	vertices[5411] = -0.483369;

	vertices[5412] = 1.8907;
	vertices[5413] = 1.15491;
	vertices[5414] = -0.413057;

	vertices[5415] = 1.96101;
	vertices[5416] = 1.09241;
	vertices[5417] = -0.444307;

	vertices[5418] = 2.0157;
	vertices[5419] = 1.15491;
	vertices[5420] = -0.467744;

	vertices[5421] = 1.9532;
	vertices[5422] = 1.2096;
	vertices[5423] = -0.436494;

	vertices[5424] = -0.015553;
	vertices[5425] = 1.15491;
	vertices[5426] = -0.467744;

	vertices[5427] = 0.039134;
	vertices[5428] = 1.09241;
	vertices[5429] = -0.444307;

	vertices[5430] = 0.109447;
	vertices[5431] = 1.15491;
	vertices[5432] = -0.413057;

	vertices[5433] = 0.046947;
	vertices[5434] = 1.2096;
	vertices[5435] = -0.436494;

	vertices[5436] = 1.8907;
	vertices[5437] = 1.15491;
	vertices[5438] = -0.413057;

	vertices[5439] = 1.84382;
	vertices[5440] = 1.09241;
	vertices[5441] = -0.413057;

	vertices[5442] = 1.8907;
	vertices[5443] = 1.02991;
	vertices[5444] = -0.420869;

	vertices[5445] = 1.96101;
	vertices[5446] = 1.09241;
	vertices[5447] = -0.444307;

	vertices[5448] = 0.109447;
	vertices[5449] = 1.02991;
	vertices[5450] = -0.420869;

	vertices[5451] = 0.156322;
	vertices[5452] = 1.09241;
	vertices[5453] = -0.413057;

	vertices[5454] = 0.109447;
	vertices[5455] = 1.15491;
	vertices[5456] = -0.413057;

	vertices[5457] = 0.039134;
	vertices[5458] = 1.09241;
	vertices[5459] = -0.444307;

	vertices[5460] = 1.8282;
	vertices[5461] = 0.998662;
	vertices[5462] = -0.413057;

	vertices[5463] = 1.8907;
	vertices[5464] = 1.02991;
	vertices[5465] = -0.420869;

	vertices[5466] = 1.84382;
	vertices[5467] = 1.09241;
	vertices[5468] = -0.413057;

	vertices[5469] = 1.7657;
	vertices[5470] = 1.01429;
	vertices[5471] = -0.413057;

	vertices[5472] = 0.156322;
	vertices[5473] = 1.09241;
	vertices[5474] = -0.413057;

	vertices[5475] = 0.109447;
	vertices[5476] = 1.02991;
	vertices[5477] = -0.420869;

	vertices[5478] = 0.171947;
	vertices[5479] = 0.998662;
	vertices[5480] = -0.413057;

	vertices[5481] = 0.234447;
	vertices[5482] = 1.01429;
	vertices[5483] = -0.413057;

	vertices[5484] = 1.81257;
	vertices[5485] = 0.904912;
	vertices[5486] = -0.413057;

	vertices[5487] = 1.88288;
	vertices[5488] = 0.904912;
	vertices[5489] = -0.358369;

	vertices[5490] = 1.93757;
	vertices[5491] = 0.983037;
	vertices[5492] = -0.428682;

	vertices[5493] = 1.85163;
	vertices[5494] = 0.936162;
	vertices[5495] = -0.413057;

	vertices[5496] = 0.062572;
	vertices[5497] = 0.983037;
	vertices[5498] = -0.428682;

	vertices[5499] = 0.117259;
	vertices[5500] = 0.904912;
	vertices[5501] = -0.358369;

	vertices[5502] = 0.187572;
	vertices[5503] = 0.904912;
	vertices[5504] = -0.413057;

	vertices[5505] = 0.148509;
	vertices[5506] = 0.936162;
	vertices[5507] = -0.413057;

	vertices[5508] = 2.04695;
	vertices[5509] = 0.920537;
	vertices[5510] = -0.514619;

	vertices[5511] = 2.00007;
	vertices[5512] = 1.04554;
	vertices[5513] = -0.459932;

	vertices[5514] = 1.93757;
	vertices[5515] = 0.983037;
	vertices[5516] = -0.428682;

	vertices[5517] = 1.88288;
	vertices[5518] = 0.904912;
	vertices[5519] = -0.358369;

	vertices[5520] = 0.062572;
	vertices[5521] = 0.983037;
	vertices[5522] = -0.428682;

	vertices[5523] = 7.2e-005;
	vertices[5524] = 1.04554;
	vertices[5525] = -0.459932;

	vertices[5526] = -0.046803;
	vertices[5527] = 0.920537;
	vertices[5528] = -0.514619;

	vertices[5529] = 0.117259;
	vertices[5530] = 0.904912;
	vertices[5531] = -0.358369;

	vertices[5532] = 2.21101;
	vertices[5533] = 1.00647;
	vertices[5534] = -0.577119;

	vertices[5535] = 2.05476;
	vertices[5536] = 1.10804;
	vertices[5537] = -0.475557;

	vertices[5538] = 2.00007;
	vertices[5539] = 1.04554;
	vertices[5540] = -0.459932;

	vertices[5541] = 2.04695;
	vertices[5542] = 0.920537;
	vertices[5543] = -0.514619;

	vertices[5544] = 7.2e-005;
	vertices[5545] = 1.04554;
	vertices[5546] = -0.459932;

	vertices[5547] = -0.054616;
	vertices[5548] = 1.10804;
	vertices[5549] = -0.475557;

	vertices[5550] = -0.210866;
	vertices[5551] = 1.00647;
	vertices[5552] = -0.577119;

	vertices[5553] = -0.046803;
	vertices[5554] = 0.920537;
	vertices[5555] = -0.514619;

	vertices[5556] = 2.25788;
	vertices[5557] = 1.16272;
	vertices[5558] = -0.584932;

	vertices[5559] = 2.10945;
	vertices[5560] = 1.13147;
	vertices[5561] = -0.483369;

	vertices[5562] = 2.05476;
	vertices[5563] = 1.10804;
	vertices[5564] = -0.475557;

	vertices[5565] = 2.21101;
	vertices[5566] = 1.00647;
	vertices[5567] = -0.577119;

	vertices[5568] = -0.054616;
	vertices[5569] = 1.10804;
	vertices[5570] = -0.475557;

	vertices[5571] = -0.109303;
	vertices[5572] = 1.13147;
	vertices[5573] = -0.483369;

	vertices[5574] = -0.257741;
	vertices[5575] = 1.16272;
	vertices[5576] = -0.584932;

	vertices[5577] = -0.210866;
	vertices[5578] = 1.00647;
	vertices[5579] = -0.577119;

	vertices[5580] = 2.18757;
	vertices[5581] = 1.26429;
	vertices[5582] = -0.577119;

	vertices[5583] = 2.08601;
	vertices[5584] = 1.19397;
	vertices[5585] = -0.483369;

	vertices[5586] = 2.10945;
	vertices[5587] = 1.13147;
	vertices[5588] = -0.483369;

	vertices[5589] = 2.25788;
	vertices[5590] = 1.16272;
	vertices[5591] = -0.584932;

	vertices[5592] = -0.109303;
	vertices[5593] = 1.13147;
	vertices[5594] = -0.483369;

	vertices[5595] = -0.085866;
	vertices[5596] = 1.19397;
	vertices[5597] = -0.483369;

	vertices[5598] = -0.187428;
	vertices[5599] = 1.26429;
	vertices[5600] = -0.577119;

	vertices[5601] = -0.257741;
	vertices[5602] = 1.16272;
	vertices[5603] = -0.584932;

	vertices[5604] = 2.03913;
	vertices[5605] = 1.24866;
	vertices[5606] = -0.506807;

	vertices[5607] = 2.08601;
	vertices[5608] = 1.19397;
	vertices[5609] = -0.483369;

	vertices[5610] = 2.18757;
	vertices[5611] = 1.26429;
	vertices[5612] = -0.577119;

	vertices[5613] = -0.187428;
	vertices[5614] = 1.26429;
	vertices[5615] = -0.577119;

	vertices[5616] = -0.085866;
	vertices[5617] = 1.19397;
	vertices[5618] = -0.483369;

	vertices[5619] = -0.038991;
	vertices[5620] = 1.24866;
	vertices[5621] = -0.506807;

	vertices[5622] = 2.03913;
	vertices[5623] = 0.818974;
	vertices[5624] = -0.420869;

	vertices[5625] = 1.77351;
	vertices[5626] = 0.779912;
	vertices[5627] = -0.217744;

	vertices[5628] = 1.78913;
	vertices[5629] = 0.795537;
	vertices[5630] = -0.420869;

	vertices[5631] = 2.03913;
	vertices[5632] = 0.834599;
	vertices[5633] = -0.584932;

	vertices[5634] = 0.211009;
	vertices[5635] = 0.795537;
	vertices[5636] = -0.420869;

	vertices[5637] = 0.226634;
	vertices[5638] = 0.779912;
	vertices[5639] = -0.217744;

	vertices[5640] = -0.038991;
	vertices[5641] = 0.818974;
	vertices[5642] = -0.420869;

	vertices[5643] = -0.038991;
	vertices[5644] = 0.834599;
	vertices[5645] = -0.584932;

	vertices[5646] = 2.28132;
	vertices[5647] = 0.975224;
	vertices[5648] = -0.522432;

	vertices[5649] = 2.03913;
	vertices[5650] = 0.818974;
	vertices[5651] = -0.420869;

	vertices[5652] = 2.03913;
	vertices[5653] = 0.834599;
	vertices[5654] = -0.584932;

	vertices[5655] = 2.31257;
	vertices[5656] = 0.975224;
	vertices[5657] = -0.623994;

	vertices[5658] = -0.038991;
	vertices[5659] = 0.834599;
	vertices[5660] = -0.584932;

	vertices[5661] = -0.038991;
	vertices[5662] = 0.818974;
	vertices[5663] = -0.420869;

	vertices[5664] = -0.281178;
	vertices[5665] = 0.975224;
	vertices[5666] = -0.522432;

	vertices[5667] = -0.312428;
	vertices[5668] = 0.975224;
	vertices[5669] = -0.623994;

	vertices[5670] = 2.35163;
	vertices[5671] = 1.24085;
	vertices[5672] = -0.514619;

	vertices[5673] = 2.28132;
	vertices[5674] = 0.975224;
	vertices[5675] = -0.522432;

	vertices[5676] = 2.31257;
	vertices[5677] = 0.975224;
	vertices[5678] = -0.623994;

	vertices[5679] = 2.36726;
	vertices[5680] = 1.21741;
	vertices[5681] = -0.592744;

	vertices[5682] = -0.312428;
	vertices[5683] = 0.975224;
	vertices[5684] = -0.623994;

	vertices[5685] = -0.281178;
	vertices[5686] = 0.975224;
	vertices[5687] = -0.522432;

	vertices[5688] = -0.351491;
	vertices[5689] = 1.24085;
	vertices[5690] = -0.514619;

	vertices[5691] = -0.367116;
	vertices[5692] = 1.21741;
	vertices[5693] = -0.592744;

	vertices[5694] = 2.23445;
	vertices[5695] = 1.42835;
	vertices[5696] = -0.514619;

	vertices[5697] = 2.35163;
	vertices[5698] = 1.24085;
	vertices[5699] = -0.514619;

	vertices[5700] = 2.36726;
	vertices[5701] = 1.21741;
	vertices[5702] = -0.592744;

	vertices[5703] = 2.25007;
	vertices[5704] = 1.38929;
	vertices[5705] = -0.639619;

	vertices[5706] = -0.367116;
	vertices[5707] = 1.21741;
	vertices[5708] = -0.592744;

	vertices[5709] = -0.351491;
	vertices[5710] = 1.24085;
	vertices[5711] = -0.514619;

	vertices[5712] = -0.234303;
	vertices[5713] = 1.42835;
	vertices[5714] = -0.514619;

	vertices[5715] = -0.249928;
	vertices[5716] = 1.38929;
	vertices[5717] = -0.639619;

	vertices[5718] = 2.02351;
	vertices[5719] = 1.3971;
	vertices[5720] = -0.405244;

	vertices[5721] = 2.23445;
	vertices[5722] = 1.42835;
	vertices[5723] = -0.514619;

	vertices[5724] = 2.25007;
	vertices[5725] = 1.38929;
	vertices[5726] = -0.639619;

	vertices[5727] = 2.02351;
	vertices[5728] = 1.35804;
	vertices[5729] = -0.577119;

	vertices[5730] = -0.249928;
	vertices[5731] = 1.38929;
	vertices[5732] = -0.639619;

	vertices[5733] = -0.234303;
	vertices[5734] = 1.42835;
	vertices[5735] = -0.514619;

	vertices[5736] = -0.023366;
	vertices[5737] = 1.3971;
	vertices[5738] = -0.405244;

	vertices[5739] = -0.023366;
	vertices[5740] = 1.35804;
	vertices[5741] = -0.577119;

	vertices[5742] = 1.8907;
	vertices[5743] = 1.32679;
	vertices[5744] = -0.327119;

	vertices[5745] = 2.02351;
	vertices[5746] = 1.3971;
	vertices[5747] = -0.405244;

	vertices[5748] = 2.02351;
	vertices[5749] = 1.35804;
	vertices[5750] = -0.577119;

	vertices[5751] = 1.85945;
	vertices[5752] = 1.30335;
	vertices[5753] = -0.475557;

	vertices[5754] = -0.023366;
	vertices[5755] = 1.35804;
	vertices[5756] = -0.577119;

	vertices[5757] = -0.023366;
	vertices[5758] = 1.3971;
	vertices[5759] = -0.405244;

	vertices[5760] = 0.109447;
	vertices[5761] = 1.32679;
	vertices[5762] = -0.327119;

	vertices[5763] = 0.140697;
	vertices[5764] = 1.30335;
	vertices[5765] = -0.475557;

	vertices[5766] = 2.02351;
	vertices[5767] = 1.35804;
	vertices[5768] = -0.577119;

	vertices[5769] = 2.03913;
	vertices[5770] = 0.834599;
	vertices[5771] = -0.584932;

	vertices[5772] = 1.78913;
	vertices[5773] = 0.795537;
	vertices[5774] = -0.420869;

	vertices[5775] = 1.85945;
	vertices[5776] = 1.30335;
	vertices[5777] = -0.475557;

	vertices[5778] = 0.211009;
	vertices[5779] = 0.795537;
	vertices[5780] = -0.420869;

	vertices[5781] = -0.038991;
	vertices[5782] = 0.834599;
	vertices[5783] = -0.584932;

	vertices[5784] = -0.023366;
	vertices[5785] = 1.35804;
	vertices[5786] = -0.577119;

	vertices[5787] = 0.140697;
	vertices[5788] = 1.30335;
	vertices[5789] = -0.475557;

	vertices[5790] = 2.02351;
	vertices[5791] = 1.35804;
	vertices[5792] = -0.577119;

	vertices[5793] = 2.25007;
	vertices[5794] = 1.38929;
	vertices[5795] = -0.639619;

	vertices[5796] = 2.31257;
	vertices[5797] = 0.975224;
	vertices[5798] = -0.623994;

	vertices[5799] = 2.03913;
	vertices[5800] = 0.834599;
	vertices[5801] = -0.584932;

	vertices[5802] = -0.312428;
	vertices[5803] = 0.975224;
	vertices[5804] = -0.623994;

	vertices[5805] = -0.249928;
	vertices[5806] = 1.38929;
	vertices[5807] = -0.639619;

	vertices[5808] = -0.023366;
	vertices[5809] = 1.35804;
	vertices[5810] = -0.577119;

	vertices[5811] = -0.038991;
	vertices[5812] = 0.834599;
	vertices[5813] = -0.584932;

	vertices[5814] = 2.25007;
	vertices[5815] = 1.38929;
	vertices[5816] = -0.639619;

	vertices[5817] = 2.36726;
	vertices[5818] = 1.21741;
	vertices[5819] = -0.592744;

	vertices[5820] = 2.31257;
	vertices[5821] = 0.975224;
	vertices[5822] = -0.623994;

	vertices[5823] = -0.312428;
	vertices[5824] = 0.975224;
	vertices[5825] = -0.623994;

	vertices[5826] = -0.367116;
	vertices[5827] = 1.21741;
	vertices[5828] = -0.592744;

	vertices[5829] = -0.249928;
	vertices[5830] = 1.38929;
	vertices[5831] = -0.639619;

	vertices[5832] = 1.77351;
	vertices[5833] = 1.18616;
	vertices[5834] = -0.530244;

	vertices[5835] = 1.82038;
	vertices[5836] = 1.24866;
	vertices[5837] = -0.295869;

	vertices[5838] = 1.8907;
	vertices[5839] = 1.32679;
	vertices[5840] = -0.327119;

	vertices[5841] = 1.85945;
	vertices[5842] = 1.30335;
	vertices[5843] = -0.475557;

	vertices[5844] = 0.109447;
	vertices[5845] = 1.32679;
	vertices[5846] = -0.327119;

	vertices[5847] = 0.179759;
	vertices[5848] = 1.24866;
	vertices[5849] = -0.295869;

	vertices[5850] = 0.226634;
	vertices[5851] = 1.18616;
	vertices[5852] = -0.530244;

	vertices[5853] = 0.140697;
	vertices[5854] = 1.30335;
	vertices[5855] = -0.475557;

	vertices[5856] = 1.77351;
	vertices[5857] = 1.18616;
	vertices[5858] = -0.530244;

	vertices[5859] = 1.85945;
	vertices[5860] = 1.30335;
	vertices[5861] = -0.475557;

	vertices[5862] = 1.78913;
	vertices[5863] = 0.795537;
	vertices[5864] = -0.420869;

	vertices[5865] = 1.6407;
	vertices[5866] = 0.912724;
	vertices[5867] = -0.522432;

	vertices[5868] = 0.211009;
	vertices[5869] = 0.795537;
	vertices[5870] = -0.420869;

	vertices[5871] = 0.140697;
	vertices[5872] = 1.30335;
	vertices[5873] = -0.475557;

	vertices[5874] = 0.226634;
	vertices[5875] = 1.18616;
	vertices[5876] = -0.530244;

	vertices[5877] = 0.359447;
	vertices[5878] = 0.912724;
	vertices[5879] = -0.522432;

	vertices[5880] = 1.59382;
	vertices[5881] = 0.795537;
	vertices[5882] = -0.256807;

	vertices[5883] = 1.6407;
	vertices[5884] = 0.912724;
	vertices[5885] = -0.522432;

	vertices[5886] = 1.78913;
	vertices[5887] = 0.795537;
	vertices[5888] = -0.420869;

	vertices[5889] = 1.77351;
	vertices[5890] = 0.779912;
	vertices[5891] = -0.217744;

	vertices[5892] = 0.211009;
	vertices[5893] = 0.795537;
	vertices[5894] = -0.420869;

	vertices[5895] = 0.359447;
	vertices[5896] = 0.912724;
	vertices[5897] = -0.522432;

	vertices[5898] = 0.406322;
	vertices[5899] = 0.795537;
	vertices[5900] = -0.256807;

	vertices[5901] = 0.226634;
	vertices[5902] = 0.779912;
	vertices[5903] = -0.217744;

	// Normals.
	normals[0] = 0.665;
	normals[1] = -0.2008;
	normals[2] = 0.7194;

	normals[3] = 0.665;
	normals[4] = -0.2008;
	normals[5] = 0.7194;

	normals[6] = 0.665;
	normals[7] = -0.2008;
	normals[8] = 0.7194;

	normals[9] = 0.665;
	normals[10] = -0.2008;
	normals[11] = 0.7194;

	normals[12] = -0.665;
	normals[13] = -0.2008;
	normals[14] = 0.7194;

	normals[15] = -0.665;
	normals[16] = -0.2008;
	normals[17] = 0.7194;

	normals[18] = -0.665;
	normals[19] = -0.2008;
	normals[20] = 0.7194;

	normals[21] = -0.665;
	normals[22] = -0.2008;
	normals[23] = 0.7194;

	normals[24] = 0.8294;
	normals[25] = -0.3036;
	normals[26] = 0.4689;

	normals[27] = 0.8294;
	normals[28] = -0.3036;
	normals[29] = 0.4689;

	normals[30] = 0.8294;
	normals[31] = -0.3036;
	normals[32] = 0.4689;

	normals[33] = 0.8294;
	normals[34] = -0.3036;
	normals[35] = 0.4689;

	normals[36] = -0.8294;
	normals[37] = -0.3036;
	normals[38] = 0.4689;

	normals[39] = -0.8294;
	normals[40] = -0.3036;
	normals[41] = 0.4689;

	normals[42] = -0.8294;
	normals[43] = -0.3036;
	normals[44] = 0.4689;

	normals[45] = -0.8294;
	normals[46] = -0.3036;
	normals[47] = 0.4689;

	normals[48] = 0.4155;
	normals[49] = -0.7933;
	normals[50] = 0.4449;

	normals[51] = 0.4155;
	normals[52] = -0.7933;
	normals[53] = 0.4449;

	normals[54] = 0.4155;
	normals[55] = -0.7933;
	normals[56] = 0.4449;

	normals[57] = 0.4155;
	normals[58] = -0.7933;
	normals[59] = 0.4449;

	normals[60] = -0.4155;
	normals[61] = -0.7933;
	normals[62] = 0.4449;

	normals[63] = -0.4155;
	normals[64] = -0.7933;
	normals[65] = 0.4449;

	normals[66] = -0.4155;
	normals[67] = -0.7933;
	normals[68] = 0.4449;

	normals[69] = -0.4155;
	normals[70] = -0.7933;
	normals[71] = 0.4449;

	normals[72] = 0.3599;
	normals[73] = -0.5089;
	normals[74] = 0.782;

	normals[75] = 0.3599;
	normals[76] = -0.5089;
	normals[77] = 0.782;

	normals[78] = 0.3599;
	normals[79] = -0.5089;
	normals[80] = 0.782;

	normals[81] = 0.3599;
	normals[82] = -0.5089;
	normals[83] = 0.782;

	normals[84] = -0.36;
	normals[85] = -0.5089;
	normals[86] = 0.782;

	normals[87] = -0.36;
	normals[88] = -0.5089;
	normals[89] = 0.782;

	normals[90] = -0.36;
	normals[91] = -0.5089;
	normals[92] = 0.782;

	normals[93] = -0.36;
	normals[94] = -0.5089;
	normals[95] = 0.782;

	normals[96] = -0.0787;
	normals[97] = -0.5394;
	normals[98] = 0.8384;

	normals[99] = -0.0787;
	normals[100] = -0.5394;
	normals[101] = 0.8384;

	normals[102] = -0.0787;
	normals[103] = -0.5394;
	normals[104] = 0.8384;

	normals[105] = -0.0787;
	normals[106] = -0.5394;
	normals[107] = 0.8384;

	normals[108] = 0.0787;
	normals[109] = -0.5394;
	normals[110] = 0.8384;

	normals[111] = 0.0787;
	normals[112] = -0.5394;
	normals[113] = 0.8384;

	normals[114] = 0.0787;
	normals[115] = -0.5394;
	normals[116] = 0.8384;

	normals[117] = 0.0787;
	normals[118] = -0.5394;
	normals[119] = 0.8384;

	normals[120] = -0.2696;
	normals[121] = -0.8413;
	normals[122] = 0.4685;

	normals[123] = -0.2696;
	normals[124] = -0.8413;
	normals[125] = 0.4685;

	normals[126] = -0.2696;
	normals[127] = -0.8413;
	normals[128] = 0.4685;

	normals[129] = -0.2696;
	normals[130] = -0.8413;
	normals[131] = 0.4685;

	normals[132] = 0.2696;
	normals[133] = -0.8413;
	normals[134] = 0.4685;

	normals[135] = 0.2696;
	normals[136] = -0.8413;
	normals[137] = 0.4685;

	normals[138] = 0.2696;
	normals[139] = -0.8413;
	normals[140] = 0.4685;

	normals[141] = 0.2696;
	normals[142] = -0.8413;
	normals[143] = 0.4685;

	normals[144] = -0.7707;
	normals[145] = -0.3352;
	normals[146] = 0.542;

	normals[147] = -0.7707;
	normals[148] = -0.3352;
	normals[149] = 0.542;

	normals[150] = -0.7707;
	normals[151] = -0.3352;
	normals[152] = 0.542;

	normals[153] = -0.7707;
	normals[154] = -0.3352;
	normals[155] = 0.542;

	normals[156] = 0.7707;
	normals[157] = -0.3352;
	normals[158] = 0.542;

	normals[159] = 0.7707;
	normals[160] = -0.3352;
	normals[161] = 0.542;

	normals[162] = 0.7707;
	normals[163] = -0.3352;
	normals[164] = 0.542;

	normals[165] = 0.7707;
	normals[166] = -0.3352;
	normals[167] = 0.542;

	normals[168] = -0.4689;
	normals[169] = -0.194;
	normals[170] = 0.8617;

	normals[171] = -0.4689;
	normals[172] = -0.194;
	normals[173] = 0.8617;

	normals[174] = -0.4689;
	normals[175] = -0.194;
	normals[176] = 0.8617;

	normals[177] = -0.4689;
	normals[178] = -0.194;
	normals[179] = 0.8617;

	normals[180] = 0.4689;
	normals[181] = -0.194;
	normals[182] = 0.8617;

	normals[183] = 0.4689;
	normals[184] = -0.194;
	normals[185] = 0.8617;

	normals[186] = 0.4689;
	normals[187] = -0.194;
	normals[188] = 0.8617;

	normals[189] = 0.4689;
	normals[190] = -0.194;
	normals[191] = 0.8617;

	normals[192] = -0.4767;
	normals[193] = 0.1907;
	normals[194] = 0.8581;

	normals[195] = -0.4767;
	normals[196] = 0.1907;
	normals[197] = 0.8581;

	normals[198] = -0.4767;
	normals[199] = 0.1907;
	normals[200] = 0.8581;

	normals[201] = -0.4767;
	normals[202] = 0.1907;
	normals[203] = 0.8581;

	normals[204] = 0.4767;
	normals[205] = 0.1907;
	normals[206] = 0.8581;

	normals[207] = 0.4767;
	normals[208] = 0.1907;
	normals[209] = 0.8581;

	normals[210] = 0.4767;
	normals[211] = 0.1907;
	normals[212] = 0.8581;

	normals[213] = 0.4767;
	normals[214] = 0.1907;
	normals[215] = 0.8581;

	normals[216] = -0.7672;
	normals[217] = 0.3264;
	normals[218] = 0.5521;

	normals[219] = -0.7672;
	normals[220] = 0.3264;
	normals[221] = 0.5521;

	normals[222] = -0.7672;
	normals[223] = 0.3264;
	normals[224] = 0.5521;

	normals[225] = -0.7672;
	normals[226] = 0.3264;
	normals[227] = 0.5521;

	normals[228] = 0.7672;
	normals[229] = 0.3264;
	normals[230] = 0.5521;

	normals[231] = 0.7672;
	normals[232] = 0.3264;
	normals[233] = 0.5521;

	normals[234] = 0.7672;
	normals[235] = 0.3264;
	normals[236] = 0.5521;

	normals[237] = 0.7672;
	normals[238] = 0.3264;
	normals[239] = 0.5521;

	normals[240] = -0.2519;
	normals[241] = 0.8173;
	normals[242] = 0.5182;

	normals[243] = -0.2519;
	normals[244] = 0.8173;
	normals[245] = 0.5182;

	normals[246] = -0.2519;
	normals[247] = 0.8173;
	normals[248] = 0.5182;

	normals[249] = -0.2519;
	normals[250] = 0.8173;
	normals[251] = 0.5182;

	normals[252] = 0.2519;
	normals[253] = 0.8173;
	normals[254] = 0.5182;

	normals[255] = 0.2519;
	normals[256] = 0.8173;
	normals[257] = 0.5182;

	normals[258] = 0.2519;
	normals[259] = 0.8173;
	normals[260] = 0.5182;

	normals[261] = 0.2519;
	normals[262] = 0.8173;
	normals[263] = 0.5182;

	normals[264] = -0.0949;
	normals[265] = 0.5696;
	normals[266] = 0.8164;

	normals[267] = -0.0949;
	normals[268] = 0.5696;
	normals[269] = 0.8164;

	normals[270] = -0.0949;
	normals[271] = 0.5696;
	normals[272] = 0.8164;

	normals[273] = -0.0949;
	normals[274] = 0.5696;
	normals[275] = 0.8164;

	normals[276] = 0.0949;
	normals[277] = 0.5696;
	normals[278] = 0.8164;

	normals[279] = 0.0949;
	normals[280] = 0.5696;
	normals[281] = 0.8164;

	normals[282] = 0.0949;
	normals[283] = 0.5696;
	normals[284] = 0.8164;

	normals[285] = 0.0949;
	normals[286] = 0.5696;
	normals[287] = 0.8164;

	normals[288] = 0.3667;
	normals[289] = 0.537;
	normals[290] = 0.7597;

	normals[291] = 0.3667;
	normals[292] = 0.537;
	normals[293] = 0.7597;

	normals[294] = 0.3667;
	normals[295] = 0.537;
	normals[296] = 0.7597;

	normals[297] = 0.3667;
	normals[298] = 0.537;
	normals[299] = 0.7597;

	normals[300] = -0.3667;
	normals[301] = 0.537;
	normals[302] = 0.7597;

	normals[303] = -0.3667;
	normals[304] = 0.537;
	normals[305] = 0.7597;

	normals[306] = -0.3667;
	normals[307] = 0.537;
	normals[308] = 0.7597;

	normals[309] = -0.3667;
	normals[310] = 0.537;
	normals[311] = 0.7597;

	normals[312] = 0.4141;
	normals[313] = 0.7672;
	normals[314] = 0.4898;

	normals[315] = 0.4141;
	normals[316] = 0.7672;
	normals[317] = 0.4898;

	normals[318] = 0.4141;
	normals[319] = 0.7672;
	normals[320] = 0.4898;

	normals[321] = 0.4141;
	normals[322] = 0.7672;
	normals[323] = 0.4898;

	normals[324] = -0.4141;
	normals[325] = 0.7672;
	normals[326] = 0.4898;

	normals[327] = -0.4141;
	normals[328] = 0.7672;
	normals[329] = 0.4898;

	normals[330] = -0.4141;
	normals[331] = 0.7672;
	normals[332] = 0.4898;

	normals[333] = -0.4141;
	normals[334] = 0.7672;
	normals[335] = 0.4898;

	normals[336] = 0.8277;
	normals[337] = 0.2952;
	normals[338] = 0.4771;

	normals[339] = 0.8277;
	normals[340] = 0.2952;
	normals[341] = 0.4771;

	normals[342] = 0.8277;
	normals[343] = 0.2952;
	normals[344] = 0.4771;

	normals[345] = 0.8277;
	normals[346] = 0.2952;
	normals[347] = 0.4771;

	normals[348] = -0.8277;
	normals[349] = 0.2952;
	normals[350] = 0.4771;

	normals[351] = -0.8277;
	normals[352] = 0.2952;
	normals[353] = 0.4771;

	normals[354] = -0.8277;
	normals[355] = 0.2952;
	normals[356] = 0.4771;

	normals[357] = -0.8277;
	normals[358] = 0.2952;
	normals[359] = 0.4771;

	normals[360] = 0.6713;
	normals[361] = 0.1971;
	normals[362] = 0.7145;

	normals[363] = 0.6713;
	normals[364] = 0.1971;
	normals[365] = 0.7145;

	normals[366] = 0.6713;
	normals[367] = 0.1971;
	normals[368] = 0.7145;

	normals[369] = 0.6713;
	normals[370] = 0.1971;
	normals[371] = 0.7145;

	normals[372] = -0.6713;
	normals[373] = 0.1971;
	normals[374] = 0.7145;

	normals[375] = -0.6713;
	normals[376] = 0.1971;
	normals[377] = 0.7145;

	normals[378] = -0.6713;
	normals[379] = 0.1971;
	normals[380] = 0.7145;

	normals[381] = -0.6713;
	normals[382] = 0.1971;
	normals[383] = 0.7145;

	normals[384] = 0.8111;
	normals[385] = 0.3244;
	normals[386] = -0.4867;

	normals[387] = 0.8111;
	normals[388] = 0.3244;
	normals[389] = -0.4867;

	normals[390] = 0.8111;
	normals[391] = 0.3244;
	normals[392] = -0.4867;

	normals[393] = 0.8111;
	normals[394] = 0.3244;
	normals[395] = -0.4867;

	normals[396] = -0.8111;
	normals[397] = 0.3244;
	normals[398] = -0.4867;

	normals[399] = -0.8111;
	normals[400] = 0.3244;
	normals[401] = -0.4867;

	normals[402] = -0.8111;
	normals[403] = 0.3244;
	normals[404] = -0.4867;

	normals[405] = -0.8111;
	normals[406] = 0.3244;
	normals[407] = -0.4867;

	normals[408] = 0.2052;
	normals[409] = 0.8206;
	normals[410] = -0.5334;

	normals[411] = 0.2052;
	normals[412] = 0.8206;
	normals[413] = -0.5334;

	normals[414] = 0.2052;
	normals[415] = 0.8206;
	normals[416] = -0.5334;

	normals[417] = 0.2052;
	normals[418] = 0.8206;
	normals[419] = -0.5334;

	normals[420] = -0.2052;
	normals[421] = 0.8206;
	normals[422] = -0.5334;

	normals[423] = -0.2052;
	normals[424] = 0.8206;
	normals[425] = -0.5334;

	normals[426] = -0.2052;
	normals[427] = 0.8206;
	normals[428] = -0.5334;

	normals[429] = -0.2052;
	normals[430] = 0.8206;
	normals[431] = -0.5334;

	normals[432] = -0.4223;
	normals[433] = 0.7806;
	normals[434] = -0.4607;

	normals[435] = -0.4223;
	normals[436] = 0.7806;
	normals[437] = -0.4607;

	normals[438] = -0.4223;
	normals[439] = 0.7806;
	normals[440] = -0.4607;

	normals[441] = -0.4223;
	normals[442] = 0.7806;
	normals[443] = -0.4607;

	normals[444] = 0.4223;
	normals[445] = 0.7806;
	normals[446] = -0.4607;

	normals[447] = 0.4223;
	normals[448] = 0.7806;
	normals[449] = -0.4607;

	normals[450] = 0.4223;
	normals[451] = 0.7806;
	normals[452] = -0.4607;

	normals[453] = 0.4223;
	normals[454] = 0.7806;
	normals[455] = -0.4607;

	normals[456] = -0.8241;
	normals[457] = 0.3225;
	normals[458] = -0.4658;

	normals[459] = -0.8241;
	normals[460] = 0.3225;
	normals[461] = -0.4658;

	normals[462] = -0.8241;
	normals[463] = 0.3225;
	normals[464] = -0.4658;

	normals[465] = -0.8241;
	normals[466] = 0.3225;
	normals[467] = -0.4658;

	normals[468] = 0.8241;
	normals[469] = 0.3225;
	normals[470] = -0.4658;

	normals[471] = 0.8241;
	normals[472] = 0.3225;
	normals[473] = -0.4658;

	normals[474] = 0.8241;
	normals[475] = 0.3225;
	normals[476] = -0.4658;

	normals[477] = 0.8241;
	normals[478] = 0.3225;
	normals[479] = -0.4658;

	normals[480] = -0.8137;
	normals[481] = -0.3487;
	normals[482] = -0.465;

	normals[483] = -0.8137;
	normals[484] = -0.3487;
	normals[485] = -0.465;

	normals[486] = -0.8137;
	normals[487] = -0.3487;
	normals[488] = -0.465;

	normals[489] = -0.8137;
	normals[490] = -0.3487;
	normals[491] = -0.465;

	normals[492] = 0.8137;
	normals[493] = -0.3487;
	normals[494] = -0.465;

	normals[495] = 0.8137;
	normals[496] = -0.3487;
	normals[497] = -0.465;

	normals[498] = 0.8137;
	normals[499] = -0.3487;
	normals[500] = -0.465;

	normals[501] = 0.8137;
	normals[502] = -0.3487;
	normals[503] = -0.465;

	normals[504] = -0.4223;
	normals[505] = -0.7806;
	normals[506] = -0.4607;

	normals[507] = -0.4223;
	normals[508] = -0.7806;
	normals[509] = -0.4607;

	normals[510] = -0.4223;
	normals[511] = -0.7806;
	normals[512] = -0.4607;

	normals[513] = -0.4223;
	normals[514] = -0.7806;
	normals[515] = -0.4607;

	normals[516] = 0.4223;
	normals[517] = -0.7806;
	normals[518] = -0.4607;

	normals[519] = 0.4223;
	normals[520] = -0.7806;
	normals[521] = -0.4607;

	normals[522] = 0.4223;
	normals[523] = -0.7806;
	normals[524] = -0.4607;

	normals[525] = 0.4223;
	normals[526] = -0.7806;
	normals[527] = -0.4607;

	normals[528] = 0.2052;
	normals[529] = -0.8206;
	normals[530] = -0.5334;

	normals[531] = 0.2052;
	normals[532] = -0.8206;
	normals[533] = -0.5334;

	normals[534] = 0.2052;
	normals[535] = -0.8206;
	normals[536] = -0.5334;

	normals[537] = 0.2052;
	normals[538] = -0.8206;
	normals[539] = -0.5334;

	normals[540] = -0.2052;
	normals[541] = -0.8206;
	normals[542] = -0.5334;

	normals[543] = -0.2052;
	normals[544] = -0.8206;
	normals[545] = -0.5334;

	normals[546] = -0.2052;
	normals[547] = -0.8206;
	normals[548] = -0.5334;

	normals[549] = -0.2052;
	normals[550] = -0.8206;
	normals[551] = -0.5334;

	normals[552] = 0.7995;
	normals[553] = -0.351;
	normals[554] = -0.4875;

	normals[555] = 0.7995;
	normals[556] = -0.351;
	normals[557] = -0.4875;

	normals[558] = 0.7995;
	normals[559] = -0.351;
	normals[560] = -0.4875;

	normals[561] = 0.7995;
	normals[562] = -0.351;
	normals[563] = -0.4875;

	normals[564] = -0.7995;
	normals[565] = -0.351;
	normals[566] = -0.4875;

	normals[567] = -0.7995;
	normals[568] = -0.351;
	normals[569] = -0.4875;

	normals[570] = -0.7995;
	normals[571] = -0.351;
	normals[572] = -0.4875;

	normals[573] = -0.7995;
	normals[574] = -0.351;
	normals[575] = -0.4875;

	normals[576] = 0.4;
	normals[577] = -0.0623;
	normals[578] = 0.9144;

	normals[579] = 0.4;
	normals[580] = -0.0623;
	normals[581] = 0.9144;

	normals[582] = 0.4;
	normals[583] = -0.0623;
	normals[584] = 0.9144;

	normals[585] = -0.4;
	normals[586] = -0.0623;
	normals[587] = 0.9144;

	normals[588] = -0.4;
	normals[589] = -0.0623;
	normals[590] = 0.9144;

	normals[591] = -0.4;
	normals[592] = -0.0623;
	normals[593] = 0.9144;

	normals[594] = 0.3069;
	normals[595] = -0.1754;
	normals[596] = 0.9354;

	normals[597] = 0.3069;
	normals[598] = -0.1754;
	normals[599] = 0.9354;

	normals[600] = 0.3069;
	normals[601] = -0.1754;
	normals[602] = 0.9354;

	normals[603] = -0.3069;
	normals[604] = -0.1754;
	normals[605] = 0.9354;

	normals[606] = -0.3069;
	normals[607] = -0.1754;
	normals[608] = 0.9354;

	normals[609] = -0.3069;
	normals[610] = -0.1754;
	normals[611] = 0.9354;

	normals[612] = 0.0945;
	normals[613] = -0.1835;
	normals[614] = 0.9785;

	normals[615] = 0.0945;
	normals[616] = -0.1835;
	normals[617] = 0.9785;

	normals[618] = 0.0945;
	normals[619] = -0.1835;
	normals[620] = 0.9785;

	normals[621] = -0.0945;
	normals[622] = -0.1835;
	normals[623] = 0.9785;

	normals[624] = -0.0945;
	normals[625] = -0.1835;
	normals[626] = 0.9785;

	normals[627] = -0.0945;
	normals[628] = -0.1835;
	normals[629] = 0.9785;

	normals[630] = -0.0624;
	normals[631] = -0.0283;
	normals[632] = 0.9977;

	normals[633] = -0.0624;
	normals[634] = -0.0283;
	normals[635] = 0.9977;

	normals[636] = -0.0624;
	normals[637] = -0.0283;
	normals[638] = 0.9977;

	normals[639] = 0.0624;
	normals[640] = -0.0283;
	normals[641] = 0.9977;

	normals[642] = 0.0624;
	normals[643] = -0.0283;
	normals[644] = 0.9977;

	normals[645] = 0.0624;
	normals[646] = -0.0283;
	normals[647] = 0.9977;

	normals[648] = -0.0624;
	normals[649] = 0.026;
	normals[650] = 0.9977;

	normals[651] = -0.0624;
	normals[652] = 0.026;
	normals[653] = 0.9977;

	normals[654] = -0.0624;
	normals[655] = 0.026;
	normals[656] = 0.9977;

	normals[657] = 0.0624;
	normals[658] = 0.026;
	normals[659] = 0.9977;

	normals[660] = 0.0624;
	normals[661] = 0.026;
	normals[662] = 0.9977;

	normals[663] = 0.0624;
	normals[664] = 0.026;
	normals[665] = 0.9977;

	normals[666] = 0.0996;
	normals[667] = 0.1729;
	normals[668] = 0.9799;

	normals[669] = 0.0996;
	normals[670] = 0.1729;
	normals[671] = 0.9799;

	normals[672] = 0.0996;
	normals[673] = 0.1729;
	normals[674] = 0.9799;

	normals[675] = -0.0996;
	normals[676] = 0.1729;
	normals[677] = 0.9799;

	normals[678] = -0.0996;
	normals[679] = 0.1729;
	normals[680] = 0.9799;

	normals[681] = -0.0996;
	normals[682] = 0.1729;
	normals[683] = 0.9799;

	normals[684] = 0.3036;
	normals[685] = 0.1656;
	normals[686] = 0.9383;

	normals[687] = 0.3036;
	normals[688] = 0.1656;
	normals[689] = 0.9383;

	normals[690] = 0.3036;
	normals[691] = 0.1656;
	normals[692] = 0.9383;

	normals[693] = -0.3036;
	normals[694] = 0.1656;
	normals[695] = 0.9383;

	normals[696] = -0.3036;
	normals[697] = 0.1656;
	normals[698] = 0.9383;

	normals[699] = -0.3036;
	normals[700] = 0.1656;
	normals[701] = 0.9383;

	normals[702] = 0.4002;
	normals[703] = 0.0572;
	normals[704] = 0.9147;

	normals[705] = 0.4002;
	normals[706] = 0.0572;
	normals[707] = 0.9147;

	normals[708] = 0.4002;
	normals[709] = 0.0572;
	normals[710] = 0.9147;

	normals[711] = -0.4002;
	normals[712] = 0.0572;
	normals[713] = 0.9147;

	normals[714] = -0.4002;
	normals[715] = 0.0572;
	normals[716] = 0.9147;

	normals[717] = -0.4002;
	normals[718] = 0.0572;
	normals[719] = 0.9147;

	normals[720] = 0.1231;
	normals[721] = -0.8616;
	normals[722] = 0.4924;

	normals[723] = 0.1231;
	normals[724] = -0.8616;
	normals[725] = 0.4924;

	normals[726] = 0.1231;
	normals[727] = -0.8616;
	normals[728] = 0.4924;

	normals[729] = 0.1231;
	normals[730] = -0.8616;
	normals[731] = 0.4924;

	normals[732] = -0.1231;
	normals[733] = -0.8616;
	normals[734] = 0.4924;

	normals[735] = -0.1231;
	normals[736] = -0.8616;
	normals[737] = 0.4924;

	normals[738] = -0.1231;
	normals[739] = -0.8616;
	normals[740] = 0.4924;

	normals[741] = -0.1231;
	normals[742] = -0.8616;
	normals[743] = 0.4924;

	normals[744] = 0.219;
	normals[745] = -0.8647;
	normals[746] = 0.452;

	normals[747] = 0.219;
	normals[748] = -0.8647;
	normals[749] = 0.452;

	normals[750] = 0.219;
	normals[751] = -0.8647;
	normals[752] = 0.452;

	normals[753] = 0.219;
	normals[754] = -0.8647;
	normals[755] = 0.452;

	normals[756] = -0.219;
	normals[757] = -0.8647;
	normals[758] = 0.452;

	normals[759] = -0.219;
	normals[760] = -0.8647;
	normals[761] = 0.452;

	normals[762] = -0.219;
	normals[763] = -0.8647;
	normals[764] = 0.452;

	normals[765] = -0.219;
	normals[766] = -0.8647;
	normals[767] = 0.452;

	normals[768] = 0.5902;
	normals[769] = -0.455;
	normals[770] = 0.6668;

	normals[771] = 0.5902;
	normals[772] = -0.455;
	normals[773] = 0.6668;

	normals[774] = 0.5902;
	normals[775] = -0.455;
	normals[776] = 0.6668;

	normals[777] = 0.5902;
	normals[778] = -0.455;
	normals[779] = 0.6668;

	normals[780] = -0.5902;
	normals[781] = -0.455;
	normals[782] = 0.6668;

	normals[783] = -0.5902;
	normals[784] = -0.455;
	normals[785] = 0.6668;

	normals[786] = -0.5902;
	normals[787] = -0.455;
	normals[788] = 0.6668;

	normals[789] = -0.5902;
	normals[790] = -0.455;
	normals[791] = 0.6668;

	normals[792] = 0.7689;
	normals[793] = -0.0506;
	normals[794] = 0.6374;

	normals[795] = 0.7689;
	normals[796] = -0.0506;
	normals[797] = 0.6374;

	normals[798] = 0.7689;
	normals[799] = -0.0506;
	normals[800] = 0.6374;

	normals[801] = 0.7689;
	normals[802] = -0.0506;
	normals[803] = 0.6374;

	normals[804] = -0.7689;
	normals[805] = -0.0506;
	normals[806] = 0.6374;

	normals[807] = -0.7689;
	normals[808] = -0.0506;
	normals[809] = 0.6374;

	normals[810] = -0.7689;
	normals[811] = -0.0506;
	normals[812] = 0.6374;

	normals[813] = -0.7689;
	normals[814] = -0.0506;
	normals[815] = 0.6374;

	normals[816] = 0.7796;
	normals[817] = 0.09;
	normals[818] = 0.6197;

	normals[819] = 0.7796;
	normals[820] = 0.09;
	normals[821] = 0.6197;

	normals[822] = 0.7796;
	normals[823] = 0.09;
	normals[824] = 0.6197;

	normals[825] = 0.7796;
	normals[826] = 0.09;
	normals[827] = 0.6197;

	normals[828] = -0.7796;
	normals[829] = 0.09;
	normals[830] = 0.6197;

	normals[831] = -0.7796;
	normals[832] = 0.09;
	normals[833] = 0.6197;

	normals[834] = -0.7796;
	normals[835] = 0.09;
	normals[836] = 0.6197;

	normals[837] = -0.7796;
	normals[838] = 0.09;
	normals[839] = 0.6197;

	normals[840] = 0.3241;
	normals[841] = -0.8188;
	normals[842] = 0.4739;

	normals[843] = 0.3241;
	normals[844] = -0.8188;
	normals[845] = 0.4739;

	normals[846] = 0.3241;
	normals[847] = -0.8188;
	normals[848] = 0.4739;

	normals[849] = 0.3241;
	normals[850] = -0.8188;
	normals[851] = 0.4739;

	normals[852] = -0.3241;
	normals[853] = -0.8188;
	normals[854] = 0.4739;

	normals[855] = -0.3241;
	normals[856] = -0.8188;
	normals[857] = 0.4739;

	normals[858] = -0.3241;
	normals[859] = -0.8188;
	normals[860] = 0.4739;

	normals[861] = -0.3241;
	normals[862] = -0.8188;
	normals[863] = 0.4739;

	normals[864] = 0.3857;
	normals[865] = -0.6629;
	normals[866] = 0.6417;

	normals[867] = 0.3857;
	normals[868] = -0.6629;
	normals[869] = 0.6417;

	normals[870] = 0.3857;
	normals[871] = -0.6629;
	normals[872] = 0.6417;

	normals[873] = 0.3857;
	normals[874] = -0.6629;
	normals[875] = 0.6417;

	normals[876] = -0.3857;
	normals[877] = -0.6629;
	normals[878] = 0.6417;

	normals[879] = -0.3857;
	normals[880] = -0.6629;
	normals[881] = 0.6417;

	normals[882] = -0.3857;
	normals[883] = -0.6629;
	normals[884] = 0.6417;

	normals[885] = -0.3857;
	normals[886] = -0.6629;
	normals[887] = 0.6417;

	normals[888] = 0.6895;
	normals[889] = -0.4193;
	normals[890] = 0.5906;

	normals[891] = 0.6895;
	normals[892] = -0.4193;
	normals[893] = 0.5906;

	normals[894] = 0.6895;
	normals[895] = -0.4193;
	normals[896] = 0.5906;

	normals[897] = 0.6895;
	normals[898] = -0.4193;
	normals[899] = 0.5906;

	normals[900] = -0.6895;
	normals[901] = -0.4193;
	normals[902] = 0.5906;

	normals[903] = -0.6895;
	normals[904] = -0.4193;
	normals[905] = 0.5906;

	normals[906] = -0.6895;
	normals[907] = -0.4193;
	normals[908] = 0.5906;

	normals[909] = -0.6895;
	normals[910] = -0.4193;
	normals[911] = 0.5906;

	normals[912] = 0.6588;
	normals[913] = -0.3634;
	normals[914] = 0.6588;

	normals[915] = 0.6588;
	normals[916] = -0.3634;
	normals[917] = 0.6588;

	normals[918] = 0.6588;
	normals[919] = -0.3634;
	normals[920] = 0.6588;

	normals[921] = 0.6588;
	normals[922] = -0.3634;
	normals[923] = 0.6588;

	normals[924] = -0.6588;
	normals[925] = -0.3634;
	normals[926] = 0.6588;

	normals[927] = -0.6588;
	normals[928] = -0.3634;
	normals[929] = 0.6588;

	normals[930] = -0.6588;
	normals[931] = -0.3634;
	normals[932] = 0.6588;

	normals[933] = -0.6588;
	normals[934] = -0.3634;
	normals[935] = 0.6588;

	normals[936] = 0.5465;
	normals[937] = 0.3707;
	normals[938] = 0.7509;

	normals[939] = 0.5465;
	normals[940] = 0.3707;
	normals[941] = 0.7509;

	normals[942] = 0.5465;
	normals[943] = 0.3707;
	normals[944] = 0.7509;

	normals[945] = 0.5465;
	normals[946] = 0.3707;
	normals[947] = 0.7509;

	normals[948] = -0.5465;
	normals[949] = 0.3707;
	normals[950] = 0.7509;

	normals[951] = -0.5465;
	normals[952] = 0.3707;
	normals[953] = 0.7509;

	normals[954] = -0.5465;
	normals[955] = 0.3707;
	normals[956] = 0.7509;

	normals[957] = -0.5465;
	normals[958] = 0.3707;
	normals[959] = 0.7509;

	normals[960] = 0.5064;
	normals[961] = 0.6464;
	normals[962] = 0.5706;

	normals[963] = 0.5064;
	normals[964] = 0.6464;
	normals[965] = 0.5706;

	normals[966] = 0.5064;
	normals[967] = 0.6464;
	normals[968] = 0.5706;

	normals[969] = 0.5064;
	normals[970] = 0.6464;
	normals[971] = 0.5706;

	normals[972] = -0.5064;
	normals[973] = 0.6464;
	normals[974] = 0.5706;

	normals[975] = -0.5064;
	normals[976] = 0.6464;
	normals[977] = 0.5706;

	normals[978] = -0.5064;
	normals[979] = 0.6464;
	normals[980] = 0.5706;

	normals[981] = -0.5064;
	normals[982] = 0.6464;
	normals[983] = 0.5706;

	normals[984] = 0.6092;
	normals[985] = 0.5167;
	normals[986] = 0.6015;

	normals[987] = 0.6092;
	normals[988] = 0.5167;
	normals[989] = 0.6015;

	normals[990] = 0.6092;
	normals[991] = 0.5167;
	normals[992] = 0.6015;

	normals[993] = 0.6092;
	normals[994] = 0.5167;
	normals[995] = 0.6015;

	normals[996] = -0.6092;
	normals[997] = 0.5167;
	normals[998] = 0.6015;

	normals[999] = -0.6092;
	normals[1000] = 0.5167;
	normals[1001] = 0.6015;

	normals[1002] = -0.6092;
	normals[1003] = 0.5167;
	normals[1004] = 0.6015;

	normals[1005] = -0.6092;
	normals[1006] = 0.5167;
	normals[1007] = 0.6015;

	normals[1008] = -0.0441;
	normals[1009] = 0.661;
	normals[1010] = 0.7491;

	normals[1011] = -0.0441;
	normals[1012] = 0.661;
	normals[1013] = 0.7491;

	normals[1014] = -0.0441;
	normals[1015] = 0.661;
	normals[1016] = 0.7491;

	normals[1017] = -0.0441;
	normals[1018] = 0.661;
	normals[1019] = 0.7491;

	normals[1020] = 0.0441;
	normals[1021] = 0.661;
	normals[1022] = 0.7491;

	normals[1023] = 0.0441;
	normals[1024] = 0.661;
	normals[1025] = 0.7491;

	normals[1026] = 0.0441;
	normals[1027] = 0.661;
	normals[1028] = 0.7491;

	normals[1029] = 0.0441;
	normals[1030] = 0.661;
	normals[1031] = 0.7491;

	normals[1032] = -0.7246;
	normals[1033] = 0.3187;
	normals[1034] = 0.611;

	normals[1035] = -0.7246;
	normals[1036] = 0.3187;
	normals[1037] = 0.611;

	normals[1038] = -0.7246;
	normals[1039] = 0.3187;
	normals[1040] = 0.611;

	normals[1041] = -0.7246;
	normals[1042] = 0.3187;
	normals[1043] = 0.611;

	normals[1044] = 0.7246;
	normals[1045] = 0.3187;
	normals[1046] = 0.611;

	normals[1047] = 0.7246;
	normals[1048] = 0.3187;
	normals[1049] = 0.611;

	normals[1050] = 0.7246;
	normals[1051] = 0.3187;
	normals[1052] = 0.611;

	normals[1053] = 0.7246;
	normals[1054] = 0.3187;
	normals[1055] = 0.611;

	normals[1056] = -0.588;
	normals[1057] = 0.5554;
	normals[1058] = 0.588;

	normals[1059] = -0.588;
	normals[1060] = 0.5554;
	normals[1061] = 0.588;

	normals[1062] = -0.588;
	normals[1063] = 0.5554;
	normals[1064] = 0.588;

	normals[1065] = -0.588;
	normals[1066] = 0.5554;
	normals[1067] = 0.588;

	normals[1068] = 0.588;
	normals[1069] = 0.5554;
	normals[1070] = 0.588;

	normals[1071] = 0.588;
	normals[1072] = 0.5554;
	normals[1073] = 0.588;

	normals[1074] = 0.588;
	normals[1075] = 0.5554;
	normals[1076] = 0.588;

	normals[1077] = 0.588;
	normals[1078] = 0.5554;
	normals[1079] = 0.588;

	normals[1080] = 0.5361;
	normals[1081] = -0.3909;
	normals[1082] = 0.7482;

	normals[1083] = 0.5361;
	normals[1084] = -0.3909;
	normals[1085] = 0.7482;

	normals[1086] = 0.5361;
	normals[1087] = -0.3909;
	normals[1088] = 0.7482;

	normals[1089] = 0.5361;
	normals[1090] = -0.3909;
	normals[1091] = 0.7482;

	normals[1092] = -0.5361;
	normals[1093] = -0.3909;
	normals[1094] = 0.7482;

	normals[1095] = -0.5361;
	normals[1096] = -0.3909;
	normals[1097] = 0.7482;

	normals[1098] = -0.5361;
	normals[1099] = -0.3909;
	normals[1100] = 0.7482;

	normals[1101] = -0.5361;
	normals[1102] = -0.3909;
	normals[1103] = 0.7482;

	normals[1104] = 0.2207;
	normals[1105] = -0.469;
	normals[1106] = 0.8552;

	normals[1107] = 0.2207;
	normals[1108] = -0.469;
	normals[1109] = 0.8552;

	normals[1110] = 0.2207;
	normals[1111] = -0.469;
	normals[1112] = 0.8552;

	normals[1113] = 0.2207;
	normals[1114] = -0.469;
	normals[1115] = 0.8552;

	normals[1116] = -0.2207;
	normals[1117] = -0.469;
	normals[1118] = 0.8552;

	normals[1119] = -0.2207;
	normals[1120] = -0.469;
	normals[1121] = 0.8552;

	normals[1122] = -0.2207;
	normals[1123] = -0.469;
	normals[1124] = 0.8552;

	normals[1125] = -0.2207;
	normals[1126] = -0.469;
	normals[1127] = 0.8552;

	normals[1128] = -0.0794;
	normals[1129] = -0.5321;
	normals[1130] = 0.8429;

	normals[1131] = -0.0794;
	normals[1132] = -0.5321;
	normals[1133] = 0.8429;

	normals[1134] = -0.0794;
	normals[1135] = -0.5321;
	normals[1136] = 0.8429;

	normals[1137] = -0.0794;
	normals[1138] = -0.5321;
	normals[1139] = 0.8429;

	normals[1140] = 0.0794;
	normals[1141] = -0.5321;
	normals[1142] = 0.8429;

	normals[1143] = 0.0794;
	normals[1144] = -0.5321;
	normals[1145] = 0.8429;

	normals[1146] = 0.0794;
	normals[1147] = -0.5321;
	normals[1148] = 0.8429;

	normals[1149] = 0.0794;
	normals[1150] = -0.5321;
	normals[1151] = 0.8429;

	normals[1152] = -0.0825;
	normals[1153] = -0.6575;
	normals[1154] = 0.749;

	normals[1155] = -0.0825;
	normals[1156] = -0.6575;
	normals[1157] = 0.749;

	normals[1158] = -0.0825;
	normals[1159] = -0.6575;
	normals[1160] = 0.749;

	normals[1161] = -0.0825;
	normals[1162] = -0.6575;
	normals[1163] = 0.749;

	normals[1164] = 0.0825;
	normals[1165] = -0.6575;
	normals[1166] = 0.749;

	normals[1167] = 0.0825;
	normals[1168] = -0.6575;
	normals[1169] = 0.749;

	normals[1170] = 0.0825;
	normals[1171] = -0.6575;
	normals[1172] = 0.749;

	normals[1173] = 0.0825;
	normals[1174] = -0.6575;
	normals[1175] = 0.749;

	normals[1176] = 0.0457;
	normals[1177] = -0.5667;
	normals[1178] = 0.8226;

	normals[1179] = 0.0457;
	normals[1180] = -0.5667;
	normals[1181] = 0.8226;

	normals[1182] = 0.0457;
	normals[1183] = -0.5667;
	normals[1184] = 0.8226;

	normals[1185] = 0.0457;
	normals[1186] = -0.5667;
	normals[1187] = 0.8226;

	normals[1188] = -0.0457;
	normals[1189] = -0.5667;
	normals[1190] = 0.8226;

	normals[1191] = -0.0457;
	normals[1192] = -0.5667;
	normals[1193] = 0.8226;

	normals[1194] = -0.0457;
	normals[1195] = -0.5667;
	normals[1196] = 0.8226;

	normals[1197] = -0.0457;
	normals[1198] = -0.5667;
	normals[1199] = 0.8226;

	normals[1200] = 0.2784;
	normals[1201] = -0.213;
	normals[1202] = 0.9365;

	normals[1203] = 0.2784;
	normals[1204] = -0.213;
	normals[1205] = 0.9365;

	normals[1206] = 0.2784;
	normals[1207] = -0.213;
	normals[1208] = 0.9365;

	normals[1209] = 0.2784;
	normals[1210] = -0.213;
	normals[1211] = 0.9365;

	normals[1212] = -0.2784;
	normals[1213] = -0.213;
	normals[1214] = 0.9365;

	normals[1215] = -0.2784;
	normals[1216] = -0.213;
	normals[1217] = 0.9365;

	normals[1218] = -0.2784;
	normals[1219] = -0.213;
	normals[1220] = 0.9365;

	normals[1221] = -0.2784;
	normals[1222] = -0.213;
	normals[1223] = 0.9365;

	normals[1224] = 0.3813;
	normals[1225] = -0.1824;
	normals[1226] = 0.9063;

	normals[1227] = 0.3813;
	normals[1228] = -0.1824;
	normals[1229] = 0.9063;

	normals[1230] = 0.3813;
	normals[1231] = -0.1824;
	normals[1232] = 0.9063;

	normals[1233] = 0.3813;
	normals[1234] = -0.1824;
	normals[1235] = 0.9063;

	normals[1236] = -0.3813;
	normals[1237] = -0.1824;
	normals[1238] = 0.9063;

	normals[1239] = -0.3813;
	normals[1240] = -0.1824;
	normals[1241] = 0.9063;

	normals[1242] = -0.3813;
	normals[1243] = -0.1824;
	normals[1244] = 0.9063;

	normals[1245] = -0.3813;
	normals[1246] = -0.1824;
	normals[1247] = 0.9063;

	normals[1248] = 0.3357;
	normals[1249] = -0.2878;
	normals[1250] = 0.8969;

	normals[1251] = 0.3357;
	normals[1252] = -0.2878;
	normals[1253] = 0.8969;

	normals[1254] = 0.3357;
	normals[1255] = -0.2878;
	normals[1256] = 0.8969;

	normals[1257] = 0.3357;
	normals[1258] = -0.2878;
	normals[1259] = 0.8969;

	normals[1260] = -0.3357;
	normals[1261] = -0.2878;
	normals[1262] = 0.8969;

	normals[1263] = -0.3357;
	normals[1264] = -0.2878;
	normals[1265] = 0.8969;

	normals[1266] = -0.3357;
	normals[1267] = -0.2878;
	normals[1268] = 0.8969;

	normals[1269] = -0.3357;
	normals[1270] = -0.2878;
	normals[1271] = 0.8969;

	normals[1272] = 0.3762;
	normals[1273] = 0.0603;
	normals[1274] = 0.9246;

	normals[1275] = 0.3762;
	normals[1276] = 0.0603;
	normals[1277] = 0.9246;

	normals[1278] = 0.3762;
	normals[1279] = 0.0603;
	normals[1280] = 0.9246;

	normals[1281] = 0.3762;
	normals[1282] = 0.0603;
	normals[1283] = 0.9246;

	normals[1284] = -0.3762;
	normals[1285] = 0.0603;
	normals[1286] = 0.9246;

	normals[1287] = -0.3762;
	normals[1288] = 0.0603;
	normals[1289] = 0.9246;

	normals[1290] = -0.3762;
	normals[1291] = 0.0603;
	normals[1292] = 0.9246;

	normals[1293] = -0.3762;
	normals[1294] = 0.0603;
	normals[1295] = 0.9246;

	normals[1296] = -0.1352;
	normals[1297] = 0.268;
	normals[1298] = 0.9539;

	normals[1299] = -0.1352;
	normals[1300] = 0.268;
	normals[1301] = 0.9539;

	normals[1302] = -0.1352;
	normals[1303] = 0.268;
	normals[1304] = 0.9539;

	normals[1305] = -0.1352;
	normals[1306] = 0.268;
	normals[1307] = 0.9539;

	normals[1308] = 0.1352;
	normals[1309] = 0.268;
	normals[1310] = 0.9539;

	normals[1311] = 0.1352;
	normals[1312] = 0.268;
	normals[1313] = 0.9539;

	normals[1314] = 0.1352;
	normals[1315] = 0.268;
	normals[1316] = 0.9539;

	normals[1317] = 0.1352;
	normals[1318] = 0.268;
	normals[1319] = 0.9539;

	normals[1320] = 0.3961;
	normals[1321] = -0.4321;
	normals[1322] = 0.8102;

	normals[1323] = 0.3961;
	normals[1324] = -0.4321;
	normals[1325] = 0.8102;

	normals[1326] = 0.3961;
	normals[1327] = -0.4321;
	normals[1328] = 0.8102;

	normals[1329] = 0.3961;
	normals[1330] = -0.4321;
	normals[1331] = 0.8102;

	normals[1332] = -0.3961;
	normals[1333] = -0.4321;
	normals[1334] = 0.8102;

	normals[1335] = -0.3961;
	normals[1336] = -0.4321;
	normals[1337] = 0.8102;

	normals[1338] = -0.3961;
	normals[1339] = -0.4321;
	normals[1340] = 0.8102;

	normals[1341] = -0.3961;
	normals[1342] = -0.4321;
	normals[1343] = 0.8102;

	normals[1344] = 0.1856;
	normals[1345] = -0.2474;
	normals[1346] = 0.951;

	normals[1347] = 0.1856;
	normals[1348] = -0.2474;
	normals[1349] = 0.951;

	normals[1350] = 0.1856;
	normals[1351] = -0.2474;
	normals[1352] = 0.951;

	normals[1353] = 0.1856;
	normals[1354] = -0.2474;
	normals[1355] = 0.951;

	normals[1356] = -0.1856;
	normals[1357] = -0.2474;
	normals[1358] = 0.951;

	normals[1359] = -0.1856;
	normals[1360] = -0.2474;
	normals[1361] = 0.951;

	normals[1362] = -0.1856;
	normals[1363] = -0.2474;
	normals[1364] = 0.951;

	normals[1365] = -0.1856;
	normals[1366] = -0.2474;
	normals[1367] = 0.951;

	normals[1368] = 0.0099;
	normals[1369] = -0.1948;
	normals[1370] = 0.9808;

	normals[1371] = 0.0099;
	normals[1372] = -0.1948;
	normals[1373] = 0.9808;

	normals[1374] = 0.0099;
	normals[1375] = -0.1948;
	normals[1376] = 0.9808;

	normals[1377] = 0.0099;
	normals[1378] = -0.1948;
	normals[1379] = 0.9808;

	normals[1380] = -0.0099;
	normals[1381] = -0.1948;
	normals[1382] = 0.9808;

	normals[1383] = -0.0099;
	normals[1384] = -0.1948;
	normals[1385] = 0.9808;

	normals[1386] = -0.0099;
	normals[1387] = -0.1948;
	normals[1388] = 0.9808;

	normals[1389] = -0.0099;
	normals[1390] = -0.1948;
	normals[1391] = 0.9808;

	normals[1392] = 0.0721;
	normals[1393] = -0.6966;
	normals[1394] = 0.7138;

	normals[1395] = 0.0721;
	normals[1396] = -0.6966;
	normals[1397] = 0.7138;

	normals[1398] = 0.0721;
	normals[1399] = -0.6966;
	normals[1400] = 0.7138;

	normals[1401] = 0.0721;
	normals[1402] = -0.6966;
	normals[1403] = 0.7138;

	normals[1404] = -0.0721;
	normals[1405] = -0.6966;
	normals[1406] = 0.7138;

	normals[1407] = -0.0721;
	normals[1408] = -0.6966;
	normals[1409] = 0.7138;

	normals[1410] = -0.0721;
	normals[1411] = -0.6966;
	normals[1412] = 0.7138;

	normals[1413] = -0.0721;
	normals[1414] = -0.6966;
	normals[1415] = 0.7138;

	normals[1416] = 0.1863;
	normals[1417] = -0.5723;
	normals[1418] = 0.7986;

	normals[1419] = 0.1863;
	normals[1420] = -0.5723;
	normals[1421] = 0.7986;

	normals[1422] = 0.1863;
	normals[1423] = -0.5723;
	normals[1424] = 0.7986;

	normals[1425] = 0.1863;
	normals[1426] = -0.5723;
	normals[1427] = 0.7986;

	normals[1428] = -0.1863;
	normals[1429] = -0.5723;
	normals[1430] = 0.7986;

	normals[1431] = -0.1863;
	normals[1432] = -0.5723;
	normals[1433] = 0.7986;

	normals[1434] = -0.1863;
	normals[1435] = -0.5723;
	normals[1436] = 0.7986;

	normals[1437] = -0.1863;
	normals[1438] = -0.5723;
	normals[1439] = 0.7986;

	normals[1440] = 0.3157;
	normals[1441] = -0.2708;
	normals[1442] = 0.9094;

	normals[1443] = 0.3157;
	normals[1444] = -0.2708;
	normals[1445] = 0.9094;

	normals[1446] = 0.3157;
	normals[1447] = -0.2708;
	normals[1448] = 0.9094;

	normals[1449] = 0.3157;
	normals[1450] = -0.2708;
	normals[1451] = 0.9094;

	normals[1452] = -0.3157;
	normals[1453] = -0.2708;
	normals[1454] = 0.9094;

	normals[1455] = -0.3157;
	normals[1456] = -0.2708;
	normals[1457] = 0.9094;

	normals[1458] = -0.3157;
	normals[1459] = -0.2708;
	normals[1460] = 0.9094;

	normals[1461] = -0.3157;
	normals[1462] = -0.2708;
	normals[1463] = 0.9094;

	normals[1464] = 0.3063;
	normals[1465] = -0.0265;
	normals[1466] = 0.9516;

	normals[1467] = 0.3063;
	normals[1468] = -0.0265;
	normals[1469] = 0.9516;

	normals[1470] = 0.3063;
	normals[1471] = -0.0265;
	normals[1472] = 0.9516;

	normals[1473] = 0.3063;
	normals[1474] = -0.0265;
	normals[1475] = 0.9516;

	normals[1476] = -0.3063;
	normals[1477] = -0.0265;
	normals[1478] = 0.9516;

	normals[1479] = -0.3063;
	normals[1480] = -0.0265;
	normals[1481] = 0.9516;

	normals[1482] = -0.3063;
	normals[1483] = -0.0265;
	normals[1484] = 0.9516;

	normals[1485] = -0.3063;
	normals[1486] = -0.0265;
	normals[1487] = 0.9516;

	normals[1488] = 0.3266;
	normals[1489] = -0.1306;
	normals[1490] = 0.9361;

	normals[1491] = 0.3266;
	normals[1492] = -0.1306;
	normals[1493] = 0.9361;

	normals[1494] = 0.3266;
	normals[1495] = -0.1306;
	normals[1496] = 0.9361;

	normals[1497] = 0.3266;
	normals[1498] = -0.1306;
	normals[1499] = 0.9361;

	normals[1500] = -0.3265;
	normals[1501] = -0.1306;
	normals[1502] = 0.9361;

	normals[1503] = -0.3265;
	normals[1504] = -0.1306;
	normals[1505] = 0.9361;

	normals[1506] = -0.3265;
	normals[1507] = -0.1306;
	normals[1508] = 0.9361;

	normals[1509] = -0.3265;
	normals[1510] = -0.1306;
	normals[1511] = 0.9361;

	normals[1512] = -0.0137;
	normals[1513] = 0.0574;
	normals[1514] = 0.9983;

	normals[1515] = -0.0137;
	normals[1516] = 0.0574;
	normals[1517] = 0.9983;

	normals[1518] = -0.0137;
	normals[1519] = 0.0574;
	normals[1520] = 0.9983;

	normals[1521] = -0.0137;
	normals[1522] = 0.0574;
	normals[1523] = 0.9983;

	normals[1524] = 0.0137;
	normals[1525] = 0.0574;
	normals[1526] = 0.9983;

	normals[1527] = 0.0137;
	normals[1528] = 0.0574;
	normals[1529] = 0.9983;

	normals[1530] = 0.0137;
	normals[1531] = 0.0574;
	normals[1532] = 0.9983;

	normals[1533] = 0.0137;
	normals[1534] = 0.0574;
	normals[1535] = 0.9983;

	normals[1536] = -0.0026;
	normals[1537] = -0.0656;
	normals[1538] = 0.9978;

	normals[1539] = -0.0026;
	normals[1540] = -0.0656;
	normals[1541] = 0.9978;

	normals[1542] = -0.0026;
	normals[1543] = -0.0656;
	normals[1544] = 0.9978;

	normals[1545] = -0.0026;
	normals[1546] = -0.0656;
	normals[1547] = 0.9978;

	normals[1548] = 0.0026;
	normals[1549] = -0.0656;
	normals[1550] = 0.9978;

	normals[1551] = 0.0026;
	normals[1552] = -0.0656;
	normals[1553] = 0.9978;

	normals[1554] = 0.0026;
	normals[1555] = -0.0656;
	normals[1556] = 0.9978;

	normals[1557] = 0.0026;
	normals[1558] = -0.0656;
	normals[1559] = 0.9978;

	normals[1560] = 0;
	normals[1561] = 0;
	normals[1562] = 1;

	normals[1563] = 0;
	normals[1564] = 0;
	normals[1565] = 1;

	normals[1566] = 0;
	normals[1567] = 0;
	normals[1568] = 1;

	normals[1569] = 0;
	normals[1570] = 0;
	normals[1571] = 1;

	normals[1572] = 0;
	normals[1573] = 0;
	normals[1574] = 1;

	normals[1575] = 0;
	normals[1576] = 0;
	normals[1577] = 1;

	normals[1578] = 0;
	normals[1579] = 0;
	normals[1580] = 1;

	normals[1581] = 0;
	normals[1582] = 0;
	normals[1583] = 1;

	normals[1584] = 0.8174;
	normals[1585] = -0.5744;
	normals[1586] = -0.0442;

	normals[1587] = 0.8174;
	normals[1588] = -0.5744;
	normals[1589] = -0.0442;

	normals[1590] = 0.8174;
	normals[1591] = -0.5744;
	normals[1592] = -0.0442;

	normals[1593] = 0.8174;
	normals[1594] = -0.5744;
	normals[1595] = -0.0442;

	normals[1596] = -0.8174;
	normals[1597] = -0.5744;
	normals[1598] = -0.0442;

	normals[1599] = -0.8174;
	normals[1600] = -0.5744;
	normals[1601] = -0.0442;

	normals[1602] = -0.8174;
	normals[1603] = -0.5744;
	normals[1604] = -0.0442;

	normals[1605] = -0.8174;
	normals[1606] = -0.5744;
	normals[1607] = -0.0442;

	normals[1608] = 0.9494;
	normals[1609] = 0.2297;
	normals[1610] = -0.2144;

	normals[1611] = 0.9494;
	normals[1612] = 0.2297;
	normals[1613] = -0.2144;

	normals[1614] = 0.9494;
	normals[1615] = 0.2297;
	normals[1616] = -0.2144;

	normals[1617] = 0.9494;
	normals[1618] = 0.2297;
	normals[1619] = -0.2144;

	normals[1620] = -0.9494;
	normals[1621] = 0.2297;
	normals[1622] = -0.2144;

	normals[1623] = -0.9494;
	normals[1624] = 0.2297;
	normals[1625] = -0.2144;

	normals[1626] = -0.9494;
	normals[1627] = 0.2297;
	normals[1628] = -0.2144;

	normals[1629] = -0.9494;
	normals[1630] = 0.2297;
	normals[1631] = -0.2144;

	normals[1632] = 0.0825;
	normals[1633] = 0.9073;
	normals[1634] = -0.4124;

	normals[1635] = 0.0825;
	normals[1636] = 0.9073;
	normals[1637] = -0.4124;

	normals[1638] = 0.0825;
	normals[1639] = 0.9073;
	normals[1640] = -0.4124;

	normals[1641] = 0.0825;
	normals[1642] = 0.9073;
	normals[1643] = -0.4124;

	normals[1644] = -0.0825;
	normals[1645] = 0.9073;
	normals[1646] = -0.4124;

	normals[1647] = -0.0825;
	normals[1648] = 0.9073;
	normals[1649] = -0.4124;

	normals[1650] = -0.0825;
	normals[1651] = 0.9073;
	normals[1652] = -0.4124;

	normals[1653] = -0.0825;
	normals[1654] = 0.9073;
	normals[1655] = -0.4124;

	normals[1656] = -0.8836;
	normals[1657] = 0.3555;
	normals[1658] = 0.3047;

	normals[1659] = -0.8836;
	normals[1660] = 0.3555;
	normals[1661] = 0.3047;

	normals[1662] = -0.8836;
	normals[1663] = 0.3555;
	normals[1664] = 0.3047;

	normals[1665] = -0.8836;
	normals[1666] = 0.3555;
	normals[1667] = 0.3047;

	normals[1668] = 0.8836;
	normals[1669] = 0.3555;
	normals[1670] = 0.3047;

	normals[1671] = 0.8836;
	normals[1672] = 0.3555;
	normals[1673] = 0.3047;

	normals[1674] = 0.8836;
	normals[1675] = 0.3555;
	normals[1676] = 0.3047;

	normals[1677] = 0.8836;
	normals[1678] = 0.3555;
	normals[1679] = 0.3047;

	normals[1680] = 0.4207;
	normals[1681] = -0.8797;
	normals[1682] = 0.2218;

	normals[1683] = 0.4207;
	normals[1684] = -0.8797;
	normals[1685] = 0.2218;

	normals[1686] = 0.4207;
	normals[1687] = -0.8797;
	normals[1688] = 0.2218;

	normals[1689] = 0.4207;
	normals[1690] = -0.8797;
	normals[1691] = 0.2218;

	normals[1692] = -0.4207;
	normals[1693] = -0.8797;
	normals[1694] = 0.2218;

	normals[1695] = -0.4207;
	normals[1696] = -0.8797;
	normals[1697] = 0.2218;

	normals[1698] = -0.4207;
	normals[1699] = -0.8797;
	normals[1700] = 0.2218;

	normals[1701] = -0.4207;
	normals[1702] = -0.8797;
	normals[1703] = 0.2218;

	normals[1704] = 0.2873;
	normals[1705] = -0.5747;
	normals[1706] = 0.7663;

	normals[1707] = 0.2873;
	normals[1708] = -0.5747;
	normals[1709] = 0.7663;

	normals[1710] = 0.2873;
	normals[1711] = -0.5747;
	normals[1712] = 0.7663;

	normals[1713] = 0.2873;
	normals[1714] = -0.5747;
	normals[1715] = 0.7663;

	normals[1716] = -0.2873;
	normals[1717] = -0.5747;
	normals[1718] = 0.7663;

	normals[1719] = -0.2873;
	normals[1720] = -0.5747;
	normals[1721] = 0.7663;

	normals[1722] = -0.2873;
	normals[1723] = -0.5747;
	normals[1724] = 0.7663;

	normals[1725] = -0.2873;
	normals[1726] = -0.5747;
	normals[1727] = 0.7663;

	normals[1728] = -0.6542;
	normals[1729] = 0.6019;
	normals[1730] = 0.458;

	normals[1731] = -0.6542;
	normals[1732] = 0.6019;
	normals[1733] = 0.458;

	normals[1734] = -0.6542;
	normals[1735] = 0.6019;
	normals[1736] = 0.458;

	normals[1737] = -0.6542;
	normals[1738] = 0.6019;
	normals[1739] = 0.458;

	normals[1740] = 0.6542;
	normals[1741] = 0.6019;
	normals[1742] = 0.458;

	normals[1743] = 0.6542;
	normals[1744] = 0.6019;
	normals[1745] = 0.458;

	normals[1746] = 0.6542;
	normals[1747] = 0.6019;
	normals[1748] = 0.458;

	normals[1749] = 0.6542;
	normals[1750] = 0.6019;
	normals[1751] = 0.458;

	normals[1752] = 0.1052;
	normals[1753] = 0.7892;
	normals[1754] = 0.6051;

	normals[1755] = 0.1052;
	normals[1756] = 0.7892;
	normals[1757] = 0.6051;

	normals[1758] = 0.1052;
	normals[1759] = 0.7892;
	normals[1760] = 0.6051;

	normals[1761] = 0.1052;
	normals[1762] = 0.7892;
	normals[1763] = 0.6051;

	normals[1764] = -0.1052;
	normals[1765] = 0.7892;
	normals[1766] = 0.6051;

	normals[1767] = -0.1052;
	normals[1768] = 0.7892;
	normals[1769] = 0.6051;

	normals[1770] = -0.1052;
	normals[1771] = 0.7892;
	normals[1772] = 0.6051;

	normals[1773] = -0.1052;
	normals[1774] = 0.7892;
	normals[1775] = 0.6051;

	normals[1776] = 0.7582;
	normals[1777] = 0.2916;
	normals[1778] = 0.5832;

	normals[1779] = 0.7582;
	normals[1780] = 0.2916;
	normals[1781] = 0.5832;

	normals[1782] = 0.7582;
	normals[1783] = 0.2916;
	normals[1784] = 0.5832;

	normals[1785] = 0.7582;
	normals[1786] = 0.2916;
	normals[1787] = 0.5832;

	normals[1788] = -0.7582;
	normals[1789] = 0.2916;
	normals[1790] = 0.5832;

	normals[1791] = -0.7582;
	normals[1792] = 0.2916;
	normals[1793] = 0.5832;

	normals[1794] = -0.7582;
	normals[1795] = 0.2916;
	normals[1796] = 0.5832;

	normals[1797] = -0.7582;
	normals[1798] = 0.2916;
	normals[1799] = 0.5832;

	normals[1800] = 0.3889;
	normals[1801] = -0.713;
	normals[1802] = 0.5834;

	normals[1803] = 0.3889;
	normals[1804] = -0.713;
	normals[1805] = 0.5834;

	normals[1806] = 0.3889;
	normals[1807] = -0.713;
	normals[1808] = 0.5834;

	normals[1809] = 0.3889;
	normals[1810] = -0.713;
	normals[1811] = 0.5834;

	normals[1812] = -0.3889;
	normals[1813] = -0.713;
	normals[1814] = 0.5834;

	normals[1815] = -0.3889;
	normals[1816] = -0.713;
	normals[1817] = 0.5834;

	normals[1818] = -0.3889;
	normals[1819] = -0.713;
	normals[1820] = 0.5834;

	normals[1821] = -0.3889;
	normals[1822] = -0.713;
	normals[1823] = 0.5834;

	normals[1824] = 0.0463;
	normals[1825] = 0.2314;
	normals[1826] = 0.9718;

	normals[1827] = 0.0463;
	normals[1828] = 0.2314;
	normals[1829] = 0.9718;

	normals[1830] = 0.0463;
	normals[1831] = 0.2314;
	normals[1832] = 0.9718;

	normals[1833] = 0.0463;
	normals[1834] = 0.2314;
	normals[1835] = 0.9718;

	normals[1836] = -0.0463;
	normals[1837] = 0.2314;
	normals[1838] = 0.9718;

	normals[1839] = -0.0463;
	normals[1840] = 0.2314;
	normals[1841] = 0.9718;

	normals[1842] = -0.0463;
	normals[1843] = 0.2314;
	normals[1844] = 0.9718;

	normals[1845] = -0.0463;
	normals[1846] = 0.2314;
	normals[1847] = 0.9718;

	normals[1848] = 0.0335;
	normals[1849] = -0.4018;
	normals[1850] = 0.9151;

	normals[1851] = 0.0335;
	normals[1852] = -0.4018;
	normals[1853] = 0.9151;

	normals[1854] = 0.0335;
	normals[1855] = -0.4018;
	normals[1856] = 0.9151;

	normals[1857] = 0.0335;
	normals[1858] = -0.4018;
	normals[1859] = 0.9151;

	normals[1860] = -0.0335;
	normals[1861] = -0.4018;
	normals[1862] = 0.9151;

	normals[1863] = -0.0335;
	normals[1864] = -0.4018;
	normals[1865] = 0.9151;

	normals[1866] = -0.0335;
	normals[1867] = -0.4018;
	normals[1868] = 0.9151;

	normals[1869] = -0.0335;
	normals[1870] = -0.4018;
	normals[1871] = 0.9151;

	normals[1872] = -0.4452;
	normals[1873] = -0.161;
	normals[1874] = 0.8809;

	normals[1875] = -0.4452;
	normals[1876] = -0.161;
	normals[1877] = 0.8809;

	normals[1878] = -0.4452;
	normals[1879] = -0.161;
	normals[1880] = 0.8809;

	normals[1881] = -0.4452;
	normals[1882] = -0.161;
	normals[1883] = 0.8809;

	normals[1884] = 0.4452;
	normals[1885] = -0.161;
	normals[1886] = 0.8809;

	normals[1887] = 0.4452;
	normals[1888] = -0.161;
	normals[1889] = 0.8809;

	normals[1890] = 0.4452;
	normals[1891] = -0.161;
	normals[1892] = 0.8809;

	normals[1893] = 0.4452;
	normals[1894] = -0.161;
	normals[1895] = 0.8809;

	normals[1896] = -0.2182;
	normals[1897] = -0.4364;
	normals[1898] = 0.8729;

	normals[1899] = -0.2182;
	normals[1900] = -0.4364;
	normals[1901] = 0.8729;

	normals[1902] = -0.2182;
	normals[1903] = -0.4364;
	normals[1904] = 0.8729;

	normals[1905] = -0.2182;
	normals[1906] = -0.4364;
	normals[1907] = 0.8729;

	normals[1908] = 0.2182;
	normals[1909] = -0.4364;
	normals[1910] = 0.8729;

	normals[1911] = 0.2182;
	normals[1912] = -0.4364;
	normals[1913] = 0.8729;

	normals[1914] = 0.2182;
	normals[1915] = -0.4364;
	normals[1916] = 0.8729;

	normals[1917] = 0.2182;
	normals[1918] = -0.4364;
	normals[1919] = 0.8729;

	normals[1920] = 0.4341;
	normals[1921] = -0.129;
	normals[1922] = 0.8916;

	normals[1923] = 0.4341;
	normals[1924] = -0.129;
	normals[1925] = 0.8916;

	normals[1926] = 0.4341;
	normals[1927] = -0.129;
	normals[1928] = 0.8916;

	normals[1929] = 0.4341;
	normals[1930] = -0.129;
	normals[1931] = 0.8916;

	normals[1932] = -0.4341;
	normals[1933] = -0.129;
	normals[1934] = 0.8916;

	normals[1935] = -0.4341;
	normals[1936] = -0.129;
	normals[1937] = 0.8916;

	normals[1938] = -0.4341;
	normals[1939] = -0.129;
	normals[1940] = 0.8916;

	normals[1941] = -0.4341;
	normals[1942] = -0.129;
	normals[1943] = 0.8916;

	normals[1944] = 0.3008;
	normals[1945] = 0.0501;
	normals[1946] = 0.9524;

	normals[1947] = 0.3008;
	normals[1948] = 0.0501;
	normals[1949] = 0.9524;

	normals[1950] = 0.3008;
	normals[1951] = 0.0501;
	normals[1952] = 0.9524;

	normals[1953] = 0.3008;
	normals[1954] = 0.0501;
	normals[1955] = 0.9524;

	normals[1956] = -0.3008;
	normals[1957] = 0.0501;
	normals[1958] = 0.9524;

	normals[1959] = -0.3008;
	normals[1960] = 0.0501;
	normals[1961] = 0.9524;

	normals[1962] = -0.3008;
	normals[1963] = 0.0501;
	normals[1964] = 0.9524;

	normals[1965] = -0.3008;
	normals[1966] = 0.0501;
	normals[1967] = 0.9524;

	normals[1968] = 0.8123;
	normals[1969] = 0.301;
	normals[1970] = 0.4996;

	normals[1971] = 0.8123;
	normals[1972] = 0.301;
	normals[1973] = 0.4996;

	normals[1974] = 0.8123;
	normals[1975] = 0.301;
	normals[1976] = 0.4996;

	normals[1977] = 0.8123;
	normals[1978] = 0.301;
	normals[1979] = 0.4996;

	normals[1980] = -0.8123;
	normals[1981] = 0.301;
	normals[1982] = 0.4996;

	normals[1983] = -0.8123;
	normals[1984] = 0.301;
	normals[1985] = 0.4996;

	normals[1986] = -0.8123;
	normals[1987] = 0.301;
	normals[1988] = 0.4996;

	normals[1989] = -0.8123;
	normals[1990] = 0.301;
	normals[1991] = 0.4996;

	normals[1992] = 0.8753;
	normals[1993] = 0.2574;
	normals[1994] = 0.4093;

	normals[1995] = 0.8753;
	normals[1996] = 0.2574;
	normals[1997] = 0.4093;

	normals[1998] = 0.8753;
	normals[1999] = 0.2574;
	normals[2000] = 0.4093;

	normals[2001] = 0.8753;
	normals[2002] = 0.2574;
	normals[2003] = 0.4093;

	normals[2004] = -0.8753;
	normals[2005] = 0.2574;
	normals[2006] = 0.4093;

	normals[2007] = -0.8753;
	normals[2008] = 0.2574;
	normals[2009] = 0.4093;

	normals[2010] = -0.8753;
	normals[2011] = 0.2574;
	normals[2012] = 0.4093;

	normals[2013] = -0.8753;
	normals[2014] = 0.2574;
	normals[2015] = 0.4093;

	normals[2016] = 0.9385;
	normals[2017] = 0.1601;
	normals[2018] = 0.306;

	normals[2019] = 0.9385;
	normals[2020] = 0.1601;
	normals[2021] = 0.306;

	normals[2022] = 0.9385;
	normals[2023] = 0.1601;
	normals[2024] = 0.306;

	normals[2025] = 0.9385;
	normals[2026] = 0.1601;
	normals[2027] = 0.306;

	normals[2028] = -0.9385;
	normals[2029] = 0.1601;
	normals[2030] = 0.306;

	normals[2031] = -0.9385;
	normals[2032] = 0.1601;
	normals[2033] = 0.306;

	normals[2034] = -0.9385;
	normals[2035] = 0.1601;
	normals[2036] = 0.306;

	normals[2037] = -0.9385;
	normals[2038] = 0.1601;
	normals[2039] = 0.306;

	normals[2040] = 0.2237;
	normals[2041] = -0.6539;
	normals[2042] = 0.7227;

	normals[2043] = 0.2237;
	normals[2044] = -0.6539;
	normals[2045] = 0.7227;

	normals[2046] = 0.2237;
	normals[2047] = -0.6539;
	normals[2048] = 0.7227;

	normals[2049] = 0.2237;
	normals[2050] = -0.6539;
	normals[2051] = 0.7227;

	normals[2052] = -0.2237;
	normals[2053] = -0.6539;
	normals[2054] = 0.7227;

	normals[2055] = -0.2237;
	normals[2056] = -0.6539;
	normals[2057] = 0.7227;

	normals[2058] = -0.2237;
	normals[2059] = -0.6539;
	normals[2060] = 0.7227;

	normals[2061] = -0.2237;
	normals[2062] = -0.6539;
	normals[2063] = 0.7227;

	normals[2064] = -0.1536;
	normals[2065] = -0.1997;
	normals[2066] = 0.9677;

	normals[2067] = -0.1536;
	normals[2068] = -0.1997;
	normals[2069] = 0.9677;

	normals[2070] = -0.1536;
	normals[2071] = -0.1997;
	normals[2072] = 0.9677;

	normals[2073] = -0.1536;
	normals[2074] = -0.1997;
	normals[2075] = 0.9677;

	normals[2076] = 0.1536;
	normals[2077] = -0.1997;
	normals[2078] = 0.9677;

	normals[2079] = 0.1536;
	normals[2080] = -0.1997;
	normals[2081] = 0.9677;

	normals[2082] = 0.1536;
	normals[2083] = -0.1997;
	normals[2084] = 0.9677;

	normals[2085] = 0.1536;
	normals[2086] = -0.1997;
	normals[2087] = 0.9677;

	normals[2088] = -0.2733;
	normals[2089] = -0.1025;
	normals[2090] = 0.9565;

	normals[2091] = -0.2733;
	normals[2092] = -0.1025;
	normals[2093] = 0.9565;

	normals[2094] = -0.2733;
	normals[2095] = -0.1025;
	normals[2096] = 0.9565;

	normals[2097] = -0.2733;
	normals[2098] = -0.1025;
	normals[2099] = 0.9565;

	normals[2100] = 0.2733;
	normals[2101] = -0.1025;
	normals[2102] = 0.9565;

	normals[2103] = 0.2733;
	normals[2104] = -0.1025;
	normals[2105] = 0.9565;

	normals[2106] = 0.2733;
	normals[2107] = -0.1025;
	normals[2108] = 0.9565;

	normals[2109] = 0.2733;
	normals[2110] = -0.1025;
	normals[2111] = 0.9565;

	normals[2112] = -0.0976;
	normals[2113] = 0.1952;
	normals[2114] = 0.9759;

	normals[2115] = -0.0976;
	normals[2116] = 0.1952;
	normals[2117] = 0.9759;

	normals[2118] = -0.0976;
	normals[2119] = 0.1952;
	normals[2120] = 0.9759;

	normals[2121] = -0.0976;
	normals[2122] = 0.1952;
	normals[2123] = 0.9759;

	normals[2124] = 0.0976;
	normals[2125] = 0.1952;
	normals[2126] = 0.9759;

	normals[2127] = 0.0976;
	normals[2128] = 0.1952;
	normals[2129] = 0.9759;

	normals[2130] = 0.0976;
	normals[2131] = 0.1952;
	normals[2132] = 0.9759;

	normals[2133] = 0.0976;
	normals[2134] = 0.1952;
	normals[2135] = 0.9759;

	normals[2136] = -0.1582;
	normals[2137] = 0.9494;
	normals[2138] = 0.2713;

	normals[2139] = -0.1582;
	normals[2140] = 0.9494;
	normals[2141] = 0.2713;

	normals[2142] = -0.1582;
	normals[2143] = 0.9494;
	normals[2144] = 0.2713;

	normals[2145] = -0.1582;
	normals[2146] = 0.9494;
	normals[2147] = 0.2713;

	normals[2148] = 0.1582;
	normals[2149] = 0.9494;
	normals[2150] = 0.2713;

	normals[2151] = 0.1582;
	normals[2152] = 0.9494;
	normals[2153] = 0.2713;

	normals[2154] = 0.1582;
	normals[2155] = 0.9494;
	normals[2156] = 0.2713;

	normals[2157] = 0.1582;
	normals[2158] = 0.9494;
	normals[2159] = 0.2713;

	normals[2160] = -0.6934;
	normals[2161] = 0.7082;
	normals[2162] = 0.1328;

	normals[2163] = -0.6934;
	normals[2164] = 0.7082;
	normals[2165] = 0.1328;

	normals[2166] = -0.6934;
	normals[2167] = 0.7082;
	normals[2168] = 0.1328;

	normals[2169] = -0.6934;
	normals[2170] = 0.7082;
	normals[2171] = 0.1328;

	normals[2172] = 0.6934;
	normals[2173] = 0.7082;
	normals[2174] = 0.1328;

	normals[2175] = 0.6934;
	normals[2176] = 0.7082;
	normals[2177] = 0.1328;

	normals[2178] = 0.6934;
	normals[2179] = 0.7082;
	normals[2180] = 0.1328;

	normals[2181] = 0.6934;
	normals[2182] = 0.7082;
	normals[2183] = 0.1328;

	normals[2184] = -1;
	normals[2185] = 0;
	normals[2186] = 0;

	normals[2187] = -1;
	normals[2188] = 0;
	normals[2189] = 0;

	normals[2190] = -1;
	normals[2191] = 0;
	normals[2192] = 0;

	normals[2193] = -1;
	normals[2194] = 0;
	normals[2195] = 0;

	normals[2196] = 1;
	normals[2197] = 0;
	normals[2198] = 0;

	normals[2199] = 1;
	normals[2200] = 0;
	normals[2201] = 0;

	normals[2202] = 1;
	normals[2203] = 0;
	normals[2204] = 0;

	normals[2205] = 1;
	normals[2206] = 0;
	normals[2207] = 0;

	normals[2208] = 0.3051;
	normals[2209] = -0.945;
	normals[2210] = 0.1181;

	normals[2211] = 0.3051;
	normals[2212] = -0.945;
	normals[2213] = 0.1181;

	normals[2214] = 0.3051;
	normals[2215] = -0.945;
	normals[2216] = 0.1181;

	normals[2217] = 0.3051;
	normals[2218] = -0.945;
	normals[2219] = 0.1181;

	normals[2220] = -0.3051;
	normals[2221] = -0.945;
	normals[2222] = 0.1181;

	normals[2223] = -0.3051;
	normals[2224] = -0.945;
	normals[2225] = 0.1181;

	normals[2226] = -0.3051;
	normals[2227] = -0.945;
	normals[2228] = 0.1181;

	normals[2229] = -0.3051;
	normals[2230] = -0.945;
	normals[2231] = 0.1181;

	normals[2232] = 0.0298;
	normals[2233] = -0.2981;
	normals[2234] = 0.9541;

	normals[2235] = 0.0298;
	normals[2236] = -0.2981;
	normals[2237] = 0.9541;

	normals[2238] = 0.0298;
	normals[2239] = -0.2981;
	normals[2240] = 0.9541;

	normals[2241] = 0.0298;
	normals[2242] = -0.2981;
	normals[2243] = 0.9541;

	normals[2244] = -0.0298;
	normals[2245] = -0.2981;
	normals[2246] = 0.9541;

	normals[2247] = -0.0298;
	normals[2248] = -0.2981;
	normals[2249] = 0.9541;

	normals[2250] = -0.0298;
	normals[2251] = -0.2981;
	normals[2252] = 0.9541;

	normals[2253] = -0.0298;
	normals[2254] = -0.2981;
	normals[2255] = 0.9541;

	normals[2256] = 0.1353;
	normals[2257] = -0.3479;
	normals[2258] = 0.9277;

	normals[2259] = 0.1353;
	normals[2260] = -0.3479;
	normals[2261] = 0.9277;

	normals[2262] = 0.1353;
	normals[2263] = -0.3479;
	normals[2264] = 0.9277;

	normals[2265] = -0.1353;
	normals[2266] = -0.3479;
	normals[2267] = 0.9277;

	normals[2268] = -0.1353;
	normals[2269] = -0.3479;
	normals[2270] = 0.9277;

	normals[2271] = -0.1353;
	normals[2272] = -0.3479;
	normals[2273] = 0.9277;

	normals[2274] = -0.5085;
	normals[2275] = -0.2755;
	normals[2276] = 0.8158;

	normals[2277] = -0.5085;
	normals[2278] = -0.2755;
	normals[2279] = 0.8158;

	normals[2280] = -0.5085;
	normals[2281] = -0.2755;
	normals[2282] = 0.8158;

	normals[2283] = -0.5085;
	normals[2284] = -0.2755;
	normals[2285] = 0.8158;

	normals[2286] = 0.5085;
	normals[2287] = -0.2755;
	normals[2288] = 0.8158;

	normals[2289] = 0.5085;
	normals[2290] = -0.2755;
	normals[2291] = 0.8158;

	normals[2292] = 0.5085;
	normals[2293] = -0.2755;
	normals[2294] = 0.8158;

	normals[2295] = 0.5085;
	normals[2296] = -0.2755;
	normals[2297] = 0.8158;

	normals[2298] = -0.3843;
	normals[2299] = -0.0419;
	normals[2300] = 0.9223;

	normals[2301] = -0.3843;
	normals[2302] = -0.0419;
	normals[2303] = 0.9223;

	normals[2304] = -0.3843;
	normals[2305] = -0.0419;
	normals[2306] = 0.9223;

	normals[2307] = -0.3843;
	normals[2308] = -0.0419;
	normals[2309] = 0.9223;

	normals[2310] = 0.3843;
	normals[2311] = -0.0419;
	normals[2312] = 0.9223;

	normals[2313] = 0.3843;
	normals[2314] = -0.0419;
	normals[2315] = 0.9223;

	normals[2316] = 0.3843;
	normals[2317] = -0.0419;
	normals[2318] = 0.9223;

	normals[2319] = 0.3843;
	normals[2320] = -0.0419;
	normals[2321] = 0.9223;

	normals[2322] = -0.2083;
	normals[2323] = 0.0374;
	normals[2324] = 0.9774;

	normals[2325] = -0.2083;
	normals[2326] = 0.0374;
	normals[2327] = 0.9774;

	normals[2328] = -0.2083;
	normals[2329] = 0.0374;
	normals[2330] = 0.9774;

	normals[2331] = -0.2083;
	normals[2332] = 0.0374;
	normals[2333] = 0.9774;

	normals[2334] = 0.2083;
	normals[2335] = 0.0374;
	normals[2336] = 0.9774;

	normals[2337] = 0.2083;
	normals[2338] = 0.0374;
	normals[2339] = 0.9774;

	normals[2340] = 0.2083;
	normals[2341] = 0.0374;
	normals[2342] = 0.9774;

	normals[2343] = 0.2083;
	normals[2344] = 0.0374;
	normals[2345] = 0.9774;

	normals[2346] = -0.5721;
	normals[2347] = -0.4767;
	normals[2348] = 0.6674;

	normals[2349] = -0.5721;
	normals[2350] = -0.4767;
	normals[2351] = 0.6674;

	normals[2352] = -0.5721;
	normals[2353] = -0.4767;
	normals[2354] = 0.6674;

	normals[2355] = -0.5721;
	normals[2356] = -0.4767;
	normals[2357] = 0.6674;

	normals[2358] = 0.5721;
	normals[2359] = -0.4767;
	normals[2360] = 0.6674;

	normals[2361] = 0.5721;
	normals[2362] = -0.4767;
	normals[2363] = 0.6674;

	normals[2364] = 0.5721;
	normals[2365] = -0.4767;
	normals[2366] = 0.6674;

	normals[2367] = 0.5721;
	normals[2368] = -0.4767;
	normals[2369] = 0.6674;

	normals[2370] = -0.1369;
	normals[2371] = -0.7531;
	normals[2372] = 0.6435;

	normals[2373] = -0.1369;
	normals[2374] = -0.7531;
	normals[2375] = 0.6435;

	normals[2376] = -0.1369;
	normals[2377] = -0.7531;
	normals[2378] = 0.6435;

	normals[2379] = -0.1369;
	normals[2380] = -0.7531;
	normals[2381] = 0.6435;

	normals[2382] = 0.1369;
	normals[2383] = -0.7531;
	normals[2384] = 0.6435;

	normals[2385] = 0.1369;
	normals[2386] = -0.7531;
	normals[2387] = 0.6435;

	normals[2388] = 0.1369;
	normals[2389] = -0.7531;
	normals[2390] = 0.6435;

	normals[2391] = 0.1369;
	normals[2392] = -0.7531;
	normals[2393] = 0.6435;

	normals[2394] = 0.4088;
	normals[2395] = -0.6071;
	normals[2396] = 0.6814;

	normals[2397] = 0.4088;
	normals[2398] = -0.6071;
	normals[2399] = 0.6814;

	normals[2400] = 0.4088;
	normals[2401] = -0.6071;
	normals[2402] = 0.6814;

	normals[2403] = 0.4088;
	normals[2404] = -0.6071;
	normals[2405] = 0.6814;

	normals[2406] = -0.4088;
	normals[2407] = -0.6071;
	normals[2408] = 0.6814;

	normals[2409] = -0.4088;
	normals[2410] = -0.6071;
	normals[2411] = 0.6814;

	normals[2412] = -0.4088;
	normals[2413] = -0.6071;
	normals[2414] = 0.6814;

	normals[2415] = -0.4088;
	normals[2416] = -0.6071;
	normals[2417] = 0.6814;

	normals[2418] = 0.574;
	normals[2419] = -0.413;
	normals[2420] = 0.707;

	normals[2421] = 0.574;
	normals[2422] = -0.413;
	normals[2423] = 0.707;

	normals[2424] = 0.574;
	normals[2425] = -0.413;
	normals[2426] = 0.707;

	normals[2427] = 0.574;
	normals[2428] = -0.413;
	normals[2429] = 0.707;

	normals[2430] = -0.574;
	normals[2431] = -0.413;
	normals[2432] = 0.707;

	normals[2433] = -0.574;
	normals[2434] = -0.413;
	normals[2435] = 0.707;

	normals[2436] = -0.574;
	normals[2437] = -0.413;
	normals[2438] = 0.707;

	normals[2439] = -0.574;
	normals[2440] = -0.413;
	normals[2441] = 0.707;

	normals[2442] = 0.5665;
	normals[2443] = -0.0968;
	normals[2444] = 0.8183;

	normals[2445] = 0.5665;
	normals[2446] = -0.0968;
	normals[2447] = 0.8183;

	normals[2448] = 0.5665;
	normals[2449] = -0.0968;
	normals[2450] = 0.8183;

	normals[2451] = 0.5665;
	normals[2452] = -0.0968;
	normals[2453] = 0.8183;

	normals[2454] = -0.5665;
	normals[2455] = -0.0968;
	normals[2456] = 0.8183;

	normals[2457] = -0.5665;
	normals[2458] = -0.0968;
	normals[2459] = 0.8183;

	normals[2460] = -0.5665;
	normals[2461] = -0.0968;
	normals[2462] = 0.8183;

	normals[2463] = -0.5665;
	normals[2464] = -0.0968;
	normals[2465] = 0.8183;

	normals[2466] = 0.5703;
	normals[2467] = 0.118;
	normals[2468] = 0.8129;

	normals[2469] = 0.5703;
	normals[2470] = 0.118;
	normals[2471] = 0.8129;

	normals[2472] = 0.5703;
	normals[2473] = 0.118;
	normals[2474] = 0.8129;

	normals[2475] = 0.5703;
	normals[2476] = 0.118;
	normals[2477] = 0.8129;

	normals[2478] = -0.5703;
	normals[2479] = 0.118;
	normals[2480] = 0.8129;

	normals[2481] = -0.5703;
	normals[2482] = 0.118;
	normals[2483] = 0.8129;

	normals[2484] = -0.5703;
	normals[2485] = 0.118;
	normals[2486] = 0.8129;

	normals[2487] = -0.5703;
	normals[2488] = 0.118;
	normals[2489] = 0.8129;

	normals[2490] = 0.4823;
	normals[2491] = 0.5621;
	normals[2492] = 0.6719;

	normals[2493] = 0.4823;
	normals[2494] = 0.5621;
	normals[2495] = 0.6719;

	normals[2496] = 0.4823;
	normals[2497] = 0.5621;
	normals[2498] = 0.6719;

	normals[2499] = 0.4823;
	normals[2500] = 0.5621;
	normals[2501] = 0.6719;

	normals[2502] = -0.4823;
	normals[2503] = 0.5621;
	normals[2504] = 0.6719;

	normals[2505] = -0.4823;
	normals[2506] = 0.5621;
	normals[2507] = 0.6719;

	normals[2508] = -0.4823;
	normals[2509] = 0.5621;
	normals[2510] = 0.6719;

	normals[2511] = -0.4823;
	normals[2512] = 0.5621;
	normals[2513] = 0.6719;

	normals[2514] = 0.2604;
	normals[2515] = 0.6114;
	normals[2516] = 0.7473;

	normals[2517] = 0.2604;
	normals[2518] = 0.6114;
	normals[2519] = 0.7473;

	normals[2520] = 0.2604;
	normals[2521] = 0.6114;
	normals[2522] = 0.7473;

	normals[2523] = 0.2604;
	normals[2524] = 0.6114;
	normals[2525] = 0.7473;

	normals[2526] = -0.2604;
	normals[2527] = 0.6114;
	normals[2528] = 0.7473;

	normals[2529] = -0.2604;
	normals[2530] = 0.6114;
	normals[2531] = 0.7473;

	normals[2532] = -0.2604;
	normals[2533] = 0.6114;
	normals[2534] = 0.7473;

	normals[2535] = -0.2604;
	normals[2536] = 0.6114;
	normals[2537] = 0.7473;

	normals[2538] = 0.164;
	normals[2539] = 0.3607;
	normals[2540] = 0.9182;

	normals[2541] = 0.164;
	normals[2542] = 0.3607;
	normals[2543] = 0.9182;

	normals[2544] = 0.164;
	normals[2545] = 0.3607;
	normals[2546] = 0.9182;

	normals[2547] = 0.164;
	normals[2548] = 0.3607;
	normals[2549] = 0.9182;

	normals[2550] = -0.164;
	normals[2551] = 0.3607;
	normals[2552] = 0.9182;

	normals[2553] = -0.164;
	normals[2554] = 0.3607;
	normals[2555] = 0.9182;

	normals[2556] = -0.164;
	normals[2557] = 0.3607;
	normals[2558] = 0.9182;

	normals[2559] = -0.164;
	normals[2560] = 0.3607;
	normals[2561] = 0.9182;

	normals[2562] = -0.0178;
	normals[2563] = 0.2495;
	normals[2564] = 0.9682;

	normals[2565] = -0.0178;
	normals[2566] = 0.2495;
	normals[2567] = 0.9682;

	normals[2568] = -0.0178;
	normals[2569] = 0.2495;
	normals[2570] = 0.9682;

	normals[2571] = -0.0178;
	normals[2572] = 0.2495;
	normals[2573] = 0.9682;

	normals[2574] = 0.0178;
	normals[2575] = 0.2495;
	normals[2576] = 0.9682;

	normals[2577] = 0.0178;
	normals[2578] = 0.2495;
	normals[2579] = 0.9682;

	normals[2580] = 0.0178;
	normals[2581] = 0.2495;
	normals[2582] = 0.9682;

	normals[2583] = 0.0178;
	normals[2584] = 0.2495;
	normals[2585] = 0.9682;

	normals[2586] = 0.3273;
	normals[2587] = -0.4166;
	normals[2588] = 0.8481;

	normals[2589] = 0.3273;
	normals[2590] = -0.4166;
	normals[2591] = 0.8481;

	normals[2592] = 0.3273;
	normals[2593] = -0.4166;
	normals[2594] = 0.8481;

	normals[2595] = 0.3273;
	normals[2596] = -0.4166;
	normals[2597] = 0.8481;

	normals[2598] = -0.3273;
	normals[2599] = -0.4166;
	normals[2600] = 0.8481;

	normals[2601] = -0.3273;
	normals[2602] = -0.4166;
	normals[2603] = 0.8481;

	normals[2604] = -0.3273;
	normals[2605] = -0.4166;
	normals[2606] = 0.8481;

	normals[2607] = -0.3273;
	normals[2608] = -0.4166;
	normals[2609] = 0.8481;

	normals[2610] = 0.2811;
	normals[2611] = -0.261;
	normals[2612] = 0.9235;

	normals[2613] = 0.2811;
	normals[2614] = -0.261;
	normals[2615] = 0.9235;

	normals[2616] = 0.2811;
	normals[2617] = -0.261;
	normals[2618] = 0.9235;

	normals[2619] = 0.2811;
	normals[2620] = -0.261;
	normals[2621] = 0.9235;

	normals[2622] = -0.2811;
	normals[2623] = -0.261;
	normals[2624] = 0.9235;

	normals[2625] = -0.2811;
	normals[2626] = -0.261;
	normals[2627] = 0.9235;

	normals[2628] = -0.2811;
	normals[2629] = -0.261;
	normals[2630] = 0.9235;

	normals[2631] = -0.2811;
	normals[2632] = -0.261;
	normals[2633] = 0.9235;

	normals[2634] = -0.2542;
	normals[2635] = -0.6514;
	normals[2636] = 0.7149;

	normals[2637] = -0.2542;
	normals[2638] = -0.6514;
	normals[2639] = 0.7149;

	normals[2640] = -0.2542;
	normals[2641] = -0.6514;
	normals[2642] = 0.7149;

	normals[2643] = -0.2542;
	normals[2644] = -0.6514;
	normals[2645] = 0.7149;

	normals[2646] = 0.2542;
	normals[2647] = -0.6514;
	normals[2648] = 0.7149;

	normals[2649] = 0.2542;
	normals[2650] = -0.6514;
	normals[2651] = 0.7149;

	normals[2652] = 0.2542;
	normals[2653] = -0.6514;
	normals[2654] = 0.7149;

	normals[2655] = 0.2542;
	normals[2656] = -0.6514;
	normals[2657] = 0.7149;

	normals[2658] = -0.026;
	normals[2659] = -0.8455;
	normals[2660] = 0.5333;

	normals[2661] = -0.026;
	normals[2662] = -0.8455;
	normals[2663] = 0.5333;

	normals[2664] = -0.026;
	normals[2665] = -0.8455;
	normals[2666] = 0.5333;

	normals[2667] = -0.026;
	normals[2668] = -0.8455;
	normals[2669] = 0.5333;

	normals[2670] = 0.026;
	normals[2671] = -0.8455;
	normals[2672] = 0.5333;

	normals[2673] = 0.026;
	normals[2674] = -0.8455;
	normals[2675] = 0.5333;

	normals[2676] = 0.026;
	normals[2677] = -0.8455;
	normals[2678] = 0.5333;

	normals[2679] = 0.026;
	normals[2680] = -0.8455;
	normals[2681] = 0.5333;

	normals[2682] = -0.3518;
	normals[2683] = -0.2606;
	normals[2684] = 0.8991;

	normals[2685] = -0.3518;
	normals[2686] = -0.2606;
	normals[2687] = 0.8991;

	normals[2688] = -0.3518;
	normals[2689] = -0.2606;
	normals[2690] = 0.8991;

	normals[2691] = -0.3518;
	normals[2692] = -0.2606;
	normals[2693] = 0.8991;

	normals[2694] = 0.3518;
	normals[2695] = -0.2606;
	normals[2696] = 0.8991;

	normals[2697] = 0.3518;
	normals[2698] = -0.2606;
	normals[2699] = 0.8991;

	normals[2700] = 0.3518;
	normals[2701] = -0.2606;
	normals[2702] = 0.8991;

	normals[2703] = 0.3518;
	normals[2704] = -0.2606;
	normals[2705] = 0.8991;

	normals[2706] = -0.3523;
	normals[2707] = -0.011;
	normals[2708] = 0.9358;

	normals[2709] = -0.3523;
	normals[2710] = -0.011;
	normals[2711] = 0.9358;

	normals[2712] = -0.3523;
	normals[2713] = -0.011;
	normals[2714] = 0.9358;

	normals[2715] = -0.3523;
	normals[2716] = -0.011;
	normals[2717] = 0.9358;

	normals[2718] = 0.3523;
	normals[2719] = -0.011;
	normals[2720] = 0.9358;

	normals[2721] = 0.3523;
	normals[2722] = -0.011;
	normals[2723] = 0.9358;

	normals[2724] = 0.3523;
	normals[2725] = -0.011;
	normals[2726] = 0.9358;

	normals[2727] = 0.3523;
	normals[2728] = -0.011;
	normals[2729] = 0.9358;

	normals[2730] = -0.1317;
	normals[2731] = 0.4608;
	normals[2732] = 0.8777;

	normals[2733] = -0.1317;
	normals[2734] = 0.4608;
	normals[2735] = 0.8777;

	normals[2736] = -0.1317;
	normals[2737] = 0.4608;
	normals[2738] = 0.8777;

	normals[2739] = -0.1317;
	normals[2740] = 0.4608;
	normals[2741] = 0.8777;

	normals[2742] = 0.1317;
	normals[2743] = 0.4608;
	normals[2744] = 0.8777;

	normals[2745] = 0.1317;
	normals[2746] = 0.4608;
	normals[2747] = 0.8777;

	normals[2748] = 0.1317;
	normals[2749] = 0.4608;
	normals[2750] = 0.8777;

	normals[2751] = 0.1317;
	normals[2752] = 0.4608;
	normals[2753] = 0.8777;

	normals[2754] = -0.0342;
	normals[2755] = 0.6159;
	normals[2756] = 0.787;

	normals[2757] = -0.0342;
	normals[2758] = 0.6159;
	normals[2759] = 0.787;

	normals[2760] = -0.0342;
	normals[2761] = 0.6159;
	normals[2762] = 0.787;

	normals[2763] = -0.0342;
	normals[2764] = 0.6159;
	normals[2765] = 0.787;

	normals[2766] = 0.0342;
	normals[2767] = 0.6159;
	normals[2768] = 0.787;

	normals[2769] = 0.0342;
	normals[2770] = 0.6159;
	normals[2771] = 0.787;

	normals[2772] = 0.0342;
	normals[2773] = 0.6159;
	normals[2774] = 0.787;

	normals[2775] = 0.0342;
	normals[2776] = 0.6159;
	normals[2777] = 0.787;

	normals[2778] = 0.3603;
	normals[2779] = 0.5836;
	normals[2780] = 0.7277;

	normals[2781] = 0.3603;
	normals[2782] = 0.5836;
	normals[2783] = 0.7277;

	normals[2784] = 0.3603;
	normals[2785] = 0.5836;
	normals[2786] = 0.7277;

	normals[2787] = 0.3603;
	normals[2788] = 0.5836;
	normals[2789] = 0.7277;

	normals[2790] = -0.3603;
	normals[2791] = 0.5836;
	normals[2792] = 0.7277;

	normals[2793] = -0.3603;
	normals[2794] = 0.5836;
	normals[2795] = 0.7277;

	normals[2796] = -0.3603;
	normals[2797] = 0.5836;
	normals[2798] = 0.7277;

	normals[2799] = -0.3603;
	normals[2800] = 0.5836;
	normals[2801] = 0.7277;

	normals[2802] = 0.4988;
	normals[2803] = 0.53;
	normals[2804] = 0.6858;

	normals[2805] = 0.4988;
	normals[2806] = 0.53;
	normals[2807] = 0.6858;

	normals[2808] = 0.4988;
	normals[2809] = 0.53;
	normals[2810] = 0.6858;

	normals[2811] = 0.4988;
	normals[2812] = 0.53;
	normals[2813] = 0.6858;

	normals[2814] = -0.4988;
	normals[2815] = 0.53;
	normals[2816] = 0.6858;

	normals[2817] = -0.4988;
	normals[2818] = 0.53;
	normals[2819] = 0.6858;

	normals[2820] = -0.4988;
	normals[2821] = 0.53;
	normals[2822] = 0.6858;

	normals[2823] = -0.4988;
	normals[2824] = 0.53;
	normals[2825] = 0.6858;

	normals[2826] = 0.6667;
	normals[2827] = -0.3333;
	normals[2828] = 0.6667;

	normals[2829] = 0.6667;
	normals[2830] = -0.3333;
	normals[2831] = 0.6667;

	normals[2832] = 0.6667;
	normals[2833] = -0.3333;
	normals[2834] = 0.6667;

	normals[2835] = 0.6667;
	normals[2836] = -0.3333;
	normals[2837] = 0.6667;

	normals[2838] = -0.6667;
	normals[2839] = -0.3333;
	normals[2840] = 0.6667;

	normals[2841] = -0.6667;
	normals[2842] = -0.3333;
	normals[2843] = 0.6667;

	normals[2844] = -0.6667;
	normals[2845] = -0.3333;
	normals[2846] = 0.6667;

	normals[2847] = -0.6667;
	normals[2848] = -0.3333;
	normals[2849] = 0.6667;

	normals[2850] = 0.8165;
	normals[2851] = -0.0731;
	normals[2852] = 0.5727;

	normals[2853] = 0.8165;
	normals[2854] = -0.0731;
	normals[2855] = 0.5727;

	normals[2856] = 0.8165;
	normals[2857] = -0.0731;
	normals[2858] = 0.5727;

	normals[2859] = 0.8165;
	normals[2860] = -0.0731;
	normals[2861] = 0.5727;

	normals[2862] = -0.8165;
	normals[2863] = -0.0731;
	normals[2864] = 0.5727;

	normals[2865] = -0.8165;
	normals[2866] = -0.0731;
	normals[2867] = 0.5727;

	normals[2868] = -0.8165;
	normals[2869] = -0.0731;
	normals[2870] = 0.5727;

	normals[2871] = -0.8165;
	normals[2872] = -0.0731;
	normals[2873] = 0.5727;

	normals[2874] = 0.784;
	normals[2875] = 0.1162;
	normals[2876] = 0.6098;

	normals[2877] = 0.784;
	normals[2878] = 0.1162;
	normals[2879] = 0.6098;

	normals[2880] = 0.784;
	normals[2881] = 0.1162;
	normals[2882] = 0.6098;

	normals[2883] = 0.784;
	normals[2884] = 0.1162;
	normals[2885] = 0.6098;

	normals[2886] = -0.784;
	normals[2887] = 0.1161;
	normals[2888] = 0.6098;

	normals[2889] = -0.784;
	normals[2890] = 0.1161;
	normals[2891] = 0.6098;

	normals[2892] = -0.784;
	normals[2893] = 0.1161;
	normals[2894] = 0.6098;

	normals[2895] = -0.784;
	normals[2896] = 0.1161;
	normals[2897] = 0.6098;

	normals[2898] = -0.5306;
	normals[2899] = 0.8111;
	normals[2900] = -0.2461;

	normals[2901] = -0.5306;
	normals[2902] = 0.8111;
	normals[2903] = -0.2461;

	normals[2904] = -0.5306;
	normals[2905] = 0.8111;
	normals[2906] = -0.2461;

	normals[2907] = -0.5306;
	normals[2908] = 0.8111;
	normals[2909] = -0.2461;

	normals[2910] = 0.5306;
	normals[2911] = 0.8111;
	normals[2912] = -0.2461;

	normals[2913] = 0.5306;
	normals[2914] = 0.8111;
	normals[2915] = -0.2461;

	normals[2916] = 0.5306;
	normals[2917] = 0.8111;
	normals[2918] = -0.2461;

	normals[2919] = 0.5306;
	normals[2920] = 0.8111;
	normals[2921] = -0.2461;

	normals[2922] = -0.8511;
	normals[2923] = 0.3695;
	normals[2924] = -0.373;

	normals[2925] = -0.8511;
	normals[2926] = 0.3695;
	normals[2927] = -0.373;

	normals[2928] = -0.8511;
	normals[2929] = 0.3695;
	normals[2930] = -0.373;

	normals[2931] = -0.8511;
	normals[2932] = 0.3695;
	normals[2933] = -0.373;

	normals[2934] = 0.8511;
	normals[2935] = 0.3695;
	normals[2936] = -0.373;

	normals[2937] = 0.8511;
	normals[2938] = 0.3695;
	normals[2939] = -0.373;

	normals[2940] = 0.8511;
	normals[2941] = 0.3695;
	normals[2942] = -0.373;

	normals[2943] = 0.8511;
	normals[2944] = 0.3695;
	normals[2945] = -0.373;

	normals[2946] = -0.2446;
	normals[2947] = 0.8675;
	normals[2948] = -0.4331;

	normals[2949] = -0.2446;
	normals[2950] = 0.8675;
	normals[2951] = -0.4331;

	normals[2952] = -0.2446;
	normals[2953] = 0.8675;
	normals[2954] = -0.4331;

	normals[2955] = -0.2446;
	normals[2956] = 0.8675;
	normals[2957] = -0.4331;

	normals[2958] = 0.2446;
	normals[2959] = 0.8675;
	normals[2960] = -0.4331;

	normals[2961] = 0.2446;
	normals[2962] = 0.8675;
	normals[2963] = -0.4331;

	normals[2964] = 0.2446;
	normals[2965] = 0.8675;
	normals[2966] = -0.4331;

	normals[2967] = 0.2446;
	normals[2968] = 0.8675;
	normals[2969] = -0.4331;

	normals[2970] = 0.5924;
	normals[2971] = 0.7465;
	normals[2972] = -0.303;

	normals[2973] = 0.5924;
	normals[2974] = 0.7465;
	normals[2975] = -0.303;

	normals[2976] = 0.5924;
	normals[2977] = 0.7465;
	normals[2978] = -0.303;

	normals[2979] = 0.5924;
	normals[2980] = 0.7465;
	normals[2981] = -0.303;

	normals[2982] = -0.5924;
	normals[2983] = 0.7465;
	normals[2984] = -0.303;

	normals[2985] = -0.5924;
	normals[2986] = 0.7465;
	normals[2987] = -0.303;

	normals[2988] = -0.5924;
	normals[2989] = 0.7465;
	normals[2990] = -0.303;

	normals[2991] = -0.5924;
	normals[2992] = 0.7465;
	normals[2993] = -0.303;

	normals[2994] = 0.3685;
	normals[2995] = 0.8758;
	normals[2996] = -0.3118;

	normals[2997] = 0.3685;
	normals[2998] = 0.8758;
	normals[2999] = -0.3118;

	normals[3000] = 0.3685;
	normals[3001] = 0.8758;
	normals[3002] = -0.3118;

	normals[3003] = 0.3685;
	normals[3004] = 0.8758;
	normals[3005] = -0.3118;

	normals[3006] = -0.3685;
	normals[3007] = 0.8758;
	normals[3008] = -0.3118;

	normals[3009] = -0.3685;
	normals[3010] = 0.8758;
	normals[3011] = -0.3118;

	normals[3012] = -0.3685;
	normals[3013] = 0.8758;
	normals[3014] = -0.3118;

	normals[3015] = -0.3685;
	normals[3016] = 0.8758;
	normals[3017] = -0.3118;

	normals[3018] = 0.2821;
	normals[3019] = 0.9151;
	normals[3020] = -0.288;

	normals[3021] = 0.2821;
	normals[3022] = 0.9151;
	normals[3023] = -0.288;

	normals[3024] = 0.2821;
	normals[3025] = 0.9151;
	normals[3026] = -0.288;

	normals[3027] = 0.2821;
	normals[3028] = 0.9151;
	normals[3029] = -0.288;

	normals[3030] = -0.2821;
	normals[3031] = 0.9151;
	normals[3032] = -0.288;

	normals[3033] = -0.2821;
	normals[3034] = 0.9151;
	normals[3035] = -0.288;

	normals[3036] = -0.2821;
	normals[3037] = 0.9151;
	normals[3038] = -0.288;

	normals[3039] = -0.2821;
	normals[3040] = 0.9151;
	normals[3041] = -0.288;

	normals[3042] = 0.8561;
	normals[3043] = 0.134;
	normals[3044] = -0.4991;

	normals[3045] = 0.8561;
	normals[3046] = 0.134;
	normals[3047] = -0.4991;

	normals[3048] = 0.8561;
	normals[3049] = 0.134;
	normals[3050] = -0.4991;

	normals[3051] = 0.8561;
	normals[3052] = 0.134;
	normals[3053] = -0.4991;

	normals[3054] = -0.8561;
	normals[3055] = 0.134;
	normals[3056] = -0.4991;

	normals[3057] = -0.8561;
	normals[3058] = 0.134;
	normals[3059] = -0.4991;

	normals[3060] = -0.8561;
	normals[3061] = 0.134;
	normals[3062] = -0.4991;

	normals[3063] = -0.8561;
	normals[3064] = 0.134;
	normals[3065] = -0.4991;

	normals[3066] = 0.5342;
	normals[3067] = -0.7233;
	normals[3068] = -0.4376;

	normals[3069] = 0.5342;
	normals[3070] = -0.7233;
	normals[3071] = -0.4376;

	normals[3072] = 0.5342;
	normals[3073] = -0.7233;
	normals[3074] = -0.4376;

	normals[3075] = 0.5342;
	normals[3076] = -0.7233;
	normals[3077] = -0.4376;

	normals[3078] = -0.5342;
	normals[3079] = -0.7233;
	normals[3080] = -0.4376;

	normals[3081] = -0.5342;
	normals[3082] = -0.7233;
	normals[3083] = -0.4376;

	normals[3084] = -0.5342;
	normals[3085] = -0.7233;
	normals[3086] = -0.4376;

	normals[3087] = -0.5342;
	normals[3088] = -0.7233;
	normals[3089] = -0.4376;

	normals[3090] = 0.3849;
	normals[3091] = -0.8131;
	normals[3092] = -0.4368;

	normals[3093] = 0.3849;
	normals[3094] = -0.8131;
	normals[3095] = -0.4368;

	normals[3096] = 0.3849;
	normals[3097] = -0.8131;
	normals[3098] = -0.4368;

	normals[3099] = 0.3849;
	normals[3100] = -0.8131;
	normals[3101] = -0.4368;

	normals[3102] = -0.3849;
	normals[3103] = -0.8131;
	normals[3104] = -0.4368;

	normals[3105] = -0.3849;
	normals[3106] = -0.8131;
	normals[3107] = -0.4368;

	normals[3108] = -0.3849;
	normals[3109] = -0.8131;
	normals[3110] = -0.4368;

	normals[3111] = -0.3849;
	normals[3112] = -0.8131;
	normals[3113] = -0.4368;

	normals[3114] = 0.2335;
	normals[3115] = -0.5806;
	normals[3116] = -0.78;

	normals[3117] = 0.2335;
	normals[3118] = -0.5806;
	normals[3119] = -0.78;

	normals[3120] = 0.2335;
	normals[3121] = -0.5806;
	normals[3122] = -0.78;

	normals[3123] = 0.2335;
	normals[3124] = -0.5806;
	normals[3125] = -0.78;

	normals[3126] = -0.2335;
	normals[3127] = -0.5806;
	normals[3128] = -0.78;

	normals[3129] = -0.2335;
	normals[3130] = -0.5806;
	normals[3131] = -0.78;

	normals[3132] = -0.2335;
	normals[3133] = -0.5806;
	normals[3134] = -0.78;

	normals[3135] = -0.2335;
	normals[3136] = -0.5806;
	normals[3137] = -0.78;

	normals[3138] = 0.2449;
	normals[3139] = -0.0583;
	normals[3140] = -0.9678;

	normals[3141] = 0.2449;
	normals[3142] = -0.0583;
	normals[3143] = -0.9678;

	normals[3144] = 0.2449;
	normals[3145] = -0.0583;
	normals[3146] = -0.9678;

	normals[3147] = 0.2449;
	normals[3148] = -0.0583;
	normals[3149] = -0.9678;

	normals[3150] = -0.2449;
	normals[3151] = -0.0583;
	normals[3152] = -0.9678;

	normals[3153] = -0.2449;
	normals[3154] = -0.0583;
	normals[3155] = -0.9678;

	normals[3156] = -0.2449;
	normals[3157] = -0.0583;
	normals[3158] = -0.9678;

	normals[3159] = -0.2449;
	normals[3160] = -0.0583;
	normals[3161] = -0.9678;

	normals[3162] = 0.1163;
	normals[3163] = -0.4535;
	normals[3164] = -0.8837;

	normals[3165] = 0.1163;
	normals[3166] = -0.4535;
	normals[3167] = -0.8837;

	normals[3168] = 0.1163;
	normals[3169] = -0.4535;
	normals[3170] = -0.8837;

	normals[3171] = 0.1163;
	normals[3172] = -0.4535;
	normals[3173] = -0.8837;

	normals[3174] = -0.1163;
	normals[3175] = -0.4535;
	normals[3176] = -0.8837;

	normals[3177] = -0.1163;
	normals[3178] = -0.4535;
	normals[3179] = -0.8837;

	normals[3180] = -0.1163;
	normals[3181] = -0.4535;
	normals[3182] = -0.8837;

	normals[3183] = -0.1163;
	normals[3184] = -0.4535;
	normals[3185] = -0.8837;

	normals[3186] = 0.1152;
	normals[3187] = -0.9836;
	normals[3188] = -0.1388;

	normals[3189] = 0.1152;
	normals[3190] = -0.9836;
	normals[3191] = -0.1388;

	normals[3192] = 0.1152;
	normals[3193] = -0.9836;
	normals[3194] = -0.1388;

	normals[3195] = 0.1152;
	normals[3196] = -0.9836;
	normals[3197] = -0.1388;

	normals[3198] = -0.1152;
	normals[3199] = -0.9836;
	normals[3200] = -0.1388;

	normals[3201] = -0.1152;
	normals[3202] = -0.9836;
	normals[3203] = -0.1388;

	normals[3204] = -0.1152;
	normals[3205] = -0.9836;
	normals[3206] = -0.1388;

	normals[3207] = -0.1152;
	normals[3208] = -0.9836;
	normals[3209] = -0.1388;

	normals[3210] = 0.1184;
	normals[3211] = -0.9669;
	normals[3212] = -0.226;

	normals[3213] = 0.1184;
	normals[3214] = -0.9669;
	normals[3215] = -0.226;

	normals[3216] = 0.1184;
	normals[3217] = -0.9669;
	normals[3218] = -0.226;

	normals[3219] = 0.1184;
	normals[3220] = -0.9669;
	normals[3221] = -0.226;

	normals[3222] = -0.1184;
	normals[3223] = -0.9669;
	normals[3224] = -0.226;

	normals[3225] = -0.1184;
	normals[3226] = -0.9669;
	normals[3227] = -0.226;

	normals[3228] = -0.1184;
	normals[3229] = -0.9669;
	normals[3230] = -0.226;

	normals[3231] = -0.1184;
	normals[3232] = -0.9669;
	normals[3233] = -0.226;

	normals[3234] = 0.9597;
	normals[3235] = -0.0085;
	normals[3236] = -0.2808;

	normals[3237] = 0.9597;
	normals[3238] = -0.0085;
	normals[3239] = -0.2808;

	normals[3240] = 0.9597;
	normals[3241] = -0.0085;
	normals[3242] = -0.2808;

	normals[3243] = 0.9597;
	normals[3244] = -0.0085;
	normals[3245] = -0.2808;

	normals[3246] = -0.9597;
	normals[3247] = -0.0085;
	normals[3248] = -0.2808;

	normals[3249] = -0.9597;
	normals[3250] = -0.0085;
	normals[3251] = -0.2808;

	normals[3252] = -0.9597;
	normals[3253] = -0.0085;
	normals[3254] = -0.2808;

	normals[3255] = -0.9597;
	normals[3256] = -0.0085;
	normals[3257] = -0.2808;

	normals[3258] = 0.9319;
	normals[3259] = 0.1629;
	normals[3260] = -0.3242;

	normals[3261] = 0.9319;
	normals[3262] = 0.1629;
	normals[3263] = -0.3242;

	normals[3264] = 0.9319;
	normals[3265] = 0.1629;
	normals[3266] = -0.3242;

	normals[3267] = 0.9319;
	normals[3268] = 0.1629;
	normals[3269] = -0.3242;

	normals[3270] = -0.9319;
	normals[3271] = 0.1629;
	normals[3272] = -0.3242;

	normals[3273] = -0.9319;
	normals[3274] = 0.1629;
	normals[3275] = -0.3242;

	normals[3276] = -0.9319;
	normals[3277] = 0.1629;
	normals[3278] = -0.3242;

	normals[3279] = -0.9319;
	normals[3280] = 0.1629;
	normals[3281] = -0.3242;

	normals[3282] = 0.1626;
	normals[3283] = 0.0207;
	normals[3284] = -0.9865;

	normals[3285] = 0.1626;
	normals[3286] = 0.0207;
	normals[3287] = -0.9865;

	normals[3288] = 0.1626;
	normals[3289] = 0.0207;
	normals[3290] = -0.9865;

	normals[3291] = 0.1626;
	normals[3292] = 0.0207;
	normals[3293] = -0.9865;

	normals[3294] = -0.1626;
	normals[3295] = 0.0207;
	normals[3296] = -0.9865;

	normals[3297] = -0.1626;
	normals[3298] = 0.0207;
	normals[3299] = -0.9865;

	normals[3300] = -0.1626;
	normals[3301] = 0.0207;
	normals[3302] = -0.9865;

	normals[3303] = -0.1626;
	normals[3304] = 0.0207;
	normals[3305] = -0.9865;

	normals[3306] = -0.0188;
	normals[3307] = -0.2177;
	normals[3308] = -0.9758;

	normals[3309] = -0.0188;
	normals[3310] = -0.2177;
	normals[3311] = -0.9758;

	normals[3312] = -0.0188;
	normals[3313] = -0.2177;
	normals[3314] = -0.9758;

	normals[3315] = -0.0188;
	normals[3316] = -0.2177;
	normals[3317] = -0.9758;

	normals[3318] = 0.0188;
	normals[3319] = -0.2177;
	normals[3320] = -0.9758;

	normals[3321] = 0.0188;
	normals[3322] = -0.2177;
	normals[3323] = -0.9758;

	normals[3324] = 0.0188;
	normals[3325] = -0.2177;
	normals[3326] = -0.9758;

	normals[3327] = 0.0188;
	normals[3328] = -0.2177;
	normals[3329] = -0.9758;

	normals[3330] = 0.7538;
	normals[3331] = -0.2926;
	normals[3332] = -0.5884;

	normals[3333] = 0.7538;
	normals[3334] = -0.2926;
	normals[3335] = -0.5884;

	normals[3336] = 0.7538;
	normals[3337] = -0.2926;
	normals[3338] = -0.5884;

	normals[3339] = 0.7538;
	normals[3340] = -0.2926;
	normals[3341] = -0.5884;

	normals[3342] = -0.7538;
	normals[3343] = -0.2926;
	normals[3344] = -0.5884;

	normals[3345] = -0.7538;
	normals[3346] = -0.2926;
	normals[3347] = -0.5884;

	normals[3348] = -0.7538;
	normals[3349] = -0.2926;
	normals[3350] = -0.5884;

	normals[3351] = -0.7538;
	normals[3352] = -0.2926;
	normals[3353] = -0.5884;

	normals[3354] = 0.9196;
	normals[3355] = 0.1379;
	normals[3356] = -0.3678;

	normals[3357] = 0.9196;
	normals[3358] = 0.1379;
	normals[3359] = -0.3678;

	normals[3360] = 0.9196;
	normals[3361] = 0.1379;
	normals[3362] = -0.3678;

	normals[3363] = 0.9196;
	normals[3364] = 0.1379;
	normals[3365] = -0.3678;

	normals[3366] = -0.9196;
	normals[3367] = 0.1379;
	normals[3368] = -0.3678;

	normals[3369] = -0.9196;
	normals[3370] = 0.1379;
	normals[3371] = -0.3678;

	normals[3372] = -0.9196;
	normals[3373] = 0.1379;
	normals[3374] = -0.3678;

	normals[3375] = -0.9196;
	normals[3376] = 0.1379;
	normals[3377] = -0.3678;

	normals[3378] = 0.9297;
	normals[3379] = 0.3127;
	normals[3380] = -0.1944;

	normals[3381] = 0.9297;
	normals[3382] = 0.3127;
	normals[3383] = -0.1944;

	normals[3384] = 0.9297;
	normals[3385] = 0.3127;
	normals[3386] = -0.1944;

	normals[3387] = 0.9297;
	normals[3388] = 0.3127;
	normals[3389] = -0.1944;

	normals[3390] = -0.9297;
	normals[3391] = 0.3127;
	normals[3392] = -0.1944;

	normals[3393] = -0.9297;
	normals[3394] = 0.3127;
	normals[3395] = -0.1944;

	normals[3396] = -0.9297;
	normals[3397] = 0.3127;
	normals[3398] = -0.1944;

	normals[3399] = -0.9297;
	normals[3400] = 0.3127;
	normals[3401] = -0.1944;

	normals[3402] = 0.912;
	normals[3403] = 0.3376;
	normals[3404] = -0.2329;

	normals[3405] = 0.912;
	normals[3406] = 0.3376;
	normals[3407] = -0.2329;

	normals[3408] = 0.912;
	normals[3409] = 0.3376;
	normals[3410] = -0.2329;

	normals[3411] = 0.912;
	normals[3412] = 0.3376;
	normals[3413] = -0.2329;

	normals[3414] = -0.912;
	normals[3415] = 0.3376;
	normals[3416] = -0.2329;

	normals[3417] = -0.912;
	normals[3418] = 0.3376;
	normals[3419] = -0.2329;

	normals[3420] = -0.912;
	normals[3421] = 0.3376;
	normals[3422] = -0.2329;

	normals[3423] = -0.912;
	normals[3424] = 0.3376;
	normals[3425] = -0.2329;

	normals[3426] = 0.9407;
	normals[3427] = 0.3338;
	normals[3428] = -0.0607;

	normals[3429] = 0.9407;
	normals[3430] = 0.3338;
	normals[3431] = -0.0607;

	normals[3432] = 0.9407;
	normals[3433] = 0.3338;
	normals[3434] = -0.0607;

	normals[3435] = 0.9407;
	normals[3436] = 0.3338;
	normals[3437] = -0.0607;

	normals[3438] = -0.9407;
	normals[3439] = 0.3338;
	normals[3440] = -0.0607;

	normals[3441] = -0.9407;
	normals[3442] = 0.3338;
	normals[3443] = -0.0607;

	normals[3444] = -0.9407;
	normals[3445] = 0.3338;
	normals[3446] = -0.0607;

	normals[3447] = -0.9407;
	normals[3448] = 0.3338;
	normals[3449] = -0.0607;

	normals[3450] = 0.1761;
	normals[3451] = -0.8805;
	normals[3452] = -0.4402;

	normals[3453] = 0.1761;
	normals[3454] = -0.8805;
	normals[3455] = -0.4402;

	normals[3456] = 0.1761;
	normals[3457] = -0.8805;
	normals[3458] = -0.4402;

	normals[3459] = 0.1761;
	normals[3460] = -0.8805;
	normals[3461] = -0.4402;

	normals[3462] = -0.1761;
	normals[3463] = -0.8805;
	normals[3464] = -0.4402;

	normals[3465] = -0.1761;
	normals[3466] = -0.8805;
	normals[3467] = -0.4402;

	normals[3468] = -0.1761;
	normals[3469] = -0.8805;
	normals[3470] = -0.4402;

	normals[3471] = -0.1761;
	normals[3472] = -0.8805;
	normals[3473] = -0.4402;

	normals[3474] = 0.3708;
	normals[3475] = -0.4733;
	normals[3476] = -0.7991;

	normals[3477] = 0.3708;
	normals[3478] = -0.4733;
	normals[3479] = -0.7991;

	normals[3480] = 0.3708;
	normals[3481] = -0.4733;
	normals[3482] = -0.7991;

	normals[3483] = 0.3708;
	normals[3484] = -0.4733;
	normals[3485] = -0.7991;

	normals[3486] = -0.3708;
	normals[3487] = -0.4733;
	normals[3488] = -0.7991;

	normals[3489] = -0.3708;
	normals[3490] = -0.4733;
	normals[3491] = -0.7991;

	normals[3492] = -0.3708;
	normals[3493] = -0.4733;
	normals[3494] = -0.7991;

	normals[3495] = -0.3708;
	normals[3496] = -0.4733;
	normals[3497] = -0.7991;

	normals[3498] = 0.3107;
	normals[3499] = -0.8284;
	normals[3500] = -0.466;

	normals[3501] = 0.3107;
	normals[3502] = -0.8284;
	normals[3503] = -0.466;

	normals[3504] = 0.3107;
	normals[3505] = -0.8284;
	normals[3506] = -0.466;

	normals[3507] = 0.3107;
	normals[3508] = -0.8284;
	normals[3509] = -0.466;

	normals[3510] = -0.3107;
	normals[3511] = -0.8284;
	normals[3512] = -0.466;

	normals[3513] = -0.3107;
	normals[3514] = -0.8284;
	normals[3515] = -0.466;

	normals[3516] = -0.3107;
	normals[3517] = -0.8284;
	normals[3518] = -0.466;

	normals[3519] = -0.3107;
	normals[3520] = -0.8284;
	normals[3521] = -0.466;

	normals[3522] = 0.2793;
	normals[3523] = -0.9515;
	normals[3524] = -0.1287;

	normals[3525] = 0.2793;
	normals[3526] = -0.9515;
	normals[3527] = -0.1287;

	normals[3528] = 0.2793;
	normals[3529] = -0.9515;
	normals[3530] = -0.1287;

	normals[3531] = 0.2793;
	normals[3532] = -0.9515;
	normals[3533] = -0.1287;

	normals[3534] = -0.2793;
	normals[3535] = -0.9515;
	normals[3536] = -0.1287;

	normals[3537] = -0.2793;
	normals[3538] = -0.9515;
	normals[3539] = -0.1287;

	normals[3540] = -0.2793;
	normals[3541] = -0.9515;
	normals[3542] = -0.1287;

	normals[3543] = -0.2793;
	normals[3544] = -0.9515;
	normals[3545] = -0.1287;

	normals[3546] = 0.3139;
	normals[3547] = -0.9321;
	normals[3548] = -0.1807;

	normals[3549] = 0.3139;
	normals[3550] = -0.9321;
	normals[3551] = -0.1807;

	normals[3552] = 0.3139;
	normals[3553] = -0.9321;
	normals[3554] = -0.1807;

	normals[3555] = 0.3139;
	normals[3556] = -0.9321;
	normals[3557] = -0.1807;

	normals[3558] = -0.3139;
	normals[3559] = -0.9321;
	normals[3560] = -0.1807;

	normals[3561] = -0.3139;
	normals[3562] = -0.9321;
	normals[3563] = -0.1807;

	normals[3564] = -0.3139;
	normals[3565] = -0.9321;
	normals[3566] = -0.1807;

	normals[3567] = -0.3139;
	normals[3568] = -0.9321;
	normals[3569] = -0.1807;

	normals[3570] = 0.9762;
	normals[3571] = -0.2083;
	normals[3572] = -0.0609;

	normals[3573] = 0.9762;
	normals[3574] = -0.2083;
	normals[3575] = -0.0609;

	normals[3576] = 0.9762;
	normals[3577] = -0.2083;
	normals[3578] = -0.0609;

	normals[3579] = 0.9762;
	normals[3580] = -0.2083;
	normals[3581] = -0.0609;

	normals[3582] = -0.9762;
	normals[3583] = -0.2083;
	normals[3584] = -0.0609;

	normals[3585] = -0.9762;
	normals[3586] = -0.2083;
	normals[3587] = -0.0609;

	normals[3588] = -0.9762;
	normals[3589] = -0.2083;
	normals[3590] = -0.0609;

	normals[3591] = -0.9762;
	normals[3592] = -0.2083;
	normals[3593] = -0.0609;

	normals[3594] = 0.8267;
	normals[3595] = -0.5066;
	normals[3596] = 0.2447;

	normals[3597] = 0.8267;
	normals[3598] = -0.5066;
	normals[3599] = 0.2447;

	normals[3600] = 0.8267;
	normals[3601] = -0.5066;
	normals[3602] = 0.2447;

	normals[3603] = 0.8267;
	normals[3604] = -0.5066;
	normals[3605] = 0.2447;

	normals[3606] = -0.8267;
	normals[3607] = -0.5066;
	normals[3608] = 0.2447;

	normals[3609] = -0.8267;
	normals[3610] = -0.5066;
	normals[3611] = 0.2447;

	normals[3612] = -0.8267;
	normals[3613] = -0.5066;
	normals[3614] = 0.2447;

	normals[3615] = -0.8267;
	normals[3616] = -0.5066;
	normals[3617] = 0.2447;

	normals[3618] = 0.3449;
	normals[3619] = -0.1158;
	normals[3620] = -0.9315;

	normals[3621] = 0.3449;
	normals[3622] = -0.1158;
	normals[3623] = -0.9315;

	normals[3624] = 0.3449;
	normals[3625] = -0.1158;
	normals[3626] = -0.9315;

	normals[3627] = 0.3449;
	normals[3628] = -0.1158;
	normals[3629] = -0.9315;

	normals[3630] = -0.3449;
	normals[3631] = -0.1158;
	normals[3632] = -0.9315;

	normals[3633] = -0.3449;
	normals[3634] = -0.1158;
	normals[3635] = -0.9315;

	normals[3636] = -0.3449;
	normals[3637] = -0.1158;
	normals[3638] = -0.9315;

	normals[3639] = -0.3449;
	normals[3640] = -0.1158;
	normals[3641] = -0.9315;

	normals[3642] = 0.1203;
	normals[3643] = 0.9644;
	normals[3644] = 0.2355;

	normals[3645] = 0.1203;
	normals[3646] = 0.9644;
	normals[3647] = 0.2355;

	normals[3648] = 0.1203;
	normals[3649] = 0.9644;
	normals[3650] = 0.2355;

	normals[3651] = 0.1203;
	normals[3652] = 0.9644;
	normals[3653] = 0.2355;

	normals[3654] = -0.1203;
	normals[3655] = 0.9644;
	normals[3656] = 0.2355;

	normals[3657] = -0.1203;
	normals[3658] = 0.9644;
	normals[3659] = 0.2355;

	normals[3660] = -0.1203;
	normals[3661] = 0.9644;
	normals[3662] = 0.2355;

	normals[3663] = -0.1203;
	normals[3664] = 0.9644;
	normals[3665] = 0.2355;

	normals[3666] = 0.1275;
	normals[3667] = 0.9744;
	normals[3668] = -0.1851;

	normals[3669] = 0.1275;
	normals[3670] = 0.9744;
	normals[3671] = -0.1851;

	normals[3672] = 0.1275;
	normals[3673] = 0.9744;
	normals[3674] = -0.1851;

	normals[3675] = 0.1275;
	normals[3676] = 0.9744;
	normals[3677] = -0.1851;

	normals[3678] = -0.1275;
	normals[3679] = 0.9744;
	normals[3680] = -0.1851;

	normals[3681] = -0.1275;
	normals[3682] = 0.9744;
	normals[3683] = -0.1851;

	normals[3684] = -0.1275;
	normals[3685] = 0.9744;
	normals[3686] = -0.1851;

	normals[3687] = -0.1275;
	normals[3688] = 0.9744;
	normals[3689] = -0.1851;

	normals[3690] = 0.3492;
	normals[3691] = 0.5947;
	normals[3692] = -0.7241;

	normals[3693] = 0.3492;
	normals[3694] = 0.5947;
	normals[3695] = -0.7241;

	normals[3696] = 0.3492;
	normals[3697] = 0.5947;
	normals[3698] = -0.7241;

	normals[3699] = 0.3492;
	normals[3700] = 0.5947;
	normals[3701] = -0.7241;

	normals[3702] = -0.3492;
	normals[3703] = 0.5947;
	normals[3704] = -0.7241;

	normals[3705] = -0.3492;
	normals[3706] = 0.5947;
	normals[3707] = -0.7241;

	normals[3708] = -0.3492;
	normals[3709] = 0.5947;
	normals[3710] = -0.7241;

	normals[3711] = -0.3492;
	normals[3712] = 0.5947;
	normals[3713] = -0.7241;

	normals[3714] = 0.4153;
	normals[3715] = 0.8981;
	normals[3716] = -0.1449;

	normals[3717] = 0.4153;
	normals[3718] = 0.8981;
	normals[3719] = -0.1449;

	normals[3720] = 0.4153;
	normals[3721] = 0.8981;
	normals[3722] = -0.1449;

	normals[3723] = 0.4153;
	normals[3724] = 0.8981;
	normals[3725] = -0.1449;

	normals[3726] = -0.4153;
	normals[3727] = 0.8981;
	normals[3728] = -0.1449;

	normals[3729] = -0.4153;
	normals[3730] = 0.8981;
	normals[3731] = -0.1449;

	normals[3732] = -0.4153;
	normals[3733] = 0.8981;
	normals[3734] = -0.1449;

	normals[3735] = -0.4153;
	normals[3736] = 0.8981;
	normals[3737] = -0.1449;

	normals[3738] = 0.1845;
	normals[3739] = 0.7036;
	normals[3740] = 0.6863;

	normals[3741] = 0.1845;
	normals[3742] = 0.7036;
	normals[3743] = 0.6863;

	normals[3744] = 0.1845;
	normals[3745] = 0.7036;
	normals[3746] = 0.6863;

	normals[3747] = 0.1845;
	normals[3748] = 0.7036;
	normals[3749] = 0.6863;

	normals[3750] = -0.1845;
	normals[3751] = 0.7036;
	normals[3752] = 0.6863;

	normals[3753] = -0.1845;
	normals[3754] = 0.7036;
	normals[3755] = 0.6863;

	normals[3756] = -0.1845;
	normals[3757] = 0.7036;
	normals[3758] = 0.6863;

	normals[3759] = -0.1845;
	normals[3760] = 0.7036;
	normals[3761] = 0.6863;

	normals[3762] = 0.6056;
	normals[3763] = 0.7794;
	normals[3764] = 0.1608;

	normals[3765] = 0.6056;
	normals[3766] = 0.7794;
	normals[3767] = 0.1608;

	normals[3768] = 0.6056;
	normals[3769] = 0.7794;
	normals[3770] = 0.1608;

	normals[3771] = 0.6056;
	normals[3772] = 0.7794;
	normals[3773] = 0.1608;

	normals[3774] = -0.6056;
	normals[3775] = 0.7794;
	normals[3776] = 0.1608;

	normals[3777] = -0.6056;
	normals[3778] = 0.7794;
	normals[3779] = 0.1608;

	normals[3780] = -0.6056;
	normals[3781] = 0.7794;
	normals[3782] = 0.1608;

	normals[3783] = -0.6056;
	normals[3784] = 0.7794;
	normals[3785] = 0.1608;

	normals[3786] = 0.7033;
	normals[3787] = 0.6806;
	normals[3788] = -0.2053;

	normals[3789] = 0.7033;
	normals[3790] = 0.6806;
	normals[3791] = -0.2053;

	normals[3792] = 0.7033;
	normals[3793] = 0.6806;
	normals[3794] = -0.2053;

	normals[3795] = 0.7033;
	normals[3796] = 0.6806;
	normals[3797] = -0.2053;

	normals[3798] = -0.7033;
	normals[3799] = 0.6806;
	normals[3800] = -0.2053;

	normals[3801] = -0.7033;
	normals[3802] = 0.6806;
	normals[3803] = -0.2053;

	normals[3804] = -0.7033;
	normals[3805] = 0.6806;
	normals[3806] = -0.2053;

	normals[3807] = -0.7033;
	normals[3808] = 0.6806;
	normals[3809] = -0.2053;

	normals[3810] = 0.6679;
	normals[3811] = 0.2007;
	normals[3812] = -0.7166;

	normals[3813] = 0.6679;
	normals[3814] = 0.2007;
	normals[3815] = -0.7166;

	normals[3816] = 0.6679;
	normals[3817] = 0.2007;
	normals[3818] = -0.7166;

	normals[3819] = 0.6679;
	normals[3820] = 0.2007;
	normals[3821] = -0.7166;

	normals[3822] = -0.6679;
	normals[3823] = 0.2007;
	normals[3824] = -0.7166;

	normals[3825] = -0.6679;
	normals[3826] = 0.2007;
	normals[3827] = -0.7166;

	normals[3828] = -0.6679;
	normals[3829] = 0.2007;
	normals[3830] = -0.7166;

	normals[3831] = -0.6679;
	normals[3832] = 0.2007;
	normals[3833] = -0.7166;

	normals[3834] = 0.4948;
	normals[3835] = 0.4342;
	normals[3836] = -0.7528;

	normals[3837] = 0.4948;
	normals[3838] = 0.4342;
	normals[3839] = -0.7528;

	normals[3840] = 0.4948;
	normals[3841] = 0.4342;
	normals[3842] = -0.7528;

	normals[3843] = 0.4948;
	normals[3844] = 0.4342;
	normals[3845] = -0.7528;

	normals[3846] = -0.4948;
	normals[3847] = 0.4342;
	normals[3848] = -0.7528;

	normals[3849] = -0.4948;
	normals[3850] = 0.4342;
	normals[3851] = -0.7528;

	normals[3852] = -0.4948;
	normals[3853] = 0.4342;
	normals[3854] = -0.7528;

	normals[3855] = -0.4948;
	normals[3856] = 0.4342;
	normals[3857] = -0.7528;

	normals[3858] = 0.6423;
	normals[3859] = 0.7459;
	normals[3860] = -0.1761;

	normals[3861] = 0.6423;
	normals[3862] = 0.7459;
	normals[3863] = -0.1761;

	normals[3864] = 0.6423;
	normals[3865] = 0.7459;
	normals[3866] = -0.1761;

	normals[3867] = 0.6423;
	normals[3868] = 0.7459;
	normals[3869] = -0.1761;

	normals[3870] = -0.6423;
	normals[3871] = 0.7459;
	normals[3872] = -0.1761;

	normals[3873] = -0.6423;
	normals[3874] = 0.7459;
	normals[3875] = -0.1761;

	normals[3876] = -0.6423;
	normals[3877] = 0.7459;
	normals[3878] = -0.1761;

	normals[3879] = -0.6423;
	normals[3880] = 0.7459;
	normals[3881] = -0.1761;

	normals[3882] = 0.7182;
	normals[3883] = 0.6788;
	normals[3884] = 0.153;

	normals[3885] = 0.7182;
	normals[3886] = 0.6788;
	normals[3887] = 0.153;

	normals[3888] = 0.7182;
	normals[3889] = 0.6788;
	normals[3890] = 0.153;

	normals[3891] = 0.7182;
	normals[3892] = 0.6788;
	normals[3893] = 0.153;

	normals[3894] = -0.7182;
	normals[3895] = 0.6788;
	normals[3896] = 0.153;

	normals[3897] = -0.7182;
	normals[3898] = 0.6788;
	normals[3899] = 0.153;

	normals[3900] = -0.7182;
	normals[3901] = 0.6788;
	normals[3902] = 0.153;

	normals[3903] = -0.7182;
	normals[3904] = 0.6788;
	normals[3905] = 0.153;

	normals[3906] = 0.7388;
	normals[3907] = 0.3972;
	normals[3908] = 0.5444;

	normals[3909] = 0.7388;
	normals[3910] = 0.3972;
	normals[3911] = 0.5444;

	normals[3912] = 0.7388;
	normals[3913] = 0.3972;
	normals[3914] = 0.5444;

	normals[3915] = 0.7388;
	normals[3916] = 0.3972;
	normals[3917] = 0.5444;

	normals[3918] = -0.7388;
	normals[3919] = 0.3972;
	normals[3920] = 0.5444;

	normals[3921] = -0.7388;
	normals[3922] = 0.3972;
	normals[3923] = 0.5444;

	normals[3924] = -0.7388;
	normals[3925] = 0.3972;
	normals[3926] = 0.5444;

	normals[3927] = -0.7388;
	normals[3928] = 0.3972;
	normals[3929] = 0.5444;

	normals[3930] = 0.3428;
	normals[3931] = 0.9261;
	normals[3932] = -0.1579;

	normals[3933] = 0.3428;
	normals[3934] = 0.9261;
	normals[3935] = -0.1579;

	normals[3936] = 0.3428;
	normals[3937] = 0.9261;
	normals[3938] = -0.1579;

	normals[3939] = 0.3428;
	normals[3940] = 0.9261;
	normals[3941] = -0.1579;

	normals[3942] = -0.3428;
	normals[3943] = 0.9261;
	normals[3944] = -0.1579;

	normals[3945] = -0.3428;
	normals[3946] = 0.9261;
	normals[3947] = -0.1579;

	normals[3948] = -0.3428;
	normals[3949] = 0.9261;
	normals[3950] = -0.1579;

	normals[3951] = -0.3428;
	normals[3952] = 0.9261;
	normals[3953] = -0.1579;

	normals[3954] = 0.227;
	normals[3955] = 0.574;
	normals[3956] = 0.7867;

	normals[3957] = 0.227;
	normals[3958] = 0.574;
	normals[3959] = 0.7867;

	normals[3960] = 0.227;
	normals[3961] = 0.574;
	normals[3962] = 0.7867;

	normals[3963] = 0.227;
	normals[3964] = 0.574;
	normals[3965] = 0.7867;

	normals[3966] = -0.227;
	normals[3967] = 0.574;
	normals[3968] = 0.7867;

	normals[3969] = -0.227;
	normals[3970] = 0.574;
	normals[3971] = 0.7867;

	normals[3972] = -0.227;
	normals[3973] = 0.574;
	normals[3974] = 0.7867;

	normals[3975] = -0.227;
	normals[3976] = 0.574;
	normals[3977] = 0.7867;

	normals[3978] = -0.1722;
	normals[3979] = 0.1046;
	normals[3980] = -0.9795;

	normals[3981] = -0.1722;
	normals[3982] = 0.1046;
	normals[3983] = -0.9795;

	normals[3984] = -0.1722;
	normals[3985] = 0.1046;
	normals[3986] = -0.9795;

	normals[3987] = -0.1722;
	normals[3988] = 0.1046;
	normals[3989] = -0.9795;

	normals[3990] = 0.1722;
	normals[3991] = 0.1046;
	normals[3992] = -0.9795;

	normals[3993] = 0.1722;
	normals[3994] = 0.1046;
	normals[3995] = -0.9795;

	normals[3996] = 0.1722;
	normals[3997] = 0.1046;
	normals[3998] = -0.9795;

	normals[3999] = 0.1722;
	normals[4000] = 0.1046;
	normals[4001] = -0.9795;

	normals[4002] = 0.0425;
	normals[4003] = 0.915;
	normals[4004] = 0.4013;

	normals[4005] = 0.0425;
	normals[4006] = 0.915;
	normals[4007] = 0.4013;

	normals[4008] = 0.0425;
	normals[4009] = 0.915;
	normals[4010] = 0.4013;

	normals[4011] = 0.0425;
	normals[4012] = 0.915;
	normals[4013] = 0.4013;

	normals[4014] = -0.0425;
	normals[4015] = 0.915;
	normals[4016] = 0.4013;

	normals[4017] = -0.0425;
	normals[4018] = 0.915;
	normals[4019] = 0.4013;

	normals[4020] = -0.0425;
	normals[4021] = 0.915;
	normals[4022] = 0.4013;

	normals[4023] = -0.0425;
	normals[4024] = 0.915;
	normals[4025] = 0.4013;

	normals[4026] = -0.1616;
	normals[4027] = 0.1847;
	normals[4028] = 0.9694;

	normals[4029] = -0.1616;
	normals[4030] = 0.1847;
	normals[4031] = 0.9694;

	normals[4032] = -0.1616;
	normals[4033] = 0.1847;
	normals[4034] = 0.9694;

	normals[4035] = 0.1616;
	normals[4036] = 0.1847;
	normals[4037] = 0.9694;

	normals[4038] = 0.1616;
	normals[4039] = 0.1847;
	normals[4040] = 0.9694;

	normals[4041] = 0.1616;
	normals[4042] = 0.1847;
	normals[4043] = 0.9694;

	normals[4044] = 0.9791;
	normals[4045] = 0.1973;
	normals[4046] = 0.0483;

	normals[4047] = 0.9791;
	normals[4048] = 0.1973;
	normals[4049] = 0.0483;

	normals[4050] = 0.9791;
	normals[4051] = 0.1973;
	normals[4052] = 0.0483;

	normals[4053] = 0.9791;
	normals[4054] = 0.1973;
	normals[4055] = 0.0483;

	normals[4056] = -0.9791;
	normals[4057] = 0.1973;
	normals[4058] = 0.0483;

	normals[4059] = -0.9791;
	normals[4060] = 0.1973;
	normals[4061] = 0.0483;

	normals[4062] = -0.9791;
	normals[4063] = 0.1973;
	normals[4064] = 0.0483;

	normals[4065] = -0.9791;
	normals[4066] = 0.1973;
	normals[4067] = 0.0483;

	normals[4068] = 0.947;
	normals[4069] = 0.0918;
	normals[4070] = 0.3079;

	normals[4071] = 0.947;
	normals[4072] = 0.0918;
	normals[4073] = 0.3079;

	normals[4074] = 0.947;
	normals[4075] = 0.0918;
	normals[4076] = 0.3079;

	normals[4077] = 0.947;
	normals[4078] = 0.0918;
	normals[4079] = 0.3079;

	normals[4080] = -0.947;
	normals[4081] = 0.0918;
	normals[4082] = 0.3079;

	normals[4083] = -0.947;
	normals[4084] = 0.0918;
	normals[4085] = 0.3079;

	normals[4086] = -0.947;
	normals[4087] = 0.0918;
	normals[4088] = 0.3079;

	normals[4089] = -0.947;
	normals[4090] = 0.0918;
	normals[4091] = 0.3079;

	normals[4092] = 0.9794;
	normals[4093] = 0.1905;
	normals[4094] = -0.0661;

	normals[4095] = 0.9794;
	normals[4096] = 0.1905;
	normals[4097] = -0.0661;

	normals[4098] = 0.9794;
	normals[4099] = 0.1905;
	normals[4100] = -0.0661;

	normals[4101] = 0.9794;
	normals[4102] = 0.1905;
	normals[4103] = -0.0661;

	normals[4104] = -0.9794;
	normals[4105] = 0.1905;
	normals[4106] = -0.0661;

	normals[4107] = -0.9794;
	normals[4108] = 0.1905;
	normals[4109] = -0.0661;

	normals[4110] = -0.9794;
	normals[4111] = 0.1905;
	normals[4112] = -0.0661;

	normals[4113] = -0.9794;
	normals[4114] = 0.1905;
	normals[4115] = -0.0661;

	normals[4116] = 0.9938;
	normals[4117] = 0.0312;
	normals[4118] = -0.107;

	normals[4119] = 0.9938;
	normals[4120] = 0.0312;
	normals[4121] = -0.107;

	normals[4122] = 0.9938;
	normals[4123] = 0.0312;
	normals[4124] = -0.107;

	normals[4125] = 0.9938;
	normals[4126] = 0.0312;
	normals[4127] = -0.107;

	normals[4128] = -0.9938;
	normals[4129] = 0.0312;
	normals[4130] = -0.107;

	normals[4131] = -0.9938;
	normals[4132] = 0.0312;
	normals[4133] = -0.107;

	normals[4134] = -0.9938;
	normals[4135] = 0.0312;
	normals[4136] = -0.107;

	normals[4137] = -0.9938;
	normals[4138] = 0.0312;
	normals[4139] = -0.107;

	normals[4140] = 0.7116;
	normals[4141] = -0.7008;
	normals[4142] = 0.0501;

	normals[4143] = 0.7116;
	normals[4144] = -0.7008;
	normals[4145] = 0.0501;

	normals[4146] = 0.7116;
	normals[4147] = -0.7008;
	normals[4148] = 0.0501;

	normals[4149] = 0.7116;
	normals[4150] = -0.7008;
	normals[4151] = 0.0501;

	normals[4152] = -0.7116;
	normals[4153] = -0.7008;
	normals[4154] = 0.0501;

	normals[4155] = -0.7116;
	normals[4156] = -0.7008;
	normals[4157] = 0.0501;

	normals[4158] = -0.7116;
	normals[4159] = -0.7008;
	normals[4160] = 0.0501;

	normals[4161] = -0.7116;
	normals[4162] = -0.7008;
	normals[4163] = 0.0501;

	normals[4164] = 0.3722;
	normals[4165] = -0.9243;
	normals[4166] = 0.0847;

	normals[4167] = 0.3722;
	normals[4168] = -0.9243;
	normals[4169] = 0.0847;

	normals[4170] = 0.3722;
	normals[4171] = -0.9243;
	normals[4172] = 0.0847;

	normals[4173] = 0.3722;
	normals[4174] = -0.9243;
	normals[4175] = 0.0847;

	normals[4176] = -0.3722;
	normals[4177] = -0.9243;
	normals[4178] = 0.0847;

	normals[4179] = -0.3722;
	normals[4180] = -0.9243;
	normals[4181] = 0.0847;

	normals[4182] = -0.3722;
	normals[4183] = -0.9243;
	normals[4184] = 0.0847;

	normals[4185] = -0.3722;
	normals[4186] = -0.9243;
	normals[4187] = 0.0847;

	normals[4188] = 0.4465;
	normals[4189] = -0.8644;
	normals[4190] = 0.231;

	normals[4191] = 0.4465;
	normals[4192] = -0.8644;
	normals[4193] = 0.231;

	normals[4194] = 0.4465;
	normals[4195] = -0.8644;
	normals[4196] = 0.231;

	normals[4197] = 0.4465;
	normals[4198] = -0.8644;
	normals[4199] = 0.231;

	normals[4200] = -0.4465;
	normals[4201] = -0.8644;
	normals[4202] = 0.231;

	normals[4203] = -0.4465;
	normals[4204] = -0.8644;
	normals[4205] = 0.231;

	normals[4206] = -0.4465;
	normals[4207] = -0.8644;
	normals[4208] = 0.231;

	normals[4209] = -0.4465;
	normals[4210] = -0.8644;
	normals[4211] = 0.231;

	normals[4212] = 0.6066;
	normals[4213] = -0.7578;
	normals[4214] = 0.2405;

	normals[4215] = 0.6066;
	normals[4216] = -0.7578;
	normals[4217] = 0.2405;

	normals[4218] = 0.6066;
	normals[4219] = -0.7578;
	normals[4220] = 0.2405;

	normals[4221] = 0.6066;
	normals[4222] = -0.7578;
	normals[4223] = 0.2405;

	normals[4224] = -0.6066;
	normals[4225] = -0.7578;
	normals[4226] = 0.2405;

	normals[4227] = -0.6066;
	normals[4228] = -0.7578;
	normals[4229] = 0.2405;

	normals[4230] = -0.6066;
	normals[4231] = -0.7578;
	normals[4232] = 0.2405;

	normals[4233] = -0.6066;
	normals[4234] = -0.7578;
	normals[4235] = 0.2405;

	normals[4236] = 0.7325;
	normals[4237] = -0.6368;
	normals[4238] = 0.2407;

	normals[4239] = 0.7325;
	normals[4240] = -0.6368;
	normals[4241] = 0.2407;

	normals[4242] = 0.7325;
	normals[4243] = -0.6368;
	normals[4244] = 0.2407;

	normals[4245] = -0.7325;
	normals[4246] = -0.6368;
	normals[4247] = 0.2407;

	normals[4248] = -0.7325;
	normals[4249] = -0.6368;
	normals[4250] = 0.2407;

	normals[4251] = -0.7325;
	normals[4252] = -0.6368;
	normals[4253] = 0.2407;

	normals[4254] = 0.2637;
	normals[4255] = -0.4499;
	normals[4256] = 0.8533;

	normals[4257] = 0.2637;
	normals[4258] = -0.4499;
	normals[4259] = 0.8533;

	normals[4260] = 0.2637;
	normals[4261] = -0.4499;
	normals[4262] = 0.8533;

	normals[4263] = -0.2637;
	normals[4264] = -0.4499;
	normals[4265] = 0.8533;

	normals[4266] = -0.2637;
	normals[4267] = -0.4499;
	normals[4268] = 0.8533;

	normals[4269] = -0.2637;
	normals[4270] = -0.4499;
	normals[4271] = 0.8533;

	normals[4272] = 0.5568;
	normals[4273] = -0.3181;
	normals[4274] = -0.7673;

	normals[4275] = 0.5568;
	normals[4276] = -0.3181;
	normals[4277] = -0.7673;

	normals[4278] = 0.5568;
	normals[4279] = -0.3181;
	normals[4280] = -0.7673;

	normals[4281] = 0.5568;
	normals[4282] = -0.3181;
	normals[4283] = -0.7673;

	normals[4284] = -0.5568;
	normals[4285] = -0.3181;
	normals[4286] = -0.7673;

	normals[4287] = -0.5568;
	normals[4288] = -0.3181;
	normals[4289] = -0.7673;

	normals[4290] = -0.5568;
	normals[4291] = -0.3181;
	normals[4292] = -0.7673;

	normals[4293] = -0.5568;
	normals[4294] = -0.3181;
	normals[4295] = -0.7673;

	normals[4296] = 0.5004;
	normals[4297] = -0.2807;
	normals[4298] = -0.819;

	normals[4299] = 0.5004;
	normals[4300] = -0.2807;
	normals[4301] = -0.819;

	normals[4302] = 0.5004;
	normals[4303] = -0.2807;
	normals[4304] = -0.819;

	normals[4305] = 0.5004;
	normals[4306] = -0.2807;
	normals[4307] = -0.819;

	normals[4308] = -0.5004;
	normals[4309] = -0.2807;
	normals[4310] = -0.819;

	normals[4311] = -0.5004;
	normals[4312] = -0.2807;
	normals[4313] = -0.819;

	normals[4314] = -0.5004;
	normals[4315] = -0.2807;
	normals[4316] = -0.819;

	normals[4317] = -0.5004;
	normals[4318] = -0.2807;
	normals[4319] = -0.819;

	normals[4320] = 0.319;
	normals[4321] = -0.8494;
	normals[4322] = -0.4205;

	normals[4323] = 0.319;
	normals[4324] = -0.8494;
	normals[4325] = -0.4205;

	normals[4326] = 0.319;
	normals[4327] = -0.8494;
	normals[4328] = -0.4205;

	normals[4329] = 0.319;
	normals[4330] = -0.8494;
	normals[4331] = -0.4205;

	normals[4332] = -0.319;
	normals[4333] = -0.8494;
	normals[4334] = -0.4205;

	normals[4335] = -0.319;
	normals[4336] = -0.8494;
	normals[4337] = -0.4205;

	normals[4338] = -0.319;
	normals[4339] = -0.8494;
	normals[4340] = -0.4205;

	normals[4341] = -0.319;
	normals[4342] = -0.8494;
	normals[4343] = -0.4205;

	normals[4344] = 0.7198;
	normals[4345] = -0.6356;
	normals[4346] = -0.2793;

	normals[4347] = 0.7198;
	normals[4348] = -0.6356;
	normals[4349] = -0.2793;

	normals[4350] = 0.7198;
	normals[4351] = -0.6356;
	normals[4352] = -0.2793;

	normals[4353] = 0.7198;
	normals[4354] = -0.6356;
	normals[4355] = -0.2793;

	normals[4356] = -0.7198;
	normals[4357] = -0.6356;
	normals[4358] = -0.2793;

	normals[4359] = -0.7198;
	normals[4360] = -0.6356;
	normals[4361] = -0.2793;

	normals[4362] = -0.7198;
	normals[4363] = -0.6356;
	normals[4364] = -0.2793;

	normals[4365] = -0.7198;
	normals[4366] = -0.6356;
	normals[4367] = -0.2793;

	normals[4368] = 0.4972;
	normals[4369] = -0.4408;
	normals[4370] = -0.7473;

	normals[4371] = 0.4972;
	normals[4372] = -0.4408;
	normals[4373] = -0.7473;

	normals[4374] = 0.4972;
	normals[4375] = -0.4408;
	normals[4376] = -0.7473;

	normals[4377] = -0.4972;
	normals[4378] = -0.4408;
	normals[4379] = -0.7473;

	normals[4380] = -0.4972;
	normals[4381] = -0.4408;
	normals[4382] = -0.7473;

	normals[4383] = -0.4972;
	normals[4384] = -0.4408;
	normals[4385] = -0.7473;

	normals[4386] = 0.3506;
	normals[4387] = 0.3807;
	normals[4388] = 0.8557;

	normals[4389] = 0.3506;
	normals[4390] = 0.3807;
	normals[4391] = 0.8557;

	normals[4392] = 0.3506;
	normals[4393] = 0.3807;
	normals[4394] = 0.8557;

	normals[4395] = 0.3506;
	normals[4396] = 0.3807;
	normals[4397] = 0.8557;

	normals[4398] = -0.3506;
	normals[4399] = 0.3807;
	normals[4400] = 0.8557;

	normals[4401] = -0.3506;
	normals[4402] = 0.3807;
	normals[4403] = 0.8557;

	normals[4404] = -0.3506;
	normals[4405] = 0.3807;
	normals[4406] = 0.8557;

	normals[4407] = -0.3506;
	normals[4408] = 0.3807;
	normals[4409] = 0.8557;

	normals[4410] = 0.4566;
	normals[4411] = 0.1715;
	normals[4412] = 0.873;

	normals[4413] = 0.4566;
	normals[4414] = 0.1715;
	normals[4415] = 0.873;

	normals[4416] = 0.4566;
	normals[4417] = 0.1715;
	normals[4418] = 0.873;

	normals[4419] = 0.4566;
	normals[4420] = 0.1715;
	normals[4421] = 0.873;

	normals[4422] = -0.4566;
	normals[4423] = 0.1715;
	normals[4424] = 0.873;

	normals[4425] = -0.4566;
	normals[4426] = 0.1715;
	normals[4427] = 0.873;

	normals[4428] = -0.4566;
	normals[4429] = 0.1715;
	normals[4430] = 0.873;

	normals[4431] = -0.4566;
	normals[4432] = 0.1715;
	normals[4433] = 0.873;

	normals[4434] = 0.2583;
	normals[4435] = 0.1055;
	normals[4436] = 0.9603;

	normals[4437] = 0.2583;
	normals[4438] = 0.1055;
	normals[4439] = 0.9603;

	normals[4440] = 0.2583;
	normals[4441] = 0.1055;
	normals[4442] = 0.9603;

	normals[4443] = 0.2583;
	normals[4444] = 0.1055;
	normals[4445] = 0.9603;

	normals[4446] = -0.2583;
	normals[4447] = 0.1055;
	normals[4448] = 0.9603;

	normals[4449] = -0.2583;
	normals[4450] = 0.1055;
	normals[4451] = 0.9603;

	normals[4452] = -0.2583;
	normals[4453] = 0.1055;
	normals[4454] = 0.9603;

	normals[4455] = -0.2583;
	normals[4456] = 0.1055;
	normals[4457] = 0.9603;

	normals[4458] = 0.2455;
	normals[4459] = -0.0802;
	normals[4460] = 0.9661;

	normals[4461] = 0.2455;
	normals[4462] = -0.0802;
	normals[4463] = 0.9661;

	normals[4464] = 0.2455;
	normals[4465] = -0.0802;
	normals[4466] = 0.9661;

	normals[4467] = 0.2455;
	normals[4468] = -0.0802;
	normals[4469] = 0.9661;

	normals[4470] = -0.2455;
	normals[4471] = -0.0802;
	normals[4472] = 0.9661;

	normals[4473] = -0.2455;
	normals[4474] = -0.0802;
	normals[4475] = 0.9661;

	normals[4476] = -0.2455;
	normals[4477] = -0.0802;
	normals[4478] = 0.9661;

	normals[4479] = -0.2455;
	normals[4480] = -0.0802;
	normals[4481] = 0.9661;

	normals[4482] = 0.4643;
	normals[4483] = -0.0599;
	normals[4484] = 0.8837;

	normals[4485] = 0.4643;
	normals[4486] = -0.0599;
	normals[4487] = 0.8837;

	normals[4488] = 0.4643;
	normals[4489] = -0.0599;
	normals[4490] = 0.8837;

	normals[4491] = 0.4643;
	normals[4492] = -0.0599;
	normals[4493] = 0.8837;

	normals[4494] = -0.4643;
	normals[4495] = -0.0599;
	normals[4496] = 0.8837;

	normals[4497] = -0.4643;
	normals[4498] = -0.0599;
	normals[4499] = 0.8837;

	normals[4500] = -0.4643;
	normals[4501] = -0.0599;
	normals[4502] = 0.8837;

	normals[4503] = -0.4643;
	normals[4504] = -0.0599;
	normals[4505] = 0.8837;

	normals[4506] = 0.6225;
	normals[4507] = -0.3045;
	normals[4508] = 0.721;

	normals[4509] = 0.6225;
	normals[4510] = -0.3045;
	normals[4511] = 0.721;

	normals[4512] = 0.6225;
	normals[4513] = -0.3045;
	normals[4514] = 0.721;

	normals[4515] = 0.6225;
	normals[4516] = -0.3045;
	normals[4517] = 0.721;

	normals[4518] = -0.6225;
	normals[4519] = -0.3045;
	normals[4520] = 0.721;

	normals[4521] = -0.6225;
	normals[4522] = -0.3045;
	normals[4523] = 0.721;

	normals[4524] = -0.6225;
	normals[4525] = -0.3045;
	normals[4526] = 0.721;

	normals[4527] = -0.6225;
	normals[4528] = -0.3045;
	normals[4529] = 0.721;

	normals[4530] = 0.45;
	normals[4531] = 0.659;
	normals[4532] = 0.6027;

	normals[4533] = 0.45;
	normals[4534] = 0.659;
	normals[4535] = 0.6027;

	normals[4536] = 0.45;
	normals[4537] = 0.659;
	normals[4538] = 0.6027;

	normals[4539] = 0.45;
	normals[4540] = 0.659;
	normals[4541] = 0.6027;

	normals[4542] = -0.45;
	normals[4543] = 0.659;
	normals[4544] = 0.6027;

	normals[4545] = -0.45;
	normals[4546] = 0.659;
	normals[4547] = 0.6027;

	normals[4548] = -0.45;
	normals[4549] = 0.659;
	normals[4550] = 0.6027;

	normals[4551] = -0.45;
	normals[4552] = 0.659;
	normals[4553] = 0.6027;

	normals[4554] = -0.2667;
	normals[4555] = 0.8309;
	normals[4556] = 0.4884;

	normals[4557] = -0.2667;
	normals[4558] = 0.8309;
	normals[4559] = 0.4884;

	normals[4560] = -0.2667;
	normals[4561] = 0.8309;
	normals[4562] = 0.4884;

	normals[4563] = -0.2667;
	normals[4564] = 0.8309;
	normals[4565] = 0.4884;

	normals[4566] = 0.2667;
	normals[4567] = 0.8309;
	normals[4568] = 0.4884;

	normals[4569] = 0.2667;
	normals[4570] = 0.8309;
	normals[4571] = 0.4884;

	normals[4572] = 0.2667;
	normals[4573] = 0.8309;
	normals[4574] = 0.4884;

	normals[4575] = 0.2667;
	normals[4576] = 0.8309;
	normals[4577] = 0.4884;

	normals[4578] = -0.8284;
	normals[4579] = 0.2291;
	normals[4580] = 0.5111;

	normals[4581] = -0.8284;
	normals[4582] = 0.2291;
	normals[4583] = 0.5111;

	normals[4584] = -0.8284;
	normals[4585] = 0.2291;
	normals[4586] = 0.5111;

	normals[4587] = -0.8284;
	normals[4588] = 0.2291;
	normals[4589] = 0.5111;

	normals[4590] = 0.8284;
	normals[4591] = 0.2291;
	normals[4592] = 0.5111;

	normals[4593] = 0.8284;
	normals[4594] = 0.2291;
	normals[4595] = 0.5111;

	normals[4596] = 0.8284;
	normals[4597] = 0.2291;
	normals[4598] = 0.5111;

	normals[4599] = 0.8284;
	normals[4600] = 0.2291;
	normals[4601] = 0.5111;

	normals[4602] = -0.5251;
	normals[4603] = -0.3566;
	normals[4604] = 0.7727;

	normals[4605] = -0.5251;
	normals[4606] = -0.3566;
	normals[4607] = 0.7727;

	normals[4608] = -0.5251;
	normals[4609] = -0.3566;
	normals[4610] = 0.7727;

	normals[4611] = -0.5251;
	normals[4612] = -0.3566;
	normals[4613] = 0.7727;

	normals[4614] = 0.5251;
	normals[4615] = -0.3566;
	normals[4616] = 0.7727;

	normals[4617] = 0.5251;
	normals[4618] = -0.3566;
	normals[4619] = 0.7727;

	normals[4620] = 0.5251;
	normals[4621] = -0.3566;
	normals[4622] = 0.7727;

	normals[4623] = 0.5251;
	normals[4624] = -0.3566;
	normals[4625] = 0.7727;

	normals[4626] = 0.4546;
	normals[4627] = -0.5665;
	normals[4628] = 0.6873;

	normals[4629] = 0.4546;
	normals[4630] = -0.5665;
	normals[4631] = 0.6873;

	normals[4632] = 0.4546;
	normals[4633] = -0.5665;
	normals[4634] = 0.6873;

	normals[4635] = 0.4546;
	normals[4636] = -0.5665;
	normals[4637] = 0.6873;

	normals[4638] = -0.4546;
	normals[4639] = -0.5665;
	normals[4640] = 0.6873;

	normals[4641] = -0.4546;
	normals[4642] = -0.5665;
	normals[4643] = 0.6873;

	normals[4644] = -0.4546;
	normals[4645] = -0.5665;
	normals[4646] = 0.6873;

	normals[4647] = -0.4546;
	normals[4648] = -0.5665;
	normals[4649] = 0.6873;

	normals[4650] = 0.6996;
	normals[4651] = -0.4497;
	normals[4652] = 0.5552;

	normals[4653] = 0.6996;
	normals[4654] = -0.4497;
	normals[4655] = 0.5552;

	normals[4656] = 0.6996;
	normals[4657] = -0.4497;
	normals[4658] = 0.5552;

	normals[4659] = 0.6996;
	normals[4660] = -0.4497;
	normals[4661] = 0.5552;

	normals[4662] = -0.6996;
	normals[4663] = -0.4497;
	normals[4664] = 0.5552;

	normals[4665] = -0.6996;
	normals[4666] = -0.4497;
	normals[4667] = 0.5552;

	normals[4668] = -0.6996;
	normals[4669] = -0.4497;
	normals[4670] = 0.5552;

	normals[4671] = -0.6996;
	normals[4672] = -0.4497;
	normals[4673] = 0.5552;

	normals[4674] = 0.722;
	normals[4675] = -0.6827;
	normals[4676] = -0.1126;

	normals[4677] = 0.722;
	normals[4678] = -0.6827;
	normals[4679] = -0.1126;

	normals[4680] = 0.722;
	normals[4681] = -0.6827;
	normals[4682] = -0.1126;

	normals[4683] = 0.722;
	normals[4684] = -0.6827;
	normals[4685] = -0.1126;

	normals[4686] = -0.722;
	normals[4687] = -0.6827;
	normals[4688] = -0.1126;

	normals[4689] = -0.722;
	normals[4690] = -0.6827;
	normals[4691] = -0.1126;

	normals[4692] = -0.722;
	normals[4693] = -0.6827;
	normals[4694] = -0.1126;

	normals[4695] = -0.722;
	normals[4696] = -0.6827;
	normals[4697] = -0.1126;

	normals[4698] = -0.1919;
	normals[4699] = 0.286;
	normals[4700] = 0.9388;

	normals[4701] = -0.1919;
	normals[4702] = 0.286;
	normals[4703] = 0.9388;

	normals[4704] = -0.1919;
	normals[4705] = 0.286;
	normals[4706] = 0.9388;

	normals[4707] = -0.1919;
	normals[4708] = 0.286;
	normals[4709] = 0.9388;

	normals[4710] = 0.1919;
	normals[4711] = 0.286;
	normals[4712] = 0.9388;

	normals[4713] = 0.1919;
	normals[4714] = 0.286;
	normals[4715] = 0.9388;

	normals[4716] = 0.1919;
	normals[4717] = 0.286;
	normals[4718] = 0.9388;

	normals[4719] = 0.1919;
	normals[4720] = 0.286;
	normals[4721] = 0.9388;

	normals[4722] = 0.9048;
	normals[4723] = -0.3734;
	normals[4724] = -0.2047;

	normals[4725] = 0.9048;
	normals[4726] = -0.3734;
	normals[4727] = -0.2047;

	normals[4728] = 0.9048;
	normals[4729] = -0.3734;
	normals[4730] = -0.2047;

	normals[4731] = 0.9048;
	normals[4732] = -0.3734;
	normals[4733] = -0.2047;

	normals[4734] = -0.9048;
	normals[4735] = -0.3734;
	normals[4736] = -0.2047;

	normals[4737] = -0.9048;
	normals[4738] = -0.3734;
	normals[4739] = -0.2047;

	normals[4740] = -0.9048;
	normals[4741] = -0.3734;
	normals[4742] = -0.2047;

	normals[4743] = -0.9048;
	normals[4744] = -0.3734;
	normals[4745] = -0.2047;

	normals[4746] = 0.1034;
	normals[4747] = 0.1551;
	normals[4748] = 0.9825;

	normals[4749] = 0.1034;
	normals[4750] = 0.1551;
	normals[4751] = 0.9825;

	normals[4752] = 0.1034;
	normals[4753] = 0.1551;
	normals[4754] = 0.9825;

	normals[4755] = 0.1034;
	normals[4756] = 0.1551;
	normals[4757] = 0.9825;

	normals[4758] = -0.1034;
	normals[4759] = 0.1551;
	normals[4760] = 0.9825;

	normals[4761] = -0.1034;
	normals[4762] = 0.1551;
	normals[4763] = 0.9825;

	normals[4764] = -0.1034;
	normals[4765] = 0.1551;
	normals[4766] = 0.9825;

	normals[4767] = -0.1034;
	normals[4768] = 0.1551;
	normals[4769] = 0.9825;

	normals[4770] = 0.0841;
	normals[4771] = 0.9318;
	normals[4772] = 0.353;

	normals[4773] = 0.0841;
	normals[4774] = 0.9318;
	normals[4775] = 0.353;

	normals[4776] = 0.0841;
	normals[4777] = 0.9318;
	normals[4778] = 0.353;

	normals[4779] = 0.0841;
	normals[4780] = 0.9318;
	normals[4781] = 0.353;

	normals[4782] = -0.0841;
	normals[4783] = 0.9318;
	normals[4784] = 0.353;

	normals[4785] = -0.0841;
	normals[4786] = 0.9318;
	normals[4787] = 0.353;

	normals[4788] = -0.0841;
	normals[4789] = 0.9318;
	normals[4790] = 0.353;

	normals[4791] = -0.0841;
	normals[4792] = 0.9318;
	normals[4793] = 0.353;

	normals[4794] = 0.6446;
	normals[4795] = -0.0883;
	normals[4796] = 0.7594;

	normals[4797] = 0.6446;
	normals[4798] = -0.0883;
	normals[4799] = 0.7594;

	normals[4800] = 0.6446;
	normals[4801] = -0.0883;
	normals[4802] = 0.7594;

	normals[4803] = 0.6446;
	normals[4804] = -0.0883;
	normals[4805] = 0.7594;

	normals[4806] = -0.6446;
	normals[4807] = -0.0883;
	normals[4808] = 0.7594;

	normals[4809] = -0.6446;
	normals[4810] = -0.0883;
	normals[4811] = 0.7594;

	normals[4812] = -0.6446;
	normals[4813] = -0.0883;
	normals[4814] = 0.7594;

	normals[4815] = -0.6446;
	normals[4816] = -0.0883;
	normals[4817] = 0.7594;

	normals[4818] = 0.4309;
	normals[4819] = 0.474;
	normals[4820] = 0.7678;

	normals[4821] = 0.4309;
	normals[4822] = 0.474;
	normals[4823] = 0.7678;

	normals[4824] = 0.4309;
	normals[4825] = 0.474;
	normals[4826] = 0.7678;

	normals[4827] = 0.4309;
	normals[4828] = 0.474;
	normals[4829] = 0.7678;

	normals[4830] = -0.4309;
	normals[4831] = 0.474;
	normals[4832] = 0.7678;

	normals[4833] = -0.4309;
	normals[4834] = 0.474;
	normals[4835] = 0.7678;

	normals[4836] = -0.4309;
	normals[4837] = 0.474;
	normals[4838] = 0.7678;

	normals[4839] = -0.4309;
	normals[4840] = 0.474;
	normals[4841] = 0.7678;

	normals[4842] = 0.8032;
	normals[4843] = -0.4847;
	normals[4844] = 0.3462;

	normals[4845] = 0.8032;
	normals[4846] = -0.4847;
	normals[4847] = 0.3462;

	normals[4848] = 0.8032;
	normals[4849] = -0.4847;
	normals[4850] = 0.3462;

	normals[4851] = 0.8032;
	normals[4852] = -0.4847;
	normals[4853] = 0.3462;

	normals[4854] = -0.8032;
	normals[4855] = -0.4847;
	normals[4856] = 0.3462;

	normals[4857] = -0.8032;
	normals[4858] = -0.4847;
	normals[4859] = 0.3462;

	normals[4860] = -0.8032;
	normals[4861] = -0.4847;
	normals[4862] = 0.3462;

	normals[4863] = -0.8032;
	normals[4864] = -0.4847;
	normals[4865] = 0.3462;

	normals[4866] = 0.5811;
	normals[4867] = -0.4128;
	normals[4868] = 0.7014;

	normals[4869] = 0.5811;
	normals[4870] = -0.4128;
	normals[4871] = 0.7014;

	normals[4872] = 0.5811;
	normals[4873] = -0.4128;
	normals[4874] = 0.7014;

	normals[4875] = 0.5811;
	normals[4876] = -0.4128;
	normals[4877] = 0.7014;

	normals[4878] = -0.5811;
	normals[4879] = -0.4128;
	normals[4880] = 0.7014;

	normals[4881] = -0.5811;
	normals[4882] = -0.4128;
	normals[4883] = 0.7014;

	normals[4884] = -0.5811;
	normals[4885] = -0.4128;
	normals[4886] = 0.7014;

	normals[4887] = -0.5811;
	normals[4888] = -0.4128;
	normals[4889] = 0.7014;

	normals[4890] = 0.591;
	normals[4891] = -0.4305;
	normals[4892] = 0.6822;

	normals[4893] = 0.591;
	normals[4894] = -0.4305;
	normals[4895] = 0.6822;

	normals[4896] = 0.591;
	normals[4897] = -0.4305;
	normals[4898] = 0.6822;

	normals[4899] = 0.591;
	normals[4900] = -0.4305;
	normals[4901] = 0.6822;

	normals[4902] = -0.591;
	normals[4903] = -0.4305;
	normals[4904] = 0.6822;

	normals[4905] = -0.591;
	normals[4906] = -0.4305;
	normals[4907] = 0.6822;

	normals[4908] = -0.591;
	normals[4909] = -0.4305;
	normals[4910] = 0.6822;

	normals[4911] = -0.591;
	normals[4912] = -0.4305;
	normals[4913] = 0.6822;

	normals[4914] = 0.9818;
	normals[4915] = -0.1804;
	normals[4916] = -0.0591;

	normals[4917] = 0.9818;
	normals[4918] = -0.1804;
	normals[4919] = -0.0591;

	normals[4920] = 0.9818;
	normals[4921] = -0.1804;
	normals[4922] = -0.0591;

	normals[4923] = 0.9818;
	normals[4924] = -0.1804;
	normals[4925] = -0.0591;

	normals[4926] = -0.9818;
	normals[4927] = -0.1804;
	normals[4928] = -0.0591;

	normals[4929] = -0.9818;
	normals[4930] = -0.1804;
	normals[4931] = -0.0591;

	normals[4932] = -0.9818;
	normals[4933] = -0.1804;
	normals[4934] = -0.0591;

	normals[4935] = -0.9818;
	normals[4936] = -0.1804;
	normals[4937] = -0.0591;

	normals[4938] = 0.9105;
	normals[4939] = -0.3965;
	normals[4940] = -0.1175;

	normals[4941] = 0.9105;
	normals[4942] = -0.3965;
	normals[4943] = -0.1175;

	normals[4944] = 0.9105;
	normals[4945] = -0.3965;
	normals[4946] = -0.1175;

	normals[4947] = 0.9105;
	normals[4948] = -0.3965;
	normals[4949] = -0.1175;

	normals[4950] = -0.9105;
	normals[4951] = -0.3965;
	normals[4952] = -0.1175;

	normals[4953] = -0.9105;
	normals[4954] = -0.3965;
	normals[4955] = -0.1175;

	normals[4956] = -0.9105;
	normals[4957] = -0.3965;
	normals[4958] = -0.1175;

	normals[4959] = -0.9105;
	normals[4960] = -0.3965;
	normals[4961] = -0.1175;

	normals[4962] = 0.9972;
	normals[4963] = -0.0181;
	normals[4964] = -0.0725;

	normals[4965] = 0.9972;
	normals[4966] = -0.0181;
	normals[4967] = -0.0725;

	normals[4968] = 0.9972;
	normals[4969] = -0.0181;
	normals[4970] = -0.0725;

	normals[4971] = -0.9972;
	normals[4972] = -0.0181;
	normals[4973] = -0.0725;

	normals[4974] = -0.9972;
	normals[4975] = -0.0181;
	normals[4976] = -0.0725;

	normals[4977] = -0.9972;
	normals[4978] = -0.0181;
	normals[4979] = -0.0725;

	normals[4980] = 0.7313;
	normals[4981] = -0.6543;
	normals[4982] = 0.1924;

	normals[4983] = 0.7313;
	normals[4984] = -0.6543;
	normals[4985] = 0.1924;

	normals[4986] = 0.7313;
	normals[4987] = -0.6543;
	normals[4988] = 0.1924;

	normals[4989] = 0.7313;
	normals[4990] = -0.6543;
	normals[4991] = 0.1924;

	normals[4992] = -0.7313;
	normals[4993] = -0.6543;
	normals[4994] = 0.1925;

	normals[4995] = -0.7313;
	normals[4996] = -0.6543;
	normals[4997] = 0.1925;

	normals[4998] = -0.7313;
	normals[4999] = -0.6543;
	normals[5000] = 0.1925;

	normals[5001] = -0.7313;
	normals[5002] = -0.6543;
	normals[5003] = 0.1925;

	normals[5004] = 0.7867;
	normals[5005] = -0.6079;
	normals[5006] = 0.1073;

	normals[5007] = 0.7867;
	normals[5008] = -0.6079;
	normals[5009] = 0.1073;

	normals[5010] = 0.7867;
	normals[5011] = -0.6079;
	normals[5012] = 0.1073;

	normals[5013] = 0.7867;
	normals[5014] = -0.6079;
	normals[5015] = 0.1073;

	normals[5016] = -0.7867;
	normals[5017] = -0.6079;
	normals[5018] = 0.1073;

	normals[5019] = -0.7867;
	normals[5020] = -0.6079;
	normals[5021] = 0.1073;

	normals[5022] = -0.7867;
	normals[5023] = -0.6079;
	normals[5024] = 0.1073;

	normals[5025] = -0.7867;
	normals[5026] = -0.6079;
	normals[5027] = 0.1073;

	normals[5028] = 0.7022;
	normals[5029] = -0.7022;
	normals[5030] = 0.117;

	normals[5031] = 0.7022;
	normals[5032] = -0.7022;
	normals[5033] = 0.117;

	normals[5034] = 0.7022;
	normals[5035] = -0.7022;
	normals[5036] = 0.117;

	normals[5037] = 0.7022;
	normals[5038] = -0.7022;
	normals[5039] = 0.117;

	normals[5040] = -0.7022;
	normals[5041] = -0.7022;
	normals[5042] = 0.117;

	normals[5043] = -0.7022;
	normals[5044] = -0.7022;
	normals[5045] = 0.117;

	normals[5046] = -0.7022;
	normals[5047] = -0.7022;
	normals[5048] = 0.117;

	normals[5049] = -0.7022;
	normals[5050] = -0.7022;
	normals[5051] = 0.117;

	normals[5052] = 0.184;
	normals[5053] = 0.9816;
	normals[5054] = -0.0511;

	normals[5055] = 0.184;
	normals[5056] = 0.9816;
	normals[5057] = -0.0511;

	normals[5058] = 0.184;
	normals[5059] = 0.9816;
	normals[5060] = -0.0511;

	normals[5061] = 0.184;
	normals[5062] = 0.9816;
	normals[5063] = -0.0511;

	normals[5064] = -0.184;
	normals[5065] = 0.9816;
	normals[5066] = -0.0511;

	normals[5067] = -0.184;
	normals[5068] = 0.9816;
	normals[5069] = -0.0511;

	normals[5070] = -0.184;
	normals[5071] = 0.9816;
	normals[5072] = -0.0511;

	normals[5073] = -0.184;
	normals[5074] = 0.9816;
	normals[5075] = -0.0511;

	normals[5076] = 0.9352;
	normals[5077] = 0.3301;
	normals[5078] = 0.1284;

	normals[5079] = 0.9352;
	normals[5080] = 0.3301;
	normals[5081] = 0.1284;

	normals[5082] = 0.9352;
	normals[5083] = 0.3301;
	normals[5084] = 0.1284;

	normals[5085] = 0.9352;
	normals[5086] = 0.3301;
	normals[5087] = 0.1284;

	normals[5088] = -0.9352;
	normals[5089] = 0.3301;
	normals[5090] = 0.1284;

	normals[5091] = -0.9352;
	normals[5092] = 0.3301;
	normals[5093] = 0.1284;

	normals[5094] = -0.9352;
	normals[5095] = 0.3301;
	normals[5096] = 0.1284;

	normals[5097] = -0.9352;
	normals[5098] = 0.3301;
	normals[5099] = 0.1284;

	normals[5100] = 0.6633;
	normals[5101] = -0.7463;
	normals[5102] = 0.0553;

	normals[5103] = 0.6633;
	normals[5104] = -0.7463;
	normals[5105] = 0.0553;

	normals[5106] = 0.6633;
	normals[5107] = -0.7463;
	normals[5108] = 0.0553;

	normals[5109] = 0.6633;
	normals[5110] = -0.7463;
	normals[5111] = 0.0553;

	normals[5112] = -0.6633;
	normals[5113] = -0.7463;
	normals[5114] = 0.0553;

	normals[5115] = -0.6633;
	normals[5116] = -0.7463;
	normals[5117] = 0.0553;

	normals[5118] = -0.6633;
	normals[5119] = -0.7463;
	normals[5120] = 0.0553;

	normals[5121] = -0.6633;
	normals[5122] = -0.7463;
	normals[5123] = 0.0553;

	normals[5124] = -0.0085;
	normals[5125] = 0.997;
	normals[5126] = 0.0767;

	normals[5127] = -0.0085;
	normals[5128] = 0.997;
	normals[5129] = 0.0767;

	normals[5130] = -0.0085;
	normals[5131] = 0.997;
	normals[5132] = 0.0767;

	normals[5133] = -0.0085;
	normals[5134] = 0.997;
	normals[5135] = 0.0767;

	normals[5136] = 0.0085;
	normals[5137] = 0.997;
	normals[5138] = 0.0767;

	normals[5139] = 0.0085;
	normals[5140] = 0.997;
	normals[5141] = 0.0767;

	normals[5142] = 0.0085;
	normals[5143] = 0.997;
	normals[5144] = 0.0767;

	normals[5145] = 0.0085;
	normals[5146] = 0.997;
	normals[5147] = 0.0767;

	normals[5148] = 0.6237;
	normals[5149] = -0.7061;
	normals[5150] = 0.3354;

	normals[5151] = 0.6237;
	normals[5152] = -0.7061;
	normals[5153] = 0.3354;

	normals[5154] = 0.6237;
	normals[5155] = -0.7061;
	normals[5156] = 0.3354;

	normals[5157] = 0.6237;
	normals[5158] = -0.7061;
	normals[5159] = 0.3354;

	normals[5160] = -0.6237;
	normals[5161] = -0.7061;
	normals[5162] = 0.3354;

	normals[5163] = -0.6237;
	normals[5164] = -0.7061;
	normals[5165] = 0.3354;

	normals[5166] = -0.6237;
	normals[5167] = -0.7061;
	normals[5168] = 0.3354;

	normals[5169] = -0.6237;
	normals[5170] = -0.7061;
	normals[5171] = 0.3354;

	normals[5172] = 0.2733;
	normals[5173] = -0.8925;
	normals[5174] = 0.3587;

	normals[5175] = 0.2733;
	normals[5176] = -0.8925;
	normals[5177] = 0.3587;

	normals[5178] = 0.2733;
	normals[5179] = -0.8925;
	normals[5180] = 0.3587;

	normals[5181] = 0.2733;
	normals[5182] = -0.8925;
	normals[5183] = 0.3587;

	normals[5184] = -0.2733;
	normals[5185] = -0.8925;
	normals[5186] = 0.3587;

	normals[5187] = -0.2733;
	normals[5188] = -0.8925;
	normals[5189] = 0.3587;

	normals[5190] = -0.2733;
	normals[5191] = -0.8925;
	normals[5192] = 0.3587;

	normals[5193] = -0.2733;
	normals[5194] = -0.8925;
	normals[5195] = 0.3587;

	normals[5196] = -0.8328;
	normals[5197] = -0.508;
	normals[5198] = -0.22;

	normals[5199] = -0.8328;
	normals[5200] = -0.508;
	normals[5201] = -0.22;

	normals[5202] = -0.8328;
	normals[5203] = -0.508;
	normals[5204] = -0.22;

	normals[5205] = -0.8328;
	normals[5206] = -0.508;
	normals[5207] = -0.22;

	normals[5208] = 0.8328;
	normals[5209] = -0.508;
	normals[5210] = -0.22;

	normals[5211] = 0.8328;
	normals[5212] = -0.508;
	normals[5213] = -0.22;

	normals[5214] = 0.8328;
	normals[5215] = -0.508;
	normals[5216] = -0.22;

	normals[5217] = 0.8328;
	normals[5218] = -0.508;
	normals[5219] = -0.22;

	normals[5220] = -0.8339;
	normals[5221] = 0.2377;
	normals[5222] = -0.4981;

	normals[5223] = -0.8339;
	normals[5224] = 0.2377;
	normals[5225] = -0.4981;

	normals[5226] = -0.8339;
	normals[5227] = 0.2377;
	normals[5228] = -0.4981;

	normals[5229] = -0.8339;
	normals[5230] = 0.2377;
	normals[5231] = -0.4981;

	normals[5232] = 0.8339;
	normals[5233] = 0.2377;
	normals[5234] = -0.4981;

	normals[5235] = 0.8339;
	normals[5236] = 0.2377;
	normals[5237] = -0.4981;

	normals[5238] = 0.8339;
	normals[5239] = 0.2377;
	normals[5240] = -0.4981;

	normals[5241] = 0.8339;
	normals[5242] = 0.2377;
	normals[5243] = -0.4981;

	normals[5244] = -0.5655;
	normals[5245] = 0.7847;
	normals[5246] = -0.2539;

	normals[5247] = -0.5655;
	normals[5248] = 0.7847;
	normals[5249] = -0.2539;

	normals[5250] = -0.5655;
	normals[5251] = 0.7847;
	normals[5252] = -0.2539;

	normals[5253] = -0.5655;
	normals[5254] = 0.7847;
	normals[5255] = -0.2539;

	normals[5256] = 0.5655;
	normals[5257] = 0.7847;
	normals[5258] = -0.2539;

	normals[5259] = 0.5655;
	normals[5260] = 0.7847;
	normals[5261] = -0.2539;

	normals[5262] = 0.5655;
	normals[5263] = 0.7847;
	normals[5264] = -0.2539;

	normals[5265] = 0.5655;
	normals[5266] = 0.7847;
	normals[5267] = -0.2539;

	normals[5268] = -0.056;
	normals[5269] = 0.9962;
	normals[5270] = 0.0672;

	normals[5271] = -0.056;
	normals[5272] = 0.9962;
	normals[5273] = 0.0672;

	normals[5274] = -0.056;
	normals[5275] = 0.9962;
	normals[5276] = 0.0672;

	normals[5277] = -0.056;
	normals[5278] = 0.9962;
	normals[5279] = 0.0672;

	normals[5280] = 0.056;
	normals[5281] = 0.9962;
	normals[5282] = 0.0672;

	normals[5283] = 0.056;
	normals[5284] = 0.9962;
	normals[5285] = 0.0672;

	normals[5286] = 0.056;
	normals[5287] = 0.9962;
	normals[5288] = 0.0672;

	normals[5289] = 0.056;
	normals[5290] = 0.9962;
	normals[5291] = 0.0672;

	normals[5292] = 0.1445;
	normals[5293] = 0.0222;
	normals[5294] = 0.9893;

	normals[5295] = 0.1445;
	normals[5296] = 0.0222;
	normals[5297] = 0.9893;

	normals[5298] = 0.1445;
	normals[5299] = 0.0222;
	normals[5300] = 0.9893;

	normals[5301] = 0.1445;
	normals[5302] = 0.0222;
	normals[5303] = 0.9893;

	normals[5304] = -0.1445;
	normals[5305] = 0.0222;
	normals[5306] = 0.9893;

	normals[5307] = -0.1445;
	normals[5308] = 0.0222;
	normals[5309] = 0.9893;

	normals[5310] = -0.1445;
	normals[5311] = 0.0222;
	normals[5312] = 0.9893;

	normals[5313] = -0.1445;
	normals[5314] = 0.0222;
	normals[5315] = 0.9893;

	normals[5316] = 0.3275;
	normals[5317] = 0.0645;
	normals[5318] = 0.9427;

	normals[5319] = 0.3275;
	normals[5320] = 0.0645;
	normals[5321] = 0.9427;

	normals[5322] = 0.3275;
	normals[5323] = 0.0645;
	normals[5324] = 0.9427;

	normals[5325] = 0.3275;
	normals[5326] = 0.0645;
	normals[5327] = 0.9427;

	normals[5328] = -0.3275;
	normals[5329] = 0.0645;
	normals[5330] = 0.9427;

	normals[5331] = -0.3275;
	normals[5332] = 0.0645;
	normals[5333] = 0.9427;

	normals[5334] = -0.3275;
	normals[5335] = 0.0645;
	normals[5336] = 0.9427;

	normals[5337] = -0.3275;
	normals[5338] = 0.0645;
	normals[5339] = 0.9427;

	normals[5340] = 0.3127;
	normals[5341] = 0.0232;
	normals[5342] = 0.9496;

	normals[5343] = 0.3127;
	normals[5344] = 0.0232;
	normals[5345] = 0.9496;

	normals[5346] = 0.3127;
	normals[5347] = 0.0232;
	normals[5348] = 0.9496;

	normals[5349] = 0.3127;
	normals[5350] = 0.0232;
	normals[5351] = 0.9496;

	normals[5352] = -0.3127;
	normals[5353] = 0.0232;
	normals[5354] = 0.9496;

	normals[5355] = -0.3127;
	normals[5356] = 0.0232;
	normals[5357] = 0.9496;

	normals[5358] = -0.3127;
	normals[5359] = 0.0232;
	normals[5360] = 0.9496;

	normals[5361] = -0.3127;
	normals[5362] = 0.0232;
	normals[5363] = 0.9496;

	normals[5364] = 0.171;
	normals[5365] = 0.0274;
	normals[5366] = 0.9849;

	normals[5367] = 0.171;
	normals[5368] = 0.0274;
	normals[5369] = 0.9849;

	normals[5370] = 0.171;
	normals[5371] = 0.0274;
	normals[5372] = 0.9849;

	normals[5373] = 0.171;
	normals[5374] = 0.0274;
	normals[5375] = 0.9849;

	normals[5376] = -0.171;
	normals[5377] = 0.0274;
	normals[5378] = 0.9849;

	normals[5379] = -0.171;
	normals[5380] = 0.0274;
	normals[5381] = 0.9849;

	normals[5382] = -0.171;
	normals[5383] = 0.0274;
	normals[5384] = 0.9849;

	normals[5385] = -0.171;
	normals[5386] = 0.0274;
	normals[5387] = 0.9849;

	normals[5388] = 0.3487;
	normals[5389] = 0.2849;
	normals[5390] = 0.8929;

	normals[5391] = 0.3487;
	normals[5392] = 0.2849;
	normals[5393] = 0.8929;

	normals[5394] = 0.3487;
	normals[5395] = 0.2849;
	normals[5396] = 0.8929;

	normals[5397] = 0.3487;
	normals[5398] = 0.2849;
	normals[5399] = 0.8929;

	normals[5400] = -0.3487;
	normals[5401] = 0.2849;
	normals[5402] = 0.8929;

	normals[5403] = -0.3487;
	normals[5404] = 0.2849;
	normals[5405] = 0.8929;

	normals[5406] = -0.3487;
	normals[5407] = 0.2849;
	normals[5408] = 0.8929;

	normals[5409] = -0.3487;
	normals[5410] = 0.2849;
	normals[5411] = 0.8929;

	normals[5412] = 0.4006;
	normals[5413] = -0.0343;
	normals[5414] = 0.9156;

	normals[5415] = 0.4006;
	normals[5416] = -0.0343;
	normals[5417] = 0.9156;

	normals[5418] = 0.4006;
	normals[5419] = -0.0343;
	normals[5420] = 0.9156;

	normals[5421] = 0.4006;
	normals[5422] = -0.0343;
	normals[5423] = 0.9156;

	normals[5424] = -0.4006;
	normals[5425] = -0.0343;
	normals[5426] = 0.9156;

	normals[5427] = -0.4006;
	normals[5428] = -0.0343;
	normals[5429] = 0.9156;

	normals[5430] = -0.4006;
	normals[5431] = -0.0343;
	normals[5432] = 0.9156;

	normals[5433] = -0.4006;
	normals[5434] = -0.0343;
	normals[5435] = 0.9156;

	normals[5436] = 0.2572;
	normals[5437] = -0.0603;
	normals[5438] = 0.9645;

	normals[5439] = 0.2572;
	normals[5440] = -0.0603;
	normals[5441] = 0.9645;

	normals[5442] = 0.2572;
	normals[5443] = -0.0603;
	normals[5444] = 0.9645;

	normals[5445] = 0.2572;
	normals[5446] = -0.0603;
	normals[5447] = 0.9645;

	normals[5448] = -0.2572;
	normals[5449] = -0.0603;
	normals[5450] = 0.9645;

	normals[5451] = -0.2572;
	normals[5452] = -0.0603;
	normals[5453] = 0.9645;

	normals[5454] = -0.2572;
	normals[5455] = -0.0603;
	normals[5456] = 0.9645;

	normals[5457] = -0.2572;
	normals[5458] = -0.0603;
	normals[5459] = 0.9645;

	normals[5460] = 0.0637;
	normals[5461] = -0.0106;
	normals[5462] = 0.9979;

	normals[5463] = 0.0637;
	normals[5464] = -0.0106;
	normals[5465] = 0.9979;

	normals[5466] = 0.0637;
	normals[5467] = -0.0106;
	normals[5468] = 0.9979;

	normals[5469] = 0.0637;
	normals[5470] = -0.0106;
	normals[5471] = 0.9979;

	normals[5472] = -0.0637;
	normals[5473] = -0.0106;
	normals[5474] = 0.9979;

	normals[5475] = -0.0637;
	normals[5476] = -0.0106;
	normals[5477] = 0.9979;

	normals[5478] = -0.0637;
	normals[5479] = -0.0106;
	normals[5480] = 0.9979;

	normals[5481] = -0.0637;
	normals[5482] = -0.0106;
	normals[5483] = 0.9979;

	normals[5484] = -0.3637;
	normals[5485] = 0.7039;
	normals[5486] = 0.6101;

	normals[5487] = -0.3637;
	normals[5488] = 0.7039;
	normals[5489] = 0.6101;

	normals[5490] = -0.3637;
	normals[5491] = 0.7039;
	normals[5492] = 0.6101;

	normals[5493] = -0.3637;
	normals[5494] = 0.7039;
	normals[5495] = 0.6101;

	normals[5496] = 0.3637;
	normals[5497] = 0.7039;
	normals[5498] = 0.6101;

	normals[5499] = 0.3637;
	normals[5500] = 0.7039;
	normals[5501] = 0.6101;

	normals[5502] = 0.3637;
	normals[5503] = 0.7039;
	normals[5504] = 0.6101;

	normals[5505] = 0.3637;
	normals[5506] = 0.7039;
	normals[5507] = 0.6101;

	normals[5508] = 0.6299;
	normals[5509] = 0.0355;
	normals[5510] = 0.7759;

	normals[5511] = 0.6299;
	normals[5512] = 0.0355;
	normals[5513] = 0.7759;

	normals[5514] = 0.6299;
	normals[5515] = 0.0355;
	normals[5516] = 0.7759;

	normals[5517] = 0.6299;
	normals[5518] = 0.0355;
	normals[5519] = 0.7759;

	normals[5520] = -0.6299;
	normals[5521] = 0.0355;
	normals[5522] = 0.7759;

	normals[5523] = -0.6299;
	normals[5524] = 0.0355;
	normals[5525] = 0.7759;

	normals[5526] = -0.6299;
	normals[5527] = 0.0355;
	normals[5528] = 0.7759;

	normals[5529] = -0.6299;
	normals[5530] = 0.0355;
	normals[5531] = 0.7759;

	normals[5532] = 0.4472;
	normals[5533] = -0.2002;
	normals[5534] = 0.8717;

	normals[5535] = 0.4472;
	normals[5536] = -0.2002;
	normals[5537] = 0.8717;

	normals[5538] = 0.4472;
	normals[5539] = -0.2002;
	normals[5540] = 0.8717;

	normals[5541] = 0.4472;
	normals[5542] = -0.2002;
	normals[5543] = 0.8717;

	normals[5544] = -0.4472;
	normals[5545] = -0.2002;
	normals[5546] = 0.8717;

	normals[5547] = -0.4472;
	normals[5548] = -0.2002;
	normals[5549] = 0.8717;

	normals[5550] = -0.4472;
	normals[5551] = -0.2002;
	normals[5552] = 0.8717;

	normals[5553] = -0.4472;
	normals[5554] = -0.2002;
	normals[5555] = 0.8717;

	normals[5556] = 0.5072;
	normals[5557] = -0.2141;
	normals[5558] = 0.8348;

	normals[5559] = 0.5072;
	normals[5560] = -0.2141;
	normals[5561] = 0.8348;

	normals[5562] = 0.5072;
	normals[5563] = -0.2141;
	normals[5564] = 0.8348;

	normals[5565] = 0.5072;
	normals[5566] = -0.2141;
	normals[5567] = 0.8348;

	normals[5568] = -0.5072;
	normals[5569] = -0.2141;
	normals[5570] = 0.8348;

	normals[5571] = -0.5072;
	normals[5572] = -0.2141;
	normals[5573] = 0.8348;

	normals[5574] = -0.5072;
	normals[5575] = -0.2141;
	normals[5576] = 0.8348;

	normals[5577] = -0.5072;
	normals[5578] = -0.2141;
	normals[5579] = 0.8348;

	normals[5580] = 0.5258;
	normals[5581] = 0.2619;
	normals[5582] = 0.8093;

	normals[5583] = 0.5258;
	normals[5584] = 0.2619;
	normals[5585] = 0.8093;

	normals[5586] = 0.5258;
	normals[5587] = 0.2619;
	normals[5588] = 0.8093;

	normals[5589] = 0.5258;
	normals[5590] = 0.2619;
	normals[5591] = 0.8093;

	normals[5592] = -0.5258;
	normals[5593] = 0.2619;
	normals[5594] = 0.8093;

	normals[5595] = -0.5258;
	normals[5596] = 0.2619;
	normals[5597] = 0.8093;

	normals[5598] = -0.5258;
	normals[5599] = 0.2619;
	normals[5600] = 0.8093;

	normals[5601] = -0.5258;
	normals[5602] = 0.2619;
	normals[5603] = 0.8093;

	normals[5604] = 0.298;
	normals[5605] = 0.5802;
	normals[5606] = 0.758;

	normals[5607] = 0.298;
	normals[5608] = 0.5802;
	normals[5609] = 0.758;

	normals[5610] = 0.298;
	normals[5611] = 0.5802;
	normals[5612] = 0.758;

	normals[5613] = -0.298;
	normals[5614] = 0.5802;
	normals[5615] = 0.758;

	normals[5616] = -0.298;
	normals[5617] = 0.5802;
	normals[5618] = 0.758;

	normals[5619] = -0.298;
	normals[5620] = 0.5802;
	normals[5621] = 0.758;

	normals[5622] = 0.093;
	normals[5623] = -0.9924;
	normals[5624] = -0.0805;

	normals[5625] = 0.093;
	normals[5626] = -0.9924;
	normals[5627] = -0.0805;

	normals[5628] = 0.093;
	normals[5629] = -0.9924;
	normals[5630] = -0.0805;

	normals[5631] = 0.093;
	normals[5632] = -0.9924;
	normals[5633] = -0.0805;

	normals[5634] = -0.093;
	normals[5635] = -0.9924;
	normals[5636] = -0.0805;

	normals[5637] = -0.093;
	normals[5638] = -0.9924;
	normals[5639] = -0.0805;

	normals[5640] = -0.093;
	normals[5641] = -0.9924;
	normals[5642] = -0.0805;

	normals[5643] = -0.093;
	normals[5644] = -0.9924;
	normals[5645] = -0.0805;

	normals[5646] = 0.5006;
	normals[5647] = -0.8657;
	normals[5648] = 0.008;

	normals[5649] = 0.5006;
	normals[5650] = -0.8657;
	normals[5651] = 0.008;

	normals[5652] = 0.5006;
	normals[5653] = -0.8657;
	normals[5654] = 0.008;

	normals[5655] = 0.5006;
	normals[5656] = -0.8657;
	normals[5657] = 0.008;

	normals[5658] = -0.5006;
	normals[5659] = -0.8657;
	normals[5660] = 0.008;

	normals[5661] = -0.5006;
	normals[5662] = -0.8657;
	normals[5663] = 0.008;

	normals[5664] = -0.5006;
	normals[5665] = -0.8657;
	normals[5666] = 0.008;

	normals[5667] = -0.5006;
	normals[5668] = -0.8657;
	normals[5669] = 0.008;

	normals[5670] = 0.9285;
	normals[5671] = -0.2497;
	normals[5672] = 0.2748;

	normals[5673] = 0.9285;
	normals[5674] = -0.2497;
	normals[5675] = 0.2748;

	normals[5676] = 0.9285;
	normals[5677] = -0.2497;
	normals[5678] = 0.2748;

	normals[5679] = 0.9285;
	normals[5680] = -0.2497;
	normals[5681] = 0.2748;

	normals[5682] = -0.9285;
	normals[5683] = -0.2497;
	normals[5684] = 0.2748;

	normals[5685] = -0.9285;
	normals[5686] = -0.2497;
	normals[5687] = 0.2748;

	normals[5688] = -0.9285;
	normals[5689] = -0.2497;
	normals[5690] = 0.2748;

	normals[5691] = -0.9285;
	normals[5692] = -0.2497;
	normals[5693] = 0.2748;

	normals[5694] = 0.8393;
	normals[5695] = 0.5424;
	normals[5696] = -0.0378;

	normals[5697] = 0.8393;
	normals[5698] = 0.5424;
	normals[5699] = -0.0378;

	normals[5700] = 0.8393;
	normals[5701] = 0.5424;
	normals[5702] = -0.0378;

	normals[5703] = 0.8393;
	normals[5704] = 0.5424;
	normals[5705] = -0.0378;

	normals[5706] = -0.8393;
	normals[5707] = 0.5424;
	normals[5708] = -0.0378;

	normals[5709] = -0.8393;
	normals[5710] = 0.5424;
	normals[5711] = -0.0378;

	normals[5712] = -0.8393;
	normals[5713] = 0.5424;
	normals[5714] = -0.0378;

	normals[5715] = -0.8393;
	normals[5716] = 0.5424;
	normals[5717] = -0.0378;

	normals[5718] = -0.2355;
	normals[5719] = 0.9367;
	normals[5720] = -0.2589;

	normals[5721] = -0.2355;
	normals[5722] = 0.9367;
	normals[5723] = -0.2589;

	normals[5724] = -0.2355;
	normals[5725] = 0.9367;
	normals[5726] = -0.2589;

	normals[5727] = -0.2355;
	normals[5728] = 0.9367;
	normals[5729] = -0.2589;

	normals[5730] = 0.2355;
	normals[5731] = 0.9367;
	normals[5732] = -0.2589;

	normals[5733] = 0.2355;
	normals[5734] = 0.9367;
	normals[5735] = -0.2589;

	normals[5736] = 0.2355;
	normals[5737] = 0.9367;
	normals[5738] = -0.2589;

	normals[5739] = 0.2355;
	normals[5740] = 0.9367;
	normals[5741] = -0.2589;

	normals[5742] = -0.4499;
	normals[5743] = 0.8838;
	normals[5744] = -0.1285;

	normals[5745] = -0.4499;
	normals[5746] = 0.8838;
	normals[5747] = -0.1285;

	normals[5748] = -0.4499;
	normals[5749] = 0.8838;
	normals[5750] = -0.1285;

	normals[5751] = -0.4499;
	normals[5752] = 0.8838;
	normals[5753] = -0.1285;

	normals[5754] = 0.4499;
	normals[5755] = 0.8838;
	normals[5756] = -0.1285;

	normals[5757] = 0.4499;
	normals[5758] = 0.8838;
	normals[5759] = -0.1285;

	normals[5760] = 0.4499;
	normals[5761] = 0.8838;
	normals[5762] = -0.1285;

	normals[5763] = 0.4499;
	normals[5764] = 0.8838;
	normals[5765] = -0.1285;

	normals[5766] = -0.5384;
	normals[5767] = -0.0098;
	normals[5768] = -0.8427;

	normals[5769] = -0.5384;
	normals[5770] = -0.0098;
	normals[5771] = -0.8427;

	normals[5772] = -0.5384;
	normals[5773] = -0.0098;
	normals[5774] = -0.8427;

	normals[5775] = -0.5384;
	normals[5776] = -0.0098;
	normals[5777] = -0.8427;

	normals[5778] = 0.5384;
	normals[5779] = -0.0098;
	normals[5780] = -0.8427;

	normals[5781] = 0.5384;
	normals[5782] = -0.0098;
	normals[5783] = -0.8427;

	normals[5784] = 0.5384;
	normals[5785] = -0.0098;
	normals[5786] = -0.8427;

	normals[5787] = 0.5384;
	normals[5788] = -0.0098;
	normals[5789] = -0.8427;

	normals[5790] = -0.191;
	normals[5791] = -0.0241;
	normals[5792] = -0.9813;

	normals[5793] = -0.191;
	normals[5794] = -0.0241;
	normals[5795] = -0.9813;

	normals[5796] = -0.191;
	normals[5797] = -0.0241;
	normals[5798] = -0.9813;

	normals[5799] = -0.191;
	normals[5800] = -0.0241;
	normals[5801] = -0.9813;

	normals[5802] = 0.191;
	normals[5803] = -0.0241;
	normals[5804] = -0.9813;

	normals[5805] = 0.191;
	normals[5806] = -0.0241;
	normals[5807] = -0.9813;

	normals[5808] = 0.191;
	normals[5809] = -0.0241;
	normals[5810] = -0.9813;

	normals[5811] = 0.191;
	normals[5812] = -0.0241;
	normals[5813] = -0.9813;

	normals[5814] = 0.4046;
	normals[5815] = 0.0266;
	normals[5816] = -0.9141;

	normals[5817] = 0.4046;
	normals[5818] = 0.0266;
	normals[5819] = -0.9141;

	normals[5820] = 0.4046;
	normals[5821] = 0.0266;
	normals[5822] = -0.9141;

	normals[5823] = -0.4046;
	normals[5824] = 0.0266;
	normals[5825] = -0.9141;

	normals[5826] = -0.4046;
	normals[5827] = 0.0266;
	normals[5828] = -0.9141;

	normals[5829] = -0.4046;
	normals[5830] = 0.0266;
	normals[5831] = -0.9141;

	normals[5832] = -0.7819;
	normals[5833] = 0.6231;
	normals[5834] = 0.0197;

	normals[5835] = -0.7819;
	normals[5836] = 0.6231;
	normals[5837] = 0.0197;

	normals[5838] = -0.7819;
	normals[5839] = 0.6231;
	normals[5840] = 0.0197;

	normals[5841] = -0.7819;
	normals[5842] = 0.6231;
	normals[5843] = 0.0197;

	normals[5844] = 0.7819;
	normals[5845] = 0.6231;
	normals[5846] = 0.0197;

	normals[5847] = 0.7819;
	normals[5848] = 0.6231;
	normals[5849] = 0.0197;

	normals[5850] = 0.7819;
	normals[5851] = 0.6231;
	normals[5852] = 0.0197;

	normals[5853] = 0.7819;
	normals[5854] = 0.6231;
	normals[5855] = 0.0197;

	normals[5856] = 0.5428;
	normals[5857] = -0.2063;
	normals[5858] = -0.8142;

	normals[5859] = 0.5428;
	normals[5860] = -0.2063;
	normals[5861] = -0.8142;

	normals[5862] = 0.5428;
	normals[5863] = -0.2063;
	normals[5864] = -0.8142;

	normals[5865] = 0.5428;
	normals[5866] = -0.2063;
	normals[5867] = -0.8142;

	normals[5868] = -0.5428;
	normals[5869] = -0.2063;
	normals[5870] = -0.8142;

	normals[5871] = -0.5428;
	normals[5872] = -0.2063;
	normals[5873] = -0.8142;

	normals[5874] = -0.5428;
	normals[5875] = -0.2063;
	normals[5876] = -0.8142;

	normals[5877] = -0.5428;
	normals[5878] = -0.2063;
	normals[5879] = -0.8142;

	normals[5880] = -0.2474;
	normals[5881] = -0.9231;
	normals[5882] = -0.2945;

	normals[5883] = -0.2474;
	normals[5884] = -0.9231;
	normals[5885] = -0.2945;

	normals[5886] = -0.2474;
	normals[5887] = -0.9231;
	normals[5888] = -0.2945;

	normals[5889] = -0.2474;
	normals[5890] = -0.9231;
	normals[5891] = -0.2945;

	normals[5892] = 0.2474;
	normals[5893] = -0.9231;
	normals[5894] = -0.2945;

	normals[5895] = 0.2474;
	normals[5896] = -0.9231;
	normals[5897] = -0.2945;

	normals[5898] = 0.2474;
	normals[5899] = -0.9231;
	normals[5900] = -0.2945;

	normals[5901] = 0.2474;
	normals[5902] = -0.9231;
	normals[5903] = -0.2945;

	// Indices.
	mesh[0] = 0;
	mesh[1] = 1;
	mesh[2] = 2;
	mesh[3] = 0;
	mesh[4] = 2;
	mesh[5] = 3;
	mesh[6] = 4;
	mesh[7] = 5;
	mesh[8] = 6;
	mesh[9] = 4;
	mesh[10] = 6;
	mesh[11] = 7;
	mesh[12] = 8;
	mesh[13] = 9;
	mesh[14] = 10;
	mesh[15] = 8;
	mesh[16] = 10;
	mesh[17] = 11;
	mesh[18] = 12;
	mesh[19] = 13;
	mesh[20] = 14;
	mesh[21] = 12;
	mesh[22] = 14;
	mesh[23] = 15;
	mesh[24] = 16;
	mesh[25] = 17;
	mesh[26] = 18;
	mesh[27] = 16;
	mesh[28] = 18;
	mesh[29] = 19;
	mesh[30] = 20;
	mesh[31] = 21;
	mesh[32] = 22;
	mesh[33] = 20;
	mesh[34] = 22;
	mesh[35] = 23;
	mesh[36] = 24;
	mesh[37] = 25;
	mesh[38] = 26;
	mesh[39] = 24;
	mesh[40] = 26;
	mesh[41] = 27;
	mesh[42] = 28;
	mesh[43] = 29;
	mesh[44] = 30;
	mesh[45] = 28;
	mesh[46] = 30;
	mesh[47] = 31;
	mesh[48] = 32;
	mesh[49] = 33;
	mesh[50] = 34;
	mesh[51] = 32;
	mesh[52] = 34;
	mesh[53] = 35;
	mesh[54] = 36;
	mesh[55] = 37;
	mesh[56] = 38;
	mesh[57] = 36;
	mesh[58] = 38;
	mesh[59] = 39;
	mesh[60] = 40;
	mesh[61] = 41;
	mesh[62] = 42;
	mesh[63] = 40;
	mesh[64] = 42;
	mesh[65] = 43;
	mesh[66] = 44;
	mesh[67] = 45;
	mesh[68] = 46;
	mesh[69] = 44;
	mesh[70] = 46;
	mesh[71] = 47;
	mesh[72] = 48;
	mesh[73] = 49;
	mesh[74] = 50;
	mesh[75] = 48;
	mesh[76] = 50;
	mesh[77] = 51;
	mesh[78] = 52;
	mesh[79] = 53;
	mesh[80] = 54;
	mesh[81] = 52;
	mesh[82] = 54;
	mesh[83] = 55;
	mesh[84] = 56;
	mesh[85] = 57;
	mesh[86] = 58;
	mesh[87] = 56;
	mesh[88] = 58;
	mesh[89] = 59;
	mesh[90] = 60;
	mesh[91] = 61;
	mesh[92] = 62;
	mesh[93] = 60;
	mesh[94] = 62;
	mesh[95] = 63;
	mesh[96] = 64;
	mesh[97] = 65;
	mesh[98] = 66;
	mesh[99] = 64;
	mesh[100] = 66;
	mesh[101] = 67;
	mesh[102] = 68;
	mesh[103] = 69;
	mesh[104] = 70;
	mesh[105] = 68;
	mesh[106] = 70;
	mesh[107] = 71;
	mesh[108] = 72;
	mesh[109] = 73;
	mesh[110] = 74;
	mesh[111] = 72;
	mesh[112] = 74;
	mesh[113] = 75;
	mesh[114] = 76;
	mesh[115] = 77;
	mesh[116] = 78;
	mesh[117] = 76;
	mesh[118] = 78;
	mesh[119] = 79;
	mesh[120] = 80;
	mesh[121] = 81;
	mesh[122] = 82;
	mesh[123] = 80;
	mesh[124] = 82;
	mesh[125] = 83;
	mesh[126] = 84;
	mesh[127] = 85;
	mesh[128] = 86;
	mesh[129] = 84;
	mesh[130] = 86;
	mesh[131] = 87;
	mesh[132] = 88;
	mesh[133] = 89;
	mesh[134] = 90;
	mesh[135] = 88;
	mesh[136] = 90;
	mesh[137] = 91;
	mesh[138] = 92;
	mesh[139] = 93;
	mesh[140] = 94;
	mesh[141] = 92;
	mesh[142] = 94;
	mesh[143] = 95;
	mesh[144] = 96;
	mesh[145] = 97;
	mesh[146] = 98;
	mesh[147] = 96;
	mesh[148] = 98;
	mesh[149] = 99;
	mesh[150] = 100;
	mesh[151] = 101;
	mesh[152] = 102;
	mesh[153] = 100;
	mesh[154] = 102;
	mesh[155] = 103;
	mesh[156] = 104;
	mesh[157] = 105;
	mesh[158] = 106;
	mesh[159] = 104;
	mesh[160] = 106;
	mesh[161] = 107;
	mesh[162] = 108;
	mesh[163] = 109;
	mesh[164] = 110;
	mesh[165] = 108;
	mesh[166] = 110;
	mesh[167] = 111;
	mesh[168] = 112;
	mesh[169] = 113;
	mesh[170] = 114;
	mesh[171] = 112;
	mesh[172] = 114;
	mesh[173] = 115;
	mesh[174] = 116;
	mesh[175] = 117;
	mesh[176] = 118;
	mesh[177] = 116;
	mesh[178] = 118;
	mesh[179] = 119;
	mesh[180] = 120;
	mesh[181] = 121;
	mesh[182] = 122;
	mesh[183] = 120;
	mesh[184] = 122;
	mesh[185] = 123;
	mesh[186] = 124;
	mesh[187] = 125;
	mesh[188] = 126;
	mesh[189] = 124;
	mesh[190] = 126;
	mesh[191] = 127;
	mesh[192] = 128;
	mesh[193] = 129;
	mesh[194] = 130;
	mesh[195] = 128;
	mesh[196] = 130;
	mesh[197] = 131;
	mesh[198] = 132;
	mesh[199] = 133;
	mesh[200] = 134;
	mesh[201] = 132;
	mesh[202] = 134;
	mesh[203] = 135;
	mesh[204] = 136;
	mesh[205] = 137;
	mesh[206] = 138;
	mesh[207] = 136;
	mesh[208] = 138;
	mesh[209] = 139;
	mesh[210] = 140;
	mesh[211] = 141;
	mesh[212] = 142;
	mesh[213] = 140;
	mesh[214] = 142;
	mesh[215] = 143;
	mesh[216] = 144;
	mesh[217] = 145;
	mesh[218] = 146;
	mesh[219] = 144;
	mesh[220] = 146;
	mesh[221] = 147;
	mesh[222] = 148;
	mesh[223] = 149;
	mesh[224] = 150;
	mesh[225] = 148;
	mesh[226] = 150;
	mesh[227] = 151;
	mesh[228] = 152;
	mesh[229] = 153;
	mesh[230] = 154;
	mesh[231] = 152;
	mesh[232] = 154;
	mesh[233] = 155;
	mesh[234] = 156;
	mesh[235] = 157;
	mesh[236] = 158;
	mesh[237] = 156;
	mesh[238] = 158;
	mesh[239] = 159;
	mesh[240] = 160;
	mesh[241] = 161;
	mesh[242] = 162;
	mesh[243] = 160;
	mesh[244] = 162;
	mesh[245] = 163;
	mesh[246] = 164;
	mesh[247] = 165;
	mesh[248] = 166;
	mesh[249] = 164;
	mesh[250] = 166;
	mesh[251] = 167;
	mesh[252] = 168;
	mesh[253] = 169;
	mesh[254] = 170;
	mesh[255] = 168;
	mesh[256] = 170;
	mesh[257] = 171;
	mesh[258] = 172;
	mesh[259] = 173;
	mesh[260] = 174;
	mesh[261] = 172;
	mesh[262] = 174;
	mesh[263] = 175;
	mesh[264] = 176;
	mesh[265] = 177;
	mesh[266] = 178;
	mesh[267] = 176;
	mesh[268] = 178;
	mesh[269] = 179;
	mesh[270] = 180;
	mesh[271] = 181;
	mesh[272] = 182;
	mesh[273] = 180;
	mesh[274] = 182;
	mesh[275] = 183;
	mesh[276] = 184;
	mesh[277] = 185;
	mesh[278] = 186;
	mesh[279] = 184;
	mesh[280] = 186;
	mesh[281] = 187;
	mesh[282] = 188;
	mesh[283] = 189;
	mesh[284] = 190;
	mesh[285] = 188;
	mesh[286] = 190;
	mesh[287] = 191;
	mesh[288] = 192;
	mesh[289] = 193;
	mesh[290] = 194;
	mesh[291] = 195;
	mesh[292] = 196;
	mesh[293] = 197;
	mesh[294] = 198;
	mesh[295] = 199;
	mesh[296] = 200;
	mesh[297] = 201;
	mesh[298] = 202;
	mesh[299] = 203;
	mesh[300] = 204;
	mesh[301] = 205;
	mesh[302] = 206;
	mesh[303] = 207;
	mesh[304] = 208;
	mesh[305] = 209;
	mesh[306] = 210;
	mesh[307] = 211;
	mesh[308] = 212;
	mesh[309] = 213;
	mesh[310] = 214;
	mesh[311] = 215;
	mesh[312] = 216;
	mesh[313] = 217;
	mesh[314] = 218;
	mesh[315] = 219;
	mesh[316] = 220;
	mesh[317] = 221;
	mesh[318] = 222;
	mesh[319] = 223;
	mesh[320] = 224;
	mesh[321] = 225;
	mesh[322] = 226;
	mesh[323] = 227;
	mesh[324] = 228;
	mesh[325] = 229;
	mesh[326] = 230;
	mesh[327] = 231;
	mesh[328] = 232;
	mesh[329] = 233;
	mesh[330] = 234;
	mesh[331] = 235;
	mesh[332] = 236;
	mesh[333] = 237;
	mesh[334] = 238;
	mesh[335] = 239;
	mesh[336] = 240;
	mesh[337] = 241;
	mesh[338] = 242;
	mesh[339] = 240;
	mesh[340] = 242;
	mesh[341] = 243;
	mesh[342] = 244;
	mesh[343] = 245;
	mesh[344] = 246;
	mesh[345] = 244;
	mesh[346] = 246;
	mesh[347] = 247;
	mesh[348] = 248;
	mesh[349] = 249;
	mesh[350] = 250;
	mesh[351] = 248;
	mesh[352] = 250;
	mesh[353] = 251;
	mesh[354] = 252;
	mesh[355] = 253;
	mesh[356] = 254;
	mesh[357] = 252;
	mesh[358] = 254;
	mesh[359] = 255;
	mesh[360] = 256;
	mesh[361] = 257;
	mesh[362] = 258;
	mesh[363] = 256;
	mesh[364] = 258;
	mesh[365] = 259;
	mesh[366] = 260;
	mesh[367] = 261;
	mesh[368] = 262;
	mesh[369] = 260;
	mesh[370] = 262;
	mesh[371] = 263;
	mesh[372] = 264;
	mesh[373] = 265;
	mesh[374] = 266;
	mesh[375] = 264;
	mesh[376] = 266;
	mesh[377] = 267;
	mesh[378] = 268;
	mesh[379] = 269;
	mesh[380] = 270;
	mesh[381] = 268;
	mesh[382] = 270;
	mesh[383] = 271;
	mesh[384] = 272;
	mesh[385] = 273;
	mesh[386] = 274;
	mesh[387] = 272;
	mesh[388] = 274;
	mesh[389] = 275;
	mesh[390] = 276;
	mesh[391] = 277;
	mesh[392] = 278;
	mesh[393] = 276;
	mesh[394] = 278;
	mesh[395] = 279;
	mesh[396] = 280;
	mesh[397] = 281;
	mesh[398] = 282;
	mesh[399] = 280;
	mesh[400] = 282;
	mesh[401] = 283;
	mesh[402] = 284;
	mesh[403] = 285;
	mesh[404] = 286;
	mesh[405] = 284;
	mesh[406] = 286;
	mesh[407] = 287;
	mesh[408] = 288;
	mesh[409] = 289;
	mesh[410] = 290;
	mesh[411] = 288;
	mesh[412] = 290;
	mesh[413] = 291;
	mesh[414] = 292;
	mesh[415] = 293;
	mesh[416] = 294;
	mesh[417] = 292;
	mesh[418] = 294;
	mesh[419] = 295;
	mesh[420] = 296;
	mesh[421] = 297;
	mesh[422] = 298;
	mesh[423] = 296;
	mesh[424] = 298;
	mesh[425] = 299;
	mesh[426] = 300;
	mesh[427] = 301;
	mesh[428] = 302;
	mesh[429] = 300;
	mesh[430] = 302;
	mesh[431] = 303;
	mesh[432] = 304;
	mesh[433] = 305;
	mesh[434] = 306;
	mesh[435] = 304;
	mesh[436] = 306;
	mesh[437] = 307;
	mesh[438] = 308;
	mesh[439] = 309;
	mesh[440] = 310;
	mesh[441] = 308;
	mesh[442] = 310;
	mesh[443] = 311;
	mesh[444] = 312;
	mesh[445] = 313;
	mesh[446] = 314;
	mesh[447] = 312;
	mesh[448] = 314;
	mesh[449] = 315;
	mesh[450] = 316;
	mesh[451] = 317;
	mesh[452] = 318;
	mesh[453] = 316;
	mesh[454] = 318;
	mesh[455] = 319;
	mesh[456] = 320;
	mesh[457] = 321;
	mesh[458] = 322;
	mesh[459] = 320;
	mesh[460] = 322;
	mesh[461] = 323;
	mesh[462] = 324;
	mesh[463] = 325;
	mesh[464] = 326;
	mesh[465] = 324;
	mesh[466] = 326;
	mesh[467] = 327;
	mesh[468] = 328;
	mesh[469] = 329;
	mesh[470] = 330;
	mesh[471] = 328;
	mesh[472] = 330;
	mesh[473] = 331;
	mesh[474] = 332;
	mesh[475] = 333;
	mesh[476] = 334;
	mesh[477] = 332;
	mesh[478] = 334;
	mesh[479] = 335;
	mesh[480] = 336;
	mesh[481] = 337;
	mesh[482] = 338;
	mesh[483] = 336;
	mesh[484] = 338;
	mesh[485] = 339;
	mesh[486] = 340;
	mesh[487] = 341;
	mesh[488] = 342;
	mesh[489] = 340;
	mesh[490] = 342;
	mesh[491] = 343;
	mesh[492] = 344;
	mesh[493] = 345;
	mesh[494] = 346;
	mesh[495] = 344;
	mesh[496] = 346;
	mesh[497] = 347;
	mesh[498] = 348;
	mesh[499] = 349;
	mesh[500] = 350;
	mesh[501] = 348;
	mesh[502] = 350;
	mesh[503] = 351;
	mesh[504] = 352;
	mesh[505] = 353;
	mesh[506] = 354;
	mesh[507] = 352;
	mesh[508] = 354;
	mesh[509] = 355;
	mesh[510] = 356;
	mesh[511] = 357;
	mesh[512] = 358;
	mesh[513] = 356;
	mesh[514] = 358;
	mesh[515] = 359;
	mesh[516] = 360;
	mesh[517] = 361;
	mesh[518] = 362;
	mesh[519] = 360;
	mesh[520] = 362;
	mesh[521] = 363;
	mesh[522] = 364;
	mesh[523] = 365;
	mesh[524] = 366;
	mesh[525] = 364;
	mesh[526] = 366;
	mesh[527] = 367;
	mesh[528] = 368;
	mesh[529] = 369;
	mesh[530] = 370;
	mesh[531] = 368;
	mesh[532] = 370;
	mesh[533] = 371;
	mesh[534] = 372;
	mesh[535] = 373;
	mesh[536] = 374;
	mesh[537] = 372;
	mesh[538] = 374;
	mesh[539] = 375;
	mesh[540] = 376;
	mesh[541] = 377;
	mesh[542] = 378;
	mesh[543] = 376;
	mesh[544] = 378;
	mesh[545] = 379;
	mesh[546] = 380;
	mesh[547] = 381;
	mesh[548] = 382;
	mesh[549] = 380;
	mesh[550] = 382;
	mesh[551] = 383;
	mesh[552] = 384;
	mesh[553] = 385;
	mesh[554] = 386;
	mesh[555] = 384;
	mesh[556] = 386;
	mesh[557] = 387;
	mesh[558] = 388;
	mesh[559] = 389;
	mesh[560] = 390;
	mesh[561] = 388;
	mesh[562] = 390;
	mesh[563] = 391;
	mesh[564] = 392;
	mesh[565] = 393;
	mesh[566] = 394;
	mesh[567] = 392;
	mesh[568] = 394;
	mesh[569] = 395;
	mesh[570] = 396;
	mesh[571] = 397;
	mesh[572] = 398;
	mesh[573] = 396;
	mesh[574] = 398;
	mesh[575] = 399;
	mesh[576] = 400;
	mesh[577] = 401;
	mesh[578] = 402;
	mesh[579] = 400;
	mesh[580] = 402;
	mesh[581] = 403;
	mesh[582] = 404;
	mesh[583] = 405;
	mesh[584] = 406;
	mesh[585] = 404;
	mesh[586] = 406;
	mesh[587] = 407;
	mesh[588] = 408;
	mesh[589] = 409;
	mesh[590] = 410;
	mesh[591] = 408;
	mesh[592] = 410;
	mesh[593] = 411;
	mesh[594] = 412;
	mesh[595] = 413;
	mesh[596] = 414;
	mesh[597] = 412;
	mesh[598] = 414;
	mesh[599] = 415;
	mesh[600] = 416;
	mesh[601] = 417;
	mesh[602] = 418;
	mesh[603] = 416;
	mesh[604] = 418;
	mesh[605] = 419;
	mesh[606] = 420;
	mesh[607] = 421;
	mesh[608] = 422;
	mesh[609] = 420;
	mesh[610] = 422;
	mesh[611] = 423;
	mesh[612] = 424;
	mesh[613] = 425;
	mesh[614] = 426;
	mesh[615] = 424;
	mesh[616] = 426;
	mesh[617] = 427;
	mesh[618] = 428;
	mesh[619] = 429;
	mesh[620] = 430;
	mesh[621] = 428;
	mesh[622] = 430;
	mesh[623] = 431;
	mesh[624] = 432;
	mesh[625] = 433;
	mesh[626] = 434;
	mesh[627] = 432;
	mesh[628] = 434;
	mesh[629] = 435;
	mesh[630] = 436;
	mesh[631] = 437;
	mesh[632] = 438;
	mesh[633] = 436;
	mesh[634] = 438;
	mesh[635] = 439;
	mesh[636] = 440;
	mesh[637] = 441;
	mesh[638] = 442;
	mesh[639] = 440;
	mesh[640] = 442;
	mesh[641] = 443;
	mesh[642] = 444;
	mesh[643] = 445;
	mesh[644] = 446;
	mesh[645] = 444;
	mesh[646] = 446;
	mesh[647] = 447;
	mesh[648] = 448;
	mesh[649] = 449;
	mesh[650] = 450;
	mesh[651] = 448;
	mesh[652] = 450;
	mesh[653] = 451;
	mesh[654] = 452;
	mesh[655] = 453;
	mesh[656] = 454;
	mesh[657] = 452;
	mesh[658] = 454;
	mesh[659] = 455;
	mesh[660] = 456;
	mesh[661] = 457;
	mesh[662] = 458;
	mesh[663] = 456;
	mesh[664] = 458;
	mesh[665] = 459;
	mesh[666] = 460;
	mesh[667] = 461;
	mesh[668] = 462;
	mesh[669] = 460;
	mesh[670] = 462;
	mesh[671] = 463;
	mesh[672] = 464;
	mesh[673] = 465;
	mesh[674] = 466;
	mesh[675] = 464;
	mesh[676] = 466;
	mesh[677] = 467;
	mesh[678] = 468;
	mesh[679] = 469;
	mesh[680] = 470;
	mesh[681] = 468;
	mesh[682] = 470;
	mesh[683] = 471;
	mesh[684] = 472;
	mesh[685] = 473;
	mesh[686] = 474;
	mesh[687] = 472;
	mesh[688] = 474;
	mesh[689] = 475;
	mesh[690] = 476;
	mesh[691] = 477;
	mesh[692] = 478;
	mesh[693] = 476;
	mesh[694] = 478;
	mesh[695] = 479;
	mesh[696] = 480;
	mesh[697] = 481;
	mesh[698] = 482;
	mesh[699] = 480;
	mesh[700] = 482;
	mesh[701] = 483;
	mesh[702] = 484;
	mesh[703] = 485;
	mesh[704] = 486;
	mesh[705] = 484;
	mesh[706] = 486;
	mesh[707] = 487;
	mesh[708] = 488;
	mesh[709] = 489;
	mesh[710] = 490;
	mesh[711] = 488;
	mesh[712] = 490;
	mesh[713] = 491;
	mesh[714] = 492;
	mesh[715] = 493;
	mesh[716] = 494;
	mesh[717] = 492;
	mesh[718] = 494;
	mesh[719] = 495;
	mesh[720] = 496;
	mesh[721] = 497;
	mesh[722] = 498;
	mesh[723] = 496;
	mesh[724] = 498;
	mesh[725] = 499;
	mesh[726] = 500;
	mesh[727] = 501;
	mesh[728] = 502;
	mesh[729] = 500;
	mesh[730] = 502;
	mesh[731] = 503;
	mesh[732] = 504;
	mesh[733] = 505;
	mesh[734] = 506;
	mesh[735] = 504;
	mesh[736] = 506;
	mesh[737] = 507;
	mesh[738] = 508;
	mesh[739] = 509;
	mesh[740] = 510;
	mesh[741] = 508;
	mesh[742] = 510;
	mesh[743] = 511;
	mesh[744] = 512;
	mesh[745] = 513;
	mesh[746] = 514;
	mesh[747] = 512;
	mesh[748] = 514;
	mesh[749] = 515;
	mesh[750] = 516;
	mesh[751] = 517;
	mesh[752] = 518;
	mesh[753] = 516;
	mesh[754] = 518;
	mesh[755] = 519;
	mesh[756] = 520;
	mesh[757] = 521;
	mesh[758] = 522;
	mesh[759] = 520;
	mesh[760] = 522;
	mesh[761] = 523;
	mesh[762] = 524;
	mesh[763] = 525;
	mesh[764] = 526;
	mesh[765] = 524;
	mesh[766] = 526;
	mesh[767] = 527;
	mesh[768] = 528;
	mesh[769] = 529;
	mesh[770] = 530;
	mesh[771] = 528;
	mesh[772] = 530;
	mesh[773] = 531;
	mesh[774] = 532;
	mesh[775] = 533;
	mesh[776] = 534;
	mesh[777] = 532;
	mesh[778] = 534;
	mesh[779] = 535;
	mesh[780] = 536;
	mesh[781] = 537;
	mesh[782] = 538;
	mesh[783] = 536;
	mesh[784] = 538;
	mesh[785] = 539;
	mesh[786] = 540;
	mesh[787] = 541;
	mesh[788] = 542;
	mesh[789] = 540;
	mesh[790] = 542;
	mesh[791] = 543;
	mesh[792] = 544;
	mesh[793] = 545;
	mesh[794] = 546;
	mesh[795] = 544;
	mesh[796] = 546;
	mesh[797] = 547;
	mesh[798] = 548;
	mesh[799] = 549;
	mesh[800] = 550;
	mesh[801] = 548;
	mesh[802] = 550;
	mesh[803] = 551;
	mesh[804] = 552;
	mesh[805] = 553;
	mesh[806] = 554;
	mesh[807] = 552;
	mesh[808] = 554;
	mesh[809] = 555;
	mesh[810] = 556;
	mesh[811] = 557;
	mesh[812] = 558;
	mesh[813] = 556;
	mesh[814] = 558;
	mesh[815] = 559;
	mesh[816] = 560;
	mesh[817] = 561;
	mesh[818] = 562;
	mesh[819] = 560;
	mesh[820] = 562;
	mesh[821] = 563;
	mesh[822] = 564;
	mesh[823] = 565;
	mesh[824] = 566;
	mesh[825] = 564;
	mesh[826] = 566;
	mesh[827] = 567;
	mesh[828] = 568;
	mesh[829] = 569;
	mesh[830] = 570;
	mesh[831] = 568;
	mesh[832] = 570;
	mesh[833] = 571;
	mesh[834] = 572;
	mesh[835] = 573;
	mesh[836] = 574;
	mesh[837] = 572;
	mesh[838] = 574;
	mesh[839] = 575;
	mesh[840] = 576;
	mesh[841] = 577;
	mesh[842] = 578;
	mesh[843] = 576;
	mesh[844] = 578;
	mesh[845] = 579;
	mesh[846] = 580;
	mesh[847] = 581;
	mesh[848] = 582;
	mesh[849] = 580;
	mesh[850] = 582;
	mesh[851] = 583;
	mesh[852] = 584;
	mesh[853] = 585;
	mesh[854] = 586;
	mesh[855] = 584;
	mesh[856] = 586;
	mesh[857] = 587;
	mesh[858] = 588;
	mesh[859] = 589;
	mesh[860] = 590;
	mesh[861] = 588;
	mesh[862] = 590;
	mesh[863] = 591;
	mesh[864] = 592;
	mesh[865] = 593;
	mesh[866] = 594;
	mesh[867] = 592;
	mesh[868] = 594;
	mesh[869] = 595;
	mesh[870] = 596;
	mesh[871] = 597;
	mesh[872] = 598;
	mesh[873] = 596;
	mesh[874] = 598;
	mesh[875] = 599;
	mesh[876] = 600;
	mesh[877] = 601;
	mesh[878] = 602;
	mesh[879] = 600;
	mesh[880] = 602;
	mesh[881] = 603;
	mesh[882] = 604;
	mesh[883] = 605;
	mesh[884] = 606;
	mesh[885] = 604;
	mesh[886] = 606;
	mesh[887] = 607;
	mesh[888] = 608;
	mesh[889] = 609;
	mesh[890] = 610;
	mesh[891] = 608;
	mesh[892] = 610;
	mesh[893] = 611;
	mesh[894] = 612;
	mesh[895] = 613;
	mesh[896] = 614;
	mesh[897] = 612;
	mesh[898] = 614;
	mesh[899] = 615;
	mesh[900] = 616;
	mesh[901] = 617;
	mesh[902] = 618;
	mesh[903] = 616;
	mesh[904] = 618;
	mesh[905] = 619;
	mesh[906] = 620;
	mesh[907] = 621;
	mesh[908] = 622;
	mesh[909] = 620;
	mesh[910] = 622;
	mesh[911] = 623;
	mesh[912] = 624;
	mesh[913] = 625;
	mesh[914] = 626;
	mesh[915] = 624;
	mesh[916] = 626;
	mesh[917] = 627;
	mesh[918] = 628;
	mesh[919] = 629;
	mesh[920] = 630;
	mesh[921] = 628;
	mesh[922] = 630;
	mesh[923] = 631;
	mesh[924] = 632;
	mesh[925] = 633;
	mesh[926] = 634;
	mesh[927] = 632;
	mesh[928] = 634;
	mesh[929] = 635;
	mesh[930] = 636;
	mesh[931] = 637;
	mesh[932] = 638;
	mesh[933] = 636;
	mesh[934] = 638;
	mesh[935] = 639;
	mesh[936] = 640;
	mesh[937] = 641;
	mesh[938] = 642;
	mesh[939] = 640;
	mesh[940] = 642;
	mesh[941] = 643;
	mesh[942] = 644;
	mesh[943] = 645;
	mesh[944] = 646;
	mesh[945] = 644;
	mesh[946] = 646;
	mesh[947] = 647;
	mesh[948] = 648;
	mesh[949] = 649;
	mesh[950] = 650;
	mesh[951] = 648;
	mesh[952] = 650;
	mesh[953] = 651;
	mesh[954] = 652;
	mesh[955] = 653;
	mesh[956] = 654;
	mesh[957] = 652;
	mesh[958] = 654;
	mesh[959] = 655;
	mesh[960] = 656;
	mesh[961] = 657;
	mesh[962] = 658;
	mesh[963] = 656;
	mesh[964] = 658;
	mesh[965] = 659;
	mesh[966] = 660;
	mesh[967] = 661;
	mesh[968] = 662;
	mesh[969] = 660;
	mesh[970] = 662;
	mesh[971] = 663;
	mesh[972] = 664;
	mesh[973] = 665;
	mesh[974] = 666;
	mesh[975] = 664;
	mesh[976] = 666;
	mesh[977] = 667;
	mesh[978] = 668;
	mesh[979] = 669;
	mesh[980] = 670;
	mesh[981] = 668;
	mesh[982] = 670;
	mesh[983] = 671;
	mesh[984] = 672;
	mesh[985] = 673;
	mesh[986] = 674;
	mesh[987] = 672;
	mesh[988] = 674;
	mesh[989] = 675;
	mesh[990] = 676;
	mesh[991] = 677;
	mesh[992] = 678;
	mesh[993] = 676;
	mesh[994] = 678;
	mesh[995] = 679;
	mesh[996] = 680;
	mesh[997] = 681;
	mesh[998] = 682;
	mesh[999] = 680;
	mesh[1000] = 682;
	mesh[1001] = 683;
	mesh[1002] = 684;
	mesh[1003] = 685;
	mesh[1004] = 686;
	mesh[1005] = 684;
	mesh[1006] = 686;
	mesh[1007] = 687;
	mesh[1008] = 688;
	mesh[1009] = 689;
	mesh[1010] = 690;
	mesh[1011] = 688;
	mesh[1012] = 690;
	mesh[1013] = 691;
	mesh[1014] = 692;
	mesh[1015] = 693;
	mesh[1016] = 694;
	mesh[1017] = 692;
	mesh[1018] = 694;
	mesh[1019] = 695;
	mesh[1020] = 696;
	mesh[1021] = 697;
	mesh[1022] = 698;
	mesh[1023] = 696;
	mesh[1024] = 698;
	mesh[1025] = 699;
	mesh[1026] = 700;
	mesh[1027] = 701;
	mesh[1028] = 702;
	mesh[1029] = 700;
	mesh[1030] = 702;
	mesh[1031] = 703;
	mesh[1032] = 704;
	mesh[1033] = 705;
	mesh[1034] = 706;
	mesh[1035] = 704;
	mesh[1036] = 706;
	mesh[1037] = 707;
	mesh[1038] = 708;
	mesh[1039] = 709;
	mesh[1040] = 710;
	mesh[1041] = 708;
	mesh[1042] = 710;
	mesh[1043] = 711;
	mesh[1044] = 712;
	mesh[1045] = 713;
	mesh[1046] = 714;
	mesh[1047] = 712;
	mesh[1048] = 714;
	mesh[1049] = 715;
	mesh[1050] = 716;
	mesh[1051] = 717;
	mesh[1052] = 718;
	mesh[1053] = 716;
	mesh[1054] = 718;
	mesh[1055] = 719;
	mesh[1056] = 720;
	mesh[1057] = 721;
	mesh[1058] = 722;
	mesh[1059] = 720;
	mesh[1060] = 722;
	mesh[1061] = 723;
	mesh[1062] = 724;
	mesh[1063] = 725;
	mesh[1064] = 726;
	mesh[1065] = 724;
	mesh[1066] = 726;
	mesh[1067] = 727;
	mesh[1068] = 728;
	mesh[1069] = 729;
	mesh[1070] = 730;
	mesh[1071] = 728;
	mesh[1072] = 730;
	mesh[1073] = 731;
	mesh[1074] = 732;
	mesh[1075] = 733;
	mesh[1076] = 734;
	mesh[1077] = 732;
	mesh[1078] = 734;
	mesh[1079] = 735;
	mesh[1080] = 736;
	mesh[1081] = 737;
	mesh[1082] = 738;
	mesh[1083] = 736;
	mesh[1084] = 738;
	mesh[1085] = 739;
	mesh[1086] = 740;
	mesh[1087] = 741;
	mesh[1088] = 742;
	mesh[1089] = 740;
	mesh[1090] = 742;
	mesh[1091] = 743;
	mesh[1092] = 744;
	mesh[1093] = 745;
	mesh[1094] = 746;
	mesh[1095] = 744;
	mesh[1096] = 746;
	mesh[1097] = 747;
	mesh[1098] = 748;
	mesh[1099] = 749;
	mesh[1100] = 750;
	mesh[1101] = 748;
	mesh[1102] = 750;
	mesh[1103] = 751;
	mesh[1104] = 752;
	mesh[1105] = 753;
	mesh[1106] = 754;
	mesh[1107] = 755;
	mesh[1108] = 756;
	mesh[1109] = 757;
	mesh[1110] = 758;
	mesh[1111] = 759;
	mesh[1112] = 760;
	mesh[1113] = 758;
	mesh[1114] = 760;
	mesh[1115] = 761;
	mesh[1116] = 762;
	mesh[1117] = 763;
	mesh[1118] = 764;
	mesh[1119] = 762;
	mesh[1120] = 764;
	mesh[1121] = 765;
	mesh[1122] = 766;
	mesh[1123] = 767;
	mesh[1124] = 768;
	mesh[1125] = 766;
	mesh[1126] = 768;
	mesh[1127] = 769;
	mesh[1128] = 770;
	mesh[1129] = 771;
	mesh[1130] = 772;
	mesh[1131] = 770;
	mesh[1132] = 772;
	mesh[1133] = 773;
	mesh[1134] = 774;
	mesh[1135] = 775;
	mesh[1136] = 776;
	mesh[1137] = 774;
	mesh[1138] = 776;
	mesh[1139] = 777;
	mesh[1140] = 778;
	mesh[1141] = 779;
	mesh[1142] = 780;
	mesh[1143] = 778;
	mesh[1144] = 780;
	mesh[1145] = 781;
	mesh[1146] = 782;
	mesh[1147] = 783;
	mesh[1148] = 784;
	mesh[1149] = 782;
	mesh[1150] = 784;
	mesh[1151] = 785;
	mesh[1152] = 786;
	mesh[1153] = 787;
	mesh[1154] = 788;
	mesh[1155] = 786;
	mesh[1156] = 788;
	mesh[1157] = 789;
	mesh[1158] = 790;
	mesh[1159] = 791;
	mesh[1160] = 792;
	mesh[1161] = 790;
	mesh[1162] = 792;
	mesh[1163] = 793;
	mesh[1164] = 794;
	mesh[1165] = 795;
	mesh[1166] = 796;
	mesh[1167] = 794;
	mesh[1168] = 796;
	mesh[1169] = 797;
	mesh[1170] = 798;
	mesh[1171] = 799;
	mesh[1172] = 800;
	mesh[1173] = 798;
	mesh[1174] = 800;
	mesh[1175] = 801;
	mesh[1176] = 802;
	mesh[1177] = 803;
	mesh[1178] = 804;
	mesh[1179] = 802;
	mesh[1180] = 804;
	mesh[1181] = 805;
	mesh[1182] = 806;
	mesh[1183] = 807;
	mesh[1184] = 808;
	mesh[1185] = 806;
	mesh[1186] = 808;
	mesh[1187] = 809;
	mesh[1188] = 810;
	mesh[1189] = 811;
	mesh[1190] = 812;
	mesh[1191] = 810;
	mesh[1192] = 812;
	mesh[1193] = 813;
	mesh[1194] = 814;
	mesh[1195] = 815;
	mesh[1196] = 816;
	mesh[1197] = 814;
	mesh[1198] = 816;
	mesh[1199] = 817;
	mesh[1200] = 818;
	mesh[1201] = 819;
	mesh[1202] = 820;
	mesh[1203] = 818;
	mesh[1204] = 820;
	mesh[1205] = 821;
	mesh[1206] = 822;
	mesh[1207] = 823;
	mesh[1208] = 824;
	mesh[1209] = 822;
	mesh[1210] = 824;
	mesh[1211] = 825;
	mesh[1212] = 826;
	mesh[1213] = 827;
	mesh[1214] = 828;
	mesh[1215] = 826;
	mesh[1216] = 828;
	mesh[1217] = 829;
	mesh[1218] = 830;
	mesh[1219] = 831;
	mesh[1220] = 832;
	mesh[1221] = 830;
	mesh[1222] = 832;
	mesh[1223] = 833;
	mesh[1224] = 834;
	mesh[1225] = 835;
	mesh[1226] = 836;
	mesh[1227] = 834;
	mesh[1228] = 836;
	mesh[1229] = 837;
	mesh[1230] = 838;
	mesh[1231] = 839;
	mesh[1232] = 840;
	mesh[1233] = 838;
	mesh[1234] = 840;
	mesh[1235] = 841;
	mesh[1236] = 842;
	mesh[1237] = 843;
	mesh[1238] = 844;
	mesh[1239] = 842;
	mesh[1240] = 844;
	mesh[1241] = 845;
	mesh[1242] = 846;
	mesh[1243] = 847;
	mesh[1244] = 848;
	mesh[1245] = 846;
	mesh[1246] = 848;
	mesh[1247] = 849;
	mesh[1248] = 850;
	mesh[1249] = 851;
	mesh[1250] = 852;
	mesh[1251] = 850;
	mesh[1252] = 852;
	mesh[1253] = 853;
	mesh[1254] = 854;
	mesh[1255] = 855;
	mesh[1256] = 856;
	mesh[1257] = 854;
	mesh[1258] = 856;
	mesh[1259] = 857;
	mesh[1260] = 858;
	mesh[1261] = 859;
	mesh[1262] = 860;
	mesh[1263] = 858;
	mesh[1264] = 860;
	mesh[1265] = 861;
	mesh[1266] = 862;
	mesh[1267] = 863;
	mesh[1268] = 864;
	mesh[1269] = 862;
	mesh[1270] = 864;
	mesh[1271] = 865;
	mesh[1272] = 866;
	mesh[1273] = 867;
	mesh[1274] = 868;
	mesh[1275] = 866;
	mesh[1276] = 868;
	mesh[1277] = 869;
	mesh[1278] = 870;
	mesh[1279] = 871;
	mesh[1280] = 872;
	mesh[1281] = 870;
	mesh[1282] = 872;
	mesh[1283] = 873;
	mesh[1284] = 874;
	mesh[1285] = 875;
	mesh[1286] = 876;
	mesh[1287] = 874;
	mesh[1288] = 876;
	mesh[1289] = 877;
	mesh[1290] = 878;
	mesh[1291] = 879;
	mesh[1292] = 880;
	mesh[1293] = 878;
	mesh[1294] = 880;
	mesh[1295] = 881;
	mesh[1296] = 882;
	mesh[1297] = 883;
	mesh[1298] = 884;
	mesh[1299] = 882;
	mesh[1300] = 884;
	mesh[1301] = 885;
	mesh[1302] = 886;
	mesh[1303] = 887;
	mesh[1304] = 888;
	mesh[1305] = 886;
	mesh[1306] = 888;
	mesh[1307] = 889;
	mesh[1308] = 890;
	mesh[1309] = 891;
	mesh[1310] = 892;
	mesh[1311] = 890;
	mesh[1312] = 892;
	mesh[1313] = 893;
	mesh[1314] = 894;
	mesh[1315] = 895;
	mesh[1316] = 896;
	mesh[1317] = 894;
	mesh[1318] = 896;
	mesh[1319] = 897;
	mesh[1320] = 898;
	mesh[1321] = 899;
	mesh[1322] = 900;
	mesh[1323] = 898;
	mesh[1324] = 900;
	mesh[1325] = 901;
	mesh[1326] = 902;
	mesh[1327] = 903;
	mesh[1328] = 904;
	mesh[1329] = 902;
	mesh[1330] = 904;
	mesh[1331] = 905;
	mesh[1332] = 906;
	mesh[1333] = 907;
	mesh[1334] = 908;
	mesh[1335] = 906;
	mesh[1336] = 908;
	mesh[1337] = 909;
	mesh[1338] = 910;
	mesh[1339] = 911;
	mesh[1340] = 912;
	mesh[1341] = 910;
	mesh[1342] = 912;
	mesh[1343] = 913;
	mesh[1344] = 914;
	mesh[1345] = 915;
	mesh[1346] = 916;
	mesh[1347] = 914;
	mesh[1348] = 916;
	mesh[1349] = 917;
	mesh[1350] = 918;
	mesh[1351] = 919;
	mesh[1352] = 920;
	mesh[1353] = 918;
	mesh[1354] = 920;
	mesh[1355] = 921;
	mesh[1356] = 922;
	mesh[1357] = 923;
	mesh[1358] = 924;
	mesh[1359] = 922;
	mesh[1360] = 924;
	mesh[1361] = 925;
	mesh[1362] = 926;
	mesh[1363] = 927;
	mesh[1364] = 928;
	mesh[1365] = 926;
	mesh[1366] = 928;
	mesh[1367] = 929;
	mesh[1368] = 930;
	mesh[1369] = 931;
	mesh[1370] = 932;
	mesh[1371] = 930;
	mesh[1372] = 932;
	mesh[1373] = 933;
	mesh[1374] = 934;
	mesh[1375] = 935;
	mesh[1376] = 936;
	mesh[1377] = 934;
	mesh[1378] = 936;
	mesh[1379] = 937;
	mesh[1380] = 938;
	mesh[1381] = 939;
	mesh[1382] = 940;
	mesh[1383] = 938;
	mesh[1384] = 940;
	mesh[1385] = 941;
	mesh[1386] = 942;
	mesh[1387] = 943;
	mesh[1388] = 944;
	mesh[1389] = 942;
	mesh[1390] = 944;
	mesh[1391] = 945;
	mesh[1392] = 946;
	mesh[1393] = 947;
	mesh[1394] = 948;
	mesh[1395] = 946;
	mesh[1396] = 948;
	mesh[1397] = 949;
	mesh[1398] = 950;
	mesh[1399] = 951;
	mesh[1400] = 952;
	mesh[1401] = 950;
	mesh[1402] = 952;
	mesh[1403] = 953;
	mesh[1404] = 954;
	mesh[1405] = 955;
	mesh[1406] = 956;
	mesh[1407] = 954;
	mesh[1408] = 956;
	mesh[1409] = 957;
	mesh[1410] = 958;
	mesh[1411] = 959;
	mesh[1412] = 960;
	mesh[1413] = 958;
	mesh[1414] = 960;
	mesh[1415] = 961;
	mesh[1416] = 962;
	mesh[1417] = 963;
	mesh[1418] = 964;
	mesh[1419] = 962;
	mesh[1420] = 964;
	mesh[1421] = 965;
	mesh[1422] = 966;
	mesh[1423] = 967;
	mesh[1424] = 968;
	mesh[1425] = 966;
	mesh[1426] = 968;
	mesh[1427] = 969;
	mesh[1428] = 970;
	mesh[1429] = 971;
	mesh[1430] = 972;
	mesh[1431] = 970;
	mesh[1432] = 972;
	mesh[1433] = 973;
	mesh[1434] = 974;
	mesh[1435] = 975;
	mesh[1436] = 976;
	mesh[1437] = 974;
	mesh[1438] = 976;
	mesh[1439] = 977;
	mesh[1440] = 978;
	mesh[1441] = 979;
	mesh[1442] = 980;
	mesh[1443] = 978;
	mesh[1444] = 980;
	mesh[1445] = 981;
	mesh[1446] = 982;
	mesh[1447] = 983;
	mesh[1448] = 984;
	mesh[1449] = 982;
	mesh[1450] = 984;
	mesh[1451] = 985;
	mesh[1452] = 986;
	mesh[1453] = 987;
	mesh[1454] = 988;
	mesh[1455] = 986;
	mesh[1456] = 988;
	mesh[1457] = 989;
	mesh[1458] = 990;
	mesh[1459] = 991;
	mesh[1460] = 992;
	mesh[1461] = 990;
	mesh[1462] = 992;
	mesh[1463] = 993;
	mesh[1464] = 994;
	mesh[1465] = 995;
	mesh[1466] = 996;
	mesh[1467] = 994;
	mesh[1468] = 996;
	mesh[1469] = 997;
	mesh[1470] = 998;
	mesh[1471] = 999;
	mesh[1472] = 1000;
	mesh[1473] = 998;
	mesh[1474] = 1000;
	mesh[1475] = 1001;
	mesh[1476] = 1002;
	mesh[1477] = 1003;
	mesh[1478] = 1004;
	mesh[1479] = 1002;
	mesh[1480] = 1004;
	mesh[1481] = 1005;
	mesh[1482] = 1006;
	mesh[1483] = 1007;
	mesh[1484] = 1008;
	mesh[1485] = 1006;
	mesh[1486] = 1008;
	mesh[1487] = 1009;
	mesh[1488] = 1010;
	mesh[1489] = 1011;
	mesh[1490] = 1012;
	mesh[1491] = 1010;
	mesh[1492] = 1012;
	mesh[1493] = 1013;
	mesh[1494] = 1014;
	mesh[1495] = 1015;
	mesh[1496] = 1016;
	mesh[1497] = 1014;
	mesh[1498] = 1016;
	mesh[1499] = 1017;
	mesh[1500] = 1018;
	mesh[1501] = 1019;
	mesh[1502] = 1020;
	mesh[1503] = 1018;
	mesh[1504] = 1020;
	mesh[1505] = 1021;
	mesh[1506] = 1022;
	mesh[1507] = 1023;
	mesh[1508] = 1024;
	mesh[1509] = 1022;
	mesh[1510] = 1024;
	mesh[1511] = 1025;
	mesh[1512] = 1026;
	mesh[1513] = 1027;
	mesh[1514] = 1028;
	mesh[1515] = 1026;
	mesh[1516] = 1028;
	mesh[1517] = 1029;
	mesh[1518] = 1030;
	mesh[1519] = 1031;
	mesh[1520] = 1032;
	mesh[1521] = 1030;
	mesh[1522] = 1032;
	mesh[1523] = 1033;
	mesh[1524] = 1034;
	mesh[1525] = 1035;
	mesh[1526] = 1036;
	mesh[1527] = 1034;
	mesh[1528] = 1036;
	mesh[1529] = 1037;
	mesh[1530] = 1038;
	mesh[1531] = 1039;
	mesh[1532] = 1040;
	mesh[1533] = 1038;
	mesh[1534] = 1040;
	mesh[1535] = 1041;
	mesh[1536] = 1042;
	mesh[1537] = 1043;
	mesh[1538] = 1044;
	mesh[1539] = 1042;
	mesh[1540] = 1044;
	mesh[1541] = 1045;
	mesh[1542] = 1046;
	mesh[1543] = 1047;
	mesh[1544] = 1048;
	mesh[1545] = 1046;
	mesh[1546] = 1048;
	mesh[1547] = 1049;
	mesh[1548] = 1050;
	mesh[1549] = 1051;
	mesh[1550] = 1052;
	mesh[1551] = 1050;
	mesh[1552] = 1052;
	mesh[1553] = 1053;
	mesh[1554] = 1054;
	mesh[1555] = 1055;
	mesh[1556] = 1056;
	mesh[1557] = 1054;
	mesh[1558] = 1056;
	mesh[1559] = 1057;
	mesh[1560] = 1058;
	mesh[1561] = 1059;
	mesh[1562] = 1060;
	mesh[1563] = 1058;
	mesh[1564] = 1060;
	mesh[1565] = 1061;
	mesh[1566] = 1062;
	mesh[1567] = 1063;
	mesh[1568] = 1064;
	mesh[1569] = 1062;
	mesh[1570] = 1064;
	mesh[1571] = 1065;
	mesh[1572] = 1066;
	mesh[1573] = 1067;
	mesh[1574] = 1068;
	mesh[1575] = 1066;
	mesh[1576] = 1068;
	mesh[1577] = 1069;
	mesh[1578] = 1070;
	mesh[1579] = 1071;
	mesh[1580] = 1072;
	mesh[1581] = 1070;
	mesh[1582] = 1072;
	mesh[1583] = 1073;
	mesh[1584] = 1074;
	mesh[1585] = 1075;
	mesh[1586] = 1076;
	mesh[1587] = 1074;
	mesh[1588] = 1076;
	mesh[1589] = 1077;
	mesh[1590] = 1078;
	mesh[1591] = 1079;
	mesh[1592] = 1080;
	mesh[1593] = 1078;
	mesh[1594] = 1080;
	mesh[1595] = 1081;
	mesh[1596] = 1082;
	mesh[1597] = 1083;
	mesh[1598] = 1084;
	mesh[1599] = 1082;
	mesh[1600] = 1084;
	mesh[1601] = 1085;
	mesh[1602] = 1086;
	mesh[1603] = 1087;
	mesh[1604] = 1088;
	mesh[1605] = 1086;
	mesh[1606] = 1088;
	mesh[1607] = 1089;
	mesh[1608] = 1090;
	mesh[1609] = 1091;
	mesh[1610] = 1092;
	mesh[1611] = 1090;
	mesh[1612] = 1092;
	mesh[1613] = 1093;
	mesh[1614] = 1094;
	mesh[1615] = 1095;
	mesh[1616] = 1096;
	mesh[1617] = 1094;
	mesh[1618] = 1096;
	mesh[1619] = 1097;
	mesh[1620] = 1098;
	mesh[1621] = 1099;
	mesh[1622] = 1100;
	mesh[1623] = 1098;
	mesh[1624] = 1100;
	mesh[1625] = 1101;
	mesh[1626] = 1102;
	mesh[1627] = 1103;
	mesh[1628] = 1104;
	mesh[1629] = 1102;
	mesh[1630] = 1104;
	mesh[1631] = 1105;
	mesh[1632] = 1106;
	mesh[1633] = 1107;
	mesh[1634] = 1108;
	mesh[1635] = 1106;
	mesh[1636] = 1108;
	mesh[1637] = 1109;
	mesh[1638] = 1110;
	mesh[1639] = 1111;
	mesh[1640] = 1112;
	mesh[1641] = 1110;
	mesh[1642] = 1112;
	mesh[1643] = 1113;
	mesh[1644] = 1114;
	mesh[1645] = 1115;
	mesh[1646] = 1116;
	mesh[1647] = 1114;
	mesh[1648] = 1116;
	mesh[1649] = 1117;
	mesh[1650] = 1118;
	mesh[1651] = 1119;
	mesh[1652] = 1120;
	mesh[1653] = 1118;
	mesh[1654] = 1120;
	mesh[1655] = 1121;
	mesh[1656] = 1122;
	mesh[1657] = 1123;
	mesh[1658] = 1124;
	mesh[1659] = 1122;
	mesh[1660] = 1124;
	mesh[1661] = 1125;
	mesh[1662] = 1126;
	mesh[1663] = 1127;
	mesh[1664] = 1128;
	mesh[1665] = 1126;
	mesh[1666] = 1128;
	mesh[1667] = 1129;
	mesh[1668] = 1130;
	mesh[1669] = 1131;
	mesh[1670] = 1132;
	mesh[1671] = 1130;
	mesh[1672] = 1132;
	mesh[1673] = 1133;
	mesh[1674] = 1134;
	mesh[1675] = 1135;
	mesh[1676] = 1136;
	mesh[1677] = 1134;
	mesh[1678] = 1136;
	mesh[1679] = 1137;
	mesh[1680] = 1138;
	mesh[1681] = 1139;
	mesh[1682] = 1140;
	mesh[1683] = 1138;
	mesh[1684] = 1140;
	mesh[1685] = 1141;
	mesh[1686] = 1142;
	mesh[1687] = 1143;
	mesh[1688] = 1144;
	mesh[1689] = 1142;
	mesh[1690] = 1144;
	mesh[1691] = 1145;
	mesh[1692] = 1146;
	mesh[1693] = 1147;
	mesh[1694] = 1148;
	mesh[1695] = 1146;
	mesh[1696] = 1148;
	mesh[1697] = 1149;
	mesh[1698] = 1150;
	mesh[1699] = 1151;
	mesh[1700] = 1152;
	mesh[1701] = 1150;
	mesh[1702] = 1152;
	mesh[1703] = 1153;
	mesh[1704] = 1154;
	mesh[1705] = 1155;
	mesh[1706] = 1156;
	mesh[1707] = 1154;
	mesh[1708] = 1156;
	mesh[1709] = 1157;
	mesh[1710] = 1158;
	mesh[1711] = 1159;
	mesh[1712] = 1160;
	mesh[1713] = 1158;
	mesh[1714] = 1160;
	mesh[1715] = 1161;
	mesh[1716] = 1162;
	mesh[1717] = 1163;
	mesh[1718] = 1164;
	mesh[1719] = 1162;
	mesh[1720] = 1164;
	mesh[1721] = 1165;
	mesh[1722] = 1166;
	mesh[1723] = 1167;
	mesh[1724] = 1168;
	mesh[1725] = 1166;
	mesh[1726] = 1168;
	mesh[1727] = 1169;
	mesh[1728] = 1170;
	mesh[1729] = 1171;
	mesh[1730] = 1172;
	mesh[1731] = 1170;
	mesh[1732] = 1172;
	mesh[1733] = 1173;
	mesh[1734] = 1174;
	mesh[1735] = 1175;
	mesh[1736] = 1176;
	mesh[1737] = 1174;
	mesh[1738] = 1176;
	mesh[1739] = 1177;
	mesh[1740] = 1178;
	mesh[1741] = 1179;
	mesh[1742] = 1180;
	mesh[1743] = 1178;
	mesh[1744] = 1180;
	mesh[1745] = 1181;
	mesh[1746] = 1182;
	mesh[1747] = 1183;
	mesh[1748] = 1184;
	mesh[1749] = 1182;
	mesh[1750] = 1184;
	mesh[1751] = 1185;
	mesh[1752] = 1186;
	mesh[1753] = 1187;
	mesh[1754] = 1188;
	mesh[1755] = 1186;
	mesh[1756] = 1188;
	mesh[1757] = 1189;
	mesh[1758] = 1190;
	mesh[1759] = 1191;
	mesh[1760] = 1192;
	mesh[1761] = 1190;
	mesh[1762] = 1192;
	mesh[1763] = 1193;
	mesh[1764] = 1194;
	mesh[1765] = 1195;
	mesh[1766] = 1196;
	mesh[1767] = 1194;
	mesh[1768] = 1196;
	mesh[1769] = 1197;
	mesh[1770] = 1198;
	mesh[1771] = 1199;
	mesh[1772] = 1200;
	mesh[1773] = 1198;
	mesh[1774] = 1200;
	mesh[1775] = 1201;
	mesh[1776] = 1202;
	mesh[1777] = 1203;
	mesh[1778] = 1204;
	mesh[1779] = 1202;
	mesh[1780] = 1204;
	mesh[1781] = 1205;
	mesh[1782] = 1206;
	mesh[1783] = 1207;
	mesh[1784] = 1208;
	mesh[1785] = 1206;
	mesh[1786] = 1208;
	mesh[1787] = 1209;
	mesh[1788] = 1210;
	mesh[1789] = 1211;
	mesh[1790] = 1212;
	mesh[1791] = 1210;
	mesh[1792] = 1212;
	mesh[1793] = 1213;
	mesh[1794] = 1214;
	mesh[1795] = 1215;
	mesh[1796] = 1216;
	mesh[1797] = 1214;
	mesh[1798] = 1216;
	mesh[1799] = 1217;
	mesh[1800] = 1218;
	mesh[1801] = 1219;
	mesh[1802] = 1220;
	mesh[1803] = 1218;
	mesh[1804] = 1220;
	mesh[1805] = 1221;
	mesh[1806] = 1222;
	mesh[1807] = 1223;
	mesh[1808] = 1224;
	mesh[1809] = 1222;
	mesh[1810] = 1224;
	mesh[1811] = 1225;
	mesh[1812] = 1226;
	mesh[1813] = 1227;
	mesh[1814] = 1228;
	mesh[1815] = 1226;
	mesh[1816] = 1228;
	mesh[1817] = 1229;
	mesh[1818] = 1230;
	mesh[1819] = 1231;
	mesh[1820] = 1232;
	mesh[1821] = 1230;
	mesh[1822] = 1232;
	mesh[1823] = 1233;
	mesh[1824] = 1234;
	mesh[1825] = 1235;
	mesh[1826] = 1236;
	mesh[1827] = 1234;
	mesh[1828] = 1236;
	mesh[1829] = 1237;
	mesh[1830] = 1238;
	mesh[1831] = 1239;
	mesh[1832] = 1240;
	mesh[1833] = 1238;
	mesh[1834] = 1240;
	mesh[1835] = 1241;
	mesh[1836] = 1242;
	mesh[1837] = 1243;
	mesh[1838] = 1244;
	mesh[1839] = 1242;
	mesh[1840] = 1244;
	mesh[1841] = 1245;
	mesh[1842] = 1246;
	mesh[1843] = 1247;
	mesh[1844] = 1248;
	mesh[1845] = 1246;
	mesh[1846] = 1248;
	mesh[1847] = 1249;
	mesh[1848] = 1250;
	mesh[1849] = 1251;
	mesh[1850] = 1252;
	mesh[1851] = 1250;
	mesh[1852] = 1252;
	mesh[1853] = 1253;
	mesh[1854] = 1254;
	mesh[1855] = 1255;
	mesh[1856] = 1256;
	mesh[1857] = 1254;
	mesh[1858] = 1256;
	mesh[1859] = 1257;
	mesh[1860] = 1258;
	mesh[1861] = 1259;
	mesh[1862] = 1260;
	mesh[1863] = 1258;
	mesh[1864] = 1260;
	mesh[1865] = 1261;
	mesh[1866] = 1262;
	mesh[1867] = 1263;
	mesh[1868] = 1264;
	mesh[1869] = 1262;
	mesh[1870] = 1264;
	mesh[1871] = 1265;
	mesh[1872] = 1266;
	mesh[1873] = 1267;
	mesh[1874] = 1268;
	mesh[1875] = 1266;
	mesh[1876] = 1268;
	mesh[1877] = 1269;
	mesh[1878] = 1270;
	mesh[1879] = 1271;
	mesh[1880] = 1272;
	mesh[1881] = 1270;
	mesh[1882] = 1272;
	mesh[1883] = 1273;
	mesh[1884] = 1274;
	mesh[1885] = 1275;
	mesh[1886] = 1276;
	mesh[1887] = 1274;
	mesh[1888] = 1276;
	mesh[1889] = 1277;
	mesh[1890] = 1278;
	mesh[1891] = 1279;
	mesh[1892] = 1280;
	mesh[1893] = 1278;
	mesh[1894] = 1280;
	mesh[1895] = 1281;
	mesh[1896] = 1282;
	mesh[1897] = 1283;
	mesh[1898] = 1284;
	mesh[1899] = 1282;
	mesh[1900] = 1284;
	mesh[1901] = 1285;
	mesh[1902] = 1286;
	mesh[1903] = 1287;
	mesh[1904] = 1288;
	mesh[1905] = 1286;
	mesh[1906] = 1288;
	mesh[1907] = 1289;
	mesh[1908] = 1290;
	mesh[1909] = 1291;
	mesh[1910] = 1292;
	mesh[1911] = 1290;
	mesh[1912] = 1292;
	mesh[1913] = 1293;
	mesh[1914] = 1294;
	mesh[1915] = 1295;
	mesh[1916] = 1296;
	mesh[1917] = 1294;
	mesh[1918] = 1296;
	mesh[1919] = 1297;
	mesh[1920] = 1298;
	mesh[1921] = 1299;
	mesh[1922] = 1300;
	mesh[1923] = 1298;
	mesh[1924] = 1300;
	mesh[1925] = 1301;
	mesh[1926] = 1302;
	mesh[1927] = 1303;
	mesh[1928] = 1304;
	mesh[1929] = 1302;
	mesh[1930] = 1304;
	mesh[1931] = 1305;
	mesh[1932] = 1306;
	mesh[1933] = 1307;
	mesh[1934] = 1308;
	mesh[1935] = 1306;
	mesh[1936] = 1308;
	mesh[1937] = 1309;
	mesh[1938] = 1310;
	mesh[1939] = 1311;
	mesh[1940] = 1312;
	mesh[1941] = 1310;
	mesh[1942] = 1312;
	mesh[1943] = 1313;
	mesh[1944] = 1314;
	mesh[1945] = 1315;
	mesh[1946] = 1316;
	mesh[1947] = 1314;
	mesh[1948] = 1316;
	mesh[1949] = 1317;
	mesh[1950] = 1318;
	mesh[1951] = 1319;
	mesh[1952] = 1320;
	mesh[1953] = 1318;
	mesh[1954] = 1320;
	mesh[1955] = 1321;
	mesh[1956] = 1322;
	mesh[1957] = 1323;
	mesh[1958] = 1324;
	mesh[1959] = 1322;
	mesh[1960] = 1324;
	mesh[1961] = 1325;
	mesh[1962] = 1326;
	mesh[1963] = 1327;
	mesh[1964] = 1328;
	mesh[1965] = 1326;
	mesh[1966] = 1328;
	mesh[1967] = 1329;
	mesh[1968] = 1330;
	mesh[1969] = 1331;
	mesh[1970] = 1332;
	mesh[1971] = 1330;
	mesh[1972] = 1332;
	mesh[1973] = 1333;
	mesh[1974] = 1334;
	mesh[1975] = 1335;
	mesh[1976] = 1336;
	mesh[1977] = 1334;
	mesh[1978] = 1336;
	mesh[1979] = 1337;
	mesh[1980] = 1338;
	mesh[1981] = 1339;
	mesh[1982] = 1340;
	mesh[1983] = 1338;
	mesh[1984] = 1340;
	mesh[1985] = 1341;
	mesh[1986] = 1342;
	mesh[1987] = 1343;
	mesh[1988] = 1344;
	mesh[1989] = 1345;
	mesh[1990] = 1346;
	mesh[1991] = 1347;
	mesh[1992] = 1348;
	mesh[1993] = 1349;
	mesh[1994] = 1350;
	mesh[1995] = 1348;
	mesh[1996] = 1350;
	mesh[1997] = 1351;
	mesh[1998] = 1352;
	mesh[1999] = 1353;
	mesh[2000] = 1354;
	mesh[2001] = 1352;
	mesh[2002] = 1354;
	mesh[2003] = 1355;
	mesh[2004] = 1356;
	mesh[2005] = 1357;
	mesh[2006] = 1358;
	mesh[2007] = 1356;
	mesh[2008] = 1358;
	mesh[2009] = 1359;
	mesh[2010] = 1360;
	mesh[2011] = 1361;
	mesh[2012] = 1362;
	mesh[2013] = 1360;
	mesh[2014] = 1362;
	mesh[2015] = 1363;
	mesh[2016] = 1364;
	mesh[2017] = 1365;
	mesh[2018] = 1366;
	mesh[2019] = 1364;
	mesh[2020] = 1366;
	mesh[2021] = 1367;
	mesh[2022] = 1368;
	mesh[2023] = 1369;
	mesh[2024] = 1370;
	mesh[2025] = 1368;
	mesh[2026] = 1370;
	mesh[2027] = 1371;
	mesh[2028] = 1372;
	mesh[2029] = 1373;
	mesh[2030] = 1374;
	mesh[2031] = 1372;
	mesh[2032] = 1374;
	mesh[2033] = 1375;
	mesh[2034] = 1376;
	mesh[2035] = 1377;
	mesh[2036] = 1378;
	mesh[2037] = 1376;
	mesh[2038] = 1378;
	mesh[2039] = 1379;
	mesh[2040] = 1380;
	mesh[2041] = 1381;
	mesh[2042] = 1382;
	mesh[2043] = 1380;
	mesh[2044] = 1382;
	mesh[2045] = 1383;
	mesh[2046] = 1384;
	mesh[2047] = 1385;
	mesh[2048] = 1386;
	mesh[2049] = 1384;
	mesh[2050] = 1386;
	mesh[2051] = 1387;
	mesh[2052] = 1388;
	mesh[2053] = 1389;
	mesh[2054] = 1390;
	mesh[2055] = 1388;
	mesh[2056] = 1390;
	mesh[2057] = 1391;
	mesh[2058] = 1392;
	mesh[2059] = 1393;
	mesh[2060] = 1394;
	mesh[2061] = 1392;
	mesh[2062] = 1394;
	mesh[2063] = 1395;
	mesh[2064] = 1396;
	mesh[2065] = 1397;
	mesh[2066] = 1398;
	mesh[2067] = 1396;
	mesh[2068] = 1398;
	mesh[2069] = 1399;
	mesh[2070] = 1400;
	mesh[2071] = 1401;
	mesh[2072] = 1402;
	mesh[2073] = 1400;
	mesh[2074] = 1402;
	mesh[2075] = 1403;
	mesh[2076] = 1404;
	mesh[2077] = 1405;
	mesh[2078] = 1406;
	mesh[2079] = 1404;
	mesh[2080] = 1406;
	mesh[2081] = 1407;
	mesh[2082] = 1408;
	mesh[2083] = 1409;
	mesh[2084] = 1410;
	mesh[2085] = 1408;
	mesh[2086] = 1410;
	mesh[2087] = 1411;
	mesh[2088] = 1412;
	mesh[2089] = 1413;
	mesh[2090] = 1414;
	mesh[2091] = 1415;
	mesh[2092] = 1416;
	mesh[2093] = 1417;
	mesh[2094] = 1418;
	mesh[2095] = 1419;
	mesh[2096] = 1420;
	mesh[2097] = 1421;
	mesh[2098] = 1422;
	mesh[2099] = 1423;
	mesh[2100] = 1424;
	mesh[2101] = 1425;
	mesh[2102] = 1426;
	mesh[2103] = 1424;
	mesh[2104] = 1426;
	mesh[2105] = 1427;
	mesh[2106] = 1428;
	mesh[2107] = 1429;
	mesh[2108] = 1430;
	mesh[2109] = 1428;
	mesh[2110] = 1430;
	mesh[2111] = 1431;
	mesh[2112] = 1432;
	mesh[2113] = 1433;
	mesh[2114] = 1434;
	mesh[2115] = 1432;
	mesh[2116] = 1434;
	mesh[2117] = 1435;
	mesh[2118] = 1436;
	mesh[2119] = 1437;
	mesh[2120] = 1438;
	mesh[2121] = 1436;
	mesh[2122] = 1438;
	mesh[2123] = 1439;
	mesh[2124] = 1440;
	mesh[2125] = 1441;
	mesh[2126] = 1442;
	mesh[2127] = 1440;
	mesh[2128] = 1442;
	mesh[2129] = 1443;
	mesh[2130] = 1444;
	mesh[2131] = 1445;
	mesh[2132] = 1446;
	mesh[2133] = 1444;
	mesh[2134] = 1446;
	mesh[2135] = 1447;
	mesh[2136] = 1448;
	mesh[2137] = 1449;
	mesh[2138] = 1450;
	mesh[2139] = 1448;
	mesh[2140] = 1450;
	mesh[2141] = 1451;
	mesh[2142] = 1452;
	mesh[2143] = 1453;
	mesh[2144] = 1454;
	mesh[2145] = 1452;
	mesh[2146] = 1454;
	mesh[2147] = 1455;
	mesh[2148] = 1456;
	mesh[2149] = 1457;
	mesh[2150] = 1458;
	mesh[2151] = 1459;
	mesh[2152] = 1460;
	mesh[2153] = 1461;
	mesh[2154] = 1462;
	mesh[2155] = 1463;
	mesh[2156] = 1464;
	mesh[2157] = 1462;
	mesh[2158] = 1464;
	mesh[2159] = 1465;
	mesh[2160] = 1466;
	mesh[2161] = 1467;
	mesh[2162] = 1468;
	mesh[2163] = 1466;
	mesh[2164] = 1468;
	mesh[2165] = 1469;
	mesh[2166] = 1470;
	mesh[2167] = 1471;
	mesh[2168] = 1472;
	mesh[2169] = 1470;
	mesh[2170] = 1472;
	mesh[2171] = 1473;
	mesh[2172] = 1474;
	mesh[2173] = 1475;
	mesh[2174] = 1476;
	mesh[2175] = 1474;
	mesh[2176] = 1476;
	mesh[2177] = 1477;
	mesh[2178] = 1478;
	mesh[2179] = 1479;
	mesh[2180] = 1480;
	mesh[2181] = 1478;
	mesh[2182] = 1480;
	mesh[2183] = 1481;
	mesh[2184] = 1482;
	mesh[2185] = 1483;
	mesh[2186] = 1484;
	mesh[2187] = 1482;
	mesh[2188] = 1484;
	mesh[2189] = 1485;
	mesh[2190] = 1486;
	mesh[2191] = 1487;
	mesh[2192] = 1488;
	mesh[2193] = 1486;
	mesh[2194] = 1488;
	mesh[2195] = 1489;
	mesh[2196] = 1490;
	mesh[2197] = 1491;
	mesh[2198] = 1492;
	mesh[2199] = 1490;
	mesh[2200] = 1492;
	mesh[2201] = 1493;
	mesh[2202] = 1494;
	mesh[2203] = 1495;
	mesh[2204] = 1496;
	mesh[2205] = 1494;
	mesh[2206] = 1496;
	mesh[2207] = 1497;
	mesh[2208] = 1498;
	mesh[2209] = 1499;
	mesh[2210] = 1500;
	mesh[2211] = 1498;
	mesh[2212] = 1500;
	mesh[2213] = 1501;
	mesh[2214] = 1502;
	mesh[2215] = 1503;
	mesh[2216] = 1504;
	mesh[2217] = 1502;
	mesh[2218] = 1504;
	mesh[2219] = 1505;
	mesh[2220] = 1506;
	mesh[2221] = 1507;
	mesh[2222] = 1508;
	mesh[2223] = 1506;
	mesh[2224] = 1508;
	mesh[2225] = 1509;
	mesh[2226] = 1510;
	mesh[2227] = 1511;
	mesh[2228] = 1512;
	mesh[2229] = 1510;
	mesh[2230] = 1512;
	mesh[2231] = 1513;
	mesh[2232] = 1514;
	mesh[2233] = 1515;
	mesh[2234] = 1516;
	mesh[2235] = 1514;
	mesh[2236] = 1516;
	mesh[2237] = 1517;
	mesh[2238] = 1518;
	mesh[2239] = 1519;
	mesh[2240] = 1520;
	mesh[2241] = 1518;
	mesh[2242] = 1520;
	mesh[2243] = 1521;
	mesh[2244] = 1522;
	mesh[2245] = 1523;
	mesh[2246] = 1524;
	mesh[2247] = 1522;
	mesh[2248] = 1524;
	mesh[2249] = 1525;
	mesh[2250] = 1526;
	mesh[2251] = 1527;
	mesh[2252] = 1528;
	mesh[2253] = 1526;
	mesh[2254] = 1528;
	mesh[2255] = 1529;
	mesh[2256] = 1530;
	mesh[2257] = 1531;
	mesh[2258] = 1532;
	mesh[2259] = 1530;
	mesh[2260] = 1532;
	mesh[2261] = 1533;
	mesh[2262] = 1534;
	mesh[2263] = 1535;
	mesh[2264] = 1536;
	mesh[2265] = 1534;
	mesh[2266] = 1536;
	mesh[2267] = 1537;
	mesh[2268] = 1538;
	mesh[2269] = 1539;
	mesh[2270] = 1540;
	mesh[2271] = 1538;
	mesh[2272] = 1540;
	mesh[2273] = 1541;
	mesh[2274] = 1542;
	mesh[2275] = 1543;
	mesh[2276] = 1544;
	mesh[2277] = 1542;
	mesh[2278] = 1544;
	mesh[2279] = 1545;
	mesh[2280] = 1546;
	mesh[2281] = 1547;
	mesh[2282] = 1548;
	mesh[2283] = 1546;
	mesh[2284] = 1548;
	mesh[2285] = 1549;
	mesh[2286] = 1550;
	mesh[2287] = 1551;
	mesh[2288] = 1552;
	mesh[2289] = 1550;
	mesh[2290] = 1552;
	mesh[2291] = 1553;
	mesh[2292] = 1554;
	mesh[2293] = 1555;
	mesh[2294] = 1556;
	mesh[2295] = 1554;
	mesh[2296] = 1556;
	mesh[2297] = 1557;
	mesh[2298] = 1558;
	mesh[2299] = 1559;
	mesh[2300] = 1560;
	mesh[2301] = 1558;
	mesh[2302] = 1560;
	mesh[2303] = 1561;
	mesh[2304] = 1562;
	mesh[2305] = 1563;
	mesh[2306] = 1564;
	mesh[2307] = 1562;
	mesh[2308] = 1564;
	mesh[2309] = 1565;
	mesh[2310] = 1566;
	mesh[2311] = 1567;
	mesh[2312] = 1568;
	mesh[2313] = 1566;
	mesh[2314] = 1568;
	mesh[2315] = 1569;
	mesh[2316] = 1570;
	mesh[2317] = 1571;
	mesh[2318] = 1572;
	mesh[2319] = 1570;
	mesh[2320] = 1572;
	mesh[2321] = 1573;
	mesh[2322] = 1574;
	mesh[2323] = 1575;
	mesh[2324] = 1576;
	mesh[2325] = 1574;
	mesh[2326] = 1576;
	mesh[2327] = 1577;
	mesh[2328] = 1578;
	mesh[2329] = 1579;
	mesh[2330] = 1580;
	mesh[2331] = 1578;
	mesh[2332] = 1580;
	mesh[2333] = 1581;
	mesh[2334] = 1582;
	mesh[2335] = 1583;
	mesh[2336] = 1584;
	mesh[2337] = 1582;
	mesh[2338] = 1584;
	mesh[2339] = 1585;
	mesh[2340] = 1586;
	mesh[2341] = 1587;
	mesh[2342] = 1588;
	mesh[2343] = 1586;
	mesh[2344] = 1588;
	mesh[2345] = 1589;
	mesh[2346] = 1590;
	mesh[2347] = 1591;
	mesh[2348] = 1592;
	mesh[2349] = 1590;
	mesh[2350] = 1592;
	mesh[2351] = 1593;
	mesh[2352] = 1594;
	mesh[2353] = 1595;
	mesh[2354] = 1596;
	mesh[2355] = 1594;
	mesh[2356] = 1596;
	mesh[2357] = 1597;
	mesh[2358] = 1598;
	mesh[2359] = 1599;
	mesh[2360] = 1600;
	mesh[2361] = 1598;
	mesh[2362] = 1600;
	mesh[2363] = 1601;
	mesh[2364] = 1602;
	mesh[2365] = 1603;
	mesh[2366] = 1604;
	mesh[2367] = 1602;
	mesh[2368] = 1604;
	mesh[2369] = 1605;
	mesh[2370] = 1606;
	mesh[2371] = 1607;
	mesh[2372] = 1608;
	mesh[2373] = 1606;
	mesh[2374] = 1608;
	mesh[2375] = 1609;
	mesh[2376] = 1610;
	mesh[2377] = 1611;
	mesh[2378] = 1612;
	mesh[2379] = 1610;
	mesh[2380] = 1612;
	mesh[2381] = 1613;
	mesh[2382] = 1614;
	mesh[2383] = 1615;
	mesh[2384] = 1616;
	mesh[2385] = 1614;
	mesh[2386] = 1616;
	mesh[2387] = 1617;
	mesh[2388] = 1618;
	mesh[2389] = 1619;
	mesh[2390] = 1620;
	mesh[2391] = 1618;
	mesh[2392] = 1620;
	mesh[2393] = 1621;
	mesh[2394] = 1622;
	mesh[2395] = 1623;
	mesh[2396] = 1624;
	mesh[2397] = 1622;
	mesh[2398] = 1624;
	mesh[2399] = 1625;
	mesh[2400] = 1626;
	mesh[2401] = 1627;
	mesh[2402] = 1628;
	mesh[2403] = 1626;
	mesh[2404] = 1628;
	mesh[2405] = 1629;
	mesh[2406] = 1630;
	mesh[2407] = 1631;
	mesh[2408] = 1632;
	mesh[2409] = 1630;
	mesh[2410] = 1632;
	mesh[2411] = 1633;
	mesh[2412] = 1634;
	mesh[2413] = 1635;
	mesh[2414] = 1636;
	mesh[2415] = 1634;
	mesh[2416] = 1636;
	mesh[2417] = 1637;
	mesh[2418] = 1638;
	mesh[2419] = 1639;
	mesh[2420] = 1640;
	mesh[2421] = 1638;
	mesh[2422] = 1640;
	mesh[2423] = 1641;
	mesh[2424] = 1642;
	mesh[2425] = 1643;
	mesh[2426] = 1644;
	mesh[2427] = 1642;
	mesh[2428] = 1644;
	mesh[2429] = 1645;
	mesh[2430] = 1646;
	mesh[2431] = 1647;
	mesh[2432] = 1648;
	mesh[2433] = 1646;
	mesh[2434] = 1648;
	mesh[2435] = 1649;
	mesh[2436] = 1650;
	mesh[2437] = 1651;
	mesh[2438] = 1652;
	mesh[2439] = 1650;
	mesh[2440] = 1652;
	mesh[2441] = 1653;
	mesh[2442] = 1654;
	mesh[2443] = 1655;
	mesh[2444] = 1656;
	mesh[2445] = 1657;
	mesh[2446] = 1658;
	mesh[2447] = 1659;
	mesh[2448] = 1660;
	mesh[2449] = 1661;
	mesh[2450] = 1662;
	mesh[2451] = 1660;
	mesh[2452] = 1662;
	mesh[2453] = 1663;
	mesh[2454] = 1664;
	mesh[2455] = 1665;
	mesh[2456] = 1666;
	mesh[2457] = 1664;
	mesh[2458] = 1666;
	mesh[2459] = 1667;
	mesh[2460] = 1668;
	mesh[2461] = 1669;
	mesh[2462] = 1670;
	mesh[2463] = 1668;
	mesh[2464] = 1670;
	mesh[2465] = 1671;
	mesh[2466] = 1672;
	mesh[2467] = 1673;
	mesh[2468] = 1674;
	mesh[2469] = 1672;
	mesh[2470] = 1674;
	mesh[2471] = 1675;
	mesh[2472] = 1676;
	mesh[2473] = 1677;
	mesh[2474] = 1678;
	mesh[2475] = 1676;
	mesh[2476] = 1678;
	mesh[2477] = 1679;
	mesh[2478] = 1680;
	mesh[2479] = 1681;
	mesh[2480] = 1682;
	mesh[2481] = 1680;
	mesh[2482] = 1682;
	mesh[2483] = 1683;
	mesh[2484] = 1684;
	mesh[2485] = 1685;
	mesh[2486] = 1686;
	mesh[2487] = 1684;
	mesh[2488] = 1686;
	mesh[2489] = 1687;
	mesh[2490] = 1688;
	mesh[2491] = 1689;
	mesh[2492] = 1690;
	mesh[2493] = 1688;
	mesh[2494] = 1690;
	mesh[2495] = 1691;
	mesh[2496] = 1692;
	mesh[2497] = 1693;
	mesh[2498] = 1694;
	mesh[2499] = 1692;
	mesh[2500] = 1694;
	mesh[2501] = 1695;
	mesh[2502] = 1696;
	mesh[2503] = 1697;
	mesh[2504] = 1698;
	mesh[2505] = 1696;
	mesh[2506] = 1698;
	mesh[2507] = 1699;
	mesh[2508] = 1700;
	mesh[2509] = 1701;
	mesh[2510] = 1702;
	mesh[2511] = 1700;
	mesh[2512] = 1702;
	mesh[2513] = 1703;
	mesh[2514] = 1704;
	mesh[2515] = 1705;
	mesh[2516] = 1706;
	mesh[2517] = 1704;
	mesh[2518] = 1706;
	mesh[2519] = 1707;
	mesh[2520] = 1708;
	mesh[2521] = 1709;
	mesh[2522] = 1710;
	mesh[2523] = 1708;
	mesh[2524] = 1710;
	mesh[2525] = 1711;
	mesh[2526] = 1712;
	mesh[2527] = 1713;
	mesh[2528] = 1714;
	mesh[2529] = 1712;
	mesh[2530] = 1714;
	mesh[2531] = 1715;
	mesh[2532] = 1716;
	mesh[2533] = 1717;
	mesh[2534] = 1718;
	mesh[2535] = 1716;
	mesh[2536] = 1718;
	mesh[2537] = 1719;
	mesh[2538] = 1720;
	mesh[2539] = 1721;
	mesh[2540] = 1722;
	mesh[2541] = 1720;
	mesh[2542] = 1722;
	mesh[2543] = 1723;
	mesh[2544] = 1724;
	mesh[2545] = 1725;
	mesh[2546] = 1726;
	mesh[2547] = 1724;
	mesh[2548] = 1726;
	mesh[2549] = 1727;
	mesh[2550] = 1728;
	mesh[2551] = 1729;
	mesh[2552] = 1730;
	mesh[2553] = 1728;
	mesh[2554] = 1730;
	mesh[2555] = 1731;
	mesh[2556] = 1732;
	mesh[2557] = 1733;
	mesh[2558] = 1734;
	mesh[2559] = 1732;
	mesh[2560] = 1734;
	mesh[2561] = 1735;
	mesh[2562] = 1736;
	mesh[2563] = 1737;
	mesh[2564] = 1738;
	mesh[2565] = 1736;
	mesh[2566] = 1738;
	mesh[2567] = 1739;
	mesh[2568] = 1740;
	mesh[2569] = 1741;
	mesh[2570] = 1742;
	mesh[2571] = 1740;
	mesh[2572] = 1742;
	mesh[2573] = 1743;
	mesh[2574] = 1744;
	mesh[2575] = 1745;
	mesh[2576] = 1746;
	mesh[2577] = 1744;
	mesh[2578] = 1746;
	mesh[2579] = 1747;
	mesh[2580] = 1748;
	mesh[2581] = 1749;
	mesh[2582] = 1750;
	mesh[2583] = 1748;
	mesh[2584] = 1750;
	mesh[2585] = 1751;
	mesh[2586] = 1752;
	mesh[2587] = 1753;
	mesh[2588] = 1754;
	mesh[2589] = 1752;
	mesh[2590] = 1754;
	mesh[2591] = 1755;
	mesh[2592] = 1756;
	mesh[2593] = 1757;
	mesh[2594] = 1758;
	mesh[2595] = 1756;
	mesh[2596] = 1758;
	mesh[2597] = 1759;
	mesh[2598] = 1760;
	mesh[2599] = 1761;
	mesh[2600] = 1762;
	mesh[2601] = 1760;
	mesh[2602] = 1762;
	mesh[2603] = 1763;
	mesh[2604] = 1764;
	mesh[2605] = 1765;
	mesh[2606] = 1766;
	mesh[2607] = 1764;
	mesh[2608] = 1766;
	mesh[2609] = 1767;
	mesh[2610] = 1768;
	mesh[2611] = 1769;
	mesh[2612] = 1770;
	mesh[2613] = 1768;
	mesh[2614] = 1770;
	mesh[2615] = 1771;
	mesh[2616] = 1772;
	mesh[2617] = 1773;
	mesh[2618] = 1774;
	mesh[2619] = 1772;
	mesh[2620] = 1774;
	mesh[2621] = 1775;
	mesh[2622] = 1776;
	mesh[2623] = 1777;
	mesh[2624] = 1778;
	mesh[2625] = 1776;
	mesh[2626] = 1778;
	mesh[2627] = 1779;
	mesh[2628] = 1780;
	mesh[2629] = 1781;
	mesh[2630] = 1782;
	mesh[2631] = 1780;
	mesh[2632] = 1782;
	mesh[2633] = 1783;
	mesh[2634] = 1784;
	mesh[2635] = 1785;
	mesh[2636] = 1786;
	mesh[2637] = 1784;
	mesh[2638] = 1786;
	mesh[2639] = 1787;
	mesh[2640] = 1788;
	mesh[2641] = 1789;
	mesh[2642] = 1790;
	mesh[2643] = 1788;
	mesh[2644] = 1790;
	mesh[2645] = 1791;
	mesh[2646] = 1792;
	mesh[2647] = 1793;
	mesh[2648] = 1794;
	mesh[2649] = 1792;
	mesh[2650] = 1794;
	mesh[2651] = 1795;
	mesh[2652] = 1796;
	mesh[2653] = 1797;
	mesh[2654] = 1798;
	mesh[2655] = 1796;
	mesh[2656] = 1798;
	mesh[2657] = 1799;
	mesh[2658] = 1800;
	mesh[2659] = 1801;
	mesh[2660] = 1802;
	mesh[2661] = 1800;
	mesh[2662] = 1802;
	mesh[2663] = 1803;
	mesh[2664] = 1804;
	mesh[2665] = 1805;
	mesh[2666] = 1806;
	mesh[2667] = 1804;
	mesh[2668] = 1806;
	mesh[2669] = 1807;
	mesh[2670] = 1808;
	mesh[2671] = 1809;
	mesh[2672] = 1810;
	mesh[2673] = 1808;
	mesh[2674] = 1810;
	mesh[2675] = 1811;
	mesh[2676] = 1812;
	mesh[2677] = 1813;
	mesh[2678] = 1814;
	mesh[2679] = 1812;
	mesh[2680] = 1814;
	mesh[2681] = 1815;
	mesh[2682] = 1816;
	mesh[2683] = 1817;
	mesh[2684] = 1818;
	mesh[2685] = 1816;
	mesh[2686] = 1818;
	mesh[2687] = 1819;
	mesh[2688] = 1820;
	mesh[2689] = 1821;
	mesh[2690] = 1822;
	mesh[2691] = 1820;
	mesh[2692] = 1822;
	mesh[2693] = 1823;
	mesh[2694] = 1824;
	mesh[2695] = 1825;
	mesh[2696] = 1826;
	mesh[2697] = 1824;
	mesh[2698] = 1826;
	mesh[2699] = 1827;
	mesh[2700] = 1831;
	mesh[2701] = 1828;
	mesh[2702] = 1829;
	mesh[2703] = 1831;
	mesh[2704] = 1829;
	mesh[2705] = 1830;
	mesh[2706] = 1835;
	mesh[2707] = 1832;
	mesh[2708] = 1833;
	mesh[2709] = 1835;
	mesh[2710] = 1833;
	mesh[2711] = 1834;
	mesh[2712] = 1838;
	mesh[2713] = 1839;
	mesh[2714] = 1836;
	mesh[2715] = 1838;
	mesh[2716] = 1836;
	mesh[2717] = 1837;
	mesh[2718] = 1840;
	mesh[2719] = 1841;
	mesh[2720] = 1842;
	mesh[2721] = 1840;
	mesh[2722] = 1842;
	mesh[2723] = 1843;
	mesh[2724] = 1844;
	mesh[2725] = 1845;
	mesh[2726] = 1846;
	mesh[2727] = 1844;
	mesh[2728] = 1846;
	mesh[2729] = 1847;
	mesh[2730] = 1848;
	mesh[2731] = 1849;
	mesh[2732] = 1850;
	mesh[2733] = 1848;
	mesh[2734] = 1850;
	mesh[2735] = 1851;
	mesh[2736] = 1852;
	mesh[2737] = 1853;
	mesh[2738] = 1854;
	mesh[2739] = 1852;
	mesh[2740] = 1854;
	mesh[2741] = 1855;
	mesh[2742] = 1856;
	mesh[2743] = 1857;
	mesh[2744] = 1858;
	mesh[2745] = 1856;
	mesh[2746] = 1858;
	mesh[2747] = 1859;
	mesh[2748] = 1860;
	mesh[2749] = 1861;
	mesh[2750] = 1862;
	mesh[2751] = 1860;
	mesh[2752] = 1862;
	mesh[2753] = 1863;
	mesh[2754] = 1864;
	mesh[2755] = 1865;
	mesh[2756] = 1866;
	mesh[2757] = 1864;
	mesh[2758] = 1866;
	mesh[2759] = 1867;
	mesh[2760] = 1868;
	mesh[2761] = 1869;
	mesh[2762] = 1870;
	mesh[2763] = 1871;
	mesh[2764] = 1872;
	mesh[2765] = 1873;
	mesh[2766] = 1874;
	mesh[2767] = 1875;
	mesh[2768] = 1876;
	mesh[2769] = 1874;
	mesh[2770] = 1876;
	mesh[2771] = 1877;
	mesh[2772] = 1878;
	mesh[2773] = 1879;
	mesh[2774] = 1880;
	mesh[2775] = 1878;
	mesh[2776] = 1880;
	mesh[2777] = 1881;
	mesh[2778] = 1882;
	mesh[2779] = 1883;
	mesh[2780] = 1884;
	mesh[2781] = 1882;
	mesh[2782] = 1884;
	mesh[2783] = 1885;
	mesh[2784] = 1886;
	mesh[2785] = 1887;
	mesh[2786] = 1888;
	mesh[2787] = 1886;
	mesh[2788] = 1888;
	mesh[2789] = 1889;
	mesh[2790] = 1890;
	mesh[2791] = 1891;
	mesh[2792] = 1892;
	mesh[2793] = 1890;
	mesh[2794] = 1892;
	mesh[2795] = 1893;
	mesh[2796] = 1894;
	mesh[2797] = 1895;
	mesh[2798] = 1896;
	mesh[2799] = 1894;
	mesh[2800] = 1896;
	mesh[2801] = 1897;
	mesh[2802] = 1898;
	mesh[2803] = 1899;
	mesh[2804] = 1900;
	mesh[2805] = 1898;
	mesh[2806] = 1900;
	mesh[2807] = 1901;
	mesh[2808] = 1902;
	mesh[2809] = 1903;
	mesh[2810] = 1904;
	mesh[2811] = 1902;
	mesh[2812] = 1904;
	mesh[2813] = 1905;
	mesh[2814] = 1906;
	mesh[2815] = 1907;
	mesh[2816] = 1908;
	mesh[2817] = 1906;
	mesh[2818] = 1908;
	mesh[2819] = 1909;
	mesh[2820] = 1910;
	mesh[2821] = 1911;
	mesh[2822] = 1912;
	mesh[2823] = 1910;
	mesh[2824] = 1912;
	mesh[2825] = 1913;
	mesh[2826] = 1914;
	mesh[2827] = 1915;
	mesh[2828] = 1916;
	mesh[2829] = 1914;
	mesh[2830] = 1916;
	mesh[2831] = 1917;
	mesh[2832] = 1918;
	mesh[2833] = 1919;
	mesh[2834] = 1920;
	mesh[2835] = 1918;
	mesh[2836] = 1920;
	mesh[2837] = 1921;
	mesh[2838] = 1922;
	mesh[2839] = 1923;
	mesh[2840] = 1924;
	mesh[2841] = 1922;
	mesh[2842] = 1924;
	mesh[2843] = 1925;
	mesh[2844] = 1926;
	mesh[2845] = 1927;
	mesh[2846] = 1928;
	mesh[2847] = 1926;
	mesh[2848] = 1928;
	mesh[2849] = 1929;
	mesh[2850] = 1930;
	mesh[2851] = 1931;
	mesh[2852] = 1932;
	mesh[2853] = 1930;
	mesh[2854] = 1932;
	mesh[2855] = 1933;
	mesh[2856] = 1934;
	mesh[2857] = 1935;
	mesh[2858] = 1936;
	mesh[2859] = 1934;
	mesh[2860] = 1936;
	mesh[2861] = 1937;
	mesh[2862] = 1938;
	mesh[2863] = 1939;
	mesh[2864] = 1940;
	mesh[2865] = 1941;
	mesh[2866] = 1942;
	mesh[2867] = 1943;
	mesh[2868] = 1944;
	mesh[2869] = 1945;
	mesh[2870] = 1946;
	mesh[2871] = 1944;
	mesh[2872] = 1946;
	mesh[2873] = 1947;
	mesh[2874] = 1948;
	mesh[2875] = 1949;
	mesh[2876] = 1950;
	mesh[2877] = 1948;
	mesh[2878] = 1950;
	mesh[2879] = 1951;
	mesh[2880] = 1952;
	mesh[2881] = 1953;
	mesh[2882] = 1954;
	mesh[2883] = 1952;
	mesh[2884] = 1954;
	mesh[2885] = 1955;
	mesh[2886] = 1956;
	mesh[2887] = 1957;
	mesh[2888] = 1958;
	mesh[2889] = 1956;
	mesh[2890] = 1958;
	mesh[2891] = 1959;
	mesh[2892] = 1960;
	mesh[2893] = 1961;
	mesh[2894] = 1962;
	mesh[2895] = 1960;
	mesh[2896] = 1962;
	mesh[2897] = 1963;
	mesh[2898] = 1964;
	mesh[2899] = 1965;
	mesh[2900] = 1966;
	mesh[2901] = 1964;
	mesh[2902] = 1966;
	mesh[2903] = 1967;

	// OpenGL.
	_size = (unsigned int)mesh.size();

	glGenVertexArrays(1, &_vao);
	glBindVertexArray(_vao);

	std::vector< unsigned int > vbos;
	vbos.resize(3);
	glGenBuffers(3, vbos.data());

	glBindBuffer(GL_ARRAY_BUFFER, vbos[0]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float)* vertices.size(),
		vertices.data(), GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, vbos[1]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float)* normals.size(),
		normals.data(), GL_STATIC_DRAW);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(1);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vbos[2]);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(int)* _size,
		mesh.data(), GL_STATIC_DRAW);
	glBindVertexArray(0);

	vertices.clear();
	normals.clear();
	mesh.clear();

}
