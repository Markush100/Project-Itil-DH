 
 ############################## 
 # Country definition for U74 # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U74 
   regular_id             = CHI 
	

   # Resource Reserves 
	energy                 = 5
	metal                  = 5
	rare_materials         = 5
   oil                    = 5
   supplies               = 100 
   money                  = 5
   capital                = 1259 # Beijing
   manpower               = 20
   dissent                = 30
  
 diplomacy = 
   {  relation = {  tag = CHC value = 120 }
     relation = {  tag = CGX value = -100  } 
     relation = {  tag = CSX value = -100  } 
     relation = {  tag = CXB value = -100   } 
     relation = {  tag = CYN value = -100  } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -150  } 
	 relation = {  tag = CHI value = -100  } 
    } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 7 
     freedom           = 3 
     free_market       = 8 
     professional_army = 9 
     defense_lobby     = 5 
     interventionism   = 5 
    }

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
   ownedprovinces         = { 1255 1256 1257 1258 1259 1260 1263 } 
   controlledprovinces    = { 1255 1256 1257 1258 1259 1260 1263 }
  

   #Shanxi
techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080 
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Manpower Focus
	6570

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	
	# Cavalry
	1350 1360

	# Manufacturing
	5050
	
	# Crypto
	5327

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Tank 
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870 2880

	# Naval Doctrines
	8010 8020 8050 8060 8070 8080
	
	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720
	#Early Battleship
	3410
	
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
	4740 4750 4760
}
 inventions = { 3000027 }
 
   diplomacy = 
   {  
		relation = {  tag = CHI value = 150 }
		relation = {  tag = CGX value = 200  }
		relation = {  tag = CXB value = 200  }
		relation = {  tag = CYN value = 200  }
		relation = {  tag = JAP value = -100 }
		relation = {  tag = CHC value = -75  }
    }

   SpyInfo                = {  country = "U74" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 1185102  }
   headofgovernment       = {  type = 9 id = 1185106  }
   foreignminister        = {  type = 9 id = 1185108  }
   armamentminister       = {  type = 9 id = 1185109 }
   ministerofsecurity     = {  type = 9 id = 1185110 }
   ministerofintelligence = {  type = 9 id = 1185111 }
   chiefofstaff           = {  type = 9 id = 1185105 }
   chiefofarmy            = {  type = 9 id = 1185112 }
   chiefofnavy        	  = {  type = 9 id = 1185101 }
   chiefofair             = {  type = 9 id = 1185113 }
   
  #####################
	# Shaanxi Task Force #
	#####################
	# http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15499404&viewfull=1#post15499404
	landunit = 
   {  location = 1258 # Xian
     name     = "7th Corps" 
     id       = {  type = 22000 id = 30  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 31  } 
       name       = "42nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 32  } 
       name       = "17th Division" 
       type       = infantry 
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
      }
    }
	landunit = 
   {  location = 1258 # Xian
     name     = "17th Route Army" 
     id       = {  type = 22000 id = 33  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 34 } 
       name       = "17th Route Army HQ" 
       type       = hq
	   strength  = 100
       model     = 1
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 35  } 
       name       = "Shaanxi Guard" 
       type       = militia 
	   strength  = 100
       model     = 3
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 36  } 
       name       = "1st 2nd 3rd Special Regiments" 
       type       = infantry
	   strength  = 100
       model     = 6
	   extra1 = cavalry_brigade
	   brigade_model1 = 6
      }
    }
	
	landunit = 
   {  location = 1259 # Yan'an 
     name     = "1st Red Army Front" 
     id       = {  type = 24000 id = 1  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 2  } 
       name       = "1st Army Group" 
       type       = bergsjaeger 
       strength  = 80 
       model      = 7 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 3  } 
       name       = "15th Army Group" 
       type       = bergsjaeger 
       strength  = 63 
       model      = 7 
      }
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 4  } 
       name       = "28th 29th Armies" 
       type       = bergsjaeger 
       strength  = 29
       model      = 7 
      }
     dig_in   = 20.000 
    }
	landunit = 
   {  location = 1256 # Guanxian
     name     = "2nd Army Front" 
     id       = {  type = 24000 id = 5  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 6  } 
       name       = "2nd Red Army Group" 
       type       = bergsjaeger 
       strength  = 18 
       model      = 7 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 7  } 
       name       = "6th Red Army Group" 
       type       = bergsjaeger 
       strength  = 18
       model      = 7 
      }
     dig_in   = 20.000 
    }
	landunit = 
   {  location = 1255 # Guanxian
     name     = "4th Army Front" 
     id       = {  type = 24000 id = 8  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 9  } 
       name       = "4th Army" 
       type       = bergsjaeger 
       strength  = 54
       model      = 7 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 10  } 
       name       = "9th Army" 
       type       = bergsjaeger 
       strength  = 27
       model      = 8 
      }
	  Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 11  } 
       name       = "30th 31st 32nd Armies" 
       type       = bergsjaeger 
       strength  = 24
       model      = 7 
      }
	  Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 12  } 
       name       = "5th Army" 
       type       = bergsjaeger 
       strength  = 22
       model      = 7 
      }
     dig_in   = 20.000 
    } 
	landunit = 
   {  location = 1260 # Nanyang
     name     = "16th Army" 
     id       = {  type = 24000 id = 13  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 14  } 
       name       = "6th Army Group" 
       type       = militia
       strength  = 50
       model      = 5
      } 
     dig_in   = 20.000 
    } 
	
	
	
}
  
 