##############################
# Country definition for CHI #
##############################

 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHI
	ai_settings	= { flags = { RES = yes MOB1 = yes MOB2 = yes 1330110043_HISTORICAL_SCENARIO = yes } }
	capital                = 1337 # Nanjing 
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
   {  relation = {  tag = CHC value = -200  }
     relation = {  tag = CGX value = -100  } 
     relation = {  tag = CSX value = -100  } 
     relation = {  tag = CXB value = -100   } 
     relation = {  tag = CYN value = -100  } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -150  } 
	 relation = {  tag = U74 value = -100  } 
    } 
   SpyInfo   
   = {  country = "CHI" NumberOfSpies = 5  } 
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
   1331 1328 1338 1332 1314 1315 1316 1317 1319 1320 1321 1322 1324 1325 1326 1327 1329 1330 1333 1334 1335 1336 1337 1338 1339 1340 1341 1343 1344
                             } 

   controlledprovinces    = {   
 #Nationalist China at start 
   1331 1328 1338 1332 1314 1315 1316 1317 1319 1320 1321 1322 1324 1325 1326 1327 1329 1330 1333 1334 1335 1336 1337 1338 1339 1340 1341 1343 1344 
                             } 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
	1119 #Tannu Tuva
	1414 #Kachin 
	1413
	}
						
	# NatChi 1936 techs 
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
     democratic        = 2 
     political_left    = 3 
     free_market       = 9 
     freedom           = 2 
     professional_Army = 4 
     defense_lobby     = 8 
     interventionism   = 4 
    } 

   headofstate            = {  type = 9 id = 55001  } 
   headofgovernment       = {  type = 9 id = 55113  } 
   foreignminister        = {  type = 9 id = 55115  } 
   armamentminister       = {  type = 9 id = 55116  } 
   ministerofsecurity     = {  type = 9 id = 55114  } 
   ministerofintelligence = {  type = 9 id = 55066  } 
   chiefofstaff           = {  type = 9 id = 55320  } 
   chiefofArmy            = {  type = 9 id = 55014  } 
   chiefofnavy            = {  type = 9 id = 55019  } 
   chiefofair             = {  type = 9 id = 55035  } 
   dormant_leaders        = {  55368 55375  } 
   #######################
   # CHINA 1936/1937 OOB #
   #######################
   # TYPE = 22000
   
    
	landunit = 
   {  location = 1337 # Nanjing
     name     = "Blue shirts Youth Force"
     id       = {  type = 22000 id = 1500  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 1501 } 
       name       = "1st Young Blueshirts " 
       type       = militia
	   strength  = 80
       model     = 3
      }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 1502 } 
       name       = "2nd Young Blueshirts" 
       type       = militia
	   strength  = 50
       model     = 3
      }

    }
	###nanyang###
	landunit = {
		
		location = 1325 
		name = "Nanyang Blueshirt Army"
		id = { type = 22000 id = 1503 }
		Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1504 } 
       name       = "Nanyang 1st Army" 
       type       = infantry
	   strength  = 100
       model     = 6
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1505 } 
       name       = "Nanyang 2nd Army" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	  Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1506 } 
       name       = "Nanyang 3rd Army" 
       type       = infantry
	   strength  = 90
       model     = 6
      }
	}
	###kaifeng###
	landunit = {
		
		location = 1319 
		name = "Kaifeng Blueshirt Army"
		id = { type = 22000 id = 1507 }
		Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1508 } 
       name       = "Kaifeng 1st Army" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1509 } 
       name       = "Kaifeng 2nd Army" 
       type       = infantry
	   strength  = 100
       model     = 5
      }
	  Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1510 } 
       name       = "Kaifeng 3rd Army" 
       type       = infantry
	   strength  = 90
       model     = 5
      }
	}
	landunit = {
		
		location = 1319 
		name = "Kaifeng National Pinoeers"
		id = { type = 22000 id = 1511 }
		Division = 
		{  experience = 30 
       id         = {  type = 22000 id = 1512 } 
       name       = "Kaifeng Pionneers" 
       type       = militia
	   strength  = 100
       model     = 5
		}
	  }
	  ###################
   # Shandong #
   ###################
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15468195&viewfull=1#post15468195

    landunit = 
   {  location = 1328 # Jinan 
     name     = "Shandong Blueshirt Militia" 
     id       = {  type = 22000 id = 1513  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 1514  } 
       name       = "1st Shandong Blueshirts" 
       type       = militia
	   strength  = 100
       model     = 3
	   locked = no
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 1515 } 
       name       = "2nd Shandong Blueshirts" 
       type       = militia
	   strength  = 80
       model     = 3
	   locked = no
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 1516 } 
       name       = "3rd Shandong Blueshirts" 
       type       = militia
	   strength  = 80
       model     = 3
	   locked = no
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 1517  } 
       name       = "4th Shandong Blueshirts" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = no
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 1518  } 
       name       = "5th Shandong Blueshirts" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = no
      }
    }
	
	
	##################
	# Nanjing #
	##################
	landunit = 
   {  location = 1337 # Nanjing
     name     = "Nanjing Blueshirts" 
     id       = {  type = 22000 id = 107  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 108 } 
       name       = "1st Nanjing Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 109 } 
       name       = "2nd Nanjing Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 50 
       id         = {  type = 22000 id = 110 } 
       name       = "3rd Nanjing Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "4th Nanjing Blueshirts" 
     id       = {  type = 22000 id = 111  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 112 } 
       name       = "14th Division" 
       type       = infantry
	   strength  = 80
       model     = 8
	   extra1 = engineer
	   brigade_model1 = 2
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 113 } 
       name       = "5th Nanjing Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
      }
	  Division = 
     {  experience = 50 
       id         = {  type = 22000 id = 114 } 
       name       = "6th Nanjing Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1338 # Shanghai
     name     = "Shanghai Blueshirts" 
     id       = {  type = 22000 id = 115  } 
     Division = 
     {  experience = 50 
       id         = {  type = 22000 id = 116 } 
       name       = "1st Shanghai Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 117 } 
       name       = "2nd Shanghai Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 6
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 4
      }
	  Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 118 } 
       name       = "3rd Shanghai Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
      }
    }
	landunit = 
   {  location = 1324 # Zhengzhou
     name     = "Zhengzhou Blueshirts" 
     id       = {  type = 22000 id = 119  } 
     Division = 
     {  experience = 0 
       id         = {  type = 22000 id = 120 } 
       name       = "1st Zhengzhou Blueshirts" 
       type       = Militia
	   strength  = 100
       model     = 3
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 121 } 
       name       = "2nd Zhengzhou Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 122 } 
       name       = "3rd Zhengzhou Blueshirts" 
       type       = infantry
	   strength  = 80
       model     = 5
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "Blueshirt Motorized Army" 
     id       = {  type = 22000 id = 123  } 
     Division = 
     {  experience = 30
       id         = {  type = 22000 id = 124 } 
       name       = "1st Motorized Division" 
       type       = motorized
	   strength  = 100
       model     = 1
	   extra1 = armored_car 
       brigade_model1     = 2
	   
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 125 } 
       name       = "2nd Motorized Division" 
       type       = motorized
	   strength  = 100
	   model = 1
	   extra1 = armored_car 
       brigade_model1     = 3
      }

    }
