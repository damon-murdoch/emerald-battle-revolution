Auto_EventScript_Legendary_Shop_Controls::
# 5 "data/scripts/legendary_shop_options.pory"
	msgbox Auto_EventScript_Legendary_Shop_Controls_Text_0
# 6 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return


Auto_EventScript_Legendary_Shop_Page1::
# 11 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page1
# 12 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page1_2
# 16 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page1_3
# 18 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page1_4
# 20 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Page1_5
# 22 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Page1_6
# 24 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page1_7
# 26 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page1_8
# 29 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page1_2:
# 15 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_3:
# 17 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_4:
# 19 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_5:
# 21 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_6:
# 23 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_7:
# 25 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Page1_8:
# 27 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return


Auto_EventScript_Legendary_Shop_Page2::
# 35 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page2
# 36 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 38 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page2_2
# 40 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page2_3
# 42 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page2_4
# 44 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Page2_5
# 46 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Page2_6
# 48 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page2_7
# 50 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page2_8
# 53 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page2_2:
# 39 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_3:
# 41 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_4:
# 43 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_5:
# 45 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_6:
# 47 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_7:
# 49 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_8:
# 51 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return


Auto_EventScript_Legendary_Shop_Page3::
# 59 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page3
# 60 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 62 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page3_2
# 64 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page3_3
# 66 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page3_4
# 68 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Page3_5
# 70 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Page3_6
# 72 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page3_7
# 74 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page3_8
# 77 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page3_2:
# 63 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_3:
# 65 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_4:
# 67 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_5:
# 69 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_6:
# 71 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_7:
# 73 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Page3_8:
# 75 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return


Auto_EventScript_Legendary_Shop_Page4::
# 83 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page4
# 84 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 86 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page4_2
# 88 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page4_3
# 90 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page4_4
# 92 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page4_5
# 94 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page4_6
# 97 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page4_2:
# 87 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_3:
# 89 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_4:
# 91 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_5:
# 93 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Page4_6:
# 95 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return


Auto_EventScript_Legendary_Shop_Rock_Page1::
# 103 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Rock_Page1
# 104 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 106 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Rock_Page1_2
# 109 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Rock_Page1_3
# 112 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Rock_Page1_4
# 115 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Rock_Page1_5
# 118 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Rock_Page1_6
# 121 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Rock_Page1_7
# 123 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Rock_Page1_8
# 126 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_2:
# 107 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIANCIE, 1
# 108 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_3:
# 110 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_NIHILEGO, 1
# 111 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_4:
# 113 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIROCK, 1
# 114 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_5:
# 116 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_STAKATAKA, 1
# 117 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_6:
# 119 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TERRAKION, 1
# 120 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_7:
# 122 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_8:
# 124 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return


Auto_EventScript_Legendary_Shop_Steel_Page1::
# 132 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page1
# 133 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 135 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page1_2
# 138 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Steel_Page1_3
# 141 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Steel_Page1_4
# 144 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Steel_Page1_5
# 147 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Steel_Page1_6
# 150 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page1_7
# 152 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page1_8
# 155 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_2:
# 136 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CELESTEELA, 1
# 137 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_3:
# 139 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_COBALION, 1
# 140 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_4:
# 142 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIALGA, 1
# 143 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_5:
# 145 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GENESECT, 1
# 146 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_6:
# 148 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HEATRAN, 1
# 149 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_7:
# 151 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page3
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_8:
# 153 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page2
	return


Auto_EventScript_Legendary_Shop_Steel_Page2::
# 161 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page2
# 162 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 164 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page2_2
# 167 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Steel_Page2_3
# 170 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Steel_Page2_4
# 173 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Steel_Page2_5
# 176 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Steel_Page2_6
# 179 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page2_7
# 181 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page2_8
# 184 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_2:
# 165 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_JIRACHI, 1
# 166 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_3:
# 168 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KARTANA, 1
# 169 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_4:
# 171 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MAGEARNA, 1
# 172 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_5:
# 174 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MELMETAL, 1
# 175 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_6:
# 177 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGISTEEL, 1
# 178 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_7:
# 180 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_8:
# 182 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page3
	return


