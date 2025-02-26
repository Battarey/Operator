#include "Videos.h"

Video::Video() {
	textures[0].loadFromFile("prew_animation_screenshots\\prew_animation_000.jpg");
	textures[1].loadFromFile("prew_animation_screenshots\\prew_animation_001.jpg");
	textures[2].loadFromFile("prew_animation_screenshots\\prew_animation_002.jpg");
	textures[3].loadFromFile("prew_animation_screenshots\\prew_animation_003.jpg");
	textures[4].loadFromFile("prew_animation_screenshots\\prew_animation_004.jpg");
	textures[5].loadFromFile("prew_animation_screenshots\\prew_animation_005.jpg");
	textures[6].loadFromFile("prew_animation_screenshots\\prew_animation_006.jpg");
	textures[7].loadFromFile("prew_animation_screenshots\\prew_animation_007.jpg");
	textures[8].loadFromFile("prew_animation_screenshots\\prew_animation_008.jpg");
	textures[9].loadFromFile("prew_animation_screenshots\\prew_animation_009.jpg");
	textures[10].loadFromFile("prew_animation_screenshots\\prew_animation_010.jpg");
	textures[11].loadFromFile("prew_animation_screenshots\\prew_animation_011.jpg");
	textures[12].loadFromFile("prew_animation_screenshots\\prew_animation_012.jpg");
	textures[13].loadFromFile("prew_animation_screenshots\\prew_animation_013.jpg");
	textures[14].loadFromFile("prew_animation_screenshots\\prew_animation_014.jpg");
	textures[15].loadFromFile("prew_animation_screenshots\\prew_animation_015.jpg");
	textures[16].loadFromFile("prew_animation_screenshots\\prew_animation_016.jpg");
	textures[17].loadFromFile("prew_animation_screenshots\\prew_animation_017.jpg");
	textures[18].loadFromFile("prew_animation_screenshots\\prew_animation_018.jpg");
	textures[19].loadFromFile("prew_animation_screenshots\\prew_animation_019.jpg");
	textures[20].loadFromFile("prew_animation_screenshots\\prew_animation_020.jpg");
	textures[21].loadFromFile("prew_animation_screenshots\\prew_animation_021.jpg");
	textures[22].loadFromFile("prew_animation_screenshots\\prew_animation_022.jpg");
	textures[23].loadFromFile("prew_animation_screenshots\\prew_animation_023.jpg");
	textures[24].loadFromFile("prew_animation_screenshots\\prew_animation_024.jpg");
	textures[25].loadFromFile("prew_animation_screenshots\\prew_animation_025.jpg");
	textures[26].loadFromFile("prew_animation_screenshots\\prew_animation_026.jpg");
	textures[27].loadFromFile("prew_animation_screenshots\\prew_animation_027.jpg");
	textures[28].loadFromFile("prew_animation_screenshots\\prew_animation_028.jpg");
	textures[29].loadFromFile("prew_animation_screenshots\\prew_animation_029.jpg");
}
void Video::Next_cadr() {
	Time time = clock.getElapsedTime();
	int As = time.asMicroseconds();
	if (As > 1000000 / 15) {
		cadr++;
		if (cadr == 30) { cadr = 0; }
		switch (cadr) {
		case 0: { sprite.setTexture(textures[0]); break; }
		case 1: { sprite.setTexture(textures[1]); break; }
		case 2: { sprite.setTexture(textures[2]); break; }
		case 3: { sprite.setTexture(textures[3]); break; }
		case 4: { sprite.setTexture(textures[4]); break; }
		case 5: { sprite.setTexture(textures[5]); break; }
		case 6: { sprite.setTexture(textures[6]); break; }
		case 7: { sprite.setTexture(textures[7]); break; }
		case 8: { sprite.setTexture(textures[8]); break; }
		case 9: { sprite.setTexture(textures[9]); break; }
		case 10: { sprite.setTexture(textures[10]); break; }
		case 11: { sprite.setTexture(textures[11]); break; }
		case 12: { sprite.setTexture(textures[12]); break; }
		case 13: { sprite.setTexture(textures[13]); break; }
		case 14: { sprite.setTexture(textures[14]); break; }
		case 15: { sprite.setTexture(textures[15]); break; }
		case 16: { sprite.setTexture(textures[16]); break; }
		case 17: { sprite.setTexture(textures[17]); break; }
		case 18: { sprite.setTexture(textures[18]); break; }
		case 19: { sprite.setTexture(textures[19]); break; }
		case 20: { sprite.setTexture(textures[20]); break; }
		case 21: { sprite.setTexture(textures[21]); break; }
		case 22: { sprite.setTexture(textures[22]); break; }
		case 23: { sprite.setTexture(textures[23]); break; }
		case 24: { sprite.setTexture(textures[24]); break; }
		case 25: { sprite.setTexture(textures[25]); break; }
		case 26: { sprite.setTexture(textures[26]); break; }
		case 27: { sprite.setTexture(textures[27]); break; }
		case 28: { sprite.setTexture(textures[28]); break; }
		case 29: { sprite.setTexture(textures[29]); break; }
		default: { break; }
		}
		clock.restart();
	}
}

Loading::Loading() {
	textures_Load[0].loadFromFile("Animations\\Loading\\gifgit-0.jpg");
	textures_Load[1].loadFromFile("Animations\\Loading\\gifgit-1.jpg");
	textures_Load[2].loadFromFile("Animations\\Loading\\gifgit-2.jpg");
	textures_Load[3].loadFromFile("Animations\\Loading\\gifgit-3.jpg");
	textures_Load[4].loadFromFile("Animations\\Loading\\gifgit-4.jpg");
	textures_Load[5].loadFromFile("Animations\\Loading\\gifgit-5.jpg");
	textures_Load[6].loadFromFile("Animations\\Loading\\gifgit-6.jpg");
	textures_Load[7].loadFromFile("Animations\\Loading\\gifgit-7.jpg");
	textures_Load[8].loadFromFile("Animations\\Loading\\gifgit-8.jpg");
	textures_Load[9].loadFromFile("Animations\\Loading\\gifgit-9.jpg");
	textures_Load[10].loadFromFile("Animations\\Loading\\gifgit-10.jpg");
	textures_Load[11].loadFromFile("Animations\\Loading\\gifgit-11.jpg");
	textures_Load[12].loadFromFile("Animations\\Loading\\gifgit-12.jpg");
	textures_Load[13].loadFromFile("Animations\\Loading\\gifgit-13.jpg");
	textures_Load[14].loadFromFile("Animations\\Loading\\gifgit-14.jpg");
	textures_Load[15].loadFromFile("Animations\\Loading\\gifgit-15.jpg");
	textures_Load[16].loadFromFile("Animations\\Loading\\gifgit-16.jpg");
	textures_Load[17].loadFromFile("Animations\\Loading\\gifgit-17.jpg");
	textures_Load[18].loadFromFile("Animations\\Loading\\gifgit-18.jpg");
	textures_Load[19].loadFromFile("Animations\\Loading\\gifgit-19.jpg");
	textures_Load[20].loadFromFile("Animations\\Loading\\gifgit-20.jpg");
	textures_Load[21].loadFromFile("Animations\\Loading\\gifgit-21.jpg");
	textures_Load[22].loadFromFile("Animations\\Loading\\gifgit-22.jpg");
	textures_Load[23].loadFromFile("Animations\\Loading\\gifgit-23.jpg");
	textures_Load[24].loadFromFile("Animations\\Loading\\gifgit-24.jpg");
	textures_Load[25].loadFromFile("Animations\\Loading\\gifgit-25.jpg");
	textures_Load[26].loadFromFile("Animations\\Loading\\gifgit-26.jpg");
	textures_Load[27].loadFromFile("Animations\\Loading\\gifgit-27.jpg");
	textures_Load[28].loadFromFile("Animations\\Loading\\gifgit-28.jpg");
	textures_Load[29].loadFromFile("Animations\\Loading\\gifgit-29.jpg");
	textures_Load[30].loadFromFile("Animations\\Loading\\gifgit-30.jpg");
}
void Loading::Next_cadr_load() {
	Time time_Load = clock_Load.getElapsedTime();
	int As_Load = time_Load.asMicroseconds();
	if (As_Load > 1000000 / 15) {
		cadr_Load++;
		if (cadr_Load == 30) { cadr_Load = 0; count_Load += 1; }
		switch (cadr_Load) {
		case 0: { sprite_Load.setTexture(textures_Load[0]); break; }
		case 1: { sprite_Load.setTexture(textures_Load[1]); break; }
		case 2: { sprite_Load.setTexture(textures_Load[2]); break; }
		case 3: { sprite_Load.setTexture(textures_Load[3]); break; }
		case 4: { sprite_Load.setTexture(textures_Load[4]); break; }
		case 5: { sprite_Load.setTexture(textures_Load[5]); break; }
		case 6: { sprite_Load.setTexture(textures_Load[6]); break; }
		case 7: { sprite_Load.setTexture(textures_Load[7]); break; }
		case 8: { sprite_Load.setTexture(textures_Load[8]); break; }
		case 9: { sprite_Load.setTexture(textures_Load[9]); break; }
		case 10: { sprite_Load.setTexture(textures_Load[10]); break; }
		case 11: { sprite_Load.setTexture(textures_Load[11]); break; }
		case 12: { sprite_Load.setTexture(textures_Load[12]); break; }
		case 13: { sprite_Load.setTexture(textures_Load[13]); break; }
		case 14: { sprite_Load.setTexture(textures_Load[14]); break; }
		case 15: { sprite_Load.setTexture(textures_Load[15]); break; }
		case 16: { sprite_Load.setTexture(textures_Load[16]); break; }
		case 17: { sprite_Load.setTexture(textures_Load[17]); break; }
		case 18: { sprite_Load.setTexture(textures_Load[18]); break; }
		case 19: { sprite_Load.setTexture(textures_Load[19]); break; }
		case 20: { sprite_Load.setTexture(textures_Load[20]); break; }
		case 21: { sprite_Load.setTexture(textures_Load[21]); break; }
		case 22: { sprite_Load.setTexture(textures_Load[22]); break; }
		case 23: { sprite_Load.setTexture(textures_Load[23]); break; }
		case 24: { sprite_Load.setTexture(textures_Load[24]); break; }
		case 25: { sprite_Load.setTexture(textures_Load[25]); break; }
		case 26: { sprite_Load.setTexture(textures_Load[26]); break; }
		case 27: { sprite_Load.setTexture(textures_Load[27]); break; }
		case 28: { sprite_Load.setTexture(textures_Load[28]); break; }
		case 29: { sprite_Load.setTexture(textures_Load[29]); break; }
		case 30: { sprite_Load.setTexture(textures_Load[30]); break; }
		default: { break; }
		}
		clock_Load.restart();
	}
}

