##############################
# Country definition for U36 #
##############################

 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U36
	ai_settings	= { flags = { RES = yes MOB1 = yes MOB2 = yes 1330110043_HISTORICAL_SCENARIO = yes } }
	capital                = 1247 
	# Resource Reserves 
	energy                 = 2100
	metal                  = 1050
	rare_materials         = 525
	oil                    = 1000 
	supplies               = 3000 
	money                  = 10 
	manpower               = 855 
	dissent                = 10
	transports             = 100 
	escorts                = 2 
    
   
   diplomacy = 
   {  relation = {  tag = CHC value = -100  }
     relation = {  tag = CSX value = -100  } 
     relation = {  tag = CXB value = -100  } 
     relation = {  tag = CYN value = -100  } 
     relation = {  tag = JAP value = -150  } 
     relation = {  tag = MAN value = -100  } 
	 relation = {  tag = U74 value = 100 access = yes  } 
    } 
   SpyInfo                = {  country = "U36" NumberOfSpies = 5  } 
   # Fujian   
   nationalprovinces      = {   
 #Nationalist China at Start 
 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1384 1385 1386 1387 1388 1389 1390
  
 #Guanxi Clique  
 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
 #Shanxi       
 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332   
  
 #Manchoukou 
 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237
  
 #Xibei san ma            
 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285   
  
 #Tibet       
 1286 1287 1288 1289 1290 1294 1295 
  
 #Sinkiang        
 1273 1274 1275 1277 1279 1280 1281 1282 
  
 #India        
 1276 1278  
  
 #Communist China      
 1255 1256 1259 1260 
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1361 1362 1363 1364   
  
 #Mongolia 
 1120 1121 1122 1123 1124 1125 
  
                             } 
   ownedprovinces         = {    
 #Nationalist China at start 
      1235 1216 1236 1237 1247 1246 1241 1245 1243 1242 1244 1323 1329 1328 1331
                             } 

   controlledprovinces    = {   
 #Nationalist China at start 
    1235 1216 1236 1237 1247 1246 1241 1245 1243 1242 1244 1323 1329 1328 1331
                             } 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
	1119 #Tannu Tuva
	1414 #KaU36n 
	1413
	}
						
	# NatU36 1936 techs 
	# ###################### 