Auto_EventScript_Legendary_Shop_Steel_Page3::
# 190 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page3
# 191 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 193 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page3_2
# 196 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page3_3
# 198 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page3_4
# 201 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page3_2:
# 194 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_STAKATAKA, 1
# 195 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page3_3:
# 197 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page2
	return

Auto_EventScript_Legendary_Shop_Steel_Page3_4:
# 199 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return


Auto_EventScript_Legendary_Shop_Water_Page1::
# 207 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Water_Page1
# 208 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 210 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Water_Page1_2
# 213 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Water_Page1_3
# 216 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Water_Page1_4
# 219 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Water_Page1_5
# 222 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Water_Page1_6
# 225 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page1_7
# 227 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page1_8
# 230 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Water_Page1_2:
# 211 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KELDEO, 1
# 212 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_3:
# 214 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KYOGRE, 1
# 215 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_4:
# 217 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MANAPHY, 1
# 218 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_5:
# 220 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PALKIA, 1
# 221 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_6:
# 223 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PHIONE, 1
# 224 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_7:
# 226 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page2
	return

Auto_EventScript_Legendary_Shop_Water_Page1_8:
# 228 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page2
	return


Auto_EventScript_Legendary_Shop_Water_Page2::
# 236 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Water_Page2
# 237 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 239 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Water_Page2_2
# 242 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Water_Page2_3
# 245 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Water_Page2_4
# 248 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page2_5
# 250 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page2_6
# 253 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Water_Page2_2:
# 240 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_SUICUNE, 1
# 241 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_3:
# 243 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_FINI, 1
# 244 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_4:
# 246 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VOLCANION, 1
# 247 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_5:
# 249 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return

Auto_EventScript_Legendary_Shop_Water_Page2_6:
# 251 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return


Auto_EventScript_Legendary_Shop_Ground_Page1::
# 259 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ground_Page1
# 260 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 262 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ground_Page1_2
# 265 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Ground_Page1_3
# 268 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Ground_Page1_4
# 271 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Ground_Page1_5
# 274 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ground_Page1_6
# 276 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ground_Page1_7
# 279 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_2:
# 263 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GROUDON, 1
# 264 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_3:
# 266 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LANDORUS, 1
# 267 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_4:
# 269 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TING_LU, 1
# 270 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_5:
# 272 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZYGARDE, 1
# 273 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_6:
# 275 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_7:
# 277 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return


Auto_EventScript_Legendary_Shop_Ice_Page1::
# 285 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ice_Page1
# 286 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 288 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ice_Page1_2
# 291 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Ice_Page1_3
# 294 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Ice_Page1_4
# 297 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Ice_Page1_5
# 300 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Ice_Page1_6
# 303 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ice_Page1_7
# 305 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ice_Page1_8
# 308 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_2:
# 289 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ARTICUNO, 1
# 290 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_3:
# 292 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHIEN_PAO, 1
# 293 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_4:
# 295 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GLASTRIER, 1
# 296 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_5:
# 298 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KYUREM, 1
# 299 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_6:
# 301 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGICE, 1
# 302 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_7:
# 304 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_8:
# 306 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return


Auto_EventScript_Legendary_Shop_Normal_Page1::
# 314 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Normal_Page1
# 315 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 317 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Normal_Page1_2
# 320 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Normal_Page1_3
# 323 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Normal_Page1_4
# 326 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Normal_Page1_5
# 329 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Normal_Page1_6
# 332 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Normal_Page1_7
# 334 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Normal_Page1_8
# 337 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_2:
# 318 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ARCEUS, 1
# 319 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_3:
# 321 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MELOETTA, 1
# 322 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_4:
# 324 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIGIGAS, 1
# 325 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_5:
# 327 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TERAPAGOS, 1
# 328 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_6:
# 330 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TYPE_NULL, 1
# 331 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_7:
# 333 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_8:
# 335 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return


