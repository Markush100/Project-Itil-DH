 
 ############################## 
 # Country definition for AUS # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = AUS 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	# HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex. 
	# Unwanted side-effect: Will never accept peace with Germany. 
	regular_id   = GER 
	intrinsic_gov_type     = social_liberal 
	manpower               = 23 
	capital                = 195 
	# Resource Reserves 
	energy                 = 1140
	metal                  = 570
	rare_materials         = 285
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
      
   diplomacy = 
   {  relation = {  tag = ENG value = 75  } 
     relation = {  tag = FIN value = 55  } 
     relation = {  tag = FRA value = -10  } 
     relation = {  tag = GER value = 10  } 
     relation = 
     {  tag        = HUN 
       value      = 100 
       guaranteed = {  day = 17 month = march year = 1934  } 
      } 
     relation = {  tag = IRE value = 10  } 
     relation = {  tag = ITA value = 125  } 
     relation = {  tag = SCH value = 50  } 
    } 
   SpyInfo                = {  country = "AUS" NumberOfSpies = 6  } 
   nationalprovinces      = {  186 187 189 190 191 192 193 194 195 401 402 346 349 403 404 406 } 
   ownedprovinces         = {  186 187 189 190 191 192 193 194 195 346 349 402 403 404 406 } 
   controlledprovinces    = {  186 187 189 190 191 192 193 194 195 346 349 402 403 404 406 } 
   claimedprovinces 	  = {  197 279 } 
   # Germany 1936 techs 
  ####################### 
  techapps = { 
  #Early Infantry Division  
  1010 1020 1030 1040 1050 1060 1070 1080 1090
  #SEMI-MOTORIZED CAVALRY 
  13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 
  # Motorized Infantry
  1396
  #Early Mountain Division 
  1160  1170 1180 1190 1200 1210 1220 1230 1240
  #Engineers
  1830 1840 1850 1860
  #Interbellum 1930 Supply
  1910 1920 1930 1940 1950 1960 1970 1980

  #Basic Armoured Car  
  2860 2870 2880 2020 2150
  #Early Tank 
  7600 7610 2620 2010 2630 2640 2646 2650 2030
  #Early Field Artillery 
  2290 2300 2310 2900 2910 2920 2930
  #Early Static Anti-Air Artillery 
  2800 2450 21180 21190 21200
  #Basic Anti-Air Artillery Brigade 
  2810 2820 2510

  #Improved Destroyer 
  3010 3020 3030 3040 3050 3060
  #Basic Light Cruiser 
  3110 3120 3130 3140 3150 3160
  #Improved Heavy Cruiser 
  3210 3220 3230 3240 3250 3260  
  #Early Battlecruiser
  3310 3320 3330 3340
  #Early Battleship 
  3410 3420 3430 3440 3450 3456 3460 3470
  #Improved Submarine 
  3610 3620 3630 3640 3650
  #Great War Air Carrier 
  3510
  #CAG
  4900
  #Improved Light carrier 
  12100 12110
  #Torpedo & ASW 18
  3720 3730 3736 3740 3750 3900
  #Troopships
  3810 3820

  #Basic Air Transport 
  4290 4250
  #Multirole fighter
  4300 4310 4320 4330 4340
  #CAS
  4400
  #ww1 strategic bomber
  4800 4810 4820
  #ww1 navalbomber
  4700 4710
  #Early Fighter  
  4500 4510 4520 4530 4540 4550 4010 4020
  #Early Bomber
  4600 4610 4620 4630 4120 4130
  #SEAPLANES
  4740 4750 4760

  #Manufacturing
  5810 5820 5050 5830 5060
  #Improved Construction Engineering 
  5800 5080 5090
  #Basic Oil Refining
  5190 5200
  #Computers & cryptografi
  5310 54010 54020 54030 5316 5326
  #Exp. Rocket
  5560
  #Mechanized Agriculture 
  5700 5710 5010 5020
  #Medicine
  5600 5610 5620 5630

  # Great War Land Doctrines (central powers)
  6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
  # WW2 Land Doctrines
  6210 6220 6230 6250 6900
  #Great War Hospital System 
  14000 14010 14020

  #Air Doctrines - ww2 techs
  27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090

  #Naval Doctrines
  8010 8020 8030 8040 8050 8060 8070 8080
  # Amphib
  82300
  # Naval Logistics
  82500
  # Naval Interdiction
  8500 8510 8520 8550 8560 8570
  # Trade Interdiction Submarine
  8600 8610
  # Indirect Approach
  81300 81310 81320 81330 81340 81350
  # Naval Supremacy
  8100 8110 8120 8150 8160 8170 8200 8210
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 8
     political_left    = 4 
     free_market       = 8 
     freedom           = 7 
     professional_army = 5 
     defense_lobby     = 4 
     interventionism   = 4 
    } 
	
   headofstate            = {  type = 9 id = 115001  } 
   headofgovernment       = {  type = 9 id = 115002  } 
   foreignminister        = {  type = 9 id = 115003  } 
   armamentminister       = {  type = 9 id = 115004  } 
   ministerofsecurity     = {  type = 9 id = 115005  } 
   ministerofintelligence = {  type = 9 id = 115006  } 
   chiefofstaff           = {  type = 9 id = 115007  } 
   chiefofarmy            = {  type = 9 id = 115008  } 
   chiefofnavy            = {  type = 9 id = 115009  } 
   chiefofair             = {  type = 9 id = 115010  } 
   landunit = 
   {  id       = {  type = 14000 id = 9000  } 
     location = 195 
     name     = "Oberkommando des Bundesheeres" 
     Division = 
     {  id       = {  type = 14000 id = 9001  } 
       name     = "Schnelle Division" 
       type     = cavalry 
       model    = 7 
       strength = 50 
	extra = armored_car
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 14000 id = 9002  } 
       name     = "1. Division" 
       type     = infantry 
       model    = 7 
       strength = 35
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 14000 id = 9003  } 
       name     = "2. Division" 
       type     = infantry 
       strength = 30 
       model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9004  } 
     location = 193 
     name     = "3. 'Niederösterreich' Division" 
     Division = 
     {  id       = {  type = 14000 id = 9005  } 
       name     = "3. Division" 
       type     = infantry 
	   strength = 30 
       model    = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9006  } 
     location = 187 
     name     = "4. 'Oberösterreich' Division" 
     Division = 
     {  id       = {  type = 14000 id = 9007  } 
       name     = "4. Division"
       type     = infantry
       strength = 30
       model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9008  } 
     location = 190 
     name     = "5. 'Steiermark' Division" 
     Division = 
     {  id       = {  type = 14000 id = 9009  } 
       name     = "5. Division" 
       type     = bergsjaeger 
       strength = 40 
       model    = 7 
	extra = anti_air
	brigade_model = 1
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9010  } 
     location = 189 
     name     = "6. 'Salzburg, Nordtirol und Vorarlberg' Division" 
     Division = 
     {  id       = {  type = 14000 id = 9011  } 
       name     = "6. Division" 
       type     = bergsjaeger
       strength = 25 
       model    = 7 
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9012  } 
     location = 191 
     name     = "7. 'Kärnten und Osttirol' Division" 
     Division = 
     {  id       = {  type = 14000 id = 9013  } 
       name     = "7. Division" 
       type     = bergsjaeger 
       strength = 25 
       model    = 7 
      } 
    } 
  } 
 