// Через видос не получилось сделать, пришлось по кадрово :(
About_video::About_video() {
	textures_about[0].loadFromFile("Video_About\\About_video_000.jpg");
	textures_about[1].loadFromFile("Video_About\\About_video_001.jpg");
	textures_about[2].loadFromFile("Video_About\\About_video_002.jpg");
	textures_about[3].loadFromFile("Video_About\\About_video_003.jpg");
	textures_about[4].loadFromFile("Video_About\\About_video_004.jpg");
	textures_about[5].loadFromFile("Video_About\\About_video_005.jpg");
	textures_about[6].loadFromFile("Video_About\\About_video_006.jpg");
	textures_about[7].loadFromFile("Video_About\\About_video_007.jpg");
	textures_about[8].loadFromFile("Video_About\\About_video_008.jpg");
	textures_about[9].loadFromFile("Video_About\\About_video_009.jpg");
	textures_about[10].loadFromFile("Video_About\\About_video_010.jpg");
	textures_about[11].loadFromFile("Video_About\\About_video_011.jpg");
	textures_about[12].loadFromFile("Video_About\\About_video_012.jpg");
	textures_about[13].loadFromFile("Video_About\\About_video_013.jpg");
	textures_about[14].loadFromFile("Video_About\\About_video_014.jpg");
	textures_about[15].loadFromFile("Video_About\\About_video_015.jpg");
	textures_about[16].loadFromFile("Video_About\\About_video_016.jpg");
	textures_about[17].loadFromFile("Video_About\\About_video_017.jpg");
	textures_about[18].loadFromFile("Video_About\\About_video_018.jpg");
	textures_about[19].loadFromFile("Video_About\\About_video_019.jpg");
	textures_about[20].loadFromFile("Video_About\\About_video_020.jpg");
	textures_about[21].loadFromFile("Video_About\\About_video_021.jpg");
	textures_about[22].loadFromFile("Video_About\\About_video_022.jpg");
	textures_about[23].loadFromFile("Video_About\\About_video_023.jpg");
	textures_about[24].loadFromFile("Video_About\\About_video_024.jpg");
	textures_about[25].loadFromFile("Video_About\\About_video_025.jpg");
	textures_about[26].loadFromFile("Video_About\\About_video_026.jpg");
	textures_about[27].loadFromFile("Video_About\\About_video_027.jpg");
	textures_about[28].loadFromFile("Video_About\\About_video_028.jpg");
	textures_about[29].loadFromFile("Video_About\\About_video_029.jpg");
	textures_about[30].loadFromFile("Video_About\\About_video_030.jpg");
	textures_about[31].loadFromFile("Video_About\\About_video_031.jpg");
	textures_about[32].loadFromFile("Video_About\\About_video_032.jpg");
	textures_about[33].loadFromFile("Video_About\\About_video_033.jpg");
	textures_about[34].loadFromFile("Video_About\\About_video_034.jpg");
	textures_about[35].loadFromFile("Video_About\\About_video_035.jpg");
	textures_about[36].loadFromFile("Video_About\\About_video_036.jpg");
	textures_about[37].loadFromFile("Video_About\\About_video_037.jpg");
	textures_about[38].loadFromFile("Video_About\\About_video_038.jpg");
	textures_about[39].loadFromFile("Video_About\\About_video_039.jpg");
	textures_about[40].loadFromFile("Video_About\\About_video_040.jpg");
	textures_about[41].loadFromFile("Video_About\\About_video_041.jpg");
	textures_about[42].loadFromFile("Video_About\\About_video_042.jpg");
	textures_about[43].loadFromFile("Video_About\\About_video_043.jpg");
	textures_about[44].loadFromFile("Video_About\\About_video_044.jpg");
	textures_about[45].loadFromFile("Video_About\\About_video_045.jpg");
	textures_about[46].loadFromFile("Video_About\\About_video_046.jpg");
	textures_about[47].loadFromFile("Video_About\\About_video_047.jpg");
	textures_about[48].loadFromFile("Video_About\\About_video_048.jpg");
	textures_about[49].loadFromFile("Video_About\\About_video_049.jpg");
	textures_about[50].loadFromFile("Video_About\\About_video_050.jpg");
	textures_about[51].loadFromFile("Video_About\\About_video_051.jpg");
	textures_about[52].loadFromFile("Video_About\\About_video_052.jpg");
	textures_about[53].loadFromFile("Video_About\\About_video_053.jpg");
	textures_about[54].loadFromFile("Video_About\\About_video_054.jpg");
	textures_about[55].loadFromFile("Video_About\\About_video_055.jpg");
	textures_about[56].loadFromFile("Video_About\\About_video_056.jpg");
	textures_about[57].loadFromFile("Video_About\\About_video_057.jpg");
	textures_about[58].loadFromFile("Video_About\\About_video_058.jpg");
	textures_about[59].loadFromFile("Video_About\\About_video_059.jpg");
	textures_about[60].loadFromFile("Video_About\\About_video_060.jpg");
	textures_about[61].loadFromFile("Video_About\\About_video_061.jpg");
	textures_about[62].loadFromFile("Video_About\\About_video_062.jpg");
	textures_about[63].loadFromFile("Video_About\\About_video_063.jpg");
	textures_about[64].loadFromFile("Video_About\\About_video_064.jpg");
	textures_about[65].loadFromFile("Video_About\\About_video_065.jpg");
	textures_about[66].loadFromFile("Video_About\\About_video_066.jpg");
	textures_about[67].loadFromFile("Video_About\\About_video_067.jpg");
	textures_about[68].loadFromFile("Video_About\\About_video_068.jpg");
	textures_about[69].loadFromFile("Video_About\\About_video_069.jpg");
	textures_about[70].loadFromFile("Video_About\\About_video_070.jpg");
	textures_about[71].loadFromFile("Video_About\\About_video_071.jpg");
	textures_about[72].loadFromFile("Video_About\\About_video_072.jpg");
	textures_about[73].loadFromFile("Video_About\\About_video_073.jpg");
	textures_about[74].loadFromFile("Video_About\\About_video_074.jpg");
	textures_about[75].loadFromFile("Video_About\\About_video_075.jpg");
	textures_about[76].loadFromFile("Video_About\\About_video_076.jpg");
	textures_about[77].loadFromFile("Video_About\\About_video_077.jpg");
	textures_about[78].loadFromFile("Video_About\\About_video_078.jpg");
	textures_about[79].loadFromFile("Video_About\\About_video_079.jpg");
	textures_about[80].loadFromFile("Video_About\\About_video_080.jpg");
	textures_about[81].loadFromFile("Video_About\\About_video_081.jpg");
	textures_about[82].loadFromFile("Video_About\\About_video_082.jpg");
	textures_about[83].loadFromFile("Video_About\\About_video_083.jpg");
	textures_about[84].loadFromFile("Video_About\\About_video_084.jpg");
	textures_about[85].loadFromFile("Video_About\\About_video_085.jpg");
	textures_about[86].loadFromFile("Video_About\\About_video_086.jpg");
	textures_about[87].loadFromFile("Video_About\\About_video_087.jpg");
	textures_about[88].loadFromFile("Video_About\\About_video_088.jpg");
	textures_about[89].loadFromFile("Video_About\\About_video_089.jpg");
	textures_about[90].loadFromFile("Video_About\\About_video_090.jpg");
	textures_about[91].loadFromFile("Video_About\\About_video_091.jpg");
	textures_about[92].loadFromFile("Video_About\\About_video_092.jpg");
	textures_about[93].loadFromFile("Video_About\\About_video_093.jpg");
	textures_about[94].loadFromFile("Video_About\\About_video_094.jpg");
	textures_about[95].loadFromFile("Video_About\\About_video_095.jpg");
	textures_about[96].loadFromFile("Video_About\\About_video_096.jpg");
	textures_about[97].loadFromFile("Video_About\\About_video_097.jpg");
	textures_about[98].loadFromFile("Video_About\\About_video_098.jpg");
	textures_about[99].loadFromFile("Video_About\\About_video_099.jpg");
	textures_about[100].loadFromFile("Video_About\\About_video_100.jpg");
	textures_about[101].loadFromFile("Video_About\\About_video_101.jpg");
	textures_about[102].loadFromFile("Video_About\\About_video_102.jpg");
	textures_about[103].loadFromFile("Video_About\\About_video_103.jpg");
	textures_about[104].loadFromFile("Video_About\\About_video_104.jpg");
	textures_about[105].loadFromFile("Video_About\\About_video_105.jpg");
	textures_about[106].loadFromFile("Video_About\\About_video_106.jpg");
	textures_about[107].loadFromFile("Video_About\\About_video_107.jpg");
	textures_about[108].loadFromFile("Video_About\\About_video_108.jpg");
	textures_about[109].loadFromFile("Video_About\\About_video_109.jpg");
	textures_about[110].loadFromFile("Video_About\\About_video_110.jpg");
	textures_about[111].loadFromFile("Video_About\\About_video_111.jpg");
	textures_about[112].loadFromFile("Video_About\\About_video_112.jpg");
	textures_about[113].loadFromFile("Video_About\\About_video_113.jpg");
	textures_about[114].loadFromFile("Video_About\\About_video_114.jpg");
	textures_about[115].loadFromFile("Video_About\\About_video_115.jpg");
	textures_about[116].loadFromFile("Video_About\\About_video_116.jpg");
	textures_about[117].loadFromFile("Video_About\\About_video_117.jpg");
	textures_about[118].loadFromFile("Video_About\\About_video_118.jpg");
	textures_about[119].loadFromFile("Video_About\\About_video_119.jpg");
	textures_about[120].loadFromFile("Video_About\\About_video_120.jpg");
	textures_about[121].loadFromFile("Video_About\\About_video_121.jpg");
	textures_about[122].loadFromFile("Video_About\\About_video_122.jpg");
	textures_about[123].loadFromFile("Video_About\\About_video_123.jpg");
	textures_about[124].loadFromFile("Video_About\\About_video_124.jpg");
	textures_about[125].loadFromFile("Video_About\\About_video_125.jpg");
	textures_about[126].loadFromFile("Video_About\\About_video_126.jpg");
	textures_about[127].loadFromFile("Video_About\\About_video_127.jpg");
	textures_about[128].loadFromFile("Video_About\\About_video_128.jpg");
	textures_about[129].loadFromFile("Video_About\\About_video_129.jpg");
	textures_about[130].loadFromFile("Video_About\\About_video_130.jpg");
	textures_about[131].loadFromFile("Video_About\\About_video_131.jpg");
	textures_about[132].loadFromFile("Video_About\\About_video_132.jpg");
	textures_about[133].loadFromFile("Video_About\\About_video_133.jpg");
	textures_about[134].loadFromFile("Video_About\\About_video_134.jpg");
	textures_about[135].loadFromFile("Video_About\\About_video_135.jpg");
	textures_about[136].loadFromFile("Video_About\\About_video_136.jpg");
	textures_about[137].loadFromFile("Video_About\\About_video_137.jpg");
	textures_about[138].loadFromFile("Video_About\\About_video_138.jpg");
	textures_about[139].loadFromFile("Video_About\\About_video_139.jpg");
	textures_about[140].loadFromFile("Video_About\\About_video_140.jpg");
	textures_about[141].loadFromFile("Video_About\\About_video_141.jpg");
	textures_about[142].loadFromFile("Video_About\\About_video_142.jpg");
	textures_about[143].loadFromFile("Video_About\\About_video_143.jpg");
	textures_about[144].loadFromFile("Video_About\\About_video_144.jpg");
	textures_about[145].loadFromFile("Video_About\\About_video_145.jpg");
	textures_about[146].loadFromFile("Video_About\\About_video_146.jpg");
	textures_about[147].loadFromFile("Video_About\\About_video_147.jpg");
	textures_about[148].loadFromFile("Video_About\\About_video_148.jpg");
	textures_about[149].loadFromFile("Video_About\\About_video_149.jpg");
	textures_about[150].loadFromFile("Video_About\\About_video_150.jpg");
	textures_about[151].loadFromFile("Video_About\\About_video_151.jpg");
	textures_about[152].loadFromFile("Video_About\\About_video_152.jpg");
	textures_about[153].loadFromFile("Video_About\\About_video_153.jpg");
	textures_about[154].loadFromFile("Video_About\\About_video_154.jpg");
	textures_about[155].loadFromFile("Video_About\\About_video_155.jpg");
	textures_about[156].loadFromFile("Video_About\\About_video_156.jpg");
	textures_about[157].loadFromFile("Video_About\\About_video_157.jpg");
	textures_about[158].loadFromFile("Video_About\\About_video_158.jpg");
	textures_about[159].loadFromFile("Video_About\\About_video_159.jpg");
	textures_about[160].loadFromFile("Video_About\\About_video_160.jpg");
	textures_about[161].loadFromFile("Video_About\\About_video_161.jpg");
	textures_about[162].loadFromFile("Video_About\\About_video_162.jpg");
	textures_about[163].loadFromFile("Video_About\\About_video_163.jpg");
	textures_about[164].loadFromFile("Video_About\\About_video_164.jpg");
	textures_about[165].loadFromFile("Video_About\\About_video_165.jpg");
	textures_about[166].loadFromFile("Video_About\\About_video_166.jpg");
	textures_about[167].loadFromFile("Video_About\\About_video_167.jpg");
	textures_about[168].loadFromFile("Video_About\\About_video_168.jpg");
	textures_about[169].loadFromFile("Video_About\\About_video_169.jpg");
	textures_about[170].loadFromFile("Video_About\\About_video_170.jpg");
	textures_about[171].loadFromFile("Video_About\\About_video_171.jpg");
	textures_about[172].loadFromFile("Video_About\\About_video_172.jpg");
	textures_about[173].loadFromFile("Video_About\\About_video_173.jpg");
	textures_about[174].loadFromFile("Video_About\\About_video_174.jpg");
	textures_about[175].loadFromFile("Video_About\\About_video_175.jpg");
	textures_about[176].loadFromFile("Video_About\\About_video_176.jpg");
	textures_about[177].loadFromFile("Video_About\\About_video_177.jpg");
	textures_about[178].loadFromFile("Video_About\\About_video_178.jpg");
	textures_about[179].loadFromFile("Video_About\\About_video_179.jpg");
	textures_about[180].loadFromFile("Video_About\\About_video_180.jpg");
	textures_about[181].loadFromFile("Video_About\\About_video_181.jpg");
	textures_about[182].loadFromFile("Video_About\\About_video_182.jpg");
	textures_about[183].loadFromFile("Video_About\\About_video_183.jpg");
	textures_about[184].loadFromFile("Video_About\\About_video_184.jpg");
	textures_about[185].loadFromFile("Video_About\\About_video_185.jpg");
	textures_about[186].loadFromFile("Video_About\\About_video_186.jpg");
	textures_about[187].loadFromFile("Video_About\\About_video_187.jpg");
	textures_about[188].loadFromFile("Video_About\\About_video_188.jpg");
	textures_about[189].loadFromFile("Video_About\\About_video_189.jpg");
	textures_about[190].loadFromFile("Video_About\\About_video_190.jpg");
	textures_about[191].loadFromFile("Video_About\\About_video_191.jpg");
	textures_about[192].loadFromFile("Video_About\\About_video_192.jpg");
	textures_about[193].loadFromFile("Video_About\\About_video_193.jpg");
	textures_about[194].loadFromFile("Video_About\\About_video_194.jpg");
	textures_about[195].loadFromFile("Video_About\\About_video_195.jpg");
	textures_about[196].loadFromFile("Video_About\\About_video_196.jpg");
	textures_about[197].loadFromFile("Video_About\\About_video_197.jpg");
	textures_about[198].loadFromFile("Video_About\\About_video_198.jpg");
	textures_about[199].loadFromFile("Video_About\\About_video_199.jpg");
	textures_about[200].loadFromFile("Video_About\\About_video_200.jpg");
	textures_about[201].loadFromFile("Video_About\\About_video_201.jpg");
	textures_about[202].loadFromFile("Video_About\\About_video_202.jpg");
	textures_about[203].loadFromFile("Video_About\\About_video_203.jpg");
	textures_about[204].loadFromFile("Video_About\\About_video_204.jpg");
	textures_about[205].loadFromFile("Video_About\\About_video_205.jpg");
	textures_about[206].loadFromFile("Video_About\\About_video_206.jpg");
	textures_about[207].loadFromFile("Video_About\\About_video_207.jpg");
	textures_about[208].loadFromFile("Video_About\\About_video_208.jpg");
	textures_about[209].loadFromFile("Video_About\\About_video_209.jpg");
	textures_about[210].loadFromFile("Video_About\\About_video_210.jpg");
	textures_about[211].loadFromFile("Video_About\\About_video_211.jpg");
	textures_about[212].loadFromFile("Video_About\\About_video_212.jpg");
	textures_about[213].loadFromFile("Video_About\\About_video_213.jpg");
	textures_about[214].loadFromFile("Video_About\\About_video_214.jpg");
	textures_about[215].loadFromFile("Video_About\\About_video_215.jpg");
	textures_about[216].loadFromFile("Video_About\\About_video_216.jpg");
	textures_about[217].loadFromFile("Video_About\\About_video_217.jpg");
	textures_about[218].loadFromFile("Video_About\\About_video_218.jpg");
	textures_about[219].loadFromFile("Video_About\\About_video_219.jpg");
	textures_about[220].loadFromFile("Video_About\\About_video_220.jpg");
	textures_about[221].loadFromFile("Video_About\\About_video_221.jpg");
	textures_about[222].loadFromFile("Video_About\\About_video_222.jpg");
	textures_about[223].loadFromFile("Video_About\\About_video_223.jpg");
	textures_about[224].loadFromFile("Video_About\\About_video_224.jpg");
	textures_about[225].loadFromFile("Video_About\\About_video_225.jpg");
	textures_about[226].loadFromFile("Video_About\\About_video_226.jpg");
	textures_about[227].loadFromFile("Video_About\\About_video_227.jpg");
	textures_about[228].loadFromFile("Video_About\\About_video_228.jpg");
	textures_about[229].loadFromFile("Video_About\\About_video_229.jpg");
	textures_about[230].loadFromFile("Video_About\\About_video_230.jpg");
	textures_about[231].loadFromFile("Video_About\\About_video_231.jpg");
	textures_about[232].loadFromFile("Video_About\\About_video_232.jpg");
	textures_about[233].loadFromFile("Video_About\\About_video_233.jpg");
	textures_about[234].loadFromFile("Video_About\\About_video_234.jpg");
	textures_about[235].loadFromFile("Video_About\\About_video_235.jpg");
	textures_about[236].loadFromFile("Video_About\\About_video_236.jpg");
	textures_about[237].loadFromFile("Video_About\\About_video_237.jpg");
	textures_about[238].loadFromFile("Video_About\\About_video_238.jpg");
	textures_about[239].loadFromFile("Video_About\\About_video_239.jpg");
	textures_about[240].loadFromFile("Video_About\\About_video_240.jpg");
	textures_about[241].loadFromFile("Video_About\\About_video_241.jpg");
	textures_about[242].loadFromFile("Video_About\\About_video_242.jpg");
	textures_about[243].loadFromFile("Video_About\\About_video_243.jpg");
	textures_about[244].loadFromFile("Video_About\\About_video_244.jpg");
	textures_about[245].loadFromFile("Video_About\\About_video_245.jpg");
	textures_about[246].loadFromFile("Video_About\\About_video_246.jpg");
	textures_about[247].loadFromFile("Video_About\\About_video_247.jpg");
	textures_about[248].loadFromFile("Video_About\\About_video_248.jpg");
	textures_about[249].loadFromFile("Video_About\\About_video_249.jpg");
	textures_about[250].loadFromFile("Video_About\\About_video_250.jpg");
	textures_about[251].loadFromFile("Video_About\\About_video_251.jpg");
	textures_about[252].loadFromFile("Video_About\\About_video_252.jpg");
	textures_about[253].loadFromFile("Video_About\\About_video_253.jpg");
	textures_about[254].loadFromFile("Video_About\\About_video_254.jpg");
	textures_about[255].loadFromFile("Video_About\\About_video_255.jpg");
	textures_about[256].loadFromFile("Video_About\\About_video_256.jpg");
	textures_about[257].loadFromFile("Video_About\\About_video_257.jpg");
	textures_about[258].loadFromFile("Video_About\\About_video_258.jpg");
	textures_about[259].loadFromFile("Video_About\\About_video_259.jpg");
	textures_about[260].loadFromFile("Video_About\\About_video_260.jpg");
	textures_about[261].loadFromFile("Video_About\\About_video_261.jpg");
	textures_about[262].loadFromFile("Video_About\\About_video_262.jpg");
	textures_about[263].loadFromFile("Video_About\\About_video_263.jpg");
	textures_about[264].loadFromFile("Video_About\\About_video_264.jpg");
	textures_about[265].loadFromFile("Video_About\\About_video_265.jpg");
	textures_about[266].loadFromFile("Video_About\\About_video_266.jpg");
	textures_about[267].loadFromFile("Video_About\\About_video_267.jpg");
	textures_about[268].loadFromFile("Video_About\\About_video_268.jpg");
	textures_about[269].loadFromFile("Video_About\\About_video_269.jpg");
	textures_about[270].loadFromFile("Video_About\\About_video_270.jpg");
	textures_about[271].loadFromFile("Video_About\\About_video_271.jpg");
	textures_about[272].loadFromFile("Video_About\\About_video_272.jpg");
	textures_about[273].loadFromFile("Video_About\\About_video_273.jpg");
	textures_about[274].loadFromFile("Video_About\\About_video_274.jpg");
	textures_about[275].loadFromFile("Video_About\\About_video_275.jpg");
	textures_about[276].loadFromFile("Video_About\\About_video_276.jpg");
	textures_about[277].loadFromFile("Video_About\\About_video_277.jpg");
	textures_about[278].loadFromFile("Video_About\\About_video_278.jpg");
	textures_about[279].loadFromFile("Video_About\\About_video_279.jpg");
	textures_about[280].loadFromFile("Video_About\\About_video_280.jpg");
	textures_about[281].loadFromFile("Video_About\\About_video_281.jpg");
	textures_about[282].loadFromFile("Video_About\\About_video_282.jpg");
	textures_about[283].loadFromFile("Video_About\\About_video_283.jpg");
	textures_about[284].loadFromFile("Video_About\\About_video_284.jpg");
	textures_about[285].loadFromFile("Video_About\\About_video_285.jpg");
	textures_about[286].loadFromFile("Video_About\\About_video_286.jpg");
	textures_about[287].loadFromFile("Video_About\\About_video_287.jpg");
	textures_about[288].loadFromFile("Video_About\\About_video_287.jpg");
	textures_about[289].loadFromFile("Video_About\\About_video_289.jpg");
	textures_about[290].loadFromFile("Video_About\\About_video_290.jpg");
	textures_about[291].loadFromFile("Video_About\\About_video_291.jpg");
	textures_about[292].loadFromFile("Video_About\\About_video_292.jpg");
	textures_about[293].loadFromFile("Video_About\\About_video_293.jpg");
	textures_about[294].loadFromFile("Video_About\\About_video_294.jpg");
	textures_about[295].loadFromFile("Video_About\\About_video_295.jpg");
	textures_about[296].loadFromFile("Video_About\\About_video_296.jpg");
	textures_about[297].loadFromFile("Video_About\\About_video_297.jpg");
	textures_about[298].loadFromFile("Video_About\\About_video_298.jpg");
	textures_about[299].loadFromFile("Video_About\\About_video_299.jpg");
	textures_about[300].loadFromFile("Video_About\\About_video_2_000.jpg");
	textures_about[301].loadFromFile("Video_About\\About_video_2_001.jpg");
	textures_about[302].loadFromFile("Video_About\\About_video_2_002.jpg");
	textures_about[303].loadFromFile("Video_About\\About_video_2_003.jpg");
	textures_about[304].loadFromFile("Video_About\\About_video_2_004.jpg");
	textures_about[305].loadFromFile("Video_About\\About_video_2_004.jpg");
	textures_about[306].loadFromFile("Video_About\\About_video_2_005.jpg");
	textures_about[307].loadFromFile("Video_About\\About_video_2_007.jpg");
	textures_about[308].loadFromFile("Video_About\\About_video_2_008.jpg");
	textures_about[309].loadFromFile("Video_About\\About_video_2_009.jpg");
	textures_about[310].loadFromFile("Video_About\\About_video_2_010.jpg");
	textures_about[311].loadFromFile("Video_About\\About_video_2_011.jpg");
	textures_about[312].loadFromFile("Video_About\\About_video_2_012.jpg");
	textures_about[313].loadFromFile("Video_About\\About_video_2_013.jpg");
	textures_about[314].loadFromFile("Video_About\\About_video_2_014.jpg");
	textures_about[315].loadFromFile("Video_About\\About_video_2_015.jpg");
	textures_about[316].loadFromFile("Video_About\\About_video_2_016.jpg");
	textures_about[317].loadFromFile("Video_About\\About_video_2_017.jpg");
	textures_about[318].loadFromFile("Video_About\\About_video_2_018.jpg");
	textures_about[319].loadFromFile("Video_About\\About_video_2_019.jpg");
	textures_about[320].loadFromFile("Video_About\\About_video_2_020.jpg");
	textures_about[321].loadFromFile("Video_About\\About_video_2_021.jpg");
	textures_about[322].loadFromFile("Video_About\\About_video_2_022.jpg");
	textures_about[323].loadFromFile("Video_About\\About_video_2_023.jpg");
	textures_about[324].loadFromFile("Video_About\\About_video_2_024.jpg");
	textures_about[325].loadFromFile("Video_About\\About_video_2_025.jpg");
	textures_about[326].loadFromFile("Video_About\\About_video_2_026.jpg");
	textures_about[327].loadFromFile("Video_About\\About_video_2_027.jpg");
	textures_about[328].loadFromFile("Video_About\\About_video_2_028.jpg");
	textures_about[329].loadFromFile("Video_About\\About_video_2_029.jpg");
	textures_about[330].loadFromFile("Video_About\\About_video_2_030.jpg");
	textures_about[331].loadFromFile("Video_About\\About_video_2_031.jpg");
	textures_about[332].loadFromFile("Video_About\\About_video_2_032.jpg");
	textures_about[333].loadFromFile("Video_About\\About_video_2_033.jpg");
	textures_about[334].loadFromFile("Video_About\\About_video_2_034.jpg");
	textures_about[335].loadFromFile("Video_About\\About_video_2_035.jpg");
	textures_about[336].loadFromFile("Video_About\\About_video_2_036.jpg");
	textures_about[337].loadFromFile("Video_About\\About_video_2_037.jpg");
	textures_about[338].loadFromFile("Video_About\\About_video_2_038.jpg");
	textures_about[339].loadFromFile("Video_About\\About_video_2_039.jpg");
	textures_about[340].loadFromFile("Video_About\\About_video_2_040.jpg");
	textures_about[341].loadFromFile("Video_About\\About_video_2_041.jpg");
	textures_about[342].loadFromFile("Video_About\\About_video_2_042.jpg");
	textures_about[343].loadFromFile("Video_About\\About_video_2_043.jpg");
	textures_about[344].loadFromFile("Video_About\\About_video_2_044.jpg");
	textures_about[345].loadFromFile("Video_About\\About_video_2_045.jpg");
	textures_about[346].loadFromFile("Video_About\\About_video_2_046.jpg");
	textures_about[347].loadFromFile("Video_About\\About_video_2_047.jpg");
	textures_about[348].loadFromFile("Video_About\\About_video_2_048.jpg");
	textures_about[349].loadFromFile("Video_About\\About_video_2_049.jpg");
	textures_about[350].loadFromFile("Video_About\\About_video_2_050.jpg");
	textures_about[351].loadFromFile("Video_About\\About_video_2_051.jpg");
	textures_about[352].loadFromFile("Video_About\\About_video_2_052.jpg");
	textures_about[353].loadFromFile("Video_About\\About_video_2_053.jpg");
	textures_about[354].loadFromFile("Video_About\\About_video_2_054.jpg");
	textures_about[355].loadFromFile("Video_About\\About_video_2_055.jpg");
	textures_about[356].loadFromFile("Video_About\\About_video_2_056.jpg");
	textures_about[357].loadFromFile("Video_About\\About_video_2_057.jpg");
	textures_about[358].loadFromFile("Video_About\\About_video_2_058.jpg");
	textures_about[359].loadFromFile("Video_About\\About_video_2_059.jpg");
	textures_about[360].loadFromFile("Video_About\\About_video_2_060.jpg");
	textures_about[361].loadFromFile("Video_About\\About_video_2_061.jpg");
	textures_about[362].loadFromFile("Video_About\\About_video_2_062.jpg");
	textures_about[363].loadFromFile("Video_About\\About_video_2_063.jpg");
	textures_about[364].loadFromFile("Video_About\\About_video_2_064.jpg");
	textures_about[365].loadFromFile("Video_About\\About_video_2_065.jpg");
	textures_about[366].loadFromFile("Video_About\\About_video_2_066.jpg");
	textures_about[367].loadFromFile("Video_About\\About_video_2_067.jpg");
	textures_about[368].loadFromFile("Video_About\\About_video_2_068.jpg");
	textures_about[369].loadFromFile("Video_About\\About_video_2_069.jpg");
	textures_about[370].loadFromFile("Video_About\\About_video_2_070.jpg");
	textures_about[371].loadFromFile("Video_About\\About_video_2_071.jpg");
	textures_about[372].loadFromFile("Video_About\\About_video_2_072.jpg");
	textures_about[373].loadFromFile("Video_About\\About_video_2_073.jpg");
	textures_about[374].loadFromFile("Video_About\\About_video_2_074.jpg");
	textures_about[375].loadFromFile("Video_About\\About_video_2_075.jpg");
	textures_about[376].loadFromFile("Video_About\\About_video_2_076.jpg");
	textures_about[377].loadFromFile("Video_About\\About_video_2_077.jpg");
	textures_about[378].loadFromFile("Video_About\\About_video_2_078.jpg");
	textures_about[379].loadFromFile("Video_About\\About_video_2_079.jpg");
	textures_about[380].loadFromFile("Video_About\\About_video_2_080.jpg");
	textures_about[381].loadFromFile("Video_About\\About_video_2_081.jpg");
	textures_about[382].loadFromFile("Video_About\\About_video_2_082.jpg");
	textures_about[383].loadFromFile("Video_About\\About_video_2_083.jpg");
	textures_about[384].loadFromFile("Video_About\\About_video_2_084.jpg");
	textures_about[385].loadFromFile("Video_About\\About_video_2_085.jpg");
	textures_about[386].loadFromFile("Video_About\\About_video_2_086.jpg");
	textures_about[387].loadFromFile("Video_About\\About_video_2_087.jpg");
	textures_about[388].loadFromFile("Video_About\\About_video_2_088.jpg");
	textures_about[389].loadFromFile("Video_About\\About_video_2_089.jpg");
	textures_about[390].loadFromFile("Video_About\\About_video_2_090.jpg");
	textures_about[391].loadFromFile("Video_About\\About_video_2_091.jpg");
	textures_about[392].loadFromFile("Video_About\\About_video_2_092.jpg");
	textures_about[393].loadFromFile("Video_About\\About_video_2_093.jpg");
	textures_about[394].loadFromFile("Video_About\\About_video_2_094.jpg");
	textures_about[395].loadFromFile("Video_About\\About_video_2_095.jpg");
	textures_about[396].loadFromFile("Video_About\\About_video_2_096.jpg");
	textures_about[397].loadFromFile("Video_About\\About_video_2_097.jpg");
	textures_about[398].loadFromFile("Video_About\\About_video_2_098.jpg");
	textures_about[399].loadFromFile("Video_About\\About_video_2_099.jpg");
	textures_about[400].loadFromFile("Video_About\\About_video_2_100.jpg");
	textures_about[401].loadFromFile("Video_About\\About_video_2_101.jpg");
	textures_about[402].loadFromFile("Video_About\\About_video_2_102.jpg");
	textures_about[403].loadFromFile("Video_About\\About_video_2_103.jpg");
	textures_about[404].loadFromFile("Video_About\\About_video_2_104.jpg");
	textures_about[405].loadFromFile("Video_About\\About_video_2_105.jpg");
	textures_about[406].loadFromFile("Video_About\\About_video_2_106.jpg");
	textures_about[407].loadFromFile("Video_About\\About_video_2_107.jpg");
	textures_about[408].loadFromFile("Video_About\\About_video_2_108.jpg");
	textures_about[409].loadFromFile("Video_About\\About_video_2_109.jpg");
	textures_about[410].loadFromFile("Video_About\\About_video_2_110.jpg");
	textures_about[411].loadFromFile("Video_About\\About_video_2_111.jpg");
	textures_about[412].loadFromFile("Video_About\\About_video_2_112.jpg");
	textures_about[413].loadFromFile("Video_About\\About_video_2_113.jpg");
	textures_about[414].loadFromFile("Video_About\\About_video_2_114.jpg");
	textures_about[415].loadFromFile("Video_About\\About_video_2_115.jpg");
	textures_about[416].loadFromFile("Video_About\\About_video_2_116.jpg");
	textures_about[417].loadFromFile("Video_About\\About_video_2_117.jpg");
	textures_about[418].loadFromFile("Video_About\\About_video_2_118.jpg");
	textures_about[419].loadFromFile("Video_About\\About_video_2_119.jpg");
	textures_about[420].loadFromFile("Video_About\\About_video_2_120.jpg");
	textures_about[421].loadFromFile("Video_About\\About_video_2_121.jpg");
	textures_about[422].loadFromFile("Video_About\\About_video_2_122.jpg");
	textures_about[423].loadFromFile("Video_About\\About_video_2_123.jpg");
	textures_about[424].loadFromFile("Video_About\\About_video_2_124.jpg");
	textures_about[425].loadFromFile("Video_About\\About_video_2_125.jpg");
	textures_about[426].loadFromFile("Video_About\\About_video_2_126.jpg");
	textures_about[427].loadFromFile("Video_About\\About_video_2_127.jpg");
	textures_about[428].loadFromFile("Video_About\\About_video_2_128.jpg");
	textures_about[429].loadFromFile("Video_About\\About_video_2_129.jpg");
	textures_about[430].loadFromFile("Video_About\\About_video_2_130.jpg");
	textures_about[431].loadFromFile("Video_About\\About_video_2_131.jpg");
	textures_about[432].loadFromFile("Video_About\\About_video_2_132.jpg");
	textures_about[433].loadFromFile("Video_About\\About_video_2_133.jpg");
	textures_about[434].loadFromFile("Video_About\\About_video_2_134.jpg");
	textures_about[435].loadFromFile("Video_About\\About_video_2_135.jpg");
	textures_about[436].loadFromFile("Video_About\\About_video_2_136.jpg");
	textures_about[437].loadFromFile("Video_About\\About_video_2_137.jpg");
	textures_about[438].loadFromFile("Video_About\\About_video_2_138.jpg");
	textures_about[439].loadFromFile("Video_About\\About_video_2_139.jpg");
	textures_about[440].loadFromFile("Video_About\\About_video_2_140.jpg");
	textures_about[441].loadFromFile("Video_About\\About_video_2_141.jpg");
	textures_about[442].loadFromFile("Video_About\\About_video_2_142.jpg");
	textures_about[443].loadFromFile("Video_About\\About_video_2_143.jpg");
	textures_about[444].loadFromFile("Video_About\\About_video_2_144.jpg");
	textures_about[445].loadFromFile("Video_About\\About_video_2_145.jpg");
	textures_about[446].loadFromFile("Video_About\\About_video_2_146.jpg");
	textures_about[447].loadFromFile("Video_About\\About_video_2_147.jpg");
	textures_about[448].loadFromFile("Video_About\\About_video_2_148.jpg");
	textures_about[449].loadFromFile("Video_About\\About_video_2_149.jpg");
	textures_about[450].loadFromFile("Video_About\\About_video_2_150.jpg");
	textures_about[451].loadFromFile("Video_About\\About_video_2_151.jpg");
	textures_about[452].loadFromFile("Video_About\\About_video_2_152.jpg");
	textures_about[453].loadFromFile("Video_About\\About_video_2_153.jpg");
	textures_about[454].loadFromFile("Video_About\\About_video_2_154.jpg");
	textures_about[455].loadFromFile("Video_About\\About_video_2_155.jpg");
	textures_about[456].loadFromFile("Video_About\\About_video_2_156.jpg");
	textures_about[457].loadFromFile("Video_About\\About_video_2_157.jpg");
	textures_about[458].loadFromFile("Video_About\\About_video_2_158.jpg");
	textures_about[459].loadFromFile("Video_About\\About_video_2_159.jpg");
	textures_about[460].loadFromFile("Video_About\\About_video_2_160.jpg");
	textures_about[461].loadFromFile("Video_About\\About_video_2_161.jpg");
	textures_about[462].loadFromFile("Video_About\\About_video_2_162.jpg");
	textures_about[463].loadFromFile("Video_About\\About_video_2_163.jpg");
	textures_about[464].loadFromFile("Video_About\\About_video_2_164.jpg");
	textures_about[465].loadFromFile("Video_About\\About_video_2_165.jpg");
	textures_about[466].loadFromFile("Video_About\\About_video_2_166.jpg");
	textures_about[467].loadFromFile("Video_About\\About_video_2_167.jpg");
	textures_about[468].loadFromFile("Video_About\\About_video_2_168.jpg");
	textures_about[469].loadFromFile("Video_About\\About_video_2_169.jpg");
	textures_about[470].loadFromFile("Video_About\\About_video_2_170.jpg");
	textures_about[471].loadFromFile("Video_About\\About_video_2_171.jpg");
	textures_about[472].loadFromFile("Video_About\\About_video_2_172.jpg");
	textures_about[473].loadFromFile("Video_About\\About_video_2_173.jpg");
	textures_about[474].loadFromFile("Video_About\\About_video_2_174.jpg");
	textures_about[475].loadFromFile("Video_About\\About_video_2_175.jpg");
	textures_about[476].loadFromFile("Video_About\\About_video_2_176.jpg");
	textures_about[477].loadFromFile("Video_About\\About_video_2_177.jpg");
	textures_about[478].loadFromFile("Video_About\\About_video_2_178.jpg");
	textures_about[479].loadFromFile("Video_About\\About_video_2_179.jpg");
	textures_about[480].loadFromFile("Video_About\\About_video_2_180.jpg");
	textures_about[481].loadFromFile("Video_About\\About_video_2_181.jpg");
	textures_about[482].loadFromFile("Video_About\\About_video_2_182.jpg");
	textures_about[483].loadFromFile("Video_About\\About_video_2_183.jpg");
	textures_about[484].loadFromFile("Video_About\\About_video_2_184.jpg");
	textures_about[485].loadFromFile("Video_About\\About_video_2_185.jpg");
	textures_about[486].loadFromFile("Video_About\\About_video_2_186.jpg");
	textures_about[487].loadFromFile("Video_About\\About_video_2_187.jpg");
	textures_about[488].loadFromFile("Video_About\\About_video_2_188.jpg");
	textures_about[489].loadFromFile("Video_About\\About_video_2_189.jpg");
	textures_about[490].loadFromFile("Video_About\\About_video_2_190.jpg");
	textures_about[491].loadFromFile("Video_About\\About_video_2_191.jpg");
	textures_about[492].loadFromFile("Video_About\\About_video_2_192.jpg");
	textures_about[493].loadFromFile("Video_About\\About_video_2_193.jpg");
	textures_about[494].loadFromFile("Video_About\\About_video_2_194.jpg");
	textures_about[495].loadFromFile("Video_About\\About_video_2_195.jpg");
	textures_about[496].loadFromFile("Video_About\\About_video_2_196.jpg");
	textures_about[497].loadFromFile("Video_About\\About_video_2_197.jpg");
	textures_about[498].loadFromFile("Video_About\\About_video_2_198.jpg");
	textures_about[499].loadFromFile("Video_About\\About_video_2_199.jpg");
	textures_about[500].loadFromFile("Video_About\\About_video_2_200.jpg");
	textures_about[501].loadFromFile("Video_About\\About_video_2_201.jpg");
	textures_about[502].loadFromFile("Video_About\\About_video_2_202.jpg");
	textures_about[503].loadFromFile("Video_About\\About_video_2_203.jpg");
	textures_about[504].loadFromFile("Video_About\\About_video_2_204.jpg");
	textures_about[505].loadFromFile("Video_About\\About_video_2_205.jpg");
	textures_about[506].loadFromFile("Video_About\\About_video_2_206.jpg");
	textures_about[507].loadFromFile("Video_About\\About_video_2_207.jpg");
	textures_about[508].loadFromFile("Video_About\\About_video_2_208.jpg");
	textures_about[509].loadFromFile("Video_About\\About_video_2_209.jpg");
	textures_about[510].loadFromFile("Video_About\\About_video_2_210.jpg");
	textures_about[511].loadFromFile("Video_About\\About_video_2_211.jpg");
	textures_about[512].loadFromFile("Video_About\\About_video_2_212.jpg");
	textures_about[513].loadFromFile("Video_About\\About_video_2_213.jpg");
	textures_about[514].loadFromFile("Video_About\\About_video_2_214.jpg");
	textures_about[515].loadFromFile("Video_About\\About_video_2_215.jpg");
	textures_about[516].loadFromFile("Video_About\\About_video_2_216.jpg");
	textures_about[517].loadFromFile("Video_About\\About_video_2_217.jpg");
	textures_about[518].loadFromFile("Video_About\\About_video_2_218.jpg");
	textures_about[519].loadFromFile("Video_About\\About_video_2_219.jpg");
	textures_about[520].loadFromFile("Video_About\\About_video_2_220.jpg");
	textures_about[521].loadFromFile("Video_About\\About_video_2_221.jpg");
	textures_about[522].loadFromFile("Video_About\\About_video_2_222.jpg");
	textures_about[523].loadFromFile("Video_About\\About_video_2_223.jpg");
	textures_about[524].loadFromFile("Video_About\\About_video_2_224.jpg");
	textures_about[525].loadFromFile("Video_About\\About_video_2_225.jpg");
	textures_about[526].loadFromFile("Video_About\\About_video_2_226.jpg");
	textures_about[527].loadFromFile("Video_About\\About_video_2_227.jpg");
	textures_about[528].loadFromFile("Video_About\\About_video_2_228.jpg");
	textures_about[529].loadFromFile("Video_About\\About_video_2_229.jpg");
	textures_about[530].loadFromFile("Video_About\\About_video_2_230.jpg");
	textures_about[531].loadFromFile("Video_About\\About_video_2_231.jpg");
	textures_about[532].loadFromFile("Video_About\\About_video_2_232.jpg");
	textures_about[533].loadFromFile("Video_About\\About_video_2_233.jpg");
	textures_about[534].loadFromFile("Video_About\\About_video_2_234.jpg");
	textures_about[535].loadFromFile("Video_About\\About_video_2_235.jpg");
	textures_about[536].loadFromFile("Video_About\\About_video_2_236.jpg");
	textures_about[537].loadFromFile("Video_About\\About_video_2_237.jpg");
	textures_about[538].loadFromFile("Video_About\\About_video_2_238.jpg");
	textures_about[539].loadFromFile("Video_About\\About_video_2_239.jpg");
	textures_about[540].loadFromFile("Video_About\\About_video_2_240.jpg");
	textures_about[541].loadFromFile("Video_About\\About_video_2_241.jpg");
	textures_about[542].loadFromFile("Video_About\\About_video_2_242.jpg");
	textures_about[543].loadFromFile("Video_About\\About_video_2_243.jpg");
	textures_about[544].loadFromFile("Video_About\\About_video_2_244.jpg");
	textures_about[545].loadFromFile("Video_About\\About_video_2_245.jpg");
	textures_about[546].loadFromFile("Video_About\\About_video_2_246.jpg");
	textures_about[547].loadFromFile("Video_About\\About_video_2_247.jpg");
	textures_about[548].loadFromFile("Video_About\\About_video_2_248.jpg");
	textures_about[549].loadFromFile("Video_About\\About_video_2_249.jpg");
	textures_about[550].loadFromFile("Video_About\\About_video_2_250.jpg");
	textures_about[551].loadFromFile("Video_About\\About_video_2_251.jpg");
	textures_about[552].loadFromFile("Video_About\\About_video_2_252.jpg");
	textures_about[553].loadFromFile("Video_About\\About_video_2_253.jpg");
	textures_about[554].loadFromFile("Video_About\\About_video_2_254.jpg");
	textures_about[555].loadFromFile("Video_About\\About_video_2_255.jpg");
	textures_about[556].loadFromFile("Video_About\\About_video_2_256.jpg");
	textures_about[557].loadFromFile("Video_About\\About_video_2_257.jpg");
	textures_about[558].loadFromFile("Video_About\\About_video_2_258.jpg");
	textures_about[559].loadFromFile("Video_About\\About_video_2_259.jpg");
	textures_about[560].loadFromFile("Video_About\\About_video_2_260.jpg");
	textures_about[561].loadFromFile("Video_About\\About_video_2_261.jpg");
	textures_about[562].loadFromFile("Video_About\\About_video_2_262.jpg");
	textures_about[563].loadFromFile("Video_About\\About_video_2_263.jpg");
	textures_about[564].loadFromFile("Video_About\\About_video_2_264.jpg");
	textures_about[565].loadFromFile("Video_About\\About_video_2_265.jpg");
	textures_about[566].loadFromFile("Video_About\\About_video_2_266.jpg");
	textures_about[567].loadFromFile("Video_About\\About_video_2_267.jpg");
	textures_about[568].loadFromFile("Video_About\\About_video_2_268.jpg");
	textures_about[569].loadFromFile("Video_About\\About_video_2_269.jpg");
	textures_about[570].loadFromFile("Video_About\\About_video_2_270.jpg");
	textures_about[571].loadFromFile("Video_About\\About_video_2_271.jpg");
	textures_about[572].loadFromFile("Video_About\\About_video_2_272.jpg");
	textures_about[573].loadFromFile("Video_About\\About_video_2_273.jpg");
	textures_about[574].loadFromFile("Video_About\\About_video_2_274.jpg");
	textures_about[575].loadFromFile("Video_About\\About_video_2_275.jpg");
	textures_about[576].loadFromFile("Video_About\\About_video_2_276.jpg");
	textures_about[577].loadFromFile("Video_About\\About_video_2_277.jpg");
	textures_about[578].loadFromFile("Video_About\\About_video_2_278.jpg");
	textures_about[579].loadFromFile("Video_About\\About_video_2_279.jpg");
	textures_about[580].loadFromFile("Video_About\\About_video_2_280.jpg");
	textures_about[581].loadFromFile("Video_About\\About_video_2_281.jpg");
	textures_about[582].loadFromFile("Video_About\\About_video_2_282.jpg");
	textures_about[583].loadFromFile("Video_About\\About_video_2_283.jpg");
	textures_about[584].loadFromFile("Video_About\\About_video_2_284.jpg");
	textures_about[585].loadFromFile("Video_About\\About_video_2_285.jpg");
	textures_about[586].loadFromFile("Video_About\\About_video_2_286.jpg");
	textures_about[587].loadFromFile("Video_About\\About_video_2_287.jpg");
	textures_about[588].loadFromFile("Video_About\\About_video_2_288.jpg");
	textures_about[589].loadFromFile("Video_About\\About_video_2_289.jpg");
	textures_about[590].loadFromFile("Video_About\\About_video_2_290.jpg");
	textures_about[591].loadFromFile("Video_About\\About_video_2_291.jpg");
	textures_about[592].loadFromFile("Video_About\\About_video_2_292.jpg");
	textures_about[593].loadFromFile("Video_About\\About_video_2_293.jpg");
	textures_about[594].loadFromFile("Video_About\\About_video_2_294.jpg");
	textures_about[595].loadFromFile("Video_About\\About_video_2_295.jpg");
	textures_about[596].loadFromFile("Video_About\\About_video_2_296.jpg");
	textures_about[597].loadFromFile("Video_About\\About_video_2_297.jpg");
	textures_about[598].loadFromFile("Video_About\\About_video_2_298.jpg");
	textures_about[599].loadFromFile("Video_About\\About_video_2_299.jpg");
	textures_about[600].loadFromFile("Video_About\\About_video_3_000.jpg");
	textures_about[601].loadFromFile("Video_About\\About_video_3_001.jpg");
	textures_about[602].loadFromFile("Video_About\\About_video_3_002.jpg");
	textures_about[603].loadFromFile("Video_About\\About_video_3_003.jpg");
	textures_about[604].loadFromFile("Video_About\\About_video_3_004.jpg");
	textures_about[605].loadFromFile("Video_About\\About_video_3_005.jpg");
	textures_about[606].loadFromFile("Video_About\\About_video_3_006.jpg");
	textures_about[607].loadFromFile("Video_About\\About_video_3_007.jpg");
	textures_about[608].loadFromFile("Video_About\\About_video_3_008.jpg");
	textures_about[609].loadFromFile("Video_About\\About_video_3_009.jpg");
	textures_about[610].loadFromFile("Video_About\\About_video_3_010.jpg");
	textures_about[610].loadFromFile("Video_About\\About_video_3_011.jpg");
	textures_about[611].loadFromFile("Video_About\\About_video_3_012.jpg");
	textures_about[612].loadFromFile("Video_About\\About_video_3_013.jpg");
	textures_about[613].loadFromFile("Video_About\\About_video_3_014.jpg");
	textures_about[614].loadFromFile("Video_About\\About_video_3_015.jpg");
	textures_about[615].loadFromFile("Video_About\\About_video_3_016.jpg");
	textures_about[616].loadFromFile("Video_About\\About_video_3_017.jpg");
	textures_about[617].loadFromFile("Video_About\\About_video_3_018.jpg");
	textures_about[618].loadFromFile("Video_About\\About_video_3_019.jpg");
	textures_about[619].loadFromFile("Video_About\\About_video_3_020.jpg");
	textures_about[620].loadFromFile("Video_About\\About_video_3_021.jpg");
	textures_about[621].loadFromFile("Video_About\\About_video_3_022.jpg");
	textures_about[622].loadFromFile("Video_About\\About_video_3_023.jpg");
	textures_about[623].loadFromFile("Video_About\\About_video_3_024.jpg");
	textures_about[624].loadFromFile("Video_About\\About_video_3_025.jpg");
	textures_about[625].loadFromFile("Video_About\\About_video_3_026.jpg");
	textures_about[626].loadFromFile("Video_About\\About_video_3_027.jpg");
	textures_about[627].loadFromFile("Video_About\\About_video_3_028.jpg");
	textures_about[628].loadFromFile("Video_About\\About_video_3_029.jpg");
	textures_about[629].loadFromFile("Video_About\\About_video_3_030.jpg");
	textures_about[630].loadFromFile("Video_About\\About_video_3_031.jpg");
	textures_about[631].loadFromFile("Video_About\\About_video_3_032.jpg");
	textures_about[632].loadFromFile("Video_About\\About_video_3_033.jpg");
	textures_about[633].loadFromFile("Video_About\\About_video_3_034.jpg");
	textures_about[634].loadFromFile("Video_About\\About_video_3_035.jpg");
	textures_about[635].loadFromFile("Video_About\\About_video_3_036.jpg");
	textures_about[636].loadFromFile("Video_About\\About_video_3_037.jpg");
	textures_about[637].loadFromFile("Video_About\\About_video_3_038.jpg");
	textures_about[638].loadFromFile("Video_About\\About_video_3_039.jpg");
	textures_about[639].loadFromFile("Video_About\\About_video_3_040.jpg");
	textures_about[640].loadFromFile("Video_About\\About_video_3_041.jpg");
	textures_about[641].loadFromFile("Video_About\\About_video_3_042.jpg");
	textures_about[642].loadFromFile("Video_About\\About_video_3_043.jpg");
	textures_about[643].loadFromFile("Video_About\\About_video_3_044.jpg");
	textures_about[644].loadFromFile("Video_About\\About_video_3_045.jpg");
	textures_about[645].loadFromFile("Video_About\\About_video_3_046.jpg");
	textures_about[646].loadFromFile("Video_About\\About_video_3_047.jpg");
	textures_about[647].loadFromFile("Video_About\\About_video_3_048.jpg");
	textures_about[648].loadFromFile("Video_About\\About_video_3_049.jpg");
	textures_about[649].loadFromFile("Video_About\\About_video_3_050.jpg");
	textures_about[650].loadFromFile("Video_About\\About_video_3_051.jpg");
	textures_about[651].loadFromFile("Video_About\\About_video_3_052.jpg");
	textures_about[652].loadFromFile("Video_About\\About_video_3_053.jpg");
	textures_about[653].loadFromFile("Video_About\\About_video_3_054.jpg");
	textures_about[654].loadFromFile("Video_About\\About_video_3_055.jpg");
	textures_about[655].loadFromFile("Video_About\\About_video_3_056.jpg");
	textures_about[656].loadFromFile("Video_About\\About_video_3_057.jpg");
	textures_about[657].loadFromFile("Video_About\\About_video_3_058.jpg");
	textures_about[658].loadFromFile("Video_About\\About_video_3_059.jpg");
	textures_about[659].loadFromFile("Video_About\\About_video_3_060.jpg");
	textures_about[660].loadFromFile("Video_About\\About_video_3_061.jpg");
	textures_about[661].loadFromFile("Video_About\\About_video_3_062.jpg");
	textures_about[662].loadFromFile("Video_About\\About_video_3_063.jpg");
	textures_about[663].loadFromFile("Video_About\\About_video_3_064.jpg");
	textures_about[664].loadFromFile("Video_About\\About_video_3_065.jpg");
	textures_about[665].loadFromFile("Video_About\\About_video_3_066.jpg");
	textures_about[666].loadFromFile("Video_About\\About_video_3_067.jpg");
	textures_about[667].loadFromFile("Video_About\\About_video_3_068.jpg");
	textures_about[668].loadFromFile("Video_About\\About_video_3_069.jpg");
	textures_about[669].loadFromFile("Video_About\\About_video_3_070.jpg");
	textures_about[670].loadFromFile("Video_About\\About_video_3_071.jpg");
	textures_about[671].loadFromFile("Video_About\\About_video_3_072.jpg");
	textures_about[672].loadFromFile("Video_About\\About_video_3_073.jpg");
	textures_about[673].loadFromFile("Video_About\\About_video_3_074.jpg");
	textures_about[674].loadFromFile("Video_About\\About_video_3_075.jpg");
	textures_about[675].loadFromFile("Video_About\\About_video_3_076.jpg");
	textures_about[676].loadFromFile("Video_About\\About_video_3_077.jpg");
	textures_about[677].loadFromFile("Video_About\\About_video_3_078.jpg");
	textures_about[678].loadFromFile("Video_About\\About_video_3_079.jpg");
	textures_about[679].loadFromFile("Video_About\\About_video_3_080.jpg");
	textures_about[680].loadFromFile("Video_About\\About_video_3_081.jpg");
	textures_about[681].loadFromFile("Video_About\\About_video_3_082.jpg");
	textures_about[682].loadFromFile("Video_About\\About_video_3_083.jpg");
	textures_about[683].loadFromFile("Video_About\\About_video_3_084.jpg");
	textures_about[684].loadFromFile("Video_About\\About_video_3_085.jpg");
	textures_about[685].loadFromFile("Video_About\\About_video_3_086.jpg");
	textures_about[686].loadFromFile("Video_About\\About_video_3_087.jpg");
	textures_about[687].loadFromFile("Video_About\\About_video_3_088.jpg");
	textures_about[688].loadFromFile("Video_About\\About_video_3_089.jpg");
	textures_about[689].loadFromFile("Video_About\\About_video_3_090.jpg");
	textures_about[690].loadFromFile("Video_About\\About_video_3_091.jpg");
	textures_about[691].loadFromFile("Video_About\\About_video_3_092.jpg");
	textures_about[692].loadFromFile("Video_About\\About_video_3_093.jpg");
	textures_about[693].loadFromFile("Video_About\\About_video_3_094.jpg");
	textures_about[694].loadFromFile("Video_About\\About_video_3_095.jpg");
	textures_about[695].loadFromFile("Video_About\\About_video_3_096.jpg");
	textures_about[696].loadFromFile("Video_About\\About_video_3_097.jpg");
	textures_about[697].loadFromFile("Video_About\\About_video_3_098.jpg");
	textures_about[698].loadFromFile("Video_About\\About_video_3_099.jpg");
	textures_about[699].loadFromFile("Video_About\\About_video_3_100.jpg");
	textures_about[700].loadFromFile("Video_About\\About_video_3_101.jpg");
	textures_about[701].loadFromFile("Video_About\\About_video_3_102.jpg");
	textures_about[702].loadFromFile("Video_About\\About_video_3_103.jpg");
	textures_about[703].loadFromFile("Video_About\\About_video_3_104.jpg");
	textures_about[704].loadFromFile("Video_About\\About_video_3_105.jpg");
	textures_about[705].loadFromFile("Video_About\\About_video_3_106.jpg");
	textures_about[706].loadFromFile("Video_About\\About_video_3_107.jpg");
	textures_about[707].loadFromFile("Video_About\\About_video_3_108.jpg");
	textures_about[708].loadFromFile("Video_About\\About_video_3_109.jpg");
	textures_about[709].loadFromFile("Video_About\\About_video_3_110.jpg");
	textures_about[710].loadFromFile("Video_About\\About_video_3_111.jpg");
	textures_about[711].loadFromFile("Video_About\\About_video_3_112.jpg");
	textures_about[712].loadFromFile("Video_About\\About_video_3_113.jpg");
	textures_about[713].loadFromFile("Video_About\\About_video_3_114.jpg");
	textures_about[714].loadFromFile("Video_About\\About_video_3_115.jpg");
	textures_about[715].loadFromFile("Video_About\\About_video_3_116.jpg");
	textures_about[716].loadFromFile("Video_About\\About_video_3_117.jpg");
	textures_about[717].loadFromFile("Video_About\\About_video_3_118.jpg");
	textures_about[718].loadFromFile("Video_About\\About_video_3_119.jpg");
	textures_about[719].loadFromFile("Video_About\\About_video_3_120.jpg");
	textures_about[720].loadFromFile("Video_About\\About_video_3_121.jpg");
	textures_about[721].loadFromFile("Video_About\\About_video_3_122.jpg");
	textures_about[722].loadFromFile("Video_About\\About_video_3_123.jpg");
	textures_about[723].loadFromFile("Video_About\\About_video_3_124.jpg");
	textures_about[724].loadFromFile("Video_About\\About_video_3_125.jpg");
	textures_about[725].loadFromFile("Video_About\\About_video_3_126.jpg");
	textures_about[726].loadFromFile("Video_About\\About_video_3_127.jpg");
	textures_about[727].loadFromFile("Video_About\\About_video_3_128.jpg");
	textures_about[728].loadFromFile("Video_About\\About_video_3_129.jpg");
	textures_about[729].loadFromFile("Video_About\\About_video_3_130.jpg");
	textures_about[730].loadFromFile("Video_About\\About_video_3_131.jpg");
	textures_about[731].loadFromFile("Video_About\\About_video_3_132.jpg");
	textures_about[732].loadFromFile("Video_About\\About_video_3_133.jpg");
	textures_about[733].loadFromFile("Video_About\\About_video_3_134.jpg");
	textures_about[734].loadFromFile("Video_About\\About_video_3_135.jpg");
	textures_about[735].loadFromFile("Video_About\\About_video_3_136.jpg");
	textures_about[736].loadFromFile("Video_About\\About_video_3_137.jpg");
	textures_about[737].loadFromFile("Video_About\\About_video_3_138.jpg");
	textures_about[738].loadFromFile("Video_About\\About_video_3_139.jpg");
	textures_about[739].loadFromFile("Video_About\\About_video_3_140.jpg");
	textures_about[740].loadFromFile("Video_About\\About_video_3_141.jpg");
	textures_about[741].loadFromFile("Video_About\\About_video_3_142.jpg");
	textures_about[742].loadFromFile("Video_About\\About_video_3_143.jpg");
	textures_about[743].loadFromFile("Video_About\\About_video_3_144.jpg");
	textures_about[744].loadFromFile("Video_About\\About_video_3_145.jpg");
	textures_about[745].loadFromFile("Video_About\\About_video_3_146.jpg");
	textures_about[746].loadFromFile("Video_About\\About_video_3_147.jpg");
	textures_about[747].loadFromFile("Video_About\\About_video_3_148.jpg");
	textures_about[748].loadFromFile("Video_About\\About_video_3_149.jpg");
	textures_about[749].loadFromFile("Video_About\\About_video_3_150.jpg");
	textures_about[750].loadFromFile("Video_About\\About_video_3_151.jpg");
	textures_about[751].loadFromFile("Video_About\\About_video_3_152.jpg");
	textures_about[752].loadFromFile("Video_About\\About_video_3_153.jpg");
	textures_about[753].loadFromFile("Video_About\\About_video_3_154.jpg");
	textures_about[754].loadFromFile("Video_About\\About_video_3_155.jpg");
	textures_about[755].loadFromFile("Video_About\\About_video_3_156.jpg");
	textures_about[756].loadFromFile("Video_About\\About_video_3_157.jpg");
	textures_about[757].loadFromFile("Video_About\\About_video_3_158.jpg");
	textures_about[758].loadFromFile("Video_About\\About_video_3_159.jpg");
	textures_about[759].loadFromFile("Video_About\\About_video_3_160.jpg");
	textures_about[760].loadFromFile("Video_About\\About_video_3_161.jpg");
	textures_about[761].loadFromFile("Video_About\\About_video_3_162.jpg");
	textures_about[762].loadFromFile("Video_About\\About_video_3_163.jpg");
	textures_about[763].loadFromFile("Video_About\\About_video_3_164.jpg");
	textures_about[764].loadFromFile("Video_About\\About_video_3_165.jpg");
	textures_about[765].loadFromFile("Video_About\\About_video_3_166.jpg");
	textures_about[766].loadFromFile("Video_About\\About_video_3_167.jpg");
	textures_about[767].loadFromFile("Video_About\\About_video_3_168.jpg");
	textures_about[768].loadFromFile("Video_About\\About_video_3_169.jpg");
	textures_about[769].loadFromFile("Video_About\\About_video_3_170.jpg");
	textures_about[770].loadFromFile("Video_About\\About_video_3_171.jpg");
	textures_about[771].loadFromFile("Video_About\\About_video_3_172.jpg");
	textures_about[772].loadFromFile("Video_About\\About_video_3_173.jpg");
	textures_about[773].loadFromFile("Video_About\\About_video_3_174.jpg");
	textures_about[774].loadFromFile("Video_About\\About_video_3_175.jpg");
	textures_about[775].loadFromFile("Video_About\\About_video_3_176.jpg");
	textures_about[776].loadFromFile("Video_About\\About_video_3_177.jpg");
	textures_about[777].loadFromFile("Video_About\\About_video_3_178.jpg");
	textures_about[778].loadFromFile("Video_About\\About_video_3_179.jpg");
	textures_about[779].loadFromFile("Video_About\\About_video_3_180.jpg");
	textures_about[780].loadFromFile("Video_About\\About_video_3_181.jpg");
	textures_about[781].loadFromFile("Video_About\\About_video_3_182.jpg");
	textures_about[782].loadFromFile("Video_About\\About_video_3_183.jpg");
	textures_about[783].loadFromFile("Video_About\\About_video_3_184.jpg");
	textures_about[784].loadFromFile("Video_About\\About_video_3_185.jpg");
	textures_about[785].loadFromFile("Video_About\\About_video_3_186.jpg");
	textures_about[786].loadFromFile("Video_About\\About_video_3_187.jpg");
	textures_about[787].loadFromFile("Video_About\\About_video_3_188.jpg");
	textures_about[788].loadFromFile("Video_About\\About_video_3_189.jpg");
	textures_about[789].loadFromFile("Video_About\\About_video_3_190.jpg");
	textures_about[790].loadFromFile("Video_About\\About_video_3_191.jpg");
	textures_about[791].loadFromFile("Video_About\\About_video_3_192.jpg");
	textures_about[792].loadFromFile("Video_About\\About_video_3_193.jpg");
	textures_about[793].loadFromFile("Video_About\\About_video_3_194.jpg");
	textures_about[794].loadFromFile("Video_About\\About_video_3_195.jpg");
	textures_about[795].loadFromFile("Video_About\\About_video_3_196.jpg");
	textures_about[796].loadFromFile("Video_About\\About_video_3_197.jpg");
	textures_about[797].loadFromFile("Video_About\\About_video_3_198.jpg");
	textures_about[798].loadFromFile("Video_About\\About_video_3_199.jpg");
	textures_about[799].loadFromFile("Video_About\\About_video_3_200.jpg");
	textures_about[800].loadFromFile("Video_About\\About_video_3_201.jpg");
	textures_about[801].loadFromFile("Video_About\\About_video_3_202.jpg");
	textures_about[802].loadFromFile("Video_About\\About_video_3_203.jpg");
	textures_about[803].loadFromFile("Video_About\\About_video_3_204.jpg");
	textures_about[804].loadFromFile("Video_About\\About_video_3_205.jpg");
	textures_about[805].loadFromFile("Video_About\\About_video_3_206.jpg");
	textures_about[806].loadFromFile("Video_About\\About_video_3_207.jpg");
	textures_about[807].loadFromFile("Video_About\\About_video_3_208.jpg");
	textures_about[808].loadFromFile("Video_About\\About_video_3_209.jpg");
	textures_about[809].loadFromFile("Video_About\\About_video_3_210.jpg");
	textures_about[810].loadFromFile("Video_About\\About_video_3_211.jpg");
	textures_about[811].loadFromFile("Video_About\\About_video_3_212.jpg");
	textures_about[812].loadFromFile("Video_About\\About_video_3_213.jpg");
	textures_about[813].loadFromFile("Video_About\\About_video_3_214.jpg");
	textures_about[814].loadFromFile("Video_About\\About_video_3_215.jpg");
	textures_about[815].loadFromFile("Video_About\\About_video_3_216.jpg");
	textures_about[816].loadFromFile("Video_About\\About_video_3_217.jpg");
	textures_about[817].loadFromFile("Video_About\\About_video_3_218.jpg");
	textures_about[818].loadFromFile("Video_About\\About_video_3_219.jpg");
	textures_about[819].loadFromFile("Video_About\\About_video_3_220.jpg");
	textures_about[820].loadFromFile("Video_About\\About_video_3_221.jpg");
	textures_about[821].loadFromFile("Video_About\\About_video_3_222.jpg");
	textures_about[822].loadFromFile("Video_About\\About_video_3_223.jpg");
	textures_about[823].loadFromFile("Video_About\\About_video_3_224.jpg");
	textures_about[824].loadFromFile("Video_About\\About_video_3_225.jpg");
	textures_about[825].loadFromFile("Video_About\\About_video_3_226.jpg");
	textures_about[826].loadFromFile("Video_About\\About_video_3_227.jpg");
	textures_about[827].loadFromFile("Video_About\\About_video_3_228.jpg");
	textures_about[828].loadFromFile("Video_About\\About_video_3_229.jpg");
	textures_about[829].loadFromFile("Video_About\\About_video_3_230.jpg");
	textures_about[830].loadFromFile("Video_About\\About_video_3_231.jpg");
	textures_about[831].loadFromFile("Video_About\\About_video_3_232.jpg");
	textures_about[832].loadFromFile("Video_About\\About_video_3_233.jpg");
	textures_about[833].loadFromFile("Video_About\\About_video_3_234.jpg");
	textures_about[834].loadFromFile("Video_About\\About_video_3_235.jpg");
	textures_about[835].loadFromFile("Video_About\\About_video_3_236.jpg");
	textures_about[836].loadFromFile("Video_About\\About_video_3_237.jpg");
	textures_about[837].loadFromFile("Video_About\\About_video_3_238.jpg");
	textures_about[838].loadFromFile("Video_About\\About_video_3_239.jpg");
	textures_about[839].loadFromFile("Video_About\\About_video_3_240.jpg");
	textures_about[840].loadFromFile("Video_About\\About_video_3_241.jpg");
	textures_about[841].loadFromFile("Video_About\\About_video_3_242.jpg");
	textures_about[842].loadFromFile("Video_About\\About_video_3_243.jpg");
	textures_about[843].loadFromFile("Video_About\\About_video_3_244.jpg");
	textures_about[844].loadFromFile("Video_About\\About_video_3_245.jpg");
	textures_about[845].loadFromFile("Video_About\\About_video_3_246.jpg");
	textures_about[846].loadFromFile("Video_About\\About_video_3_247.jpg");
	textures_about[847].loadFromFile("Video_About\\About_video_3_248.jpg");
	textures_about[848].loadFromFile("Video_About\\About_video_3_249.jpg");
	textures_about[849].loadFromFile("Video_About\\About_video_3_250.jpg");
	textures_about[850].loadFromFile("Video_About\\About_video_3_251.jpg");
	textures_about[851].loadFromFile("Video_About\\About_video_3_252.jpg");
	textures_about[852].loadFromFile("Video_About\\About_video_3_253.jpg");
	textures_about[853].loadFromFile("Video_About\\About_video_3_254.jpg");
	textures_about[854].loadFromFile("Video_About\\About_video_3_255.jpg");
	textures_about[855].loadFromFile("Video_About\\About_video_3_256.jpg");
	textures_about[856].loadFromFile("Video_About\\About_video_3_257.jpg");
	textures_about[857].loadFromFile("Video_About\\About_video_3_258.jpg");
	textures_about[858].loadFromFile("Video_About\\About_video_3_259.jpg");
	textures_about[859].loadFromFile("Video_About\\About_video_3_260.jpg");
	textures_about[860].loadFromFile("Video_About\\About_video_3_261.jpg");
	textures_about[861].loadFromFile("Video_About\\About_video_3_262.jpg");
	textures_about[862].loadFromFile("Video_About\\About_video_3_263.jpg");
	textures_about[863].loadFromFile("Video_About\\About_video_3_264.jpg");
	textures_about[864].loadFromFile("Video_About\\About_video_3_265.jpg");
	textures_about[865].loadFromFile("Video_About\\About_video_3_266.jpg");
	textures_about[866].loadFromFile("Video_About\\About_video_3_267.jpg");
	textures_about[867].loadFromFile("Video_About\\About_video_3_268.jpg");
	textures_about[868].loadFromFile("Video_About\\About_video_3_269.jpg");
	textures_about[869].loadFromFile("Video_About\\About_video_3_270.jpg");
	textures_about[870].loadFromFile("Video_About\\About_video_3_271.jpg");
	textures_about[871].loadFromFile("Video_About\\About_video_3_272.jpg");
	textures_about[872].loadFromFile("Video_About\\About_video_3_273.jpg");
	textures_about[873].loadFromFile("Video_About\\About_video_3_274.jpg");
	textures_about[874].loadFromFile("Video_About\\About_video_3_275.jpg");
	textures_about[875].loadFromFile("Video_About\\About_video_3_276.jpg");
	textures_about[876].loadFromFile("Video_About\\About_video_3_277.jpg");
	textures_about[877].loadFromFile("Video_About\\About_video_3_278.jpg");
	textures_about[878].loadFromFile("Video_About\\About_video_3_279.jpg");
	textures_about[879].loadFromFile("Video_About\\About_video_3_280.jpg");
	textures_about[880].loadFromFile("Video_About\\About_video_3_281.jpg");
	textures_about[881].loadFromFile("Video_About\\About_video_3_282.jpg");
	textures_about[882].loadFromFile("Video_About\\About_video_3_283.jpg");
	textures_about[883].loadFromFile("Video_About\\About_video_3_284.jpg");
	textures_about[884].loadFromFile("Video_About\\About_video_3_285.jpg");
	textures_about[885].loadFromFile("Video_About\\About_video_3_286.jpg");
	textures_about[886].loadFromFile("Video_About\\About_video_3_287.jpg");
	textures_about[887].loadFromFile("Video_About\\About_video_3_288.jpg");
	textures_about[888].loadFromFile("Video_About\\About_video_3_289.jpg");
	textures_about[889].loadFromFile("Video_About\\About_video_3_290.jpg");
	textures_about[890].loadFromFile("Video_About\\About_video_3_291.jpg");
}
void About_video::Next_cadr_about() {
	Time time_about = clock_about.getElapsedTime();
	int As_ab = time_about.asMicroseconds();
	if (As_ab > 1000000 / 9.5) {
		cadr_about++;
		if (cadr_about == 891) { cadr_about = 0; }
		switch (cadr_about) {
		case 0: { sprite_about.setTexture(textures_about[0]); break; }
		case 1: { sprite_about.setTexture(textures_about[1]); break; }
		case 2: { sprite_about.setTexture(textures_about[2]); break; }
		case 3: { sprite_about.setTexture(textures_about[3]); break; }
		case 4: { sprite_about.setTexture(textures_about[4]); break; }
		case 5: { sprite_about.setTexture(textures_about[5]); break; }
		case 6: { sprite_about.setTexture(textures_about[6]); break; }
		case 7: { sprite_about.setTexture(textures_about[7]); break; }
		case 8: { sprite_about.setTexture(textures_about[8]); break; }
		case 9: { sprite_about.setTexture(textures_about[9]); break; }
		case 10: { sprite_about.setTexture(textures_about[10]); break; }
		case 11: { sprite_about.setTexture(textures_about[11]); break; }
		case 12: { sprite_about.setTexture(textures_about[12]); break; }
		case 13: { sprite_about.setTexture(textures_about[13]); break; }
		case 14: { sprite_about.setTexture(textures_about[14]); break; }
		case 15: { sprite_about.setTexture(textures_about[15]); break; }
		case 16: { sprite_about.setTexture(textures_about[16]); break; }
		case 17: { sprite_about.setTexture(textures_about[17]); break; }
		case 18: { sprite_about.setTexture(textures_about[18]); break; }
		case 19: { sprite_about.setTexture(textures_about[19]); break; }
		case 20: { sprite_about.setTexture(textures_about[20]); break; }
		case 21: { sprite_about.setTexture(textures_about[21]); break; }
		case 22: { sprite_about.setTexture(textures_about[22]); break; }
		case 23: { sprite_about.setTexture(textures_about[23]); break; }
		case 24: { sprite_about.setTexture(textures_about[24]); break; }
		case 25: { sprite_about.setTexture(textures_about[25]); break; }
		case 26: { sprite_about.setTexture(textures_about[26]); break; }
		case 27: { sprite_about.setTexture(textures_about[27]); break; }
		case 28: { sprite_about.setTexture(textures_about[28]); break; }
		case 29: { sprite_about.setTexture(textures_about[29]); break; }
		case 30: { sprite_about.setTexture(textures_about[30]); break; }
		case 31: { sprite_about.setTexture(textures_about[31]); break; }
		case 32: { sprite_about.setTexture(textures_about[32]); break; }
		case 33: { sprite_about.setTexture(textures_about[33]); break; }
		case 34: { sprite_about.setTexture(textures_about[34]); break; }
		case 35: { sprite_about.setTexture(textures_about[35]); break; }
		case 36: { sprite_about.setTexture(textures_about[36]); break; }
		case 37: { sprite_about.setTexture(textures_about[37]); break; }
		case 38: { sprite_about.setTexture(textures_about[38]); break; }
		case 39: { sprite_about.setTexture(textures_about[39]); break; }
		case 40: { sprite_about.setTexture(textures_about[40]); break; }
		case 41: { sprite_about.setTexture(textures_about[41]); break; }
		case 42: { sprite_about.setTexture(textures_about[42]); break; }
		case 43: { sprite_about.setTexture(textures_about[43]); break; }
		case 44: { sprite_about.setTexture(textures_about[44]); break; }
		case 45: { sprite_about.setTexture(textures_about[45]); break; }
		case 46: { sprite_about.setTexture(textures_about[46]); break; }
		case 47: { sprite_about.setTexture(textures_about[47]); break; }
		case 48: { sprite_about.setTexture(textures_about[48]); break; }
		case 49: { sprite_about.setTexture(textures_about[49]); break; }
		case 50: { sprite_about.setTexture(textures_about[50]); break; }
		case 51: { sprite_about.setTexture(textures_about[51]); break; }
		case 52: { sprite_about.setTexture(textures_about[52]); break; }
		case 53: { sprite_about.setTexture(textures_about[53]); break; }
		case 54: { sprite_about.setTexture(textures_about[54]); break; }
		case 55: { sprite_about.setTexture(textures_about[55]); break; }
		case 56: { sprite_about.setTexture(textures_about[56]); break; }
		case 57: { sprite_about.setTexture(textures_about[57]); break; }
		case 58: { sprite_about.setTexture(textures_about[58]); break; }
		case 59: { sprite_about.setTexture(textures_about[59]); break; }
		case 60: { sprite_about.setTexture(textures_about[60]); break; }
		case 61: { sprite_about.setTexture(textures_about[61]); break; }
		case 62: { sprite_about.setTexture(textures_about[62]); break; }
		case 63: { sprite_about.setTexture(textures_about[63]); break; }
		case 64: { sprite_about.setTexture(textures_about[64]); break; }
		case 65: { sprite_about.setTexture(textures_about[65]); break; }
		case 66: { sprite_about.setTexture(textures_about[66]); break; }
		case 67: { sprite_about.setTexture(textures_about[67]); break; }
		case 68: { sprite_about.setTexture(textures_about[68]); break; }
		case 69: { sprite_about.setTexture(textures_about[69]); break; }
		case 70: { sprite_about.setTexture(textures_about[70]); break; }
		case 71: { sprite_about.setTexture(textures_about[71]); break; }
		case 72: { sprite_about.setTexture(textures_about[72]); break; }
		case 73: { sprite_about.setTexture(textures_about[73]); break; }
		case 74: { sprite_about.setTexture(textures_about[74]); break; }
		case 75: { sprite_about.setTexture(textures_about[75]); break; }
		case 76: { sprite_about.setTexture(textures_about[76]); break; }
		case 77: { sprite_about.setTexture(textures_about[77]); break; }
		case 78: { sprite_about.setTexture(textures_about[78]); break; }
		case 79: { sprite_about.setTexture(textures_about[79]); break; }
		case 80: { sprite_about.setTexture(textures_about[80]); break; }
		case 81: { sprite_about.setTexture(textures_about[81]); break; }
		case 82: { sprite_about.setTexture(textures_about[82]); break; }
		case 83: { sprite_about.setTexture(textures_about[83]); break; }
		case 84: { sprite_about.setTexture(textures_about[84]); break; }
		case 85: { sprite_about.setTexture(textures_about[85]); break; }
		case 86: { sprite_about.setTexture(textures_about[86]); break; }
		case 87: { sprite_about.setTexture(textures_about[87]); break; }
		case 88: { sprite_about.setTexture(textures_about[88]); break; }
		case 89: { sprite_about.setTexture(textures_about[89]); break; }
		case 90: { sprite_about.setTexture(textures_about[90]); break; }
		case 91: { sprite_about.setTexture(textures_about[91]); break; }
		case 92: { sprite_about.setTexture(textures_about[92]); break; }
		case 93: { sprite_about.setTexture(textures_about[93]); break; }
		case 94: { sprite_about.setTexture(textures_about[94]); break; }
		case 95: { sprite_about.setTexture(textures_about[95]); break; }
		case 96: { sprite_about.setTexture(textures_about[96]); break; }
		case 97: { sprite_about.setTexture(textures_about[97]); break; }
		case 98: { sprite_about.setTexture(textures_about[98]); break; }
		case 99: { sprite_about.setTexture(textures_about[99]); break; }
		case 100: { sprite_about.setTexture(textures_about[100]); break; }
		case 101: { sprite_about.setTexture(textures_about[101]); break; }
		case 102: { sprite_about.setTexture(textures_about[102]); break; }
		case 103: { sprite_about.setTexture(textures_about[103]); break; }
		case 104: { sprite_about.setTexture(textures_about[104]); break; }
		case 105: { sprite_about.setTexture(textures_about[105]); break; }
		case 106: { sprite_about.setTexture(textures_about[106]); break; }
		case 107: { sprite_about.setTexture(textures_about[107]); break; }
		case 108: { sprite_about.setTexture(textures_about[108]); break; }
		case 109: { sprite_about.setTexture(textures_about[109]); break; }
		case 110: { sprite_about.setTexture(textures_about[110]); break; }
		case 111: { sprite_about.setTexture(textures_about[111]); break; }
		case 112: { sprite_about.setTexture(textures_about[112]); break; }
		case 113: { sprite_about.setTexture(textures_about[113]); break; }
		case 114: { sprite_about.setTexture(textures_about[114]); break; }
		case 115: { sprite_about.setTexture(textures_about[115]); break; }
		case 116: { sprite_about.setTexture(textures_about[116]); break; }
		case 117: { sprite_about.setTexture(textures_about[117]); break; }
		case 118: { sprite_about.setTexture(textures_about[118]); break; }
		case 119: { sprite_about.setTexture(textures_about[119]); break; }
		case 120: { sprite_about.setTexture(textures_about[120]); break; }
		case 121: { sprite_about.setTexture(textures_about[121]); break; }
		case 122: { sprite_about.setTexture(textures_about[122]); break; }
		case 123: { sprite_about.setTexture(textures_about[123]); break; }
		case 124: { sprite_about.setTexture(textures_about[124]); break; }
		case 125: { sprite_about.setTexture(textures_about[125]); break; }
		case 126: { sprite_about.setTexture(textures_about[126]); break; }
		case 127: { sprite_about.setTexture(textures_about[127]); break; }
		case 128: { sprite_about.setTexture(textures_about[128]); break; }
		case 129: { sprite_about.setTexture(textures_about[129]); break; }
		case 130: { sprite_about.setTexture(textures_about[130]); break; }
		case 131: { sprite_about.setTexture(textures_about[131]); break; }
		case 132: { sprite_about.setTexture(textures_about[132]); break; }
		case 133: { sprite_about.setTexture(textures_about[133]); break; }
		case 134: { sprite_about.setTexture(textures_about[134]); break; }
		case 135: { sprite_about.setTexture(textures_about[135]); break; }
		case 136: { sprite_about.setTexture(textures_about[136]); break; }
		case 137: { sprite_about.setTexture(textures_about[137]); break; }
		case 138: { sprite_about.setTexture(textures_about[138]); break; }
		case 139: { sprite_about.setTexture(textures_about[139]); break; }
		case 140: { sprite_about.setTexture(textures_about[140]); break; }
		case 141: { sprite_about.setTexture(textures_about[141]); break; }
		case 142: { sprite_about.setTexture(textures_about[142]); break; }
		case 143: { sprite_about.setTexture(textures_about[143]); break; }
		case 144: { sprite_about.setTexture(textures_about[144]); break; }
		case 145: { sprite_about.setTexture(textures_about[145]); break; }
		case 146: { sprite_about.setTexture(textures_about[146]); break; }
		case 147: { sprite_about.setTexture(textures_about[147]); break; }
		case 148: { sprite_about.setTexture(textures_about[148]); break; }
		case 149: { sprite_about.setTexture(textures_about[148]); break; }
		case 150: { sprite_about.setTexture(textures_about[150]); break; }
		case 151: { sprite_about.setTexture(textures_about[151]); break; }
		case 152: { sprite_about.setTexture(textures_about[152]); break; }
		case 153: { sprite_about.setTexture(textures_about[153]); break; }
		case 154: { sprite_about.setTexture(textures_about[154]); break; }
		case 155: { sprite_about.setTexture(textures_about[155]); break; }
		case 156: { sprite_about.setTexture(textures_about[156]); break; }
		case 157: { sprite_about.setTexture(textures_about[157]); break; }
		case 158: { sprite_about.setTexture(textures_about[158]); break; }
		case 159: { sprite_about.setTexture(textures_about[159]); break; }
		case 160: { sprite_about.setTexture(textures_about[160]); break; }
		case 161: { sprite_about.setTexture(textures_about[161]); break; }
		case 162: { sprite_about.setTexture(textures_about[162]); break; }
		case 163: { sprite_about.setTexture(textures_about[163]); break; }
		case 164: { sprite_about.setTexture(textures_about[164]); break; }
		case 165: { sprite_about.setTexture(textures_about[165]); break; }
		case 166: { sprite_about.setTexture(textures_about[166]); break; }
		case 167: { sprite_about.setTexture(textures_about[167]); break; }
		case 168: { sprite_about.setTexture(textures_about[168]); break; }
		case 169: { sprite_about.setTexture(textures_about[169]); break; }
		case 170: { sprite_about.setTexture(textures_about[170]); break; }
		case 171: { sprite_about.setTexture(textures_about[171]); break; }
		case 172: { sprite_about.setTexture(textures_about[172]); break; }
		case 173: { sprite_about.setTexture(textures_about[173]); break; }
		case 174: { sprite_about.setTexture(textures_about[174]); break; }
		case 175: { sprite_about.setTexture(textures_about[175]); break; }
		case 176: { sprite_about.setTexture(textures_about[176]); break; }
		case 177: { sprite_about.setTexture(textures_about[177]); break; }
		case 178: { sprite_about.setTexture(textures_about[178]); break; }
		case 179: { sprite_about.setTexture(textures_about[179]); break; }
		case 180: { sprite_about.setTexture(textures_about[180]); break; }
		case 181: { sprite_about.setTexture(textures_about[181]); break; }
		case 182: { sprite_about.setTexture(textures_about[182]); break; }
		case 183: { sprite_about.setTexture(textures_about[183]); break; }
		case 184: { sprite_about.setTexture(textures_about[184]); break; }
		case 185: { sprite_about.setTexture(textures_about[185]); break; }
		case 186: { sprite_about.setTexture(textures_about[186]); break; }
		case 187: { sprite_about.setTexture(textures_about[187]); break; }
		case 188: { sprite_about.setTexture(textures_about[188]); break; }
		case 189: { sprite_about.setTexture(textures_about[189]); break; }
		case 190: { sprite_about.setTexture(textures_about[190]); break; }
		case 191: { sprite_about.setTexture(textures_about[191]); break; }
		case 192: { sprite_about.setTexture(textures_about[192]); break; }
		case 193: { sprite_about.setTexture(textures_about[193]); break; }
		case 194: { sprite_about.setTexture(textures_about[194]); break; }
		case 195: { sprite_about.setTexture(textures_about[195]); break; }
		case 196: { sprite_about.setTexture(textures_about[196]); break; }
		case 197: { sprite_about.setTexture(textures_about[197]); break; }
		case 198: { sprite_about.setTexture(textures_about[198]); break; }
		case 199: { sprite_about.setTexture(textures_about[199]); break; }
		case 200: { sprite_about.setTexture(textures_about[200]); break; }
		case 201: { sprite_about.setTexture(textures_about[201]); break; }
		case 202: { sprite_about.setTexture(textures_about[202]); break; }
		case 203: { sprite_about.setTexture(textures_about[203]); break; }
		case 204: { sprite_about.setTexture(textures_about[204]); break; }
		case 205: { sprite_about.setTexture(textures_about[205]); break; }
		case 206: { sprite_about.setTexture(textures_about[206]); break; }
		case 207: { sprite_about.setTexture(textures_about[207]); break; }
		case 208: { sprite_about.setTexture(textures_about[208]); break; }
		case 209: { sprite_about.setTexture(textures_about[209]); break; }
		case 210: { sprite_about.setTexture(textures_about[210]); break; }
		case 211: { sprite_about.setTexture(textures_about[211]); break; }
		case 212: { sprite_about.setTexture(textures_about[212]); break; }
		case 213: { sprite_about.setTexture(textures_about[213]); break; }
		case 214: { sprite_about.setTexture(textures_about[214]); break; }
		case 215: { sprite_about.setTexture(textures_about[215]); break; }
		case 216: { sprite_about.setTexture(textures_about[216]); break; }
		case 217: { sprite_about.setTexture(textures_about[217]); break; }
		case 218: { sprite_about.setTexture(textures_about[218]); break; }
		case 219: { sprite_about.setTexture(textures_about[219]); break; }
		case 220: { sprite_about.setTexture(textures_about[220]); break; }
		case 221: { sprite_about.setTexture(textures_about[221]); break; }
		case 222: { sprite_about.setTexture(textures_about[222]); break; }
		case 223: { sprite_about.setTexture(textures_about[223]); break; }
		case 224: { sprite_about.setTexture(textures_about[224]); break; }
		case 225: { sprite_about.setTexture(textures_about[225]); break; }
		case 226: { sprite_about.setTexture(textures_about[226]); break; }
		case 227: { sprite_about.setTexture(textures_about[227]); break; }
		case 228: { sprite_about.setTexture(textures_about[228]); break; }
		case 229: { sprite_about.setTexture(textures_about[229]); break; }
		case 230: { sprite_about.setTexture(textures_about[230]); break; }
		case 231: { sprite_about.setTexture(textures_about[231]); break; }
		case 232: { sprite_about.setTexture(textures_about[232]); break; }
		case 233: { sprite_about.setTexture(textures_about[233]); break; }
		case 234: { sprite_about.setTexture(textures_about[234]); break; }
		case 235: { sprite_about.setTexture(textures_about[235]); break; }
		case 236: { sprite_about.setTexture(textures_about[236]); break; }
		case 237: { sprite_about.setTexture(textures_about[237]); break; }
		case 238: { sprite_about.setTexture(textures_about[238]); break; }
		case 239: { sprite_about.setTexture(textures_about[239]); break; }
		case 240: { sprite_about.setTexture(textures_about[240]); break; }
		case 241: { sprite_about.setTexture(textures_about[241]); break; }
		case 242: { sprite_about.setTexture(textures_about[242]); break; }
		case 243: { sprite_about.setTexture(textures_about[243]); break; }
		case 244: { sprite_about.setTexture(textures_about[244]); break; }
		case 245: { sprite_about.setTexture(textures_about[245]); break; }
		case 246: { sprite_about.setTexture(textures_about[246]); break; }
		case 247: { sprite_about.setTexture(textures_about[247]); break; }
		case 248: { sprite_about.setTexture(textures_about[248]); break; }
		case 249: { sprite_about.setTexture(textures_about[249]); break; }
		case 250: { sprite_about.setTexture(textures_about[250]); break; }
		case 251: { sprite_about.setTexture(textures_about[251]); break; }
		case 252: { sprite_about.setTexture(textures_about[252]); break; }
		case 253: { sprite_about.setTexture(textures_about[253]); break; }
		case 254: { sprite_about.setTexture(textures_about[254]); break; }
		case 255: { sprite_about.setTexture(textures_about[255]); break; }
		case 256: { sprite_about.setTexture(textures_about[256]); break; }
		case 257: { sprite_about.setTexture(textures_about[257]); break; }
		case 258: { sprite_about.setTexture(textures_about[258]); break; }
		case 259: { sprite_about.setTexture(textures_about[259]); break; }
		case 260: { sprite_about.setTexture(textures_about[260]); break; }
		case 261: { sprite_about.setTexture(textures_about[261]); break; }
		case 262: { sprite_about.setTexture(textures_about[262]); break; }
		case 263: { sprite_about.setTexture(textures_about[263]); break; }
		case 264: { sprite_about.setTexture(textures_about[264]); break; }
		case 265: { sprite_about.setTexture(textures_about[265]); break; }
		case 266: { sprite_about.setTexture(textures_about[266]); break; }
		case 267: { sprite_about.setTexture(textures_about[267]); break; }
		case 268: { sprite_about.setTexture(textures_about[268]); break; }
		case 269: { sprite_about.setTexture(textures_about[269]); break; }
		case 270: { sprite_about.setTexture(textures_about[270]); break; }
		case 271: { sprite_about.setTexture(textures_about[271]); break; }
		case 272: { sprite_about.setTexture(textures_about[272]); break; }
		case 273: { sprite_about.setTexture(textures_about[273]); break; }
		case 274: { sprite_about.setTexture(textures_about[274]); break; }
		case 275: { sprite_about.setTexture(textures_about[275]); break; }
		case 276: { sprite_about.setTexture(textures_about[276]); break; }
		case 277: { sprite_about.setTexture(textures_about[277]); break; }
		case 278: { sprite_about.setTexture(textures_about[278]); break; }
		case 279: { sprite_about.setTexture(textures_about[279]); break; }
		case 280: { sprite_about.setTexture(textures_about[280]); break; }
		case 281: { sprite_about.setTexture(textures_about[281]); break; }
		case 282: { sprite_about.setTexture(textures_about[282]); break; }
		case 283: { sprite_about.setTexture(textures_about[283]); break; }
		case 284: { sprite_about.setTexture(textures_about[284]); break; }
		case 285: { sprite_about.setTexture(textures_about[285]); break; }
		case 286: { sprite_about.setTexture(textures_about[286]); break; }
		case 287: { sprite_about.setTexture(textures_about[287]); break; }
		case 288: { sprite_about.setTexture(textures_about[288]); break; }
		case 289: { sprite_about.setTexture(textures_about[289]); break; }
		case 290: { sprite_about.setTexture(textures_about[290]); break; }
		case 291: { sprite_about.setTexture(textures_about[291]); break; }
		case 292: { sprite_about.setTexture(textures_about[292]); break; }
		case 293: { sprite_about.setTexture(textures_about[293]); break; }
		case 294: { sprite_about.setTexture(textures_about[294]); break; }
		case 295: { sprite_about.setTexture(textures_about[295]); break; }
		case 296: { sprite_about.setTexture(textures_about[296]); break; }
		case 297: { sprite_about.setTexture(textures_about[297]); break; }
		case 298: { sprite_about.setTexture(textures_about[298]); break; }
		case 299: { sprite_about.setTexture(textures_about[299]); break; }
		case 300: { sprite_about.setTexture(textures_about[300]); break; }
		case 301: { sprite_about.setTexture(textures_about[301]); break; }
		case 302: { sprite_about.setTexture(textures_about[302]); break; }
		case 303: { sprite_about.setTexture(textures_about[303]); break; }
		case 304: { sprite_about.setTexture(textures_about[304]); break; }
		case 305: { sprite_about.setTexture(textures_about[305]); break; }
		case 306: { sprite_about.setTexture(textures_about[306]); break; }
		case 307: { sprite_about.setTexture(textures_about[307]); break; }
		case 308: { sprite_about.setTexture(textures_about[308]); break; }
		case 309: { sprite_about.setTexture(textures_about[309]); break; }
		case 310: { sprite_about.setTexture(textures_about[310]); break; }
		case 311: { sprite_about.setTexture(textures_about[311]); break; }
		case 312: { sprite_about.setTexture(textures_about[312]); break; }
		case 313: { sprite_about.setTexture(textures_about[313]); break; }
		case 314: { sprite_about.setTexture(textures_about[314]); break; }
		case 315: { sprite_about.setTexture(textures_about[315]); break; }
		case 316: { sprite_about.setTexture(textures_about[316]); break; }
		case 317: { sprite_about.setTexture(textures_about[317]); break; }
		case 318: { sprite_about.setTexture(textures_about[318]); break; }
		case 319: { sprite_about.setTexture(textures_about[319]); break; }
		case 320: { sprite_about.setTexture(textures_about[320]); break; }
		case 321: { sprite_about.setTexture(textures_about[321]); break; }
		case 322: { sprite_about.setTexture(textures_about[322]); break; }
		case 323: { sprite_about.setTexture(textures_about[323]); break; }
		case 324: { sprite_about.setTexture(textures_about[324]); break; }
		case 325: { sprite_about.setTexture(textures_about[325]); break; }
		case 326: { sprite_about.setTexture(textures_about[326]); break; }
		case 327: { sprite_about.setTexture(textures_about[327]); break; }
		case 328: { sprite_about.setTexture(textures_about[328]); break; }
		case 329: { sprite_about.setTexture(textures_about[329]); break; }
		case 330: { sprite_about.setTexture(textures_about[330]); break; }
		case 331: { sprite_about.setTexture(textures_about[331]); break; }
		case 332: { sprite_about.setTexture(textures_about[332]); break; }
		case 333: { sprite_about.setTexture(textures_about[333]); break; }
		case 334: { sprite_about.setTexture(textures_about[334]); break; }
		case 335: { sprite_about.setTexture(textures_about[335]); break; }
		case 336: { sprite_about.setTexture(textures_about[336]); break; }
		case 337: { sprite_about.setTexture(textures_about[337]); break; }
		case 338: { sprite_about.setTexture(textures_about[338]); break; }
		case 339: { sprite_about.setTexture(textures_about[339]); break; }
		case 340: { sprite_about.setTexture(textures_about[340]); break; }
		case 341: { sprite_about.setTexture(textures_about[341]); break; }
		case 342: { sprite_about.setTexture(textures_about[342]); break; }
		case 343: { sprite_about.setTexture(textures_about[343]); break; }
		case 344: { sprite_about.setTexture(textures_about[344]); break; }
		case 345: { sprite_about.setTexture(textures_about[345]); break; }
		case 346: { sprite_about.setTexture(textures_about[346]); break; }
		case 347: { sprite_about.setTexture(textures_about[347]); break; }
		case 348: { sprite_about.setTexture(textures_about[348]); break; }
		case 349: { sprite_about.setTexture(textures_about[349]); break; }
		case 350: { sprite_about.setTexture(textures_about[350]); break; }
		case 351: { sprite_about.setTexture(textures_about[351]); break; }
		case 352: { sprite_about.setTexture(textures_about[352]); break; }
		case 353: { sprite_about.setTexture(textures_about[353]); break; }
		case 354: { sprite_about.setTexture(textures_about[354]); break; }
		case 355: { sprite_about.setTexture(textures_about[355]); break; }
		case 356: { sprite_about.setTexture(textures_about[356]); break; }
		case 357: { sprite_about.setTexture(textures_about[357]); break; }
		case 358: { sprite_about.setTexture(textures_about[358]); break; }
		case 359: { sprite_about.setTexture(textures_about[359]); break; }
		case 360: { sprite_about.setTexture(textures_about[360]); break; }
		case 361: { sprite_about.setTexture(textures_about[361]); break; }
		case 362: { sprite_about.setTexture(textures_about[362]); break; }
		case 363: { sprite_about.setTexture(textures_about[363]); break; }
		case 364: { sprite_about.setTexture(textures_about[364]); break; }
		case 365: { sprite_about.setTexture(textures_about[365]); break; }
		case 366: { sprite_about.setTexture(textures_about[366]); break; }
		case 367: { sprite_about.setTexture(textures_about[367]); break; }
		case 368: { sprite_about.setTexture(textures_about[368]); break; }
		case 369: { sprite_about.setTexture(textures_about[369]); break; }
		case 370: { sprite_about.setTexture(textures_about[370]); break; }
		case 371: { sprite_about.setTexture(textures_about[371]); break; }
		case 372: { sprite_about.setTexture(textures_about[372]); break; }
		case 373: { sprite_about.setTexture(textures_about[373]); break; }
		case 374: { sprite_about.setTexture(textures_about[374]); break; }
		case 375: { sprite_about.setTexture(textures_about[375]); break; }
		case 376: { sprite_about.setTexture(textures_about[376]); break; }
		case 377: { sprite_about.setTexture(textures_about[377]); break; }
		case 378: { sprite_about.setTexture(textures_about[378]); break; }
		case 379: { sprite_about.setTexture(textures_about[379]); break; }
		case 380: { sprite_about.setTexture(textures_about[380]); break; }
		case 381: { sprite_about.setTexture(textures_about[381]); break; }
		case 382: { sprite_about.setTexture(textures_about[382]); break; }
		case 383: { sprite_about.setTexture(textures_about[383]); break; }
		case 384: { sprite_about.setTexture(textures_about[384]); break; }
		case 385: { sprite_about.setTexture(textures_about[385]); break; }
		case 386: { sprite_about.setTexture(textures_about[386]); break; }
		case 387: { sprite_about.setTexture(textures_about[387]); break; }
		case 388: { sprite_about.setTexture(textures_about[388]); break; }
		case 389: { sprite_about.setTexture(textures_about[389]); break; }
		case 390: { sprite_about.setTexture(textures_about[390]); break; }
		case 391: { sprite_about.setTexture(textures_about[391]); break; }
		case 392: { sprite_about.setTexture(textures_about[392]); break; }
		case 393: { sprite_about.setTexture(textures_about[393]); break; }
		case 394: { sprite_about.setTexture(textures_about[394]); break; }
		case 395: { sprite_about.setTexture(textures_about[395]); break; }
		case 396: { sprite_about.setTexture(textures_about[396]); break; }
		case 397: { sprite_about.setTexture(textures_about[397]); break; }
		case 398: { sprite_about.setTexture(textures_about[398]); break; }
		case 399: { sprite_about.setTexture(textures_about[399]); break; }
		case 400: { sprite_about.setTexture(textures_about[400]); break; }
		case 401: { sprite_about.setTexture(textures_about[401]); break; }
		case 402: { sprite_about.setTexture(textures_about[402]); break; }
		case 403: { sprite_about.setTexture(textures_about[403]); break; }
		case 404: { sprite_about.setTexture(textures_about[404]); break; }
		case 405: { sprite_about.setTexture(textures_about[405]); break; }
		case 406: { sprite_about.setTexture(textures_about[406]); break; }
		case 407: { sprite_about.setTexture(textures_about[407]); break; }
		case 408: { sprite_about.setTexture(textures_about[408]); break; }
		case 409: { sprite_about.setTexture(textures_about[409]); break; }
		case 410: { sprite_about.setTexture(textures_about[410]); break; }
		case 411: { sprite_about.setTexture(textures_about[411]); break; }
		case 412: { sprite_about.setTexture(textures_about[412]); break; }
		case 413: { sprite_about.setTexture(textures_about[413]); break; }
		case 414: { sprite_about.setTexture(textures_about[414]); break; }
		case 415: { sprite_about.setTexture(textures_about[415]); break; }
		case 416: { sprite_about.setTexture(textures_about[416]); break; }
		case 417: { sprite_about.setTexture(textures_about[417]); break; }
		case 418: { sprite_about.setTexture(textures_about[418]); break; }
		case 419: { sprite_about.setTexture(textures_about[419]); break; }
		case 420: { sprite_about.setTexture(textures_about[420]); break; }
		case 421: { sprite_about.setTexture(textures_about[421]); break; }
		case 422: { sprite_about.setTexture(textures_about[422]); break; }
		case 423: { sprite_about.setTexture(textures_about[423]); break; }
		case 424: { sprite_about.setTexture(textures_about[424]); break; }
		case 425: { sprite_about.setTexture(textures_about[425]); break; }
		case 426: { sprite_about.setTexture(textures_about[426]); break; }
		case 427: { sprite_about.setTexture(textures_about[427]); break; }
		case 428: { sprite_about.setTexture(textures_about[428]); break; }
		case 429: { sprite_about.setTexture(textures_about[429]); break; }
		case 430: { sprite_about.setTexture(textures_about[430]); break; }
		case 431: { sprite_about.setTexture(textures_about[431]); break; }
		case 432: { sprite_about.setTexture(textures_about[432]); break; }
		case 433: { sprite_about.setTexture(textures_about[433]); break; }
		case 434: { sprite_about.setTexture(textures_about[434]); break; }
		case 435: { sprite_about.setTexture(textures_about[435]); break; }
		case 436: { sprite_about.setTexture(textures_about[436]); break; }
		case 437: { sprite_about.setTexture(textures_about[437]); break; }
		case 438: { sprite_about.setTexture(textures_about[438]); break; }
		case 439: { sprite_about.setTexture(textures_about[439]); break; }
		case 440: { sprite_about.setTexture(textures_about[440]); break; }
		case 441: { sprite_about.setTexture(textures_about[441]); break; }
		case 442: { sprite_about.setTexture(textures_about[442]); break; }
		case 443: { sprite_about.setTexture(textures_about[443]); break; }
		case 444: { sprite_about.setTexture(textures_about[444]); break; }
		case 445: { sprite_about.setTexture(textures_about[445]); break; }
		case 446: { sprite_about.setTexture(textures_about[446]); break; }
		case 447: { sprite_about.setTexture(textures_about[447]); break; }
		case 448: { sprite_about.setTexture(textures_about[448]); break; }
		case 449: { sprite_about.setTexture(textures_about[449]); break; }
		case 450: { sprite_about.setTexture(textures_about[450]); break; }
		case 451: { sprite_about.setTexture(textures_about[451]); break; }
		case 452: { sprite_about.setTexture(textures_about[452]); break; }
		case 453: { sprite_about.setTexture(textures_about[453]); break; }
		case 454: { sprite_about.setTexture(textures_about[454]); break; }
		case 455: { sprite_about.setTexture(textures_about[455]); break; }
		case 456: { sprite_about.setTexture(textures_about[456]); break; }
		case 457: { sprite_about.setTexture(textures_about[457]); break; }
		case 458: { sprite_about.setTexture(textures_about[458]); break; }
		case 459: { sprite_about.setTexture(textures_about[459]); break; }
		case 460: { sprite_about.setTexture(textures_about[460]); break; }
		case 461: { sprite_about.setTexture(textures_about[461]); break; }
		case 462: { sprite_about.setTexture(textures_about[462]); break; }
		case 463: { sprite_about.setTexture(textures_about[463]); break; }
		case 464: { sprite_about.setTexture(textures_about[464]); break; }
		case 465: { sprite_about.setTexture(textures_about[465]); break; }
		case 466: { sprite_about.setTexture(textures_about[466]); break; }
		case 467: { sprite_about.setTexture(textures_about[467]); break; }
		case 468: { sprite_about.setTexture(textures_about[468]); break; }
		case 469: { sprite_about.setTexture(textures_about[469]); break; }
		case 470: { sprite_about.setTexture(textures_about[470]); break; }
		case 471: { sprite_about.setTexture(textures_about[471]); break; }
		case 472: { sprite_about.setTexture(textures_about[472]); break; }
		case 473: { sprite_about.setTexture(textures_about[473]); break; }
		case 474: { sprite_about.setTexture(textures_about[474]); break; }
		case 475: { sprite_about.setTexture(textures_about[475]); break; }
		case 476: { sprite_about.setTexture(textures_about[476]); break; }
		case 477: { sprite_about.setTexture(textures_about[477]); break; }
		case 478: { sprite_about.setTexture(textures_about[478]); break; }
		case 479: { sprite_about.setTexture(textures_about[479]); break; }
		case 480: { sprite_about.setTexture(textures_about[480]); break; }
		case 481: { sprite_about.setTexture(textures_about[481]); break; }
		case 482: { sprite_about.setTexture(textures_about[482]); break; }
		case 483: { sprite_about.setTexture(textures_about[483]); break; }
		case 484: { sprite_about.setTexture(textures_about[484]); break; }
		case 485: { sprite_about.setTexture(textures_about[485]); break; }
		case 486: { sprite_about.setTexture(textures_about[486]); break; }
		case 487: { sprite_about.setTexture(textures_about[487]); break; }
		case 488: { sprite_about.setTexture(textures_about[488]); break; }
		case 489: { sprite_about.setTexture(textures_about[489]); break; }
		case 490: { sprite_about.setTexture(textures_about[490]); break; }
		case 491: { sprite_about.setTexture(textures_about[491]); break; }
		case 492: { sprite_about.setTexture(textures_about[492]); break; }
		case 493: { sprite_about.setTexture(textures_about[493]); break; }
		case 494: { sprite_about.setTexture(textures_about[494]); break; }
		case 495: { sprite_about.setTexture(textures_about[495]); break; }
		case 496: { sprite_about.setTexture(textures_about[496]); break; }
		case 497: { sprite_about.setTexture(textures_about[497]); break; }
		case 498: { sprite_about.setTexture(textures_about[498]); break; }
		case 499: { sprite_about.setTexture(textures_about[499]); break; }
		case 500: { sprite_about.setTexture(textures_about[500]); break; }
		case 501: { sprite_about.setTexture(textures_about[501]); break; }
		case 502: { sprite_about.setTexture(textures_about[502]); break; }
		case 503: { sprite_about.setTexture(textures_about[503]); break; }
		case 504: { sprite_about.setTexture(textures_about[504]); break; }
		case 505: { sprite_about.setTexture(textures_about[505]); break; }
		case 506: { sprite_about.setTexture(textures_about[506]); break; }
		case 507: { sprite_about.setTexture(textures_about[507]); break; }
		case 508: { sprite_about.setTexture(textures_about[508]); break; }
		case 509: { sprite_about.setTexture(textures_about[509]); break; }
		case 510: { sprite_about.setTexture(textures_about[510]); break; }
		case 511: { sprite_about.setTexture(textures_about[511]); break; }
		case 512: { sprite_about.setTexture(textures_about[512]); break; }
		case 513: { sprite_about.setTexture(textures_about[513]); break; }
		case 514: { sprite_about.setTexture(textures_about[514]); break; }
		case 515: { sprite_about.setTexture(textures_about[515]); break; }
		case 516: { sprite_about.setTexture(textures_about[516]); break; }
		case 517: { sprite_about.setTexture(textures_about[517]); break; }
		case 518: { sprite_about.setTexture(textures_about[518]); break; }
		case 519: { sprite_about.setTexture(textures_about[519]); break; }
		case 520: { sprite_about.setTexture(textures_about[520]); break; }
		case 521: { sprite_about.setTexture(textures_about[521]); break; }
		case 522: { sprite_about.setTexture(textures_about[522]); break; }
		case 523: { sprite_about.setTexture(textures_about[523]); break; }
		case 524: { sprite_about.setTexture(textures_about[524]); break; }
		case 525: { sprite_about.setTexture(textures_about[525]); break; }
		case 526: { sprite_about.setTexture(textures_about[526]); break; }
		case 527: { sprite_about.setTexture(textures_about[527]); break; }
		case 528: { sprite_about.setTexture(textures_about[528]); break; }
		case 529: { sprite_about.setTexture(textures_about[529]); break; }
		case 530: { sprite_about.setTexture(textures_about[530]); break; }
		case 531: { sprite_about.setTexture(textures_about[531]); break; }
		case 532: { sprite_about.setTexture(textures_about[532]); break; }
		case 533: { sprite_about.setTexture(textures_about[533]); break; }
		case 534: { sprite_about.setTexture(textures_about[534]); break; }
		case 535: { sprite_about.setTexture(textures_about[535]); break; }
		case 536: { sprite_about.setTexture(textures_about[536]); break; }
		case 537: { sprite_about.setTexture(textures_about[537]); break; }
		case 538: { sprite_about.setTexture(textures_about[538]); break; }
		case 539: { sprite_about.setTexture(textures_about[539]); break; }
		case 540: { sprite_about.setTexture(textures_about[540]); break; }
		case 541: { sprite_about.setTexture(textures_about[541]); break; }
		case 542: { sprite_about.setTexture(textures_about[542]); break; }
		case 543: { sprite_about.setTexture(textures_about[543]); break; }
		case 544: { sprite_about.setTexture(textures_about[544]); break; }
		case 545: { sprite_about.setTexture(textures_about[545]); break; }
		case 546: { sprite_about.setTexture(textures_about[546]); break; }
		case 547: { sprite_about.setTexture(textures_about[547]); break; }
		case 548: { sprite_about.setTexture(textures_about[548]); break; }
		case 549: { sprite_about.setTexture(textures_about[549]); break; }
		case 550: { sprite_about.setTexture(textures_about[550]); break; }
		case 551: { sprite_about.setTexture(textures_about[551]); break; }
		case 552: { sprite_about.setTexture(textures_about[552]); break; }
		case 553: { sprite_about.setTexture(textures_about[553]); break; }
		case 554: { sprite_about.setTexture(textures_about[554]); break; }
		case 555: { sprite_about.setTexture(textures_about[555]); break; }
		case 556: { sprite_about.setTexture(textures_about[556]); break; }
		case 557: { sprite_about.setTexture(textures_about[557]); break; }
		case 558: { sprite_about.setTexture(textures_about[558]); break; }
		case 559: { sprite_about.setTexture(textures_about[559]); break; }
		case 560: { sprite_about.setTexture(textures_about[560]); break; }
		case 561: { sprite_about.setTexture(textures_about[561]); break; }
		case 562: { sprite_about.setTexture(textures_about[562]); break; }
		case 563: { sprite_about.setTexture(textures_about[563]); break; }
		case 564: { sprite_about.setTexture(textures_about[564]); break; }
		case 565: { sprite_about.setTexture(textures_about[565]); break; }
		case 566: { sprite_about.setTexture(textures_about[566]); break; }
		case 567: { sprite_about.setTexture(textures_about[567]); break; }
		case 568: { sprite_about.setTexture(textures_about[568]); break; }
		case 569: { sprite_about.setTexture(textures_about[569]); break; }
		case 570: { sprite_about.setTexture(textures_about[570]); break; }
		case 571: { sprite_about.setTexture(textures_about[571]); break; }
		case 572: { sprite_about.setTexture(textures_about[572]); break; }
		case 573: { sprite_about.setTexture(textures_about[573]); break; }
		case 574: { sprite_about.setTexture(textures_about[574]); break; }
		case 575: { sprite_about.setTexture(textures_about[575]); break; }
		case 576: { sprite_about.setTexture(textures_about[576]); break; }
		case 577: { sprite_about.setTexture(textures_about[577]); break; }
		case 578: { sprite_about.setTexture(textures_about[578]); break; }
		case 579: { sprite_about.setTexture(textures_about[579]); break; }
		case 580: { sprite_about.setTexture(textures_about[580]); break; }
		case 581: { sprite_about.setTexture(textures_about[581]); break; }
		case 582: { sprite_about.setTexture(textures_about[582]); break; }
		case 583: { sprite_about.setTexture(textures_about[583]); break; }
		case 584: { sprite_about.setTexture(textures_about[584]); break; }
		case 585: { sprite_about.setTexture(textures_about[585]); break; }
		case 586: { sprite_about.setTexture(textures_about[586]); break; }
		case 587: { sprite_about.setTexture(textures_about[587]); break; }
		case 588: { sprite_about.setTexture(textures_about[588]); break; }
		case 589: { sprite_about.setTexture(textures_about[589]); break; }
		case 590: { sprite_about.setTexture(textures_about[590]); break; }
		case 591: { sprite_about.setTexture(textures_about[591]); break; }
		case 592: { sprite_about.setTexture(textures_about[592]); break; }
		case 593: { sprite_about.setTexture(textures_about[593]); break; }
		case 594: { sprite_about.setTexture(textures_about[594]); break; }
		case 595: { sprite_about.setTexture(textures_about[595]); break; }
		case 596: { sprite_about.setTexture(textures_about[596]); break; }
		case 597: { sprite_about.setTexture(textures_about[597]); break; }
		case 598: { sprite_about.setTexture(textures_about[598]); break; }
		case 599: { sprite_about.setTexture(textures_about[599]); break; }
		case 600: { sprite_about.setTexture(textures_about[600]); break; }
		case 601: { sprite_about.setTexture(textures_about[601]); break; }
		case 602: { sprite_about.setTexture(textures_about[602]); break; }
		case 603: { sprite_about.setTexture(textures_about[603]); break; }
		case 604: { sprite_about.setTexture(textures_about[604]); break; }
		case 605: { sprite_about.setTexture(textures_about[605]); break; }
		case 606: { sprite_about.setTexture(textures_about[606]); break; }
		case 607: { sprite_about.setTexture(textures_about[607]); break; }
		case 608: { sprite_about.setTexture(textures_about[608]); break; }
		case 609: { sprite_about.setTexture(textures_about[609]); break; }
		case 610: { sprite_about.setTexture(textures_about[610]); break; }
		case 611: { sprite_about.setTexture(textures_about[611]); break; }
		case 612: { sprite_about.setTexture(textures_about[612]); break; }
		case 613: { sprite_about.setTexture(textures_about[613]); break; }
		case 614: { sprite_about.setTexture(textures_about[614]); break; }
		case 615: { sprite_about.setTexture(textures_about[615]); break; }
		case 616: { sprite_about.setTexture(textures_about[616]); break; }
		case 617: { sprite_about.setTexture(textures_about[617]); break; }
		case 618: { sprite_about.setTexture(textures_about[618]); break; }
		case 619: { sprite_about.setTexture(textures_about[619]); break; }
		case 620: { sprite_about.setTexture(textures_about[620]); break; }
		case 621: { sprite_about.setTexture(textures_about[621]); break; }
		case 622: { sprite_about.setTexture(textures_about[622]); break; }
		case 623: { sprite_about.setTexture(textures_about[623]); break; }
		case 624: { sprite_about.setTexture(textures_about[624]); break; }
		case 625: { sprite_about.setTexture(textures_about[625]); break; }
		case 626: { sprite_about.setTexture(textures_about[626]); break; }
		case 627: { sprite_about.setTexture(textures_about[627]); break; }
		case 628: { sprite_about.setTexture(textures_about[628]); break; }
		case 629: { sprite_about.setTexture(textures_about[629]); break; }
		case 630: { sprite_about.setTexture(textures_about[630]); break; }
		case 631: { sprite_about.setTexture(textures_about[631]); break; }
		case 632: { sprite_about.setTexture(textures_about[632]); break; }
		case 633: { sprite_about.setTexture(textures_about[633]); break; }
		case 634: { sprite_about.setTexture(textures_about[634]); break; }
		case 635: { sprite_about.setTexture(textures_about[635]); break; }
		case 636: { sprite_about.setTexture(textures_about[636]); break; }
		case 637: { sprite_about.setTexture(textures_about[637]); break; }
		case 638: { sprite_about.setTexture(textures_about[638]); break; }
		case 639: { sprite_about.setTexture(textures_about[639]); break; }
		case 640: { sprite_about.setTexture(textures_about[640]); break; }
		case 641: { sprite_about.setTexture(textures_about[641]); break; }
		case 642: { sprite_about.setTexture(textures_about[642]); break; }
		case 643: { sprite_about.setTexture(textures_about[643]); break; }
		case 644: { sprite_about.setTexture(textures_about[644]); break; }
		case 645: { sprite_about.setTexture(textures_about[645]); break; }
		case 646: { sprite_about.setTexture(textures_about[646]); break; }
		case 647: { sprite_about.setTexture(textures_about[647]); break; }
		case 648: { sprite_about.setTexture(textures_about[648]); break; }
		case 649: { sprite_about.setTexture(textures_about[649]); break; }
		case 650: { sprite_about.setTexture(textures_about[650]); break; }
		case 651: { sprite_about.setTexture(textures_about[651]); break; }
		case 652: { sprite_about.setTexture(textures_about[652]); break; }
		case 653: { sprite_about.setTexture(textures_about[653]); break; }
		case 654: { sprite_about.setTexture(textures_about[654]); break; }
		case 655: { sprite_about.setTexture(textures_about[655]); break; }
		case 656: { sprite_about.setTexture(textures_about[656]); break; }
		case 657: { sprite_about.setTexture(textures_about[657]); break; }
		case 658: { sprite_about.setTexture(textures_about[658]); break; }
		case 659: { sprite_about.setTexture(textures_about[659]); break; }
		case 660: { sprite_about.setTexture(textures_about[660]); break; }
		case 661: { sprite_about.setTexture(textures_about[661]); break; }
		case 662: { sprite_about.setTexture(textures_about[662]); break; }
		case 663: { sprite_about.setTexture(textures_about[663]); break; }
		case 664: { sprite_about.setTexture(textures_about[664]); break; }
		case 665: { sprite_about.setTexture(textures_about[665]); break; }
		case 666: { sprite_about.setTexture(textures_about[666]); break; }
		case 667: { sprite_about.setTexture(textures_about[667]); break; }
		case 668: { sprite_about.setTexture(textures_about[668]); break; }
		case 669: { sprite_about.setTexture(textures_about[669]); break; }
		case 670: { sprite_about.setTexture(textures_about[670]); break; }
		case 671: { sprite_about.setTexture(textures_about[671]); break; }
		case 672: { sprite_about.setTexture(textures_about[672]); break; }
		case 673: { sprite_about.setTexture(textures_about[673]); break; }
		case 674: { sprite_about.setTexture(textures_about[674]); break; }
		case 675: { sprite_about.setTexture(textures_about[675]); break; }
		case 676: { sprite_about.setTexture(textures_about[676]); break; }
		case 677: { sprite_about.setTexture(textures_about[677]); break; }
		case 678: { sprite_about.setTexture(textures_about[678]); break; }
		case 679: { sprite_about.setTexture(textures_about[679]); break; }
		case 680: { sprite_about.setTexture(textures_about[680]); break; }
		case 681: { sprite_about.setTexture(textures_about[681]); break; }
		case 682: { sprite_about.setTexture(textures_about[682]); break; }
		case 683: { sprite_about.setTexture(textures_about[683]); break; }
		case 684: { sprite_about.setTexture(textures_about[684]); break; }
		case 685: { sprite_about.setTexture(textures_about[685]); break; }
		case 686: { sprite_about.setTexture(textures_about[686]); break; }
		case 687: { sprite_about.setTexture(textures_about[687]); break; }
		case 688: { sprite_about.setTexture(textures_about[688]); break; }
		case 689: { sprite_about.setTexture(textures_about[689]); break; }
		case 690: { sprite_about.setTexture(textures_about[690]); break; }
		case 691: { sprite_about.setTexture(textures_about[691]); break; }
		case 692: { sprite_about.setTexture(textures_about[692]); break; }
		case 693: { sprite_about.setTexture(textures_about[693]); break; }
		case 694: { sprite_about.setTexture(textures_about[694]); break; }
		case 695: { sprite_about.setTexture(textures_about[695]); break; }
		case 696: { sprite_about.setTexture(textures_about[696]); break; }
		case 697: { sprite_about.setTexture(textures_about[697]); break; }
		case 698: { sprite_about.setTexture(textures_about[698]); break; }
		case 699: { sprite_about.setTexture(textures_about[699]); break; }
		case 700: { sprite_about.setTexture(textures_about[700]); break; }
		case 701: { sprite_about.setTexture(textures_about[701]); break; }
		case 702: { sprite_about.setTexture(textures_about[702]); break; }
		case 703: { sprite_about.setTexture(textures_about[703]); break; }
		case 704: { sprite_about.setTexture(textures_about[704]); break; }
		case 705: { sprite_about.setTexture(textures_about[705]); break; }
		case 706: { sprite_about.setTexture(textures_about[706]); break; }
		case 707: { sprite_about.setTexture(textures_about[707]); break; }
		case 708: { sprite_about.setTexture(textures_about[708]); break; }
		case 709: { sprite_about.setTexture(textures_about[709]); break; }
		case 710: { sprite_about.setTexture(textures_about[710]); break; }
		case 711: { sprite_about.setTexture(textures_about[711]); break; }
		case 712: { sprite_about.setTexture(textures_about[712]); break; }
		case 713: { sprite_about.setTexture(textures_about[713]); break; }
		case 714: { sprite_about.setTexture(textures_about[714]); break; }
		case 715: { sprite_about.setTexture(textures_about[715]); break; }
		case 716: { sprite_about.setTexture(textures_about[716]); break; }
		case 717: { sprite_about.setTexture(textures_about[717]); break; }
		case 718: { sprite_about.setTexture(textures_about[718]); break; }
		case 719: { sprite_about.setTexture(textures_about[719]); break; }
		case 720: { sprite_about.setTexture(textures_about[720]); break; }
		case 721: { sprite_about.setTexture(textures_about[721]); break; }
		case 722: { sprite_about.setTexture(textures_about[722]); break; }
		case 723: { sprite_about.setTexture(textures_about[723]); break; }
		case 724: { sprite_about.setTexture(textures_about[724]); break; }
		case 725: { sprite_about.setTexture(textures_about[725]); break; }
		case 726: { sprite_about.setTexture(textures_about[726]); break; }
		case 727: { sprite_about.setTexture(textures_about[727]); break; }
		case 728: { sprite_about.setTexture(textures_about[728]); break; }
		case 729: { sprite_about.setTexture(textures_about[729]); break; }
		case 730: { sprite_about.setTexture(textures_about[730]); break; }
		case 731: { sprite_about.setTexture(textures_about[731]); break; }
		case 732: { sprite_about.setTexture(textures_about[732]); break; }
		case 733: { sprite_about.setTexture(textures_about[733]); break; }
		case 734: { sprite_about.setTexture(textures_about[734]); break; }
		case 735: { sprite_about.setTexture(textures_about[735]); break; }
		case 736: { sprite_about.setTexture(textures_about[736]); break; }
		case 737: { sprite_about.setTexture(textures_about[737]); break; }
		case 738: { sprite_about.setTexture(textures_about[738]); break; }
		case 739: { sprite_about.setTexture(textures_about[739]); break; }
		case 740: { sprite_about.setTexture(textures_about[740]); break; }
		case 741: { sprite_about.setTexture(textures_about[741]); break; }
		case 742: { sprite_about.setTexture(textures_about[742]); break; }
		case 743: { sprite_about.setTexture(textures_about[743]); break; }
		case 744: { sprite_about.setTexture(textures_about[744]); break; }
		case 745: { sprite_about.setTexture(textures_about[745]); break; }
		case 746: { sprite_about.setTexture(textures_about[746]); break; }
		case 747: { sprite_about.setTexture(textures_about[747]); break; }
		case 748: { sprite_about.setTexture(textures_about[748]); break; }
		case 749: { sprite_about.setTexture(textures_about[749]); break; }
		case 750: { sprite_about.setTexture(textures_about[750]); break; }
		case 751: { sprite_about.setTexture(textures_about[751]); break; }
		case 752: { sprite_about.setTexture(textures_about[752]); break; }
		case 753: { sprite_about.setTexture(textures_about[753]); break; }
		case 754: { sprite_about.setTexture(textures_about[754]); break; }
		case 755: { sprite_about.setTexture(textures_about[755]); break; }
		case 756: { sprite_about.setTexture(textures_about[756]); break; }
		case 757: { sprite_about.setTexture(textures_about[757]); break; }
		case 758: { sprite_about.setTexture(textures_about[758]); break; }
		case 759: { sprite_about.setTexture(textures_about[759]); break; }
		case 760: { sprite_about.setTexture(textures_about[760]); break; }
		case 761: { sprite_about.setTexture(textures_about[761]); break; }
		case 762: { sprite_about.setTexture(textures_about[762]); break; }
		case 763: { sprite_about.setTexture(textures_about[763]); break; }
		case 764: { sprite_about.setTexture(textures_about[764]); break; }
		case 765: { sprite_about.setTexture(textures_about[765]); break; }
		case 766: { sprite_about.setTexture(textures_about[766]); break; }
		case 767: { sprite_about.setTexture(textures_about[767]); break; }
		case 768: { sprite_about.setTexture(textures_about[768]); break; }
		case 769: { sprite_about.setTexture(textures_about[769]); break; }
		case 770: { sprite_about.setTexture(textures_about[770]); break; }
		case 771: { sprite_about.setTexture(textures_about[771]); break; }
		case 772: { sprite_about.setTexture(textures_about[772]); break; }
		case 773: { sprite_about.setTexture(textures_about[773]); break; }
		case 774: { sprite_about.setTexture(textures_about[774]); break; }
		case 775: { sprite_about.setTexture(textures_about[775]); break; }
		case 776: { sprite_about.setTexture(textures_about[776]); break; }
		case 777: { sprite_about.setTexture(textures_about[777]); break; }
		case 778: { sprite_about.setTexture(textures_about[778]); break; }
		case 779: { sprite_about.setTexture(textures_about[779]); break; }
		case 780: { sprite_about.setTexture(textures_about[780]); break; }
		case 781: { sprite_about.setTexture(textures_about[781]); break; }
		case 782: { sprite_about.setTexture(textures_about[782]); break; }
		case 783: { sprite_about.setTexture(textures_about[783]); break; }
		case 784: { sprite_about.setTexture(textures_about[784]); break; }
		case 785: { sprite_about.setTexture(textures_about[785]); break; }
		case 786: { sprite_about.setTexture(textures_about[786]); break; }
		case 787: { sprite_about.setTexture(textures_about[787]); break; }
		case 788: { sprite_about.setTexture(textures_about[788]); break; }
		case 789: { sprite_about.setTexture(textures_about[789]); break; }
		case 790: { sprite_about.setTexture(textures_about[790]); break; }
		case 791: { sprite_about.setTexture(textures_about[791]); break; }
		case 792: { sprite_about.setTexture(textures_about[792]); break; }
		case 793: { sprite_about.setTexture(textures_about[793]); break; }
		case 794: { sprite_about.setTexture(textures_about[794]); break; }
		case 795: { sprite_about.setTexture(textures_about[795]); break; }
		case 796: { sprite_about.setTexture(textures_about[796]); break; }
		case 797: { sprite_about.setTexture(textures_about[797]); break; }
		case 798: { sprite_about.setTexture(textures_about[798]); break; }
		case 799: { sprite_about.setTexture(textures_about[799]); break; }
		case 800: { sprite_about.setTexture(textures_about[800]); break; }
		case 801: { sprite_about.setTexture(textures_about[801]); break; }
		case 802: { sprite_about.setTexture(textures_about[802]); break; }
		case 803: { sprite_about.setTexture(textures_about[803]); break; }
		case 804: { sprite_about.setTexture(textures_about[804]); break; }
		case 805: { sprite_about.setTexture(textures_about[805]); break; }
		case 806: { sprite_about.setTexture(textures_about[806]); break; }
		case 807: { sprite_about.setTexture(textures_about[807]); break; }
		case 808: { sprite_about.setTexture(textures_about[808]); break; }
		case 809: { sprite_about.setTexture(textures_about[809]); break; }
		case 810: { sprite_about.setTexture(textures_about[810]); break; }
		case 811: { sprite_about.setTexture(textures_about[811]); break; }
		case 812: { sprite_about.setTexture(textures_about[812]); break; }
		case 813: { sprite_about.setTexture(textures_about[813]); break; }
		case 814: { sprite_about.setTexture(textures_about[814]); break; }
		case 815: { sprite_about.setTexture(textures_about[815]); break; }
		case 816: { sprite_about.setTexture(textures_about[816]); break; }
		case 817: { sprite_about.setTexture(textures_about[817]); break; }
		case 818: { sprite_about.setTexture(textures_about[818]); break; }
		case 819: { sprite_about.setTexture(textures_about[819]); break; }
		case 820: { sprite_about.setTexture(textures_about[820]); break; }
		case 821: { sprite_about.setTexture(textures_about[821]); break; }
		case 822: { sprite_about.setTexture(textures_about[822]); break; }
		case 823: { sprite_about.setTexture(textures_about[823]); break; }
		case 824: { sprite_about.setTexture(textures_about[824]); break; }
		case 825: { sprite_about.setTexture(textures_about[825]); break; }
		case 826: { sprite_about.setTexture(textures_about[826]); break; }
		case 827: { sprite_about.setTexture(textures_about[827]); break; }
		case 828: { sprite_about.setTexture(textures_about[828]); break; }
		case 829: { sprite_about.setTexture(textures_about[829]); break; }
		case 830: { sprite_about.setTexture(textures_about[830]); break; }
		case 831: { sprite_about.setTexture(textures_about[831]); break; }
		case 832: { sprite_about.setTexture(textures_about[832]); break; }
		case 833: { sprite_about.setTexture(textures_about[833]); break; }
		case 834: { sprite_about.setTexture(textures_about[834]); break; }
		case 835: { sprite_about.setTexture(textures_about[835]); break; }
		case 836: { sprite_about.setTexture(textures_about[836]); break; }
		case 837: { sprite_about.setTexture(textures_about[837]); break; }
		case 838: { sprite_about.setTexture(textures_about[838]); break; }
		case 839: { sprite_about.setTexture(textures_about[839]); break; }
		case 840: { sprite_about.setTexture(textures_about[840]); break; }
		case 841: { sprite_about.setTexture(textures_about[841]); break; }
		case 842: { sprite_about.setTexture(textures_about[842]); break; }
		case 843: { sprite_about.setTexture(textures_about[843]); break; }
		case 844: { sprite_about.setTexture(textures_about[844]); break; }
		case 845: { sprite_about.setTexture(textures_about[845]); break; }
		case 846: { sprite_about.setTexture(textures_about[846]); break; }
		case 847: { sprite_about.setTexture(textures_about[847]); break; }
		case 848: { sprite_about.setTexture(textures_about[848]); break; }
		case 849: { sprite_about.setTexture(textures_about[849]); break; }
		case 850: { sprite_about.setTexture(textures_about[850]); break; }
		case 851: { sprite_about.setTexture(textures_about[851]); break; }
		case 852: { sprite_about.setTexture(textures_about[852]); break; }
		case 853: { sprite_about.setTexture(textures_about[853]); break; }
		case 854: { sprite_about.setTexture(textures_about[854]); break; }
		case 855: { sprite_about.setTexture(textures_about[855]); break; }
		case 856: { sprite_about.setTexture(textures_about[856]); break; }
		case 857: { sprite_about.setTexture(textures_about[857]); break; }
		case 858: { sprite_about.setTexture(textures_about[858]); break; }
		case 859: { sprite_about.setTexture(textures_about[859]); break; }
		case 860: { sprite_about.setTexture(textures_about[860]); break; }
		case 861: { sprite_about.setTexture(textures_about[861]); break; }
		case 862: { sprite_about.setTexture(textures_about[862]); break; }
		case 863: { sprite_about.setTexture(textures_about[863]); break; }
		case 864: { sprite_about.setTexture(textures_about[864]); break; }
		case 865: { sprite_about.setTexture(textures_about[865]); break; }
		case 866: { sprite_about.setTexture(textures_about[866]); break; }
		case 867: { sprite_about.setTexture(textures_about[867]); break; }
		case 868: { sprite_about.setTexture(textures_about[868]); break; }
		case 869: { sprite_about.setTexture(textures_about[869]); break; }
		case 870: { sprite_about.setTexture(textures_about[870]); break; }
		case 871: { sprite_about.setTexture(textures_about[871]); break; }
		case 872: { sprite_about.setTexture(textures_about[872]); break; }
		case 873: { sprite_about.setTexture(textures_about[873]); break; }
		case 874: { sprite_about.setTexture(textures_about[874]); break; }
		case 875: { sprite_about.setTexture(textures_about[875]); break; }
		case 876: { sprite_about.setTexture(textures_about[876]); break; }
		case 877: { sprite_about.setTexture(textures_about[877]); break; }
		case 878: { sprite_about.setTexture(textures_about[878]); break; }
		case 879: { sprite_about.setTexture(textures_about[879]); break; }
		case 880: { sprite_about.setTexture(textures_about[880]); break; }
		case 881: { sprite_about.setTexture(textures_about[881]); break; }
		case 882: { sprite_about.setTexture(textures_about[882]); break; }
		case 883: { sprite_about.setTexture(textures_about[883]); break; }
		case 884: { sprite_about.setTexture(textures_about[884]); break; }
		case 885: { sprite_about.setTexture(textures_about[885]); break; }
		case 886: { sprite_about.setTexture(textures_about[886]); break; }
		case 887: { sprite_about.setTexture(textures_about[887]); break; }
		case 888: { sprite_about.setTexture(textures_about[888]); break; }
		case 889: { sprite_about.setTexture(textures_about[889]); break; }
		case 890: { sprite_about.setTexture(textures_about[890]); break; }
		default: { break; }
		}
		clock_about.restart();
	}
}