Auto_EventScript_Legendary_Shop_Poison_Page1::
# 343 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Poison_Page1
# 344 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 346 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Poison_Page1_2
# 349 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Poison_Page1_3
# 352 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Poison_Page1_4
# 355 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Poison_Page1_5
# 358 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Poison_Page1_6
# 360 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Poison_Page1_7
# 363 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_2:
# 347 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ETERNATUS, 1
# 348 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_3:
# 350 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_NIHILEGO, 1
# 351 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_4:
# 353 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PECHARUNT, 1
# 354 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_5:
# 356 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_POIPOLE, 1
# 357 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_6:
# 359 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_7:
# 361 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return


Auto_EventScript_Legendary_Shop_Psychic_Page1::
# 369 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page1
# 370 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 372 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page1_2
# 375 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page1_3
# 378 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page1_4
# 381 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page1_5
# 384 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page1_6
# 387 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page1_7
# 389 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page1_8
# 392 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_2:
# 373 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_AZELF, 1
# 374 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_3:
# 376 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CALYREX, 1
# 377 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_4:
# 379 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CELEBI, 1
# 380 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_5:
# 382 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CRESSELIA, 1
# 383 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_6:
# 385 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DEOXYS, 1
# 386 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_7:
# 388 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page4
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_8:
# 390 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page2
	return


Auto_EventScript_Legendary_Shop_Psychic_Page2::
# 398 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page2
# 399 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 401 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page2_2
# 404 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page2_3
# 407 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page2_4
# 410 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page2_5
# 413 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page2_6
# 416 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page2_7
# 418 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page2_8
# 421 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_2:
# 402 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HOOPA, 1
# 403 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_3:
# 405 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_JIRACHI, 1
# 406 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_4:
# 408 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIAS, 1
# 409 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_5:
# 411 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIOS, 1
# 412 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_6:
# 414 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LUGIA, 1
# 415 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_7:
# 417 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_8:
# 419 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page3
	return


Auto_EventScript_Legendary_Shop_Psychic_Page3::
# 427 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page3
# 428 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 430 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page3_2
# 433 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page3_3
# 436 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page3_4
# 439 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page3_5
# 442 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page3_6
# 445 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page3_7
# 447 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page3_8
# 450 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_2:
# 431 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MELOETTA, 1
# 432 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_3:
# 434 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MESPRIT, 1
# 435 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_4:
# 437 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MEW, 1
# 438 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_5:
# 440 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MEWTWO, 1
# 441 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_6:
# 443 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_NECROZMA, 1
# 444 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_7:
# 446 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page2
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_8:
# 448 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page4
	return


Auto_EventScript_Legendary_Shop_Psychic_Page4::
# 456 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page4
# 457 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 459 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page4_2
# 462 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page4_3
# 465 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page4_4
# 468 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page4_5
# 470 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page4_6
# 473 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_2:
# 460 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_LELE, 1
# 461 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_3:
# 463 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_UXIE, 1
# 464 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_4:
# 466 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VICTINI, 1
# 467 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_5:
# 469 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_6:
# 471 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return


Auto_EventScript_Legendary_Shop_Fighting_Page1::
# 479 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fighting_Page1
# 480 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 482 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fighting_Page1_2
# 485 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fighting_Page1_3
# 488 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fighting_Page1_4
# 491 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fighting_Page1_5
# 494 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fighting_Page1_6
# 497 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page1_7
# 499 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page1_8
# 502 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_2:
# 483 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_BUZZWOLE, 1
# 484 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_3:
# 486 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_COBALION, 1
# 487 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_4:
# 489 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KELDEO, 1
# 490 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_5:
# 492 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KORAIDON, 1
# 493 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_6:
# 495 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KUBFU, 1
# 496 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_7:
# 498 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_8:
# 500 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page2
	return


Auto_EventScript_Legendary_Shop_Fighting_Page2::
# 508 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fighting_Page2
# 509 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 511 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fighting_Page2_2
# 514 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fighting_Page2_3
# 517 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fighting_Page2_4
# 520 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fighting_Page2_5
# 523 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fighting_Page2_6
# 526 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page2_7
# 528 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page2_8
# 531 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_2:
# 512 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MARSHADOW, 1
# 513 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_3:
# 515 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PHEROMOSA, 1
# 516 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_4:
# 518 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TERRAKION, 1
# 519 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_5:
# 521 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VIRIZION, 1
# 522 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_6:
# 524 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZAMAZENTA, 1
# 525 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_7:
# 527 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_8:
# 529 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return