#####cavalry######
	landunit = 
   {  location = 1326 # 
     name     = "Blueshirt Cavalry Army" 
     id       = {  type = 22000 id = 126  } 
     Division = 
     {  experience = 30
       id         = {  type = 22000 id = 127 } 
       name       = "1st Cavalry Division" 
       type       = cavalry
	   strength  = 100
       model     = 3
	   
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 128 } 
       name       = "2nd Cavalry Division" 
       type       = cavalry
	   strength  = 100
	   model = 3
      }
	  
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 129 } 
       name       = "3rd Cavalry Division" 
       type       = cavalry
	   strength  = 50
	   model = 1
      }

    }
	# Name = "60th Corps" #Contains units from Yunnan 10th Route Army

	# German Trained
	# CGX Controlled: 3rd, 6th, 9th
	# Central Controlled: 14th, 36th, 46th, 87th, 88th

	# In Progress
	# CGX Controlled: 2nd, 4th, 25th (Only in 1936), 27th (Only in 1936)
	# Central Controlled: 10th, 11th, 57th, 67th, 80th, 83rd, 89th 

	################
	# Airforce OOB #
	###############
	# Main
	airunit = 
   {  location = 1330 # Jinan
     name     = "Blueshirt Airforce" 
     base     = 1330 # Jinan
     id       = {  type = 22000 id = 196  } 
     Division = 
     {  id           = {  type = 22000 id = 197  } 
       name         = "1st 2nd 9th 10th Squadrons" 
       type         = tactical_bomber
       model        = 2
       strength     = 40
      } 
	  Division = 
     {  id           = {  type = 22000 id = 198  } 
       name         = "21st 22nd 23rd 24th 25th Squadrons" 
       type         = interceptor 
       model        = 3
       strength     = 48
      } 
	  Division = 
     {  id           = {  type = 22000 id = 199  } 
       name         = "3rd 4th 5th 15th Squadrons" 
       type         = tactical_bomber 
       model        = 1
       strength     = 36
      }
	  Division = 
     {  id           = {  type = 22000 id = 200  } 
       name         = "15th Squadron" 
       type         = multi_role
       model        = 1
       strength     = 9
      } 
	  Division = 
     {  id           = {  type = 22000 id = 201  } 
       name         = "6th 35th Squadrons" 
       type         = interceptor 
       model        = 0
       strength     = 18
      } 
	   Division = 
     {  id           = {  type = 22000 id = 202  } 
       name         = "26th 27th Squadrons" 
       type         = tactical_bomber
       model        = 3
       strength     = 20
      } 
	  Division = 
     {  id           = {  type = 22000 id = 203  } 
       name         = "Transport Squadron" 
       type         = transport_plane
       model        = 0
       strength     = 100
      }
    }
	
	############
	# Navy OOB #
	############
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "1st Fleet" 
     id       = {  type = 22000 id = 204  } 
     base     = 1328
	  Division = 
     {  id    = {  type = 22000 id = 205  } 
       name  = "Ninghai"
       type  = light_cruiser
	   strength = 100
       model = 3  #Interwar
      } 
	  Division = 
     {  id    = {  type = 22000 id = 206  } 
       name  = "Pinghai"
       type  = light_cruiser
	   strength = 100
       model = 3  #Interwar
      } 
	 Division = 
     {  id    = {  type = 22000 id = 207  } 
       name  = "Datong, Ziqiang" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 10
      }
	   Division = 
     {  id    = {  type = 22000 id = 208  } 
       name  = "Yixian"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      } 
	  Division = 
     {  id    = {  type = 22000 id = 209  } 
       name  = "Hairong"
       type  = light_cruiser
	   strength = 100
       model = 1  #Scout Cruiser
      } 
	  Division = 
     {  id    = {  type = 22000 id = 210  } 
       name  = "Haichou"
       type  = light_cruiser
	   strength = 100
       model = 1  #Scout Cruiser
      } 
	 Division = 
     {  id           = {  type = 22000 id = 211  } 
       name  = "Yongjian, Yongji, Zhongshan, Jiankang" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }

	 Division = 
     {  id           = {  type = 22000 id = 212  } 
       name  = "Dingan, Kean" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 20
      }
	}
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "2nd Fleet" 
     id       = {  type = 22000 id = 213  } 
     base     = 1328

	 Division = 
     {  id    = {  type = 22000 id = 214  } 
       name  = "Minquan, Minsheng, Xianning, Chutong, Chutai" 
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
	   experience = 10
      }
	  Division = 
     {  id    = {  type = 22000 id = 215  } 
       name  = "Chuyou, Chuguan, Chuqian, Jiangyuan, Jiangzhen" 
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
	   experience = 10
      }
	 Division = 
     {  id           = {  type = 22000 id = 216  } 
       name  = "Jiangkun, Jiangxi" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 20
      }
	 Division = 
     {  id           = {  type = 22000 id = 217  } 
       name  = "Hupeng, Hue, Huying, Hucui" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }
	}
     navalunit = 
   {  location = 1328 # Qingdao 
     name     = "Training Fleet" 
     id       = {  type = 22000 id = 218  } 
     base     = 1328
	 Division = 
     {  id    = {  type = 22000 id = 219  } 
       name  = "Yingrui"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      } 
	 Division = 
     {  id    = {  type = 22000 id = 220  } 
       name  = "Tongji"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      }
	}
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "3rd Fleet" 
     id       = {  type = 22000 id = 221  } 
     base     = 1328
	 Division = 
     {  id    = {  type = 22000 id = 222  } 
       name  = "Zhenhai"
       type  = heavy_cruiser
	   strength = 100
       model = 1  #Armored Cruiser
      }
	 Division = 
     {  id           = {  type = 22000 id = 223  } 
       name  = "Tongan, Yongxiang, Chuyu, Jiangli" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }
	  Division = 
     {  id           = {  type = 22000 id = 224  } 
       name  = "Dinghai" 
       type  = destroyer
	   strength = 20
       model = 0  #Gunboat
	   experience = 20
      }
	}
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "RoC Naval Academy Fleet" 
     id       = {  type = 22000 id = 225  } 
     base     = 1328
	   Division = 
     {  id           = {  type = 22000 id = 226  } 
       name  = "Wen-42, Wen-88, Wen-93, Shi-34, Shi-102" 
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
	   experience = 20
      }
	  Division = 
     {  id           = {  type = 22000 id = 227  } 
       name  = "Shi-181, Yue-22, Yue-253, Yue-371" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }
	 Division = 
     {  id           = {  type = 22000 id = 228  } 
       name  = "Haijing, Junhe, Cedian, Boxian" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }
     Division = 
     {  id    = {  type = 22000 id = 229  } 
       name  = "Tongxin, Tongde, Ziyouzhongguo"
       type  = transport
	   strength = 60
       model = 0  
      } 
	}
	# ID 230 USED! See 46th Division
  } 
 
 