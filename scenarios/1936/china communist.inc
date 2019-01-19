 
 ############################## 
 # Country definition for CHC # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHC
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes } } 
	intrinsic_gov_type     = leninist 
	extra_tc               = 7 
	capital                = 1369 # Guangzhou 
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil                    = 100 
	supplies               = 800 
	money                  = 50 
	manpower               = 220 #120 added to reinforce units 
	dissent                = 5 
   diplomacy = 
   {  relation = {  tag = JAP value = -200  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHI value = -200  } 
     relation = {  tag = CGX value = -200  } 
     relation = {  tag = CYN value = -200  } 
     # CHC protected by Shaanxi provincial governor who was secret communist
     relation = {  tag = CSX value = -75  } 
     relation = {  tag = CXB value = -100  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = MON value = 25  }
     relation = {  tag = U67 value = 50  } 
     relation = {  tag = SIK value = 40  }
    } 
   SpyInfo                = {  country = "CHC" NumberOfSpies = 3  } 
   nationalprovinces      = {   
  
 #Communist China at start      
 1255 1259 1260
  
 #Nationalist China  
 1256 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350  1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1384 1385 1386 1387 1388 1389 1390 
  
 #Guanxi Clique  
 1361 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
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
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1362 1363 1364  
  
                             } 
	ownedprovinces         = { 1365 1367 1374 1376 1379 1377 1373 1369 1383 1380 1382 1381 1368 1354 1375 1311 1378 1370 1375 1354 1356 1349 1355 1308 1309 1312 1307 1306 1305 1300 1304 1301 1310 1308 1318 1313 1353 1352 1350 1359 1357 1360 1358 1347 1346 1348 1345 1342 1351 1303 } 
	controlledprovinces    = { 1365 1367 1374 1376 1379 1377 1373 1369 1383 1380 1382 1381 1368 1354 1375 1311 1378 1370 1375 1354 1356 1349 1355 1308 1309 1312 1307 1306 1305 1300 1304 1301 1310 1308 1318 1313 1353 1352 1350 1359 1357 1360 1358 1347 1346 1348 1345 1342 1351 1303 } 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
						} 
	#Communist China
 	techapps = { 

	# Construction Engineering - Up to 1910
	5800 5080
	
	# Computers
	5310

	# Crypto
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330

	# Supply 
	1910 1920 1930 1940 1950 1960

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Manpower Doctrine
	6570 6300


	} 

blueprints = {
	
	# Manufacturing
	5810 5820

	#Computers
	54010

	# Cavalry
	1340 1350 1360 1370

	# Armoured Car  
	2860

	#Medicine
	5600

	# Interceptor Fighter  
	4500 4510 4520  
	# Multirole Fighter
	4300 4310
	# Tactical Bomber 
	4600 4610 4620
	# Strategic Bomber
	4800


}
inventions = { 3000027 }

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 8 
     free_market       = 4 
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 10 
     interventionism   = 5 
    } 
   headofstate            = {  type = 9 id = 260848  } 
   headofgovernment       = {  type = 9 id = 260858  } 
   foreignminister        = {  type = 9 id = 260861  } 
   armamentminister       = {  type = 9 id = 260814  } 
   ministerofsecurity     = {  type = 9 id = 260856  } 
   ministerofintelligence = {  type = 9 id = 260868  } 
   chiefofstaff           = {  type = 9 id = 260820  } 
   chiefofarmy            = {  type = 9 id = 260867  } 
   chiefofnavy            = {  type = 9 id = 260806  } 
   chiefofair             = {  type = 9 id = 260808  } 
   # ###### 
   # COMMUNIST CHINA 1936 OOB
   # http://zh.wikipedia.org/wiki/%E4%B8%AD%E5%9B%BD%E5%B7%A5%E5%86%9C%E7%BA%A2%E5%86%9B%E6%88%98%E6%96%97%E5%BA%8F%E5%88%97
   ####################
	# Hunan Task Force #
	####################
	landunit = 
   {  location = 1308 # Changsha
     name     = "28th Corps" 
     id       = {  type = 22000 id = 37  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 38 } 
       name       = "15th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 39  } 
       name       = "16th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 40  } 
       name       = "19th Division" # Different from the CGX
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1308 # Changsha
     name     = "4th Route Army" 
     id       = {  type = 22000 id = 41  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 42 } 
       name       = "62nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 43  } 
       name       = "63rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 44  } 
       name       = "New 34th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 45  } 
       name       = "4th Route Army Reserve Regiments" 
       type       = infantry
	   strength  = 75
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 46  } 
       name       = "4th Route Army Reserve Regiments" 
       type       = infantry
	   strength  = 75
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 47 } 
       name       = "4th Route Army HQ" 
       type       = hq
	   strength  = 100
       model     = 1
	   locked = yes
      }
    }
	landunit = 
   {  location = 1308 # Changsha
     name     = "Hunan Provincial Security Group" 
     id       = {  type = 22000 id = 48  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 49 } 
       name       = "1st Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 50  } 
       name       = "2nd Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 51  } 
       name       = "3rd Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 52  } 
       name       = "4th Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 53  } 
       name       = "5th Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 54  } 
       name       = "6th Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
    }

######################
	# Guizhou Task Force #
	######################
	landunit = 
   {  location = 1305 # Guiyang
     name     = "25th Corps" 
     id       = {  type = 22000 id = 55  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 56 } 
       name       = "103rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 57 } 
       name       = "102nd Division" 
       type       = infantry
	   strength  = 75
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 58  } 
       name       = "New 8th Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 59 } 
       name       = "121st Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 60  } 
       name       = "New 25th Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1305 # Guiyang
     name     = "Guizhou Provincial Security Group" 
     id       = {  type = 22000 id = 61  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 62 } 
       name       = "1st Provincial Militia" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 63 } 
       name       = "2nd Provincial Militia" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
    }
	################
	# Airforce OOB #
	###############
	# Hunan
	airunit = 
   {  location = 1312 # Hengyang
     name     = "Hunan Air Force" 
     base     = 1312 # Hengyang
     id       = {  type = 22000 id = 193  } 
     Division = 
     {  id           = {  type = 22000 id = 194  } 
       name         = "11th 13th 14th Squadron" 
       type         = tactical_bomber
       model        = 2
       strength     = 25
      } 
	  Division = 
     {  id           = {  type = 22000 id = 195  } 
       name         = "12th Squadron" 
       type         = interceptor 
       model        = 0
       strength     = 9 
      } 
    }
  } 
 
 