Auto_EventScript_Legendary_Shop_Fire_Page1::
# 537 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fire_Page1
# 538 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 540 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fire_Page1_2
# 543 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fire_Page1_3
# 546 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fire_Page1_4
# 549 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fire_Page1_5
# 552 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fire_Page1_6
# 555 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page1_7
# 557 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page1_8
# 560 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_2:
# 541 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_BLACEPHALON, 1
# 542 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_3:
# 544 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHI_YU, 1
# 545 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_4:
# 547 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ENTEI, 1
# 548 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_5:
# 550 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HEATRAN, 1
# 551 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_6:
# 553 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HO_OH, 1
# 554 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_7:
# 556 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_8:
# 558 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page2
	return


Auto_EventScript_Legendary_Shop_Fire_Page2::
# 566 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fire_Page2
# 567 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 569 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fire_Page2_2
# 572 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fire_Page2_3
# 575 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fire_Page2_4
# 578 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fire_Page2_5
# 581 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page2_6
# 583 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page2_7
# 586 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_2:
# 570 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MOLTRES, 1
# 571 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_3:
# 573 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RESHIRAM, 1
# 574 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_4:
# 576 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VICTINI, 1
# 577 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_5:
# 579 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VOLCANION, 1
# 580 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_6:
# 582 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_7:
# 584 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return


Auto_EventScript_Legendary_Shop_Flying_Page1::
# 592 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page1
# 593 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 595 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page1_2
# 598 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Flying_Page1_3
# 601 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Flying_Page1_4
# 604 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Flying_Page1_5
# 607 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Flying_Page1_6
# 610 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page1_7
# 612 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page1_8
# 615 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_2:
# 596 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ARTICUNO, 1
# 597 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_3:
# 599 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CELESTEELA, 1
# 600 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_4:
# 602 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ENAMORUS, 1
# 603 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_5:
# 605 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HO_OH, 1
# 606 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_6:
# 608 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LANDORUS, 1
# 609 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_7:
# 611 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page3
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_8:
# 613 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page2
	return


Auto_EventScript_Legendary_Shop_Flying_Page2::
# 621 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page2
# 622 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 624 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page2_2
# 627 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Flying_Page2_3
# 630 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Flying_Page2_4
# 633 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Flying_Page2_5
# 636 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Flying_Page2_6
# 639 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page2_7
# 641 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page2_8
# 644 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_2:
# 625 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LUGIA, 1
# 626 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_3:
# 628 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MOLTRES, 1
# 629 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_4:
# 631 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RAYQUAZA, 1
# 632 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_5:
# 634 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_THUNDURUS, 1
# 635 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_6:
# 637 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TORNADUS, 1
# 638 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_7:
# 640 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_8:
# 642 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page3
	return


Auto_EventScript_Legendary_Shop_Flying_Page3::
# 650 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page3
# 651 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 653 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page3_2
# 656 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Flying_Page3_3
# 659 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page3_4
# 661 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page3_5
# 664 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_2:
# 654 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_YVELTAL, 1
# 655 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_3:
# 657 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZAPDOS, 1
# 658 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_4:
# 660 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_5:
# 662 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return


Auto_EventScript_Legendary_Shop_Ghost_Page1::
# 670 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ghost_Page1
# 671 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 673 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ghost_Page1_2
# 676 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Ghost_Page1_3
# 679 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Ghost_Page1_4
# 682 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Ghost_Page1_5
# 685 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Ghost_Page1_6
# 688 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page1_7
# 690 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page1_8
# 693 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_2:
# 674 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_BLACEPHALON, 1
# 675 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_3:
# 677 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GIRATINA, 1
# 678 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_4:
# 680 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HOOPA, 1
# 681 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_5:
# 683 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MARSHADOW, 1
# 684 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_6:
# 686 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PECHARUNT, 1
# 687 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_7:
# 689 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page2
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_8:
# 691 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page2
	return