Solo_Animation::Solo_Animation() {
	texture_Solo[0].loadFromFile("Animations\\Solo\\Gun_menu_000.jpg");
	texture_Solo[1].loadFromFile("Animations\\Solo\\Gun_menu_001.jpg");
	texture_Solo[2].loadFromFile("Animations\\Solo\\Gun_menu_002.jpg");
	texture_Solo[3].loadFromFile("Animations\\Solo\\Gun_menu_003.jpg");
	texture_Solo[4].loadFromFile("Animations\\Solo\\Gun_menu_004.jpg");
	texture_Solo[5].loadFromFile("Animations\\Solo\\Gun_menu_005.jpg");
	texture_Solo[6].loadFromFile("Animations\\Solo\\Gun_menu_006.jpg");
	texture_Solo[7].loadFromFile("Animations\\Solo\\Gun_menu_007.jpg");
	texture_Solo[8].loadFromFile("Animations\\Solo\\Gun_menu_008.jpg");
	texture_Solo[9].loadFromFile("Animations\\Solo\\Gun_menu_009.jpg");
	texture_Solo[10].loadFromFile("Animations\\Solo\\Gun_menu_010.jpg");
	texture_Solo[11].loadFromFile("Animations\\Solo\\Gun_menu_011.jpg");
	texture_Solo[12].loadFromFile("Animations\\Solo\\Gun_menu_012.jpg");
	texture_Solo[13].loadFromFile("Animations\\Solo\\Gun_menu_013.jpg");
	texture_Solo[14].loadFromFile("Animations\\Solo\\Gun_menu_014.jpg");
	texture_Solo[15].loadFromFile("Animations\\Solo\\Gun_menu_015.jpg");
	texture_Solo[16].loadFromFile("Animations\\Solo\\Gun_menu_016.jpg");
	texture_Solo[17].loadFromFile("Animations\\Solo\\Gun_menu_017.jpg");
	texture_Solo[18].loadFromFile("Animations\\Solo\\Gun_menu_018.jpg");
	texture_Solo[19].loadFromFile("Animations\\Solo\\Gun_menu_019.jpg");
	texture_Solo[20].loadFromFile("Animations\\Solo\\Gun_menu_020.jpg");
	texture_Solo[21].loadFromFile("Animations\\Solo\\Gun_menu_021.jpg");
	texture_Solo[22].loadFromFile("Animations\\Solo\\Gun_menu_022.jpg");
	texture_Solo[23].loadFromFile("Animations\\Solo\\Gun_menu_023.jpg");
	texture_Solo[24].loadFromFile("Animations\\Solo\\Gun_menu_024.jpg");
	texture_Solo[25].loadFromFile("Animations\\Solo\\Gun_menu_025.jpg");
	texture_Solo[26].loadFromFile("Animations\\Solo\\Gun_menu_026.jpg");
	texture_Solo[27].loadFromFile("Animations\\Solo\\Gun_menu_027.jpg");
	texture_Solo[28].loadFromFile("Animations\\Solo\\Gun_menu_028.jpg");
	texture_Solo[29].loadFromFile("Animations\\Solo\\Gun_menu_029.jpg");
	texture_Solo[30].loadFromFile("Animations\\Solo\\Gun_menu_030.jpg");
	texture_Solo[31].loadFromFile("Animations\\Solo\\Gun_menu_031.jpg");
	texture_Solo[32].loadFromFile("Animations\\Solo\\Gun_menu_032.jpg");
	texture_Solo[33].loadFromFile("Animations\\Solo\\Gun_menu_033.jpg");
	texture_Solo[34].loadFromFile("Animations\\Solo\\Gun_menu_034.jpg");
	texture_Solo[35].loadFromFile("Animations\\Solo\\Gun_menu_035.jpg");
}
void Solo_Animation::Next_cadr_Solo() {
	Time time_Solo = clock_Solo.getElapsedTime();
	int As_Solo = time_Solo.asMicroseconds();
	if (As_Solo > 1000000 / 15) {
		cadr_Solo++;
		if (cadr_Solo == 35) { cadr_Solo = 0; }
		switch (cadr_Solo) {
		case 0: { sprite_Solo.setTexture(texture_Solo[0]); break; }
		case 1: { sprite_Solo.setTexture(texture_Solo[1]); break; }
		case 2: { sprite_Solo.setTexture(texture_Solo[2]); break; }
		case 3: { sprite_Solo.setTexture(texture_Solo[3]); break; }
		case 4: { sprite_Solo.setTexture(texture_Solo[4]); break; }
		case 5: { sprite_Solo.setTexture(texture_Solo[5]); break; }
		case 6: { sprite_Solo.setTexture(texture_Solo[6]); break; }
		case 7: { sprite_Solo.setTexture(texture_Solo[7]); break; }
		case 8: { sprite_Solo.setTexture(texture_Solo[8]); break; }
		case 9: { sprite_Solo.setTexture(texture_Solo[9]); break; }
		case 10: { sprite_Solo.setTexture(texture_Solo[10]); break; }
		case 11: { sprite_Solo.setTexture(texture_Solo[11]); break; }
		case 12: { sprite_Solo.setTexture(texture_Solo[12]); break; }
		case 13: { sprite_Solo.setTexture(texture_Solo[13]); break; }
		case 14: { sprite_Solo.setTexture(texture_Solo[14]); break; }
		case 15: { sprite_Solo.setTexture(texture_Solo[15]); break; }
		case 16: { sprite_Solo.setTexture(texture_Solo[16]); break; }
		case 17: { sprite_Solo.setTexture(texture_Solo[17]); break; }
		case 18: { sprite_Solo.setTexture(texture_Solo[18]); break; }
		case 19: { sprite_Solo.setTexture(texture_Solo[19]); break; }
		case 20: { sprite_Solo.setTexture(texture_Solo[20]); break; }
		case 21: { sprite_Solo.setTexture(texture_Solo[21]); break; }
		case 22: { sprite_Solo.setTexture(texture_Solo[22]); break; }
		case 23: { sprite_Solo.setTexture(texture_Solo[23]); break; }
		case 24: { sprite_Solo.setTexture(texture_Solo[24]); break; }
		case 25: { sprite_Solo.setTexture(texture_Solo[25]); break; }
		case 26: { sprite_Solo.setTexture(texture_Solo[26]); break; }
		case 27: { sprite_Solo.setTexture(texture_Solo[27]); break; }
		case 28: { sprite_Solo.setTexture(texture_Solo[28]); break; }
		case 29: { sprite_Solo.setTexture(texture_Solo[29]); break; }
		case 30: { sprite_Solo.setTexture(texture_Solo[30]); break; }
		case 31: { sprite_Solo.setTexture(texture_Solo[31]); break; }
		case 32: { sprite_Solo.setTexture(texture_Solo[32]); break; }
		case 33: { sprite_Solo.setTexture(texture_Solo[33]); break; }
		case 34: { sprite_Solo.setTexture(texture_Solo[34]); break; }
		case 35: { sprite_Solo.setTexture(texture_Solo[35]); break; }
		default: { break; }
		}
		clock_Solo.restart();
	}
}

