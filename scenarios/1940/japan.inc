 
 ############################## 
 # Country definition for JAP # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = JAP 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes } }
	belligerence           = 15 
	capital                = 1552 
	manpower               = 8000 
	# Resource Reserves 
	energy                 = 5000 
	metal                  = 5000 
	rare_materials         = 2500 
	oil                    = 7500 
	supplies               = 250 
	money                  = 100
	transports             = 1100 
	escorts                = 11 

   diplomacy = 
   {  relation = {  tag = AST value = -25  }
     relation = {  tag = BEL value = -25  }
     relation = {  tag = CHC value = -200  } 
     relation = {  tag = CHI value = -200  } 
     relation = {  tag = CHL value = 20  }
     relation = {  tag = U67 value = -200 } 
     relation = {  tag = ENG value = -50  }
     relation = {  tag = FIN value = 20  } 
     relation = {  tag = FRA value = -40  } 
     relation = {  tag = GER value = 75  } 
     relation = {  tag = HOL value = -50  } 
     relation = {  tag = MAN value = 200 access = yes  }
     relation = {  tag = MEN value = 200 access = yes  } 
     relation = {  tag = PHI value = 1  } 
     relation = {  tag = SIA value = 75  } 
     relation = {  tag = SOV value = -10  } 
     relation = {  tag = U05 value = -50  }
     relation = {  tag = USA value = 15  } 
    } 
   SpyInfo                = {  country = "JAP" NumberOfSpies = 9  } 
    
   # Sakhalin 
	nationalprovinces = {  
		1541 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1672 
		1228 1229 1230 1231 1232 1233 # South Korea 
		1221 1222 1223 1224 1225 1226 1227 # North Korea
		1361 1362 1363 1364 # Taiwan 
	} 
	ownedprovinces = {  
		1219 1221 1223 1224 1225 1226 1227 1228 1230 1231 1232 1233 1361 1364 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1668 1665 1666 1667 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686  
		# Sakhalin 
		1222 1229 1363 
		# Japan in China        
		1245 1362 
	} 
	controlledprovinces = {  
		1219 1221 1223 1224 1225 1226 1227 1228 1230 1231 1232 1233 1361 1362 1364 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1668 1665 1666 1667 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686  
		# Sakhalin 
		1222 1229 1363 
		# Japan in China        
		1241 1242 1243 1244 1245 1247 1248 1249 1250 1251 1252 1253 1254 1317 1318 1321 1322 1323 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1342 1343 1344 1345 1346 1348 1350 1358 1365 1367 1369 1370 1374 1379 
	} 
	claimedprovinces = { 
		1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 #Pacific Island
		1219 #Port Arthur / Dalian
		1683 #Guam 
	} 	
	# JAP 1936 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Mountain
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Infantry
	1396
	# Paratroopers
	1670
	# Marines
	1560 1570 1580 1590
	# Engineers
	1830 1840 1850 1860 1870 
	# Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130

	# Tanks 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040
	# Basic Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-Tank Artillery 
	2400 2410
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Battle Cruiser
	3310 3320 3330 3340
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Super Heavy Battleship
	3490
	# Air Carrier
	3510 3520 3530 3540 3550
	# Light carrier 
	12100 12110 12120 12130
	# Submarine
	3610 3620 3630 3640 3650 3660 3670
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900
	# Troopships
	3810 3820 3830

	# Close Air support
	4400 4170
	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Escort Fighter
	4050
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140
	# Naval Bomber 
	4700 4710 4190
	# Transports
	4290 4250
	# Multirole fighter
	4300 4310 4320 4330 4340 4040
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# strategic bomber
	4800 4810 4820
	# CAG
	4900 4910 4920 4930 4280

	# Agriculture
	5700 5710 5010 5020 5030
	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Oil Refining 
	5190 
	#Computers & cryptography
	5310 54010 54020 54030 5320
	5316 5326 5327 5350
	# RADAR
	5410 5416 
	# Medicine
	5600 5610 5620
	# Exp. Rocket
	5560

	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines
	6390 6400 6420 6410
	# Hospital System 
	14000 14010 14020 14030

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940 8950 8960 8970 8980
	# Subsidiary Carrier Role
	81650
	# Aerial Supremacy column
	81700 81710 81720
	# Scouting Focus column
	81850 81860 81870
	# Amphibious Warfare
	82300 82310
	# Logistic Support
	82500
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 9190 9200 9210 9220 9230 9240
	} 
	
blueprints = { 81730 81740 } 
inventions = { 3000027 }

policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 2 
     freedom           = 1#3 
     free_market       = 3 
     professional_army = 7 
     defense_lobby     = 8 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 50001  } 
   headofgovernment       = {  type = 9 id = 50016  } 
   foreignminister        = {  type = 9 id = 50042  } # Arita Hachiro
   armamentminister       = {  type = 9 id = 50328  } # Yukio Sakurauchi
   ministerofsecurity     = {  type = 9 id = 50101  } # Kodama Hideo
   ministerofintelligence = {  type = 9 id = 50122  } 
   chiefofstaff           = {  type = 9 id = 50133  } 
   chiefofarmy            = {  type = 9 id = 50142  } 
   chiefofnavy            = {  type = 9 id = 50167  } 
   chiefofair             = {  type = 9 id = 50159  }
   dormant_ministers      = {  50002 50020 50013 50021 50003 50042 50047 50039 50040 50004 50005 50086 50087 50088 50095 50006 50114 50158 } 
  ### Japan Land OOB ### 

   landunit = 
   { location = 1552 # Tokyo, Japan
     name     = "Imperial General Headquarters" 
     id       = {  type = 13016 id = 1  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 2 } 
       name       = "Imperial General HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1337 # Nanjing, China
     name     = "China Expeditionary Army" 
     id       = {  type = 13016 id = 3  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 4 } 
       name       = "China Expeditionary Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1247 # Beijing, China
     name     = "North China Area Army" 
     id       = {  type = 13016 id = 5  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 6 } 
       name       = "North China Area Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 7 } 
       name       = "1st Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 8 } 
       name       = "7th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 10 } 
       name       = "15th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1208 # Hsinking, Manchukuo
     name     = "Kwantung Army" 
     id       = {  type = 13016 id = 11  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 12 } 
       name       = "Kwantung Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1369 # Canton, China
     name     = "South China Area Army" 
     id       = {  type = 13016 id = 13  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 14 } 
       name       = "South China Area Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 15 } 
       name       = "19th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1269 # Kalgan, Mongolia
     name     = "Mongolia Garrison Army" 
     id       = {  type = 13016 id = 16  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 17 } 
       name       = "Mongolia Garrison Army HQ" 
       type       = hq
       strength   = 70
       model      = 3
     }
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 18 } 
       name       = "2nd Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     # Cavalry Group
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 19 } 
       name       = "1st Cavalry Brigade" 
       type       = cavalry
       strength   = 66
       model      = 11
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 20 } 
       name       = "3rd Cavalry Brigade" 
       type       = cavalry
       strength   = 66
       model      = 11
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 21 } 
       name       = "4th Cavalry Brigade" 
       type       = cavalry
       strength   = 66
       model      = 11
     }
   }
   landunit = 
   { location = 1253 # Linfen, China
     name     = "1st Army" 
     id       = {  type = 13016 id = 22  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 23 } 
       name       = "1st Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 24 } 
       name       = "4th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 25 } 
       name       = "9th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 26 } 
       name       = "16th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1212 # Yanji, Manchukuo
     name     = "3rd Army" 
     id       = {  type = 13016 id = 27  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 28 } 
       name       = "3rd Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1201 # Bei'an, Manchukuo
     name     = "4th Army" 
     id       = {  type = 13016 id = 29  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 30 } 
       name       = "4th Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1220 # Andong, Manchukuo
     name     = "5th Army" 
     id       = {  type = 13016 id = 31  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 32 } 
       name       = "5th Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1206 # Hailar, Manchukuo
     name     = "6th Army" 
     id       = {  type = 13016 id = 33  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 34 } 
       name       = "6th Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1317 # Wuhan, China
     name     = "11th Army" 
     id       = {  type = 13016 id = 35  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 36 } 
       name       = "11th Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1321 # Zhengzhou, China
     name     = "12th Army" 
     id       = {  type = 13016 id = 37  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 38 } 
       name       = "12th Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 39 } 
       name       = "10th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1338 # Shanghai, China
     name     = "13th Army" 
     id       = {  type = 13016 id = 40  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 41 } 
       name       = "13th Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }
   landunit = 
   { location = 1379 # Nanning, China
     name     = "22nd Army" 
     id       = {  type = 13016 id = 42  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 43 } 
       name       = "22nd Army HQ" 
       type       = hq
       strength   = 80
       model      = 3
     }
   }

   ### Japan Army Home/Main Divisions ###

   landunit = 
   { location = 1200 # Huma, Manchukuo
     name     = "1st Division" 
     id       = {  type = 13016 id = 44  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 45 } 
       name       = "1st 49th 57th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = super_heavy_artillery
       brigade_model1 = 2
       extra2     = light_armor_brigade
       brigade_model2 = 3
     }
   }
   landunit = 
   { location = 1206 # Khalkhin Gol area, Manchukuo
     name     = "2nd Division" 
     id       = {  type = 13016 id = 46  } 
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 47 } 
       name       = "4th 16th 17th 29th Infantry Regiments" 
       type       = infantry
       strength   = 100
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
   }
   landunit = 
   { location = 1322 # Luoyang, China
     name     = "3rd Division" 
     id       = {  type = 13016 id = 48  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 49 } 
       name       = "6th 68th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 50 } 
       name       = "18th 34th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 51 } 
       name       = "3rd Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1208 # Hsinking, Manchukuo
     name     = "4th Division" 
     id       = {  type = 13016 id = 52  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 53 } 
       name       = "8th 70th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = super_heavy_artillery
       brigade_model1 = 2
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 54 } 
       name       = "37th 61st Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 55 } 
       name       = "4th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1379 # Nanning, China
     name     = "5th Division" 
     id       = {  type = 13016 id = 56  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 57 } 
       name       = "11th 41st Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