Auto_EventScript_Legendary_Shop_Ghost_Page2::
# 699 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ghost_Page2
# 700 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 702 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ghost_Page2_2
# 705 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page2_3
# 707 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page2_4
# 710 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Ghost_Page2_2:
# 703 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_SPECTRIER, 1
# 704 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page2_3:
# 706 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return

Auto_EventScript_Legendary_Shop_Ghost_Page2_4:
# 708 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return


Auto_EventScript_Legendary_Shop_Grass_Page1::
# 716 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Grass_Page1
# 717 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 719 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Grass_Page1_2
# 722 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Grass_Page1_3
# 725 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Grass_Page1_4
# 728 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Grass_Page1_5
# 731 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Grass_Page1_6
# 734 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page1_7
# 736 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page1_8
# 739 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_2:
# 720 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CALYREX, 1
# 721 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_3:
# 723 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CELEBI, 1
# 724 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_4:
# 726 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KARTANA, 1
# 727 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_5:
# 729 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_SHAYMIN, 1
# 730 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_6:
# 732 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_BULU, 1
# 733 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_7:
# 735 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_8:
# 737 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page2
	return


Auto_EventScript_Legendary_Shop_Grass_Page2::
# 745 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Grass_Page2
# 746 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 748 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Grass_Page2_2
# 751 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Grass_Page2_3
# 754 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Grass_Page2_4
# 757 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page2_5
# 759 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page2_6
# 762 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_2:
# 749 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VIRIZION, 1
# 750 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_3:
# 752 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_WO_CHIEN, 1
# 753 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_4:
# 755 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZARUDE, 1
# 756 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_5:
# 758 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_6:
# 760 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return


Auto_EventScript_Legendary_Shop_Bug_Page1::
# 768 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Bug_Page1
# 769 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 771 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Bug_Page1_2
# 774 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Bug_Page1_3
# 777 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Bug_Page1_4
# 780 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Bug_Page1_5
# 782 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Bug_Page1_6
# 785 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_2:
# 772 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_BUZZWOLE, 1
# 773 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_3:
# 775 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GENESECT, 1
# 776 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_4:
# 778 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PHEROMOSA, 1
# 779 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_5:
# 781 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_6:
# 783 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return


Auto_EventScript_Legendary_Shop_Dark_Page1::
# 791 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dark_Page1
# 792 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 794 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dark_Page1_2
# 797 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dark_Page1_3
# 800 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dark_Page1_4
# 803 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dark_Page1_5
# 806 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dark_Page1_6
# 809 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page1_7
# 811 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page1_8
# 814 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_2:
# 795 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHI_YU, 1
# 796 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_3:
# 798 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHIEN_PAO, 1
# 799 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_4:
# 801 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DARKRAI, 1
# 802 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_5:
# 804 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GUZZLORD, 1
# 805 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_6:
# 807 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TING_LU, 1
# 808 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_7:
# 810 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page2
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_8:
# 812 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page2
	return


Auto_EventScript_Legendary_Shop_Dark_Page2::
# 820 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dark_Page2
# 821 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 823 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dark_Page2_2
# 826 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dark_Page2_3
# 829 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dark_Page2_4
# 832 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page2_5
# 834 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page2_6
# 837 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_2:
# 824 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_WO_CHIEN, 1
# 825 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_3:
# 827 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_YVELTAL, 1
# 828 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_4:
# 830 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZARUDE, 1
# 831 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_5:
# 833 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_6:
# 835 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return


Auto_EventScript_Legendary_Shop_Dragon_Page1::
# 843 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page1
# 844 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 846 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page1_2
# 849 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page1_3
# 852 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page1_4
# 855 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page1_5
# 858 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dragon_Page1_6
# 861 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page1_7
# 863 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page1_8
# 866 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_2:
# 847 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIALGA, 1
# 848 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_3:
# 850 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ETERNATUS, 1
# 851 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_4:
# 853 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GIRATINA, 1
# 854 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_5:
# 856 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GUZZLORD, 1
# 857 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_6:
# 859 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KORAIDON, 1
# 860 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_7:
# 862 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page3
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_8:
# 864 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page2
	return