Dog_Animation::Dog_Animation() {
	texture_Dog[0].loadFromFile("Animations\\Dog\\Dog_000.jpg");
	texture_Dog[1].loadFromFile("Animations\\Dog\\Dog_001.jpg");
	texture_Dog[2].loadFromFile("Animations\\Dog\\Dog_002.jpg");
	texture_Dog[3].loadFromFile("Animations\\Dog\\Dog_003.jpg");
	texture_Dog[4].loadFromFile("Animations\\Dog\\Dog_004.jpg");
	texture_Dog[5].loadFromFile("Animations\\Dog\\Dog_005.jpg");
	texture_Dog[6].loadFromFile("Animations\\Dog\\Dog_006.jpg");
	texture_Dog[7].loadFromFile("Animations\\Dog\\Dog_007.jpg");
	texture_Dog[8].loadFromFile("Animations\\Dog\\Dog_008.jpg");
	texture_Dog[9].loadFromFile("Animations\\Dog\\Dog_009.jpg");
	texture_Dog[10].loadFromFile("Animations\\Dog\\Dog_010.jpg");
	texture_Dog[11].loadFromFile("Animations\\Dog\\Dog_011.jpg");
	texture_Dog[12].loadFromFile("Animations\\Dog\\Dog_012.jpg");
	texture_Dog[13].loadFromFile("Animations\\Dog\\Dog_013.jpg");
	texture_Dog[14].loadFromFile("Animations\\Dog\\Dog_014.jpg");
	texture_Dog[15].loadFromFile("Animations\\Dog\\Dog_015.jpg");
	texture_Dog[16].loadFromFile("Animations\\Dog\\Dog_016.jpg");
	texture_Dog[17].loadFromFile("Animations\\Dog\\Dog_017.jpg");
	texture_Dog[18].loadFromFile("Animations\\Dog\\Dog_018.jpg");
	texture_Dog[19].loadFromFile("Animations\\Dog\\Dog_019.jpg");
	texture_Dog[20].loadFromFile("Animations\\Dog\\Dog_020.jpg");
	texture_Dog[21].loadFromFile("Animations\\Dog\\Dog_021.jpg");
	texture_Dog[22].loadFromFile("Animations\\Dog\\Dog_022.jpg");
	texture_Dog[23].loadFromFile("Animations\\Dog\\Dog_023.jpg");
	texture_Dog[24].loadFromFile("Animations\\Dog\\Dog_024.jpg");
	texture_Dog[25].loadFromFile("Animations\\Dog\\Dog_025.jpg");
	texture_Dog[26].loadFromFile("Animations\\Dog\\Dog_026.jpg");
	texture_Dog[27].loadFromFile("Animations\\Dog\\Dog_027.jpg");
	texture_Dog[28].loadFromFile("Animations\\Dog\\Dog_028.jpg");
	texture_Dog[29].loadFromFile("Animations\\Dog\\Dog_029.jpg");
	texture_Dog[30].loadFromFile("Animations\\Dog\\Dog_030.jpg");
}
void Dog_Animation::Next_cadr_Dog() {
	Time time_dog = clock_Dog.getElapsedTime();
	int As_Dog = time_dog.asMicroseconds();
	if (As_Dog > 1000000 / 15) {
		cadr_Dog++;
		if (cadr_Dog == 30) { cadr_Dog = 0; }
		switch (cadr_Dog) {
		case 0: { sprite_Dog.setTexture(texture_Dog[0]); break; }
		case 1: { sprite_Dog.setTexture(texture_Dog[1]); break; }
		case 2: { sprite_Dog.setTexture(texture_Dog[2]); break; }
		case 3: { sprite_Dog.setTexture(texture_Dog[3]); break; }
		case 4: { sprite_Dog.setTexture(texture_Dog[4]); break; }
		case 5: { sprite_Dog.setTexture(texture_Dog[5]); break; }
		case 6: { sprite_Dog.setTexture(texture_Dog[6]); break; }
		case 7: { sprite_Dog.setTexture(texture_Dog[7]); break; }
		case 8: { sprite_Dog.setTexture(texture_Dog[8]); break; }
		case 9: { sprite_Dog.setTexture(texture_Dog[9]); break; }
		case 10: { sprite_Dog.setTexture(texture_Dog[10]); break; }
		case 11: { sprite_Dog.setTexture(texture_Dog[11]); break; }
		case 12: { sprite_Dog.setTexture(texture_Dog[12]); break; }
		case 13: { sprite_Dog.setTexture(texture_Dog[13]); break; }
		case 14: { sprite_Dog.setTexture(texture_Dog[14]); break; }
		case 15: { sprite_Dog.setTexture(texture_Dog[15]); break; }
		case 16: { sprite_Dog.setTexture(texture_Dog[16]); break; }
		case 17: { sprite_Dog.setTexture(texture_Dog[17]); break; }
		case 18: { sprite_Dog.setTexture(texture_Dog[18]); break; }
		case 19: { sprite_Dog.setTexture(texture_Dog[19]); break; }
		case 20: { sprite_Dog.setTexture(texture_Dog[20]); break; }
		case 21: { sprite_Dog.setTexture(texture_Dog[21]); break; }
		case 22: { sprite_Dog.setTexture(texture_Dog[22]); break; }
		case 23: { sprite_Dog.setTexture(texture_Dog[23]); break; }
		case 24: { sprite_Dog.setTexture(texture_Dog[24]); break; }
		case 25: { sprite_Dog.setTexture(texture_Dog[25]); break; }
		case 26: { sprite_Dog.setTexture(texture_Dog[26]); break; }
		case 27: { sprite_Dog.setTexture(texture_Dog[27]); break; }
		case 28: { sprite_Dog.setTexture(texture_Dog[28]); break; }
		case 29: { sprite_Dog.setTexture(texture_Dog[29]); break; }
		case 30: { sprite_Dog.setTexture(texture_Dog[30]); break; }
		default: { break; }
		}
		clock_Dog.restart();
	}
}