techapps = { 
	
	# Manufacturing
	5810 5820 5050
	# Construction Engineering
	5800 5080

	# Synthetic Oil
	5190

	#Computers
	5310 54010

	# Crypto - Up to 1923
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080 
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Engineers
	1830 1840
	# Supply 
	1910 1920 1930 1940 1950 1960 1970

	# Armoured Car  
	2860 2870
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930

	# Medicine
	5600 5610

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Manpower Focus
	6570

	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120 3130 3140
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720 3730
	#Early Battleship
	3410 3420
	

	# Naval Doctrines
	8010 8020 8050 8060 8070 8080

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 4120
	# Strategic Bomber
	4800 4810
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760 4770

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	# Infantry (from GER/SOV)
	1090
	
	# Engineers
	1850

	# Industry
	5830

	# Computers
	54030

	# Agriculture
	5700
	
	# Medicine
	5620
	
	# Supply
	1980

	# Tank 
	7600 7610 2620 2010
	
	# Armored Car
	2880

	#Mobility Focus
	6210

	#Manpower Focus
	6300
	
	#Intercepter Fighter
	4010
	
	#Multi-Role Fighter
	4330

	#Close Air Support
	4400
	
	# Light Cruiser
	3150

}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6 
     political_left    = 4 
     free_market       = 4 
     freedom           = 4 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 4 
    } 

   headofstate            = {  type = 9 id = 995109  } 
   headofgovernment       = {  type = 9 id = 995110  } 
   foreignminister        = {  type = 9 id = 995115  } 
   armamentminister       = {  type = 9 id = 995103  } 
   ministerofsecurity     = {  type = 9 id = 995120  } 
   ministerofintelligence = {  type = 9 id = 995135  } 
   chiefofstaff           = {  type = 9 id = 995134  } 
   chiefofarmy            = {  type = 9 id = 995124  } 
   chiefofnavy            = {  type = 9 id = 995151  } 
   chiefofair             = {  type = 9 id = 995133  } 
	
	##############################################
	# 29th Army (Hebei/Hebei Autonomous Council) #
	##############################################
    landunit = 
   {  location = 1244 # Beijing
     name     = "Beiyang 1st Army" 
     id       = {  type = 22222 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 2  } 
       name       = "1st Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 3 } 
       name       = "2nd Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = armored_car
	   brigade_model1 = 3
      }
	}
	landunit = 
   {  location = 1323 # Anyang
     name     = "Beiyang 2nd Army" 
     id       = {  type = 22222 id = 11  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 12  } 
       name       = "9th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 13  } 
       name       = "10th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 2
      }
    }
	landunit = 
   {  location = 1331 # Anyang
     name     = "Beiyang 12th Army" 
     id       = {  type = 22222 id = 150  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 12  } 
       name       = "9th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 13  } 
       name       = "10th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 2
      }
    }
	landunit = {
	location = 1244 # 
     name     = "Beiyang Cavalry Corps" 
     id       = {  type = 22222 id = 14  } 
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 6  } 
       name       = "1st Cavalry Division" 
       type       = cavalry
	   strength  = 100
       model     = 6
	   locked = no
      }
		 Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 15  } 
       name       = "2nd Cavalry Brigade" 
       type       = cavalry
	   strength  = 80
       model     = 6
	   locked = no
      }
	   Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 16  } 
       name       = "3rd Cavalry Division" 
       type       = cavalry
	   strength  = 100
       model     = 6
	   locked = no
      }
	
	}

	landunit = {
	location = 1247# 
     name     = "Beiyang Clique" 
     id       = {  type = 22222 id = 17  } 
		 Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 4  } 
       name       = "3rd Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 5  } 
       name       = "4th Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 7  } 
       name       = "6th Infantry Brigade" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	
	 Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 9  } 
       name       = "7th Infantry Brigade" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = no
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 10  } 
       name       = "Beiyang Clique" 
       type       = hq
	   strength  = 100
       model     = 1
	
      }
	
	}
	
  landunit = 
   {  location = 1235 # Fuxin
     name     = "Beiyang 3rd Army" 
     id       = {  type = 22222 id = 18  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 19  } 
       name       = "11th Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 20  } 
       name       = "12th Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = no
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 21  } 
       name       = "13th Infantry Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   locked = no
      }
	}
	landunit = 
   {  location = 1216 # 
     name     = "Beiyang 4th Army" 
     id       = {  type = 22222 id = 22  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 23  } 
       name       = "14th Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 24  } 
       name       = "15th Infantry Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = no
	   extra1 = engineer
	   brigade_model1 = 1
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 25  } 
       name       = "16th Infantry Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = no
	   extra1 = light_armor_brigade
	   brigade_model1 = 1
      }
	}
	
	landunit = 
   {  location = 1216 # 
     name     = "Beiyang Motorized Corps" 
     id       = {  type = 22222 id = 26  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 27  } 
       name       = "1st Motorized Division" 
       type       = motorized
	   strength  = 100
       model     = 0
	   locked = no
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 28  } 
       name       = "2nd Motorized Division" 
       type       = motorized
	   strength  = 100
       model     = 0
	   locked = no
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 29  } 
       name       = "3rd Motorized Division" 
       type       = motorized
	   strength  = 50
       model     = 0
	   locked = no
      }
	}
	landunit = 
   {  location = 1241 # 
     name     = "Tianjin Garrison" 
     id       = {  type = 22222 id = 30  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22222 id = 31  } 
       name       = "Tianjin Garrison" 
       type       = garrison
	   strength  = 100
       model     = 4
	   locked = no
	   extra1 = artillery
	   brigade_model1 = 2
	   extra2 = anti_air		
	   brigade_model2 = 1
      }
	 }
	 
	airunit = 
   {  location = 1247 # Jinan
     name     = "Beiyang Airforce" 
     base     = 1247 # Jinan
     id       = {  type = 22222 id = 43  } 
     Division = 
     {  id           = {  type = 22222 id = 32  } 
       name         = "Beiyang Bomber Squad" 
       type         = tactical_bomber
       model        = 4
       strength     = 40
      } 
	  Division = 
     {  id           = {  type = 22222 id = 33  } 
       name         = "Beiyang Intercepter Squads" 
       type         = interceptor
       model        = 5
       strength     = 100
      } 
	 }
	 
	 navalunit = 
   {  location = 1241 # Tianjin 
     name     = "1st Fleet" 
     id       = {  type = 22222 id = 34  } 
     base     = 1328
	  Division = 
     {  id    = {  type = 22222 id = 35  } 
       name  = "Beijing"
       type  = battleship
	   strength = 100
       model = 5  #Interwar
      } 
	  Division = 
     {  id    = {  type = 22222 id = 36  } 
       name  = "Tianjin"
       type  = light_cruiser
	   strength = 100
       model = 3  #Interwar
      } 
	 Division = 
     {  id    = {  type = 22222 id = 37  } 
       name  = "1st Destroyer Division" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 10
      }
	   Division = 
     {  id    = {  type = 22222 id = 38  } 
       name  = "Anyang"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      } 
	  Division = 
     {  id    = {  type = 22222 id = 39  } 
       name  = "Fuxin"
       type  = light_cruiser
	   strength = 100
       model = 1  #Scout Cruiser
      } 
	  Division = 
     {  id    = {  type = 22222 id = 40  } 
       name  = "Beiyang"
       type  = light_cruiser
	   strength = 100
       model = 1  #Scout Cruiser
      } 
	 Division = 
     {  id           = {  type = 22222 id = 41  } 
       name  = "2nd Destroyer Division" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }

	 Division = 
     {  id           = {  type = 22222 id = 42  } 
       name  = "3rd Destroyer Division" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 20
      }
	}
 }
 
 