Auto_EventScript_Legendary_Shop_Dragon_Page2::
# 872 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page2
# 873 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 875 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page2_2
# 878 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page2_3
# 881 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page2_4
# 884 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page2_5
# 887 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dragon_Page2_6
# 890 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page2_7
# 892 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page2_8
# 895 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_2:
# 876 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KYUREM, 1
# 877 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_3:
# 879 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIAS, 1
# 880 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_4:
# 882 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIOS, 1
# 883 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_5:
# 885 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MIRAIDON, 1
# 886 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_6:
# 888 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PALKIA, 1
# 889 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_7:
# 891 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_8:
# 893 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page3
	return


Auto_EventScript_Legendary_Shop_Dragon_Page3::
# 901 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page3
# 902 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 904 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page3_2
# 907 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page3_3
# 910 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page3_4
# 913 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page3_5
# 916 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dragon_Page3_6
# 919 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page3_7
# 921 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page3_8
# 924 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_2:
# 905 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RAYQUAZA, 1
# 906 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_3:
# 908 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIDRAGO, 1
# 909 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_4:
# 911 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RESHIRAM, 1
# 912 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_5:
# 914 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZEKROM, 1
# 915 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_6:
# 917 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZYGARDE, 1
# 918 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_7:
# 920 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page2
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_8:
# 922 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return


Auto_EventScript_Legendary_Shop_Electric_Page1::
# 930 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Electric_Page1
# 931 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 933 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Electric_Page1_2
# 936 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Electric_Page1_3
# 939 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Electric_Page1_4
# 942 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Electric_Page1_5
# 945 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Electric_Page1_6
# 948 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page1_7
# 950 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page1_8
# 953 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_2:
# 934 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MIRAIDON, 1
# 935 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_3:
# 937 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RAIKOU, 1
# 938 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_4:
# 940 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIELEKI, 1
# 941 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_5:
# 943 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_KOKO, 1
# 944 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_6:
# 946 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_THUNDURUS, 1
# 947 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_7:
# 949 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page2
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_8:
# 951 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page2
	return


Auto_EventScript_Legendary_Shop_Electric_Page2::
# 959 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Electric_Page2
# 960 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 962 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Electric_Page2_2
# 965 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Electric_Page2_3
# 968 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Electric_Page2_4
# 971 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Electric_Page2_5
# 974 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page2_6
# 976 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page2_7
# 979 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_2:
# 963 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_XURKITREE, 1
# 964 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_3:
# 966 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZAPDOS, 1
# 967 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_4:
# 969 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZEKROM, 1
# 970 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_5:
# 972 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZERAORA, 1
# 973 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_6:
# 975 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_7:
# 977 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return


Auto_EventScript_Legendary_Shop_Fairy_Page1::
# 985 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fairy_Page1
# 986 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 988 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fairy_Page1_2
# 991 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fairy_Page1_3
# 994 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fairy_Page1_4
# 997 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fairy_Page1_5
# 1000 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fairy_Page1_6
# 1003 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page1_7
# 1005 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page1_8
# 1008 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_2:
# 989 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIANCIE, 1
# 990 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_3:
# 992 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ENAMORUS, 1
# 993 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_4:
# 995 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MAGEARNA, 1
# 996 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_5:
# 998 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_BULU, 1
# 999 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_6:
# 1001 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_FINI, 1
# 1002 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_7:
# 1004 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page2
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_8:
# 1006 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page2
	return


Auto_EventScript_Legendary_Shop_Fairy_Page2::
# 1014 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fairy_Page2
# 1015 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 1017 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fairy_Page2_2
# 1020 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fairy_Page2_3
# 1023 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fairy_Page2_4
# 1026 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fairy_Page2_5
# 1029 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page2_6
# 1031 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page2_7
# 1034 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_2:
# 1018 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_KOKO, 1
# 1019 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_3:
# 1021 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_LELE, 1
# 1022 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_4:
# 1024 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_XERNEAS, 1
# 1025 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_5:
# 1027 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZACIAN, 1
# 1028 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_6:
# 1030 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_7:
# 1032 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return