Bipods_Animation::Bipods_Animation() {
	texture_Bipods[0].loadFromFile("Animations\\Bipods\\Bipods_000.jpg");
	texture_Bipods[1].loadFromFile("Animations\\Bipods\\Bipods_001.jpg");
	texture_Bipods[2].loadFromFile("Animations\\Bipods\\Bipods_002.jpg");
	texture_Bipods[3].loadFromFile("Animations\\Bipods\\Bipods_003.jpg");
	texture_Bipods[4].loadFromFile("Animations\\Bipods\\Bipods_004.jpg");
	texture_Bipods[5].loadFromFile("Animations\\Bipods\\Bipods_005.jpg");
	texture_Bipods[6].loadFromFile("Animations\\Bipods\\Bipods_006.jpg");
	texture_Bipods[7].loadFromFile("Animations\\Bipods\\Bipods_007.jpg");
	texture_Bipods[8].loadFromFile("Animations\\Bipods\\Bipods_008.jpg");
	texture_Bipods[9].loadFromFile("Animations\\Bipods\\Bipods_009.jpg");
	texture_Bipods[10].loadFromFile("Animations\\Bipods\\Bipods_010.jpg");
	texture_Bipods[11].loadFromFile("Animations\\Bipods\\Bipods_011.jpg");
	texture_Bipods[12].loadFromFile("Animations\\Bipods\\Bipods_012.jpg");
	texture_Bipods[13].loadFromFile("Animations\\Bipods\\Bipods_013.jpg");
	texture_Bipods[14].loadFromFile("Animations\\Bipods\\Bipods_014.jpg");
	texture_Bipods[15].loadFromFile("Animations\\Bipods\\Bipods_015.jpg");
	texture_Bipods[16].loadFromFile("Animations\\Bipods\\Bipods_016.jpg");
	texture_Bipods[17].loadFromFile("Animations\\Bipods\\Bipods_017.jpg");
	texture_Bipods[18].loadFromFile("Animations\\Bipods\\Bipods_018.jpg");
	texture_Bipods[19].loadFromFile("Animations\\Bipods\\Bipods_019.jpg");
	texture_Bipods[20].loadFromFile("Animations\\Bipods\\Bipods_020.jpg");
	texture_Bipods[21].loadFromFile("Animations\\Bipods\\Bipods_021.jpg");
	texture_Bipods[22].loadFromFile("Animations\\Bipods\\Bipods_022.jpg");
	texture_Bipods[23].loadFromFile("Animations\\Bipods\\Bipods_023.jpg");
	texture_Bipods[24].loadFromFile("Animations\\Bipods\\Bipods_024.jpg");
	texture_Bipods[25].loadFromFile("Animations\\Bipods\\Bipods_025.jpg");
	texture_Bipods[26].loadFromFile("Animations\\Bipods\\Bipods_026.jpg");
	texture_Bipods[27].loadFromFile("Animations\\Bipods\\Bipods_027.jpg");
	texture_Bipods[28].loadFromFile("Animations\\Bipods\\Bipods_028.jpg");
	texture_Bipods[29].loadFromFile("Animations\\Bipods\\Bipods_029.jpg");
}
void Bipods_Animation::Next_cadr_Bipods() {
	Time time_Bipods = clock_Bipods.getElapsedTime();
	int As_Bipods = time_Bipods.asMicroseconds();
	if (As_Bipods > 1000000 / 15) {
		cadr_Bipods++;
		if (cadr_Bipods == 29) { cadr_Bipods = 0; }
		switch (cadr_Bipods) {
		case 0: { sprite_Bipods.setTexture(texture_Bipods[0]); break; }
		case 1: { sprite_Bipods.setTexture(texture_Bipods[1]); break; }
		case 2: { sprite_Bipods.setTexture(texture_Bipods[2]); break; }
		case 3: { sprite_Bipods.setTexture(texture_Bipods[3]); break; }
		case 4: { sprite_Bipods.setTexture(texture_Bipods[4]); break; }
		case 5: { sprite_Bipods.setTexture(texture_Bipods[5]); break; }
		case 6: { sprite_Bipods.setTexture(texture_Bipods[6]); break; }
		case 7: { sprite_Bipods.setTexture(texture_Bipods[7]); break; }
		case 8: { sprite_Bipods.setTexture(texture_Bipods[8]); break; }
		case 9: { sprite_Bipods.setTexture(texture_Bipods[9]); break; }
		case 10: { sprite_Bipods.setTexture(texture_Bipods[10]); break; }
		case 11: { sprite_Bipods.setTexture(texture_Bipods[11]); break; }
		case 12: { sprite_Bipods.setTexture(texture_Bipods[12]); break; }
		case 13: { sprite_Bipods.setTexture(texture_Bipods[13]); break; }
		case 14: { sprite_Bipods.setTexture(texture_Bipods[14]); break; }
		case 15: { sprite_Bipods.setTexture(texture_Bipods[15]); break; }
		case 16: { sprite_Bipods.setTexture(texture_Bipods[17]); break; }
		case 18: { sprite_Bipods.setTexture(texture_Bipods[18]); break; }
		case 19: { sprite_Bipods.setTexture(texture_Bipods[19]); break; }
		case 20: { sprite_Bipods.setTexture(texture_Bipods[20]); break; }
		case 21: { sprite_Bipods.setTexture(texture_Bipods[21]); break; }
		case 22: { sprite_Bipods.setTexture(texture_Bipods[22]); break; }
		case 23: { sprite_Bipods.setTexture(texture_Bipods[23]); break; }
		case 24: { sprite_Bipods.setTexture(texture_Bipods[24]); break; }
		case 25: { sprite_Bipods.setTexture(texture_Bipods[25]); break; }
		case 26: { sprite_Bipods.setTexture(texture_Bipods[26]); break; }
		case 27: { sprite_Bipods.setTexture(texture_Bipods[27]); break; }
		case 28: { sprite_Bipods.setTexture(texture_Bipods[28]); break; }
		case 29: { sprite_Bipods.setTexture(texture_Bipods[29]); break; }
		default: { break; }
		}
		clock_Bipods.restart();
	}
}