##### 21st Brigade wiped out at Kunlun Pass
#     Division = 
#     { experience = 30 
#       id         = {  type = 13016 id = 58 } 
#       name       = "21st 42nd Infantry Regiments" 
#       type       = infantry
#       strength   = 66
#       model      = 10
#       extra1     = engineer
#       brigade_model1 = 3
#     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 59 } 
       name       = "5th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1317 # Wuhan, China
     name     = "6th Division" 
     id       = {  type = 13016 id = 60  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 61 } 
       name       = "13th 23rd 45th Infantry Regiments" 
       type       = infantry
       strength   = 88 # full 13th and 23rd IR + 2 battalions from 45th
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 62 } 
       name       = "6th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1206 # Khalkhin Gol area, Manchukuo
     name     = "7th Division" 
     id       = {  type = 13016 id = 63  } 
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 64 } 
       name       = "26th 27th 28th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 65 } 
       name       = "7th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1204 # Keinei, Manchukuo
     name     = "8th Division" 
     id       = {  type = 13016 id = 66  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 67 } 
       name       = "5th 17th 31st Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 68 } 
       name       = "8th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1208 # Hsinking, Manchukuo
     name     = "9th Division" 
     id       = {  type = 13016 id = 69  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 70 } 
       name       = "6th 7th 19th 35th Infantry Regiments" 
       type       = infantry
       strength   = 100
       model      = 10
     }
   }
   landunit = 
   { location = 1201 # Botanko, Manchukuo
     name     = "10th Division" 
     id       = {  type = 13016 id = 71  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 72 } 
       name       = "10th 39th 63rd Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
   }
   landunit = 
   { location = 1202 # Toan, Manchukuo
     name     = "11th Division" 
     id       = {  type = 13016 id = 73  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 74 } 
       name       = "12th 43rd 44th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 75 } 
       name       = "11th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1201 # Botanko, Manchukuo
     name     = "12th Division" 
     id       = {  type = 13016 id = 76  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 77 } 
       name       = "24th 46th 48th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1322 # Luoyang, China
     name     = "13th Division" 
     id       = {  type = 13016 id = 78  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 79 } 
       name       = "58th 116th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 80 } 
       name       = "65th 104th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1 = light_armor_brigade
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 81 } 
       name       = "17th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1336 # Kaifeng, China
     name     = "14th Division" 
     id       = {  type = 13016 id = 82  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 83 } 
       name       = "2nd 59th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 84 } 
       name       = "15th 50th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 85 } 
       name       = "18th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1318 # Wuhan area, China
     name     = "15th Division" 
     id       = {  type = 13016 id = 86  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 87 } 
       name       = "51st 60th 67th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1552 # Japan
     name     = "16th Division" 
     id       = {  type = 13016 id = 88  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 89 } 
       name       = "9th 20th 33rd Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1350 # Jingdezhen, China
     name     = "17th Division" 
     id       = {  type = 13016 id = 90  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 91 } 
       name       = "53rd 54th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 92 } 
       name       = "2nd 6th Combined Infantry Regiments" 
       type       = infantry
       strength   = 40
       model      = 10
     }
   }
   landunit = 
   { location = 1369 # returned to Canton 9 Feb
     name     = "18th Division" 
     id       = {  type = 13016 id = 93  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 94 } 
       name       = "55th 56th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 95 } 
       name       = "114th 124th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 96 } 
       name       = "22nd Cavalry Battalion" 
       type       = cavalry
       strength   = 11
       model      = 11
     }
   }
   landunit = 
   { location = 1225 # Korean/Soviet border
     name     = "19th Division" 
     id       = {  type = 13016 id = 97  } 
     Division = 
     { experience = 20 
       id         = {  type = 13016 id = 98 } 
       name       = "73rd 74th 75th 76th Infantry Regiments" 
       type       = infantry
       strength   = 100
       model      = 10
     }
   }
   landunit = 
   { location = 1228 # Keijo, Korea
     name     = "20th Division" 
     id       = {  type = 13016 id = 99  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 100 } 
       name       = "77th 78th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 101 } 
       name       = "79th 80th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
   }
   landunit = 
   { location = 1321 # South Shanxi, China
     name     = "21st Division" 
     id       = {  type = 13016 id = 102  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 103 } 
       name       = "21st Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1345 # Hangzhou, China
     name     = "22nd Division" 
     id       = {  type = 13016 id = 104  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 105 } 
       name       = "84th 85th 86th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1559 # Japan
     name     = "23rd Division" 
     id       = {  type = 13016 id = 106  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 107 } 
       name       = "64th 71st 72nd Infantry Regiments" 
       type       = infantry
       strength   = 20 # mostly wiped out at Khalkhin Gol
       model      = 10
       extra1     = super_heavy_artillery
       brigade_model1 = 2
       extra2     = light_armor_brigade
       brigade_model2 = 3
     }
   }
   landunit = 
   { location = 1208 # Hsinking, Manchukuo
     name     = "24th Division" 
     id       = {  type = 13016 id = 108  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 109 } 
       name       = "22nd 32nd 89th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1205 # Mudanjiang, Manchukuo
     name     = "25th Division" 
     id       = {  type = 13016 id = 110  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 111 } 
       name       = "14th 40th 70th Infantry Regiments" 
       type       = infantry
       strength   = 60 # forming
       model      = 10
     }
   }
   landunit = 
   { location = 1269 # Kalgan, Mongolia
     name     = "26th Division" 
     id       = {  type = 13016 id = 112  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 113 } 
       name       = "11th 12th 13th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1247 # Beijing, China
     name     = "27th Division" 
     id       = {  type = 13016 id = 114  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 115 } 
       name       = "1st 2nd 3rd China Garrison Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1208 # Hsinking, Manchukuo
     name     = "28th Division" 
     id       = {  type = 13016 id = 116  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 117 } 
       name       = "3rd 30th 36th Infantry Regiments" 
       type       = infantry
       strength   = 40 # forming
       model      = 10
     }
   }
   landunit = 
   { location = 1367 # Naoming, China
     name     = "29th Division" 
     id       = {  type = 13016 id = 118  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 119 } 
       name       = "29th Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1327 # Jinan, China
     name     = "32nd Division" 
     id       = {  type = 13016 id = 120  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 121 } 
       name       = "210th 211th 212th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1318 # Huangshi, China
     name     = "33rd Division" 
     id       = {  type = 13016 id = 122  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 123 } 
       name       = "213th 214th 215th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1350 # Huangshi, China
     name     = "34th Division" 
     id       = {  type = 13016 id = 124  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 125 } 
       name       = "216th 217th 218th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1321 # Bo'ai, China
     name     = "35th Division" 
     id       = {  type = 13016 id = 126  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 127 } 
       name       = "219th 220th 221st Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 258 } 
       name       = "4th Cavalry Brigade" 
       type       = cavalry
       strength   = 66
       model      = 11
     }
   }
   landunit = 
   { location = 1254 # Shanxi, China
     name     = "36th Division" 
     id       = {  type = 13016 id = 128  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 129 } 
       name       = "222nd 223rd 224th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1254 # Shanxi, China
     name     = "37th Division" 
     id       = {  type = 13016 id = 130  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 131 } 
       name       = "225th 226th 227th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
   }
   landunit = 
   { location = 1358 # Fuzhou, China
     name     = "38th Division" 
     id       = {  type = 13016 id = 132  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 133 } 
       name       = "228th 229th 230th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1322 # Luoyang, China
     name     = "39th Division" 
     id       = {  type = 13016 id = 134  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 135 } 
       name       = "231st 232nd 233rd Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1339 # Suzhou, China
     name     = "40th Division" 
     id       = {  type = 13016 id = 136  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 137 } 
       name       = "234th 235th 236th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 138 } 
       name       = "40th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1253 # Linfen, China
     name     = "41st Division" 
     id       = {  type = 13016 id = 139  } 
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 140 } 
       name       = "237th 238th 239th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
   }
   landunit = 
   { location = 1342 # Xuanzhou, China
     name     = "48th Division" 
     id       = {  type = 13016 id = 141  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 142 } 
       name       = "48th Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1552 # Utsunomiya, Japan
     name     = "51st Division" 
     id       = {  type = 13016 id = 143  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 144 } 
       name       = "66th 102nd 115th Infantry Regiments" 
       type       = infantry
       strength   = 60 # forming
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
   }
   landunit = 
   { location = 1560 # Nagasaki, Japan
     name     = "52nd Division" 
     id       = {  type = 13016 id = 145  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 146 } 
       name       = "52nd Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1557 # Nagoya, Japan
     name     = "53rd Division" 
     id       = {  type = 13016 id = 147  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 148 } 
       name       = "53rd Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }
   landunit = 
   { location = 1345 # Hangzhou, China
     name     = "55th Division" 
     id       = {  type = 13016 id = 149  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 150 } 
       name       = "112th 143rd 144th Infantry Regiments" 
       type       = infantry
       strength   = 60 # forming
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 151 } 
       name       = "55th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1348 # Jinhua, China
     name     = "56th Division" 
     id       = {  type = 13016 id = 152  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 153 } 
       name       = "113th 146th 148th Infantry Regiments" 
       type       = infantry
       strength   = 80
       model      = 10
       extra      = anti_air 
       brigade_model = 3
     }
   }
   landunit = 
   { location = 1318 # Huangshi, China
     name     = "101st Division" 
     id       = {  type = 13016 id = 154  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 155 } 
       name       = "101st 149th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 156 } 
       name       = "103rd 157th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 157 } 
       name       = "101st Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1370 # Lufeng, China
     name     = "104th Division" 
     id       = {  type = 13016 id = 158  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 159 } 
       name       = "108th 170th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 160 } 
       name       = "137th 161st Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 161 } 
       name       = "104th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1317 # Wuhan, China
     name     = "106th Division" 
     id       = {  type = 13016 id = 162  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 163 } 
       name       = "113th 147st Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 164 } 
       name       = "125th 145th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 165 } 
       name       = "106th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1243 # Baoding, China
     name     = "110th Division" 
     id       = {  type = 13016 id = 166  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 167 } 
       name       = "110th Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
     Division = 
     { experience = 10 
       id         = {  type = 13016 id = 9 } 
       name       = "8th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1327 # Henan, China
     name     = "114th Division" 
     id       = {  type = 13016 id = 168  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 169 } 
       name       = "66th 115th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 170 } 
       name       = "102nd 150th Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 171 } 
       name       = "118th Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }
   landunit = 
   { location = 1344 # near Jiujiang area, China
     name     = "116th Division" 
     id       = {  type = 13016 id = 172  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 173 } 
       name       = "116th Division" 
       type       = infantry
       strength   = 80
       model      = 10
     }
   }

   #################
   # South Guangxi #
   #################
   # https://en.wikipedia.org/wiki/Order_of_Battle_for_Battle_of_South_Guangxi#Japan

   landunit = 
   { location = 1379 # Nanning, China
     name     = "Formosa Mixed Brigade" 
     id       = {  type = 13016 id = 174  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 175 } 
       name       = "1st 2nd Formosa Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
   }
   landunit = 
   { location = 1374 # Pingxiang, China
     name     = "Guards Mixed Brigade" 
     id       = {  type = 13016 id = 176  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 177 } 
       name       = "1st 2nd Guards Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 178 } 
       name       = "Guards Cavalry Regiment" 
       type       = cavalry
       strength   = 33
       model      = 11
     }
   }

   ###################
   # Zaoyang-Yichang #
   ###################
   # https://en.wikipedia.org/wiki/Order_of_Battle:_Battle_of_Zaoyang-Yichang#Japan

   landunit = 
   { location = 1322 # Luoyang, China
     name     = "Ikeda Detachment" 
     id       = {  type = 13016 id = 179  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 180 } 
       name       = "13th 23rd 45th 47th Infantry Regiments"
       type       = infantry
       strength   = 66 # 13th IR full + 1 battalion each from 47th, 23rd, 45th IRs
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 181 } 
       name       = "Kansui Detachment" 
       type       = cavalry
       strength   = 33
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
     }
   }

   ### Other units

   landunit = 
   { location = 1254 # Shanxi, China
     name     = "1st Army" 
     id       = {  type = 13016 id = 182  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 183 } 
       name       = "3rd Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
       extra1     = artillery
       brigade_model1 = 8
     }
   }
   landunit = 
   { location = 1340 # Hefei, China
     name     = "11th Army" 
     id       = {  type = 13016 id = 184  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 185 } 
       name       = "14th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 186 } 
       name       = "18th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1322 # Luoyang, China
     name     = "12th Army" 
     id       = {  type = 13016 id = 187  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 188 } 
       name       = "5th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 189 } 
       name       = "6th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1346 # Ningbo, China
     name     = "13th Army" 
     id       = {  type = 13016 id = 190  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 191 } 
       name       = "11th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 192 } 
       name       = "12th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1342 # Xuanzhou, China
     name     = "13th Army" 
     id       = {  type = 13016 id = 193  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 194 } 
       name       = "13th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 195 } 
       name       = "17th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1350 # Jingdezhen, China
     name     = "13th Army" 
     id       = {  type = 13016 id = 196  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 197 } 
       name       = "20th Independent Mixed Brigade" 
       type       = infantry
       strength   = 60
       model      = 10
     }
   }
   landunit = 
   { location = 1202 # Jiamusi, Manchukuo
     name     = "3rd Army" 
     id       = {  type = 13016 id = 198  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 199 } 
       name       = "4th Independent Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 200 } 
       name       = "5th Independent Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
   }
   landunit = 
   { location = 1204 # Jixi, Manchukuo
     name     = "3rd Army" 
     id       = {  type = 13016 id = 201  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 202 } 
       name       = "6th Independent Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = artillery
       brigade_model = 7
     }
   }
   landunit = 
   { location = 1200 # Huma, Manchukuo
     name     = "4th Army" 
     id       = {  type = 13016 id = 203  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 204 } 
       name       = "2nd Independent Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 205 } 
       name       = "3rd Independent Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
     }
   }
   landunit = 
   { location = 1365 # Hainan, China
     name     = "2nd Guards Brigade" 
     id       = {  type = 13016 id = 206  } 
     Division = 
     { experience = 30 
       id         = {  type = 13016 id = 207 } 
       name       = "3rd 4th Guards Infantry Regiments" 
       type       = infantry
       strength   = 66
       model      = 10
       extra1     = engineer
       brigade_model1 = 3
       extra2     = artillery
       brigade_model2 = 8
     }
   }
   landunit = 
   { location = 1552 # Tokyo, Japan
     name     = "North Japan Army" 
     id       = {  type = 13016 id = 208  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 209 } 
       name       = "7th Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 210 } 
       name       = "57th Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
   }
   landunit = 
   { location = 1559 # Shikoku, Japan
     name     = "West Japan Army" 
     id       = {  type = 13016 id = 211  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 212 } 
       name       = "8th Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 213 } 
       name       = "14th Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
       extra      = anti_air 
       brigade_model = 1
     }
   }
   landunit = 
   { location = 1228 # Keijo, Korea
     name     = "Korean Army" 
     id       = {  type = 13016 id = 214  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 215 } 
       name       = "1st Korean Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 216 } 
       name       = "2nd Korean Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
     }
   }
   landunit = 
   { location = 1362 # Taiwan
     name     = "Korean Army" 
     id       = {  type = 13016 id = 217  } 
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 218 } 
       name       = "1st Taiwanese Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
     }
     Division = 
     { experience = 0 
       id         = {  type = 13016 id = 219 } 
       name       = "2nd Taiwanese Garrison" 
       type       = garrison
       strength   = 60
       model      = 5
     }
   }
   # Pacific garrisons: 
   landunit = 
   {  id       = {  type = 13016 id = 220  } 
     name     = "Saishu Chuton Gun" 
     location = 1545
     Division = 
     {  id       = {  type = 13016 id = 221  } 
       name     = "Saishu Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 222  } 
     name     = "Naha Chuton Gun" 
     location = 1564 
     Division = 
     {  id       = {  type = 13016 id = 223  } 
       name     = "Naha Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 224  } 
     name     = "Toyohara Chuton Gun" 
     location = 1542 
     Division = 
     {  id       = {  type = 13016 id = 225  } 
       name     = "Toyohara Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 226  } 
     name     = "Tomari Konkyochi tai" 
     location = 1666 
     Division = 
     {  id       = {  type = 13016 id = 227  } 
       name     = "Tomari Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 228  } 
     name     = "Shana Chuton Gun" 
     location = 1543 
     Division = 
     {  id       = {  type = 13016 id = 229  } 
       name     = "Shana Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 230  } 
     name     = "Mariane Konkyochi tai" 
     location = 1686 
     Division = 
     {  id       = {  type = 13016 id = 231  } 
       name     = "Mariane Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 232  } 
     name     = "Palau Konkyochi tai" 
     location = 1670 
     Division = 
     {  id       = {  type = 13016 id = 233  } 
       name     = "Palau Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 234  } 
     name     = "Eniwetok Konkyochi tai" 
     location = 1675 
     Division = 
     {  id       = {  type = 13016 id = 235  } 
       name     = "Eniwetok Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 236  } 
     name     = "Bikini Konkyochi tai" 
     location = 1674 
     Division = 
     {  id       = {  type = 13016 id = 237  } 
       name     = "Bikini Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 238  } 
     name     = "Kwajalein Konkyochi tai" 
     location = 1676
     Division = 
     {  id       = {  type = 13016 id = 239  } 
       name     = "Kwajalein Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 240  } 
     name     = "Saipan Konkyochi tai" 
     location = 1685
     Division = 
     {  id       = {  type = 13016 id = 241  } 
       name     = "Saipan Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 242  } 
     name     = "Wotje Konkyochi tai" 
     location = 1681 
     Division = 
     {  id       = {  type = 13016 id = 243  } 
       name     = "Wotje Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 244  } 
     name     = "Iwo Jima Konkyochi tai" 
     location = 1661 
     Division = 
     {  id       = {  type = 13016 id = 245  } 
       name     = "Iwo Jima Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 246  } 
     name     = "Minami Torima Konkyochi tai" 
     location = 1672 
     Division = 
     {  id       = {  type = 13016 id = 247  } 
       name     = "Minami Torima Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 248  } 
     name     = "Woleai Konkyochi tai" 
     location = 1668
     Division = 
     {  id       = {  type = 13016 id = 249  } 
       name     = "Woleai Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 250  } 
     name     = "Truk Konkyochi tai" 
     location = 1667
     Division = 
     {  id       = {  type = 13016 id = 251  } 
       name     = "Truk Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 252  } 
     name     = "Ponape Konkyochi tai" 
     location = 1665
     Division = 
     {  id       = {  type = 13016 id = 253  } 
       name     = "Ponape Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 254  } 
     name     = "Marshall Konkyochi tai" 
     location = 1677
     Division = 
     {  id       = {  type = 13016 id = 255  } 
       name     = "Marshall Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 256  } 
     name     = "Yap Konkyochi tai" 
     location = 1669
     Division = 
     {  id       = {  type = 13016 id = 257  } 
       name     = "Yap Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
	
  ### Japan Navy OOB ### 
  


	# COMBINED FLEET
	# 1st Battleship Squadron
	navalunit = { 
		id = { type = 13016 id = 400 } 
		name = "Dai 1 Senkan Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 401 } 
			name = "Nagato" 
			type = battleship 
			model = 5 
			extra1 = naval_anti_air_l
			extra2 = naval_fire_controll_l
			extra3 = floatplane
			brigade_model3 = 4
		} 
		division = { 
			id = { type = 13016 id = 402 } 
			name = "Mutsu" 
			type = battleship 
			model = 5 
			extra1 = naval_anti_air_l
			extra2 = naval_fire_controll_l
			extra3 = naval_improved_hull_l
			extra4 = floatplane
			brigade_model4 = 4
		}
	}
	# 9 Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 403 } 
		name = "Dai 9 Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 404 } 
			name = "Kitakami" 
			type = light_cruiser 
			model = 2 
		}
		division = { 
			id = { type = 13016 id = 405 } 
			name = "Oi" 
			type = light_cruiser 
			model = 2 
		} 
	}
	# 11 Carrier Squadron
	navalunit = { 
		id = { type = 13016 id = 406 } 
		name = "Dai 11 Koku Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 407 } 
			name = "Mizuho" 
			type = escort_carrier 
			model = 0 
		} 
		division = { 
			id = { type = 13016 id = 408 } 
			name = "Chiyoda" 
			type = escort_carrier 
			model = 0 
		} 
		division = { 
			id = { type = 13016 id = 409 } 
			name = "Chitose" 
			type = escort_carrier 
			model = 0 
		} 
	}
	# 4th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 410 } 
		name = "Dai 4 Sensui Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 411 } 
			name = "Kinu" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 412 } 
			name = "Dai 18 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 413 } 
			name = "Dai 19 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 414 } 
			name = "Dai 21 Sensuisentai" 
			type = submarine 
			model = 1 
		} 
	}
	# 5th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 415 } 
		name = "Dai 5 Sensui Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 416 } 
			name = "Yura" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 417 } 
			name = "Dai 28 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 418 } 
			name = "Dai 29 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 419 } 
			name = "Dai 30 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
	}
	# 1ST FLEET
	# 2nd Battleship Squadron
	navalunit = { 
		id = { type = 13016 id = 420 } 
		name = "Dai 2 Senkan Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 421 } 
			name = "Ise" 
			type = battleship 
			model = 4 
			extra1 = naval_improved_hull_l
			extra2 = naval_anti_air_l
			extra3 = floatplane
			brigade_model3 = 4
		} 
		division = { 
			id = { type = 13016 id = 422 } 
			name = "Hyuga" 
			type = battleship 
			model = 4 
			extra1 = naval_improved_hull_l
			extra2 = naval_anti_air_l
			extra3 = floatplane
			brigade_model3 = 4
		}
		division = { 
			id = { type = 13016 id = 423 } 
			name = "Fuso" 
			type = battleship 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 13016 id = 424 } 
			name = "Yamashiro" 
			type = battleship 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
	}
	# 3rd Battleship Squadron
	navalunit = { 
		id = { type = 13016 id = 425 } 
		name = "Dai 3 Senkan Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 426 } 
			name = "Hiei" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 13016 id = 427 } 
			name = "Kirishima" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		}
	}
	navalunit = { 
		id = { type = 13016 id = 428 } 
		name = "Dai 3 Senkan Sentai" 
		location = 2521 
		base = 1362 
 		division = { 
			id = { type = 13016 id = 429 } 
			name = "Kongo" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 13016 id = 430 } 
			name = "Haruna" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
	}
	# 6th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 431 } 
		name = "Dai 6 Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 432 } 
			name = "Kako" 
			type = heavy_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 433 } 
			name = "Furutaka" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 434 } 
			name = "Aoba" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 435 } 
			name = "Kinugasa" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		} 
	}
	# 3rd Carrier Squadron
	navalunit = { 
		id = { type = 13016 id = 436 } 
		name = "Dai 3 Koku Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 437 } 
			name = "Hosho" 
			type = escort_carrier 
			model = 2 
		}  
	}
	# 1st Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 438 } 
		name = "Dai 1 Kuchiku Sentai" 
		location = 1554 
		base = 1554
 		division = { 
			id = { type = 13016 id = 439 } 
			name = "Abukuma" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 440 } 
			name = "Dai 6 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}
		division = { 
			id = { type = 13016 id = 441 } 
			name = "Dai 17 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 442 } 
			name = "Dai 21 Kuchikusentai" 
			type = destroyer
			model = 4
		}
		division = { 
			id = { type = 13016 id = 443 } 
			name = "Dai 27 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
	}
	# 3rd Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 444 } 
		name = "Dai 3 Kuchiku Sentai" 
		location = 1554 
		base = 1554 
 		division = { 
			id = { type = 13016 id = 445 } 
			name = "Sendai" 
			type = light_cruiser 
			model = 3 
		}
    		division = { 
			id = { type = 13016 id = 446 } 
			name = "Dai 11 Kuchikusentai" 
			type = destroyer 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 447 } 
			name = "Dai 12 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 448 } 
			name = "Dai 19 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}    
		division = { 
			id = { type = 13016 id = 449 } 
			name = "Dai 20 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
	}
	# 2ND FLEET
	# 4th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 450 } 
		name = "Dai 4 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 451 } 
			name = "Takao" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 452 } 
			name = "Chokai" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 453 } 
			name = "Atago" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 454 } 
			name = "Maya" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 5th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 455 } 
		name = "Dai 5 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 456 } 
			name = "Myoko" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 457 } 
			name = "Nachi" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 458 } 
			name = "Haguro" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 7th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 459 } 
		name = "Dai 7 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 460 } 
			name = "Mikuma" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 461 } 
			name = "Mogami" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 462 } 
			name = "Kumano" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 463 } 
			name = "Suzuya" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 8th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 464 } 
		name = "Dai 8 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 465 } 
			name = "Tone" 
			type = heavy_cruiser 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 466 } 
			name = "Chikuma" 
			type = heavy_cruiser 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 2nd Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 467 } 
		name = "Dai 2 Kuchiku Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 468 } 
			name = "Jintsu" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 469 } 
			name = "Dai 8 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 470 } 
			name = "Dai 15 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 471 } 
			name = "Dai 16 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 472 } 
			name = "Dai 18 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}   
	}
	# 4th Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 473 } 
		name = "Dai 4 Kuchiku Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 474 } 
			name = "Naka" 
			type = light_cruiser 
			model = 3 
		}
		division = { 
			id = { type = 13016 id = 475 } 
			name = "Dai 2 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 476 } 
			name = "Dai 4 Kuchikusentai" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13016 id = 477 } 
			name = "Dai 9 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 478 } 
			name = "Dai 24 Kuchikusentai" 
			type = destroyer 
			model = 2
		} 
	}
	# 3RD FLEET
	# 16th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 479 } 
		name = "Dai 16 Sentai" 
		location = 1362 
		base = 1362 
		division = { 
			id = { type = 13016 id = 480 } 
			name = "Ashigara" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 481 } 
			name = "Kuma" 
			type = light_cruiser 
			model = 2 
		}
		division = { 
			id = { type = 13016 id = 482 } 
			name = "Nagara" 
			type = light_cruiser 
			model = 3 
		}
	}
	# 5th Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 483 } 
		name = "Dai 5 Kuchiku Sentai" 
		location = 1362 
		base = 1362 
		division = { 
			id = { type = 13016 id = 484 } 
			name = "Natori" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 485 } 
			name = "Dai 5 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 486 } 
			name = "Dai 22 Kuchikusentai" 
			type = destroyer
			model = 2
		} 
	}
	# 6th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 487 } 
		name = "Dai 6 Sensui Kantai" 
		location = 1362 
		base = 1362 
		division = { 
			id = { type = 13016 id = 488 } 
			name = "Dai 9 Sensuisentai" 
			type = submarine 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 489 } 
			name = "Dai 13 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
	}
	# 4TH FLEET
	# 18th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 490 } 
		name = "Dai 18 Sentai" 
		location = 1667 
		base = 1667 
		division = { 
			id = { type = 13016 id = 491 } 
			name = "Tenryu" 
			type = light_cruiser 
			model = 2
		}  
		division = { 
			id = { type = 13016 id = 492 } 
			name = "Tatsuta" 
			type = light_cruiser 
			model = 2 
		} 
	}
	# 6th Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 493 } 
		name = "Dai 6 Kuchiku Sentai" 
		location = 1667 
		base = 1667 
		division = { 
			id = { type = 13016 id = 494 } 
			name = "Yubari" 
			type = light_cruiser 
			model = 3 
		}
		division = { 
			id = { type = 13016 id = 495 } 
			name = "Dai 29 Kuchikusentai" 
			type = destroyer 
			model = 2
		} 
		division = { 
			id = { type = 13016 id = 496 } 
			name = "Dai 30 Kuchikusentai" 
			type = destroyer 
			model = 4
		} 
	}
	# 7th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 497 } 
		name = "Dai 7 Sensui Kantai" 
		location = 1667 
		base = 1667 
		division = { 
			id = { type = 13016 id = 498 } 
			name = "Dai 26 Sensuisentai" 
			type = submarine 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 499 } 
			name = "Dai 27 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 500 } 
			name = "Dai 33 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
	}
	# 5TH FLEET
	# 21th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 501 } 
		name = "Dai 21 Sentai" 
		location = 1338  
		base = 1338 
 		division = { 
			id = { type = 13016 id = 502 } 
			name = "Tama" 
			type = light_cruiser 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 503 } 
			name = "Kiso" 
			type = light_cruiser 
			model = 2 
		} 
	}
	# 6TH FLEET
	# 1st Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 504 } 
		name = "Dai 1 Sensui Kantai" 
		location = 1676 
		base = 1676 
		division = { 
			id = { type = 13016 id = 505 } 
			name = "Dai 1 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 506 } 
			name = "Dai 2 Sensuisentai" 
			type = submarine 
			model = 2 
		}
		division = { 
			id = { type = 13016 id = 507 } 
			name = "Dai 3 Sensuisentai" 
			type = submarine 
			model = 3 
		}
		division = { 
			id = { type = 13016 id = 508 } 
			name = "Dai 4 Sensuisentai" 
			type = submarine 
			model = 3 
		}  
	}
	# 2nd Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 509 } 
		name = "Dai 1 Sensui Kantai" 
		location = 1676 
		base = 1676 

		division = { 
			id = { type = 13016 id = 510 } 
			name = "Dai 11 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 511 } 
			name = "Dai 12 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 512 } 
			name = "Dai 20 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
	}
	# CARRIER STRIKE FORCE
	# 1st Carrier Division
	navalunit = { 
		id = { type = 13016 id = 513 } 
		name = "Dai 1 Koku Sentai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 514 } 
			name = "Kaga" 
			type = carrier 
			model = 0 
			extra1 = cag 
			brigade_model1 = 4 
		} 
		division = { 
			id = { type = 13016 id = 515 } 
			name = "Dai 7 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
	}
	# 2nd Carrier Division
	navalunit = { 
		id = { type = 13016 id = 516 } 
		name = "Dai 2 Koku Sentai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 517 } 
			name = "Soryu" 
			type = carrier 
			model = 2 
			extra1 = cag 
			brigade_model1 = 4 
		}
		division = { 
			id = { type = 13016 id = 518 } 
			name = "Hiryu" 
			type = carrier 
			model = 2 
			extra1 = cag 
			brigade_model1 = 4 
		} 
		division = { 
			id = { type = 13016 id = 519 } 
			name = "Dai 23 Kuchikusentai" 
			type = destroyer 
			model = 2
		} 
	}
	# Akagi
	navalunit = { 
		id = { type = 13016 id = 520 } 
		name = "Akagi" 
		location = 2513 
		base = 1552 
		division = { 
			id = { type = 13016 id = 521 } 
			name = "Akagi" 
			type = carrier 
			model = 0 
			extra1 = cag 
			brigade_model1 = 3 
		}  
	}
	# 4th Carrier Division
	navalunit = { 
		id = { type = 13016 id = 522 } 
		name = "Dai 4 Koku Sentai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 523 } 
			name = "Ryujo" 
			type  = light_carrier 
			model = 0 
			extra = light_cag
			brigade_model = 3
		}  
		division = { 
			id = { type = 13016 id = 524 } 
			name = "Dai 3 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}
	}
	# CHINA FLEET
	# China Fleet
	navalunit = { 
		id = { type = 13016 id = 525 } 
		name = "Shina Kantai" 
		location = 1338 
		base = 1338 
		division = { 
			id = { type = 13016 id = 526 } 
			name = "Isuzu" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 527 } 
			name = "Izumo" 
			type = heavy_cruiser 
			model = 1
		}
		division = { 
			id = { type = 13016 id = 528 } 
			name = "Dai 1 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 529 } 
			name = "Dai 2 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 530 } 
			name = "Dai 3 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 531 } 
			name = "Dai 4 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	}
	# GUARD DISTRICTS
	# Chinkai Guard District
	navalunit = { 
		id = { type = 13016 id = 532 } 
		name = "Chinkai Keibifu" 
		location = 1232 
		base = 1232  
		division = { 
			id = { type = 13016 id = 533 } 
			name = "Dai 32 Kuchikusentai" 
			type = destroyer 
			model = 4
		} 
	}
	# Kure Naval District
	navalunit = { 
		id = { type = 13016 id = 534 } 
		name = "Kure Chinjufu" 
		location = 1554 
		base = 1554  
		division = { 
			id = { type = 13016 id = 535 } 
			name = "Dai 13 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}
		division = { 
			id = { type = 13016 id = 536 } 
			name = "Dai 6 Sensuisentai" 
			type = submarine 
			model = 4 
		} 
	}
	# Ominato Guard District
	navalunit = { 
		id = { type = 13016 id = 537 } 
		name = "Ôminato Keibifu" 
		location = 1551 
		base = 1551  
		division = { 
			id = { type = 13016 id = 538 } 
			name = "Dai 1 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
	}
	# RESERVE FLEET
	# Crappy Reserve Fleet 1
	navalunit = { 
		id = { type = 13016 id = 539 } 
		name = "Dai 7 Sentai" 
		location = 1560 
		base = 1560 
		division = { 
			id = { type = 13016 id = 540 } 
			name = "Asama" 
			type = heavy_cruiser 
			model = 1 
		} 
		division = {
			id = { type = 13016 id = 541 }
			name = "Iwate"
			type = heavy_cruiser
			model = 1
		} 
		division = { 
			id = { type = 13016 id = 542 } 
			name = "Dai 25 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
		division = { 
			id = { type = 13016 id = 543 } 
			name = "Dai 26 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
		division = { 
			id = { type = 13016 id = 544 } 
			name = "Dai 28 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
	}
	# Crappy Reserve Fleet 2
	navalunit = { 
		id = { type = 13016 id = 545 } 
		name = "Dai 9 Sentai" 
		location = 1552 
		base = 1552 
		division = {
			id = { type = 13016 id = 546 }
			name = "Azuma"
			type = heavy_cruiser
			model = 1
		}
		division = {
			id = { type = 13016 id = 547 }
			name = "Yakumo"
			type = heavy_cruiser
			model = 1
		} 
		division = {
			id = { type = 13016 id = 548 }
			name = "Kamoi"
			type = escort_carrier
			model = 0
		}    
		division = {
			id = { type = 13016 id = 549 }
			name = "Notoro"
			type = escort_carrier
			model = 0
		}  
	} 
	# Submarine Fleet 2
	navalunit = { 
		id = { type = 13016 id = 550 } 
		name = "Dai 2 Sensui Kantai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 551 } 
			name = "I-5" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 579 } 
			name = "I-6" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 580 } 
			name = "I-7" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 581 } 
			name = "I-8" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 552 } 
			name = "Dai 10 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
	} 
	# Transport Fleet 1
	navalunit = { 
		id = { type = 13016 id = 553 } 
		name = "Dai 1 Yuso Kantai" 
		location = 1553 
		base = 1553 
		division = { 
			id = { type = 13016 id = 554 } 
			name = "Dai 16 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 2
	navalunit = { 
		id = { type = 13016 id = 555 } 
		name = "Dai 2 Yuso Kantai" 
		location = 1553 
		base = 1553 
		division = { 
			id = { type = 13016 id = 556 } 
			name = "Dai 31 Kuchikusentai" 
			type = destroyer 
			model = 4
		} 
		division = { 
			id = { type = 13016 id = 557 } 
			name = "Dai 19 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 3
	navalunit = { 
		id = { type = 13016 id = 558 } 
		name = "Dai 3 Yuso Kantai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 559 } 
			name = "Dai 14 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 560 } 
			name = "Dai 15 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 561 } 
			name = "Dai 17 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 562 } 
			name = "Dai 18 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 4
	navalunit = { 
		id = { type = 13016 id = 563 } 
		name = "Dai 4 Yuso Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 564 } 
			name = "Dai 33 Kuchikusentai" 
			type = destroyer 
			model = 4
		} 
		division = { 
			id = { type = 13016 id = 565 } 
			name = "Dai 20 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 566 } 
			name = "Dai 13 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 5
	navalunit = { 
		id = { type = 13016 id = 567 } 
		name = "Dai 5 Yuso Kantai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 568 } 
			name = "Dai 14 Kuchikusentai" 
			type = destroyer 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 569 } 
			name = "Dai 9 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 570 } 
			name = "Dai 10 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 571 } 
			name = "Dai 11 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 572 } 
			name = "Dai 12 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	}  
	# KOREA FLEET
	# Korea Fleet
	navalunit = { 
		id = { type = 13016 id = 573 } 
		name = "Chôsen Kantai" 
		location = 1232 
		base = 1232  
		division = { 
			id = { type = 13016 id = 574 } 
			name = "Dai 10 Kuchikusentai" 
			type = destroyer 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 575 } 
			name = "Dai 5 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 576 } 
			name = "Dai 6 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 577 } 
			name = "Dai 7 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 578 } 
			name = "Dai 8 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	}

	
  ### Japan Air OOB ### 
   airunit = 
   {  id       = {  type = 13016 id = 700  } 
     name     = "Dai 1 Kyokutsi Hikodan" 
     location = 1219 
     base     = 1219 
     Division = 
     {  id       = {  type = 13016 id = 701  } 
       name     = "Dai 1 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 7
      } 
    } 
   airunit = 
   {  id       = {  type = 13016 id = 702  } 
     name     = "Dai 1 Kokutai" 
     location = 1219 
     base     = 1219 
     Division = 
     {  id       = {  type = 13016 id = 703  } 
       name     = "Dai 2 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 7
      } 
    }
   airunit = 
   {  location = 1219 
     base     = 1219 
     id       = {  type = 13016 id = 704  } 
     name     = "Dai 2 Kokutai" 
     Division = 
     {  id    = {  type = 13016 id = 705  } 
       name  = "Dai 2 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      } 
     Division = 
     {  id       = {  type = 13016 id = 706  } 
       name     = "Dai 8 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 8
      } 
     Division = 
     {  id    = {  type = 13016 id = 707  } 
       name  = "Dai 9 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      }
     Division = 
     {  id       = {  type = 13016 id = 708  } 
       name     = "Dai 13 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 8
      } 
    }
   airunit = 
   {  location = 1362 
     base     = 1362 
     id       = {  type = 13016 id = 709  } 
     name     = "Dai 2 Kokutai" 
     Division = 
     {  id    = {  type = 13016 id = 710  } 
       name  = "Dai 3 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      }
     Division = 
     {  id    = {  type = 13016 id = 711  } 
       name  = "Dai 7 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      } 
     Division = 
     {  id    = {  type = 13016 id = 712  } 
       name  = "Dai 10 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      }
     Division = 
     {  id       = {  type = 13016 id = 713  } 
       name     = "Dai 12 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 8
      } 
    }
   # ### Under division_development ###  
	division_development = {  
		name  = "Zuiho" 
		type  = light_carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3000  } 
		date  = {  year = 1940 month = december day = 27  } 
		extra = light_cag
		brigade_model = 3
	}
	division_development = {  
		name  = "Shoho" 
		type  = light_carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3001  } 
		date  = {  year = 1941 month = november day = 29  } 
		extra = light_cag
		brigade_model = 3
	}
	division_development = {  
		name  = "Shokaku" 
		type  = carrier 
		model = 3 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3002  } 
		date  = {  year = 1941 month = august day = 8  } 
		extra = cag 
		brigade_model = 3 
	}
	division_development = {  
		name  = "Zuikaku" 
		type  = carrier 
		model = 3 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3003  } 
		date  = {  year = 1941 month = september day = 25  } 
		extra = cag 
		brigade_model = 3 
	} 
	division_development = {  
		name  = "Hiyo" 
		type  = carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3009  } 
		date  = {  year = 1942 month = july day = 29  }
		extra = cag 
		brigade_model = 3  
	}
	division_development = {  
		name  = "Junyo" 
		type  = carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3010  } 
		date  = {  year = 1942 month = may day = 3  } 
		extra = cag 
		brigade_model = 3 
	}
	division_development = {  
		name  = "Nisshin" 
		type  = escort_carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3011  } 
		date  = {  year = 1942 month = february day = 1  } 
	}
	division_development = {  
		name  = "Yamato" 
		type  = battleship 
		model = 11 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3004  } 
		date  = {  year = 1941 month = december day = 16  } 
		extra = floatplane
		brigade_model = 4
	}
	division_development = {  
		name  = "Musashi" 
		type  = battleship 
		model = 11 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3005  } 
		date  = {  year = 1942 month = august day = 5  } 
		extra = floatplane
		brigade_model = 4
	}
	division_development = {  
		name  = "Shinano" 
		type  = battleship 
		model = 11 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3006  } 
		date  = {  year = 1944 month = july day = 19  } 
		extra = floatplane
		brigade_model = 4
	}
	division_development = {
		name = "Dai 34 Kuchikusentai"
		type = destroyer
		model = 6
		cost = 0.1
		id = { type = 13016 id = 3016 }
		date = { year = 1940 month = september day = 1 }
	}
	division_development = {
		name = "Dai 35 Kuchikusentai"
		type = destroyer
		model = 6
		cost = 0.1
		id = { type = 13016 id = 3017 }
		date = { year = 1941 month = january day = 1 }
	}
	division_development = {
		name = "Dai 36 Kuchikusentai"
		type = destroyer
		model = 6
		cost = 0.1
		id = { type = 13016 id = 3018 }
		date = { year = 1941 month = april day = 1 }
	}
	division_development = {  
		name  = "I-9" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2257  } 
		date  = {  year = 1941 month = february day = 11  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-10" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2258  } 
		date  = {  year = 1941 month = october day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-11" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2259  } 
		date  = {  year = 1942 month = may day = 16  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-15" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2260  } 
		date  = {  year = 1940 month = september day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-17" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2261  } 
		date  = {  year = 1941 month = january day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-19" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2262  } 
		date  = {  year = 1941 month = april day = 27  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-21" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2263  } 
		date  = {  year = 1941 month = july day = 14  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-23" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2264  } 
		date  = {  year = 1941 month = september day = 26  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-25" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2265  } 
		date  = {  year = 1941 month = october day = 14  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-26" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2266  } 
		date  = {  year = 1941 month = november day = 5 } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-27" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2267  } 
		date  = {  year = 1942 month = february day = 23  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-28" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2268  } 
		date  = {  year = 1942 month = february day = 5  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-29" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2269  } 
		date  = {  year = 1942 month = february day = 26  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-30" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2270  } 
		date  = {  year = 1942 month = february day = 27  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-31" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2271  } 
		date  = {  year = 1942 month = may day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-32" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2272  } 
		date  = {  year = 1942 month = april day = 25  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-33" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2273  } 
		date  = {  year = 1942 month = june day = 9  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
  } 
 