Auto_EventScript_Legendary_Shop_Controls_Text_0:
# 5 "data/scripts/legendary_shop_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Legendary_Shop_Page1::
# 1038 "data/scripts/legendary_shop_options.pory"
	.string "BUG$"
	.string "DARK$"
	.string "DRAGON$"
	.string "ELECTRIC$"
	.string "FAIRY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page2::
# 1049 "data/scripts/legendary_shop_options.pory"
	.string "FIGHTING$"
	.string "FIRE$"
	.string "FLYING$"
	.string "GHOST$"
	.string "GRASS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page3::
# 1060 "data/scripts/legendary_shop_options.pory"
	.string "GROUND$"
	.string "ICE$"
	.string "NORMAL$"
	.string "POISON$"
	.string "PSYCHIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page4::
# 1071 "data/scripts/legendary_shop_options.pory"
	.string "ROCK$"
	.string "STEEL$"
	.string "WATER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Rock_Page1::
# 1080 "data/scripts/legendary_shop_options.pory"
	.string "DIANCIE$"
	.string "NIHILEGO$"
	.string "REGIROCK$"
	.string "STAKATAKA$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page1::
# 1091 "data/scripts/legendary_shop_options.pory"
	.string "CELESTEELA$"
	.string "COBALION$"
	.string "DIALGA$"
	.string "GENESECT$"
	.string "HEATRAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page2::
# 1102 "data/scripts/legendary_shop_options.pory"
	.string "JIRACHI$"
	.string "KARTANA$"
	.string "MAGEARNA$"
	.string "MELMETAL$"
	.string "REGISTEEL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page3::
# 1113 "data/scripts/legendary_shop_options.pory"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Water_Page1::
# 1120 "data/scripts/legendary_shop_options.pory"
	.string "KELDEO$"
	.string "KYOGRE$"
	.string "MANAPHY$"
	.string "PALKIA$"
	.string "PHIONE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Water_Page2::
# 1131 "data/scripts/legendary_shop_options.pory"
	.string "SUICUNE$"
	.string "TAPU FINI$"
	.string "VOLCANION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ground_Page1::
# 1140 "data/scripts/legendary_shop_options.pory"
	.string "GROUDON$"
	.string "LANDORUS$"
	.string "TING-LU$"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ice_Page1::
# 1150 "data/scripts/legendary_shop_options.pory"
	.string "ARTICUNO$"
	.string "CHIEN-PAO$"
	.string "GLASTRIER$"
	.string "KYUREM$"
	.string "REGICE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Normal_Page1::
# 1161 "data/scripts/legendary_shop_options.pory"
	.string "ARCEUS$"
	.string "MELOETTA$"
	.string "REGIGIGAS$"
	.string "TERAPAGOS$"
	.string "TYPE: NULL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Poison_Page1::
# 1172 "data/scripts/legendary_shop_options.pory"
	.string "ETERNATUS$"
	.string "NIHILEGO$"
	.string "PECHARUNT$"
	.string "POIPOLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page1::
# 1182 "data/scripts/legendary_shop_options.pory"
	.string "AZELF$"
	.string "CALYREX$"
	.string "CELEBI$"
	.string "CRESSELIA$"
	.string "DEOXYS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page2::
# 1193 "data/scripts/legendary_shop_options.pory"
	.string "HOOPA$"
	.string "JIRACHI$"
	.string "LATIAS$"
	.string "LATIOS$"
	.string "LUGIA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page3::
# 1204 "data/scripts/legendary_shop_options.pory"
	.string "MELOETTA$"
	.string "MESPRIT$"
	.string "MEW$"
	.string "MEWTWO$"
	.string "NECROZMA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page4::
# 1215 "data/scripts/legendary_shop_options.pory"
	.string "TAPU LELE$"
	.string "UXIE$"
	.string "VICTINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fighting_Page1::
# 1224 "data/scripts/legendary_shop_options.pory"
	.string "BUZZWOLE$"
	.string "COBALION$"
	.string "KELDEO$"
	.string "KORAIDON$"
	.string "KUBFU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fighting_Page2::