Duo_Animation::Duo_Animation() {
	texture_Duo[0].loadFromFile("Animations\\Duo\\Duo_000.jpg");
	texture_Duo[1].loadFromFile("Animations\\Duo\\Duo_001.jpg");
	texture_Duo[2].loadFromFile("Animations\\Duo\\Duo_002.jpg");
	texture_Duo[3].loadFromFile("Animations\\Duo\\Duo_003.jpg");
	texture_Duo[4].loadFromFile("Animations\\Duo\\Duo_004.jpg");
	texture_Duo[5].loadFromFile("Animations\\Duo\\Duo_005.jpg");
	texture_Duo[6].loadFromFile("Animations\\Duo\\Duo_006.jpg");
	texture_Duo[7].loadFromFile("Animations\\Duo\\Duo_007.jpg");
	texture_Duo[8].loadFromFile("Animations\\Duo\\Duo_008.jpg");
	texture_Duo[9].loadFromFile("Animations\\Duo\\Duo_009.jpg");
	texture_Duo[10].loadFromFile("Animations\\Duo\\Duo_010.jpg");
	texture_Duo[11].loadFromFile("Animations\\Duo\\Duo_011.jpg");
	texture_Duo[12].loadFromFile("Animations\\Duo\\Duo_012.jpg");
	texture_Duo[13].loadFromFile("Animations\\Duo\\Duo_013.jpg");
	texture_Duo[14].loadFromFile("Animations\\Duo\\Duo_014.jpg");
	texture_Duo[15].loadFromFile("Animations\\Duo\\Duo_015.jpg");
	texture_Duo[16].loadFromFile("Animations\\Duo\\Duo_016.jpg");
	texture_Duo[17].loadFromFile("Animations\\Duo\\Duo_017.jpg");
	texture_Duo[18].loadFromFile("Animations\\Duo\\Duo_018.jpg");
	texture_Duo[19].loadFromFile("Animations\\Duo\\Duo_019.jpg");
	texture_Duo[20].loadFromFile("Animations\\Duo\\Duo_020.jpg");
	texture_Duo[21].loadFromFile("Animations\\Duo\\Duo_021.jpg");
	texture_Duo[22].loadFromFile("Animations\\Duo\\Duo_022.jpg");
	texture_Duo[23].loadFromFile("Animations\\Duo\\Duo_023.jpg");
	texture_Duo[24].loadFromFile("Animations\\Duo\\Duo_024.jpg");
	texture_Duo[25].loadFromFile("Animations\\Duo\\Duo_025.jpg");
	texture_Duo[26].loadFromFile("Animations\\Duo\\Duo_026.jpg");
	texture_Duo[27].loadFromFile("Animations\\Duo\\Duo_027.jpg");
	texture_Duo[28].loadFromFile("Animations\\Duo\\Duo_028.jpg");
	texture_Duo[29].loadFromFile("Animations\\Duo\\Duo_029.jpg");
	texture_Duo[30].loadFromFile("Animations\\Duo\\Duo_030.jpg");
	texture_Duo[31].loadFromFile("Animations\\Duo\\Duo_031.jpg");
	texture_Duo[32].loadFromFile("Animations\\Duo\\Duo_032.jpg");
	texture_Duo[33].loadFromFile("Animations\\Duo\\Duo_033.jpg");
	texture_Duo[34].loadFromFile("Animations\\Duo\\Duo_034.jpg");
}
void Duo_Animation::Next_cadr_Duo() {
	Time time_Duo = clock_Duo.getElapsedTime();
	int As_Duo = time_Duo.asMicroseconds();
	if (As_Duo > 1000000 / 15) {
		cadr_Duo++;
		if (cadr_Duo == 30) { cadr_Duo = 0; }
		switch (cadr_Duo) {
		case 0: { sprite_Duo.setTexture(texture_Duo[0]); break; }
		case 1: { sprite_Duo.setTexture(texture_Duo[1]); break; }
		case 2: { sprite_Duo.setTexture(texture_Duo[2]); break; }
		case 3: { sprite_Duo.setTexture(texture_Duo[3]); break; }
		case 4: { sprite_Duo.setTexture(texture_Duo[4]); break; }
		case 5: { sprite_Duo.setTexture(texture_Duo[5]); break; }
		case 6: { sprite_Duo.setTexture(texture_Duo[6]); break; }
		case 7: { sprite_Duo.setTexture(texture_Duo[7]); break; }
		case 8: { sprite_Duo.setTexture(texture_Duo[8]); break; }
		case 9: { sprite_Duo.setTexture(texture_Duo[9]); break; }
		case 10: { sprite_Duo.setTexture(texture_Duo[10]); break; }
		case 11: { sprite_Duo.setTexture(texture_Duo[11]); break; }
		case 12: { sprite_Duo.setTexture(texture_Duo[12]); break; }
		case 13: { sprite_Duo.setTexture(texture_Duo[13]); break; }
		case 14: { sprite_Duo.setTexture(texture_Duo[14]); break; }
		case 15: { sprite_Duo.setTexture(texture_Duo[15]); break; }
		case 16: { sprite_Duo.setTexture(texture_Duo[16]); break; }
		case 17: { sprite_Duo.setTexture(texture_Duo[17]); break; }
		case 18: { sprite_Duo.setTexture(texture_Duo[18]); break; }
		case 19: { sprite_Duo.setTexture(texture_Duo[19]); break; }
		case 20: { sprite_Duo.setTexture(texture_Duo[20]); break; }
		case 21: { sprite_Duo.setTexture(texture_Duo[21]); break; }
		case 22: { sprite_Duo.setTexture(texture_Duo[22]); break; }
		case 23: { sprite_Duo.setTexture(texture_Duo[23]); break; }
		case 24: { sprite_Duo.setTexture(texture_Duo[24]); break; }
		case 25: { sprite_Duo.setTexture(texture_Duo[25]); break; }
		case 26: { sprite_Duo.setTexture(texture_Duo[26]); break; }
		case 27: { sprite_Duo.setTexture(texture_Duo[27]); break; }
		case 28: { sprite_Duo.setTexture(texture_Duo[28]); break; }
		case 29: { sprite_Duo.setTexture(texture_Duo[29]); break; }
		default: { break; }
		}
		clock_Duo.restart();
	}
}

