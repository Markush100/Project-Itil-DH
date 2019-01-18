######################################### 
 # Country definition for Azerbaijan       # 
 #########################################
 ## Made by Markush ##
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = AZB 
  puppet                   = SOV
  control                  = SOV
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	capital                = 108 
	manpower               = 5 
	# Resource Reserves 
	energy                 = 2040
	metal                  = 1020
	rare_materials         = 510
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	transports             = 100 
	escorts                = 20 
	
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3
     political_left    = 9 
     free_market       = 1 
     freedom           = 3 
     professional_army = 9 
     defense_lobby     = 6
     interventionism   = 1 
    } 	
	
	
   diplomacy = 
   {  
 
    } 
   SpyInfo                = {  country = "AZB" NumberOfSpies = 6  } 
   nationalprovinces      = {  712 713  } 
   ownedprovinces         = {  712 713  } 
   controlledprovinces    = {  712 713  } 
   ####SOVIET ALLY TECHS
     techapps               = {
    #1931 Infantry Division  
    1010 1020 1030 1040 1050 1060 1070 1080 1090
    #1930 Mountain Division 
    1160 1170 1180 1190 1200 1210 1220 1230 1240
    #SEMI-MOTORIZED CAVALRY 
    13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
    #1935 Motorized Inf
    1396
    # Airborne Inf
    1670
    #Engineers
    1830 1840 1850
    #Interbellum 1930 Supply 
    1910 1920 1930 1940 1950 1960 1970
    #Early Tank 
    7600 7610 2620 2010 2630 2640 2646 2650 2030 2100
    #Basic Armoured Car  
    2860 2870 2880 2020
    #Early Field Artillery 
    2290 2300 2310 2900 2910 2920 2930 2940
    #Early Static Anti-Air Artillery 
    2800 2450 21180
    #Anti-Air Artillery Brigade
    2810 2820 
 
    #Improved Destroyer 
    3010 3020 3030 3040 3050 3060
    #Interwar Light Cruiser 
    3110 3120 3130 3140 3150 3160
    #Improved Heavy Cruiser 
    3210 3220 3230 3240 3250 3260
    #Great War Battlecruiser  
    3310 3320 3330 3340
    #Early Battleship 
    3410 3420 3430 3440 3450 3456 3460
    #Short Range Submarine 
    3610 3620 3630 3640 3650
    #Seaplane Carrier
    12100
    #Torpedo & ASW 18
    3720 3730 3736 3740 3750 3900
    #Troopships
    3810
  
    #Early Fighter  
    4500 4510 4520 4530 4540 4550 4010 4020
    #Early CAS
    4400
    #Early Bomber 
    4600 4610 4620 4630 4120 4130
    #Multirole fighter
    4300 4310 4320 4330 4340
    #ww1 strategic bomber
    4800 4810 4820
    #ww1 navalbomber
    4700 4710
    # Transports
    4290
    #SEAPLANES
    4740 4750 4760 4770
  
    #Modern Agriculture  
    5700 5710
    #Computers & cryptografi
    5310 54010 54020 54030 5316 5326
    #manufactoring
    5810 5820
    #Construction Engineering 
    5800 5080
    #Basic Oil Refining 
    5190
    #Medicine
    5600 5610 5620 

    #Great War Hospital System 
    14000
    # Great War Land Doctrines (central powers)
    6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
    #Land Doctrines
    6570 6300 6900

    # Naval Doctrines 
    # Theory
    8010 8020 8030 8040 8050 8060 8070 8080
    # Amphib
    82300
    # Logistics
    82500
    # Naval Interdiction
    8500 8510 8550 8560 8600 8610
    # Indirect Approach
    81300 81310 81320 81330 81340
    # Naval Supremacy
    8100 8110 8120 8150 8160 8200

    #Air Doctrines - ww2 techs
    27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040
 
  } 
inventions = { 3000027 } 

   headofstate            = {  type = 9 id = 460001  } 
   headofgovernment       = {  type = 9 id = 460002  } 
   foreignminister        = {  type = 9 id = 460003  } 
   armamentminister       = {  type = 9 id = 460004  } 
   ministerofsecurity     = {  type = 9 id = 460005  } 
   ministerofintelligence = {  type = 9 id = 460006  } 
   chiefofstaff           = {  type = 9 id = 460040  }  
   chiefofarmy            = {  type = 9 id = 460039  } 
   chiefofnavy            = {  type = 9 id = 460008  } 
   chiefofair             = {  type = 9 id = 460010  }  

landunit = 
   {  location = 713 
     name     = "1st Corps" 
     id       = {  type = 93000 id = 1  } 
     Division = 
     {  id    = {  type = 93000 id = 2  } 
       name  = "1-ci Piyada Diviziyasi" 
       type  = infantry 
     model    = 7
       extra = artillery 
     brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 93000 id = 3  } 
       name = "2-ci Piyada Diviziyasi" 
       strength = 75
       type  = infantry 
       model    = 7
      } 
     Division = 
     {  id   = {  type = 93000 id = 4  } 
       name = "2-ci Piyada Diviziyasi" 
       strength = 75
       type  = infantry 
       model    = 7
      } 
}

}