# 1235 "data/scripts/legendary_shop_options.pory"
	.string "MARSHADOW$"
	.string "PHEROMOSA$"
	.string "TERRAKION$"
	.string "VIRIZION$"
	.string "ZAMAZENTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fire_Page1::
# 1246 "data/scripts/legendary_shop_options.pory"
	.string "BLACEPHALON$"
	.string "CHI-YU$"
	.string "ENTEI$"
	.string "HEATRAN$"
	.string "HO-OH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fire_Page2::
# 1257 "data/scripts/legendary_shop_options.pory"
	.string "MOLTRES$"
	.string "RESHIRAM$"
	.string "VICTINI$"
	.string "VOLCANION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page1::
# 1267 "data/scripts/legendary_shop_options.pory"
	.string "ARTICUNO$"
	.string "CELESTEELA$"
	.string "ENAMORUS$"
	.string "HO-OH$"
	.string "LANDORUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page2::
# 1278 "data/scripts/legendary_shop_options.pory"
	.string "LUGIA$"
	.string "MOLTRES$"
	.string "RAYQUAZA$"
	.string "THUNDURUS$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page3::
# 1289 "data/scripts/legendary_shop_options.pory"
	.string "YVELTAL$"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ghost_Page1::
# 1297 "data/scripts/legendary_shop_options.pory"
	.string "BLACEPHALON$"
	.string "GIRATINA$"
	.string "HOOPA$"
	.string "MARSHADOW$"
	.string "PECHARUNT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ghost_Page2::
# 1308 "data/scripts/legendary_shop_options.pory"
	.string "SPECTRIER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Grass_Page1::
# 1315 "data/scripts/legendary_shop_options.pory"
	.string "CALYREX$"
	.string "CELEBI$"
	.string "KARTANA$"
	.string "SHAYMIN$"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Grass_Page2::
# 1326 "data/scripts/legendary_shop_options.pory"
	.string "VIRIZION$"
	.string "WO-CHIEN$"
	.string "ZARUDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Bug_Page1::
# 1335 "data/scripts/legendary_shop_options.pory"
	.string "BUZZWOLE$"
	.string "GENESECT$"
	.string "PHEROMOSA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dark_Page1::
# 1344 "data/scripts/legendary_shop_options.pory"
	.string "CHI-YU$"
	.string "CHIEN-PAO$"
	.string "DARKRAI$"
	.string "GUZZLORD$"
	.string "TING-LU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dark_Page2::
# 1355 "data/scripts/legendary_shop_options.pory"
	.string "WO-CHIEN$"
	.string "YVELTAL$"
	.string "ZARUDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page1::
# 1364 "data/scripts/legendary_shop_options.pory"
	.string "DIALGA$"
	.string "ETERNATUS$"
	.string "GIRATINA$"
	.string "GUZZLORD$"
	.string "KORAIDON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page2::
# 1375 "data/scripts/legendary_shop_options.pory"
	.string "KYUREM$"
	.string "LATIAS$"
	.string "LATIOS$"
	.string "MIRAIDON$"
	.string "PALKIA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page3::
# 1386 "data/scripts/legendary_shop_options.pory"
	.string "RAYQUAZA$"
	.string "REGIDRAGO$"
	.string "RESHIRAM$"
	.string "ZEKROM$"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Electric_Page1::
# 1397 "data/scripts/legendary_shop_options.pory"
	.string "MIRAIDON$"
	.string "RAIKOU$"
	.string "REGIELEKI$"
	.string "TAPU KOKO$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Electric_Page2::
# 1408 "data/scripts/legendary_shop_options.pory"
	.string "XURKITREE$"
	.string "ZAPDOS$"
	.string "ZEKROM$"
	.string "ZERAORA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fairy_Page1::
# 1418 "data/scripts/legendary_shop_options.pory"
	.string "DIANCIE$"
	.string "ENAMORUS$"
	.string "MAGEARNA$"
	.string "TAPU BULU$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fairy_Page2::
# 1429 "data/scripts/legendary_shop_options.pory"
	.string "TAPU KOKO$"
	.string "TAPU LELE$"
	.string "XERNEAS$"
	.string "ZACIAN$"
	.string "Go Back$"
	.string "$"