Fire_Animation::Fire_Animation() {
	texture_Fire[0].loadFromFile("Animations\\Fire\\Fire_000.jpg");
	texture_Fire[1].loadFromFile("Animations\\Fire\\Fire_001.jpg");
	texture_Fire[2].loadFromFile("Animations\\Fire\\Fire_002.jpg");
	texture_Fire[3].loadFromFile("Animations\\Fire\\Fire_003.jpg");
	texture_Fire[4].loadFromFile("Animations\\Fire\\Fire_004.jpg");
	texture_Fire[5].loadFromFile("Animations\\Fire\\Fire_005.jpg");
	texture_Fire[6].loadFromFile("Animations\\Fire\\Fire_006.jpg");
	texture_Fire[7].loadFromFile("Animations\\Fire\\Fire_007.jpg");
	texture_Fire[8].loadFromFile("Animations\\Fire\\Fire_008.jpg");
	texture_Fire[9].loadFromFile("Animations\\Fire\\Fire_009.jpg");
	texture_Fire[10].loadFromFile("Animations\\Fire\\Fire_010.jpg");
	texture_Fire[11].loadFromFile("Animations\\Fire\\Fire_011.jpg");
	texture_Fire[12].loadFromFile("Animations\\Fire\\Fire_012.jpg");
	texture_Fire[13].loadFromFile("Animations\\Fire\\Fire_013.jpg");
	texture_Fire[14].loadFromFile("Animations\\Fire\\Fire_014.jpg");
	texture_Fire[15].loadFromFile("Animations\\Fire\\Fire_015.jpg");
	texture_Fire[16].loadFromFile("Animations\\Fire\\Fire_016.jpg");
	texture_Fire[17].loadFromFile("Animations\\Fire\\Fire_017.jpg");
	texture_Fire[18].loadFromFile("Animations\\Fire\\Fire_018.jpg");
	texture_Fire[19].loadFromFile("Animations\\Fire\\Fire_019.jpg");
	texture_Fire[20].loadFromFile("Animations\\Fire\\Fire_020.jpg");
	texture_Fire[21].loadFromFile("Animations\\Fire\\Fire_021.jpg");
	texture_Fire[22].loadFromFile("Animations\\Fire\\Fire_022.jpg");
	texture_Fire[23].loadFromFile("Animations\\Fire\\Fire_023.jpg");
	texture_Fire[24].loadFromFile("Animations\\Fire\\Fire_024.jpg");
	texture_Fire[25].loadFromFile("Animations\\Fire\\Fire_025.jpg");
	texture_Fire[26].loadFromFile("Animations\\Fire\\Fire_026.jpg");
	texture_Fire[27].loadFromFile("Animations\\Fire\\Fire_027.jpg");
	texture_Fire[28].loadFromFile("Animations\\Fire\\Fire_028.jpg");
	texture_Fire[29].loadFromFile("Animations\\Fire\\Fire_029.jpg");
	texture_Fire[30].loadFromFile("Animations\\Fire\\Fire_030.jpg");
	texture_Fire[31].loadFromFile("Animations\\Fire\\Fire_031.jpg");
	texture_Fire[32].loadFromFile("Animations\\Fire\\Fire_032.jpg");
	texture_Fire[33].loadFromFile("Animations\\Fire\\Fire_033.jpg");
	texture_Fire[34].loadFromFile("Animations\\Fire\\Fire_034.jpg");
	texture_Fire[35].loadFromFile("Animations\\Fire\\Fire_035.jpg");
	texture_Fire[36].loadFromFile("Animations\\Fire\\Fire_036.jpg");
	texture_Fire[37].loadFromFile("Animations\\Fire\\Fire_037.jpg");
	texture_Fire[38].loadFromFile("Animations\\Fire\\Fire_038.jpg");
	texture_Fire[39].loadFromFile("Animations\\Fire\\Fire_039.jpg");
}
void Fire_Animation::Next_cadr_Fire() {
	Time time_Fire = clock_Fire.getElapsedTime();
	int As_Fire = time_Fire.asMicroseconds();
	if (As_Fire > 1000000 / 15) {
		cadr_Fire++;
		if (cadr_Fire == 30) { count_Fire += 1; }
		switch (cadr_Fire) {
		case 0: { sprite_Fire.setTexture(texture_Fire[0]); break; }
		case 1: { sprite_Fire.setTexture(texture_Fire[1]); break; }
		case 2: { sprite_Fire.setTexture(texture_Fire[2]); break; }
		case 3: { sprite_Fire.setTexture(texture_Fire[3]); break; }
		case 4: { sprite_Fire.setTexture(texture_Fire[4]); break; }
		case 5: { sprite_Fire.setTexture(texture_Fire[5]); break; }
		case 6: { sprite_Fire.setTexture(texture_Fire[6]); break; }
		case 7: { sprite_Fire.setTexture(texture_Fire[7]); break; }
		case 8: { sprite_Fire.setTexture(texture_Fire[8]); break; }
		case 9: { sprite_Fire.setTexture(texture_Fire[9]); break; }
		case 10: { sprite_Fire.setTexture(texture_Fire[10]); break; }
		case 11: { sprite_Fire.setTexture(texture_Fire[11]); break; }
		case 12: { sprite_Fire.setTexture(texture_Fire[12]); break; }
		case 13: { sprite_Fire.setTexture(texture_Fire[13]); break; }
		case 14: { sprite_Fire.setTexture(texture_Fire[14]); break; }
		case 15: { sprite_Fire.setTexture(texture_Fire[15]); break; }
		case 16: { sprite_Fire.setTexture(texture_Fire[16]); break; }
		case 17: { sprite_Fire.setTexture(texture_Fire[17]); break; }
		case 18: { sprite_Fire.setTexture(texture_Fire[18]); break; }
		case 19: { sprite_Fire.setTexture(texture_Fire[19]); break; }
		case 20: { sprite_Fire.setTexture(texture_Fire[20]); break; }
		case 21: { sprite_Fire.setTexture(texture_Fire[21]); break; }
		case 22: { sprite_Fire.setTexture(texture_Fire[22]); break; }
		case 23: { sprite_Fire.setTexture(texture_Fire[23]); break; }
		case 24: { sprite_Fire.setTexture(texture_Fire[24]); break; }
		case 25: { sprite_Fire.setTexture(texture_Fire[25]); break; }
		case 26: { sprite_Fire.setTexture(texture_Fire[26]); break; }
		case 27: { sprite_Fire.setTexture(texture_Fire[27]); break; }
		case 28: { sprite_Fire.setTexture(texture_Fire[28]); break; }
		case 29: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 30: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 31: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 32: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 33: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 34: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 35: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 36: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 37: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 38: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		case 39: { sprite_Fire.setTexture(texture_Fire[29]); break; }
		default: { break; }
		}
		clock_Fire.restart();
	}
}