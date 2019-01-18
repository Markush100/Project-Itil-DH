 
 ############################## 
 # Country definition for PER # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	# Resource Reserves 
	energy                 = 540
	metal                  = 270
	rare_materials         = 135
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1085 
	manpower               = 167 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 8
     freedom           = 4 
     free_market       = 3 
     professional_army = 7 
     defense_lobby     = 6 
     interventionism   = 6 
    } 

   nationalprovinces      = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  } 
   ownedprovinces         = {  1080 1081 1082 1083 1084 1085 1086 1087 1092  } 
   controlledprovinces    = {  1080 1081 1082 1083 1084 1085 1086 1087 1092  } 
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
   diplomacy = 
   {  relation = {  tag = AFG value = 25  } 
     relation = {  tag = DEN value = 50  } 
     relation = {  tag = ENG value = 25  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = SAU value = 100  } 
     relation = {  tag = SOV value = -20  } 
     relation = {  tag = SWE value = 50  } 
     relation = {  tag = TUR value = -50  } 
    } 
   SpyInfo                = {  country = "PER" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 150001  } 
   headofgovernment       = {  type = 9 id = 150002  } 
   foreignminister        = {  type = 9 id = 150003  } 
   armamentminister       = {  type = 9 id = 150004  } 
   ministerofsecurity     = {  type = 9 id = 150005  } 
   ministerofintelligence = {  type = 9 id = 150006  } 
   chiefofstaff           = {  type = 9 id = 150007  } 
   chiefofarmy            = {  type = 9 id = 150008  } 
   chiefofnavy            = {  type = 9 id = 150009  } 
   chiefofair             = {  type = 9 id = 150010  } 
   landunit = 
   {  id       = {  type = 16600 id = 1  } 
     name     = "Persidskiy voyennyy okrug" 
     location = 1086 # Estfahan
     Division = 
     {  id       = {  type = 16600 id =  2 } 
       name     = "1-ya Persidskaya Strelkovaya Diviziya" 
       strength = 100 
       type     = infantry 
     model    = 8
     extra = engineer
     brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 16600 id =  3 } 
       name     = "2-ya Persidskaya Strelkovaya Diviziya" 
       strength = 90 
       type     = infantry 
     model    = 8
    extra = anti_air
    brigade_model = 0   
      } 
     Division = 
     {  id       = {  type = 16600 id = 4  } 
       name     = "3-ya Persidskaya Strelkovaya Diviziya" 
       strength = 90 
       type     = infantry 
     model    = 8
      } 
      Division = 
     {  id       = {  type = 16600 id = 5  } 
       name     = "1-ya Persidskaya Kavaleriiskaya Diviziya" 
       strength = 100 
       type     = cavalry
       model    = 8
       extra = light_armor_brigade
       brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 16600 id = 6  } 
       name     = "4-ya Persidskaya Strelkovaya Diviziya" 
       strength = 60 
       type     = infantry 
     model    = 8
      }
     Division = 
     {  id       = {  type = 16600 id = 7  } 
       name     = "5-ya Persidskaya Strelkovaya Diviziya" 
       strength = 60 
       type     = infantry 
     model    = 8
      }
     Division = 
     {  id       = {  type = 16600 id = 8  } 
       name     = "6-ya Persidskaya Strelkovaya Diviziya" 
       strength = 60 
       type     = infantry 
     model    = 8
      }
     Division = 
     {  id       = {  type = 16600 id = 9  } 
       name     = "7-ya Persidskaya Strelkovaya Diviziya" 
       strength = 50 
       type     = infantry 
     model    = 8
      }
  } 
  

  landunit = {
     id = { type = 16600 id = 10 }
     name = "Mashad Red Guard Cavalry"
     location = 1092 #Mashad
     Division = 
     {  id       = {  type = 16600 id = 11  } 
       name     = "1st Red Guard Cavalry" 
       strength = 100 
       type     = cavalry
       model    = 6
      } 

     Division = 
     {  id       = {  type = 16600 id = 12  } 
       name     = "2nd Red Guard Cavalry" 
       strength = 80 
       type     = cavalry
       model    = 6
      } 
     Division = 
     {  id       = {  type = 16600 id = 13  } 
       name     = "3rd Red Guard Cavalry" 
       strength = 50 
       type     = cavalry
       model    = 6
      } 
  }

  landunit = {
     id = { type = 16600 id = 14 }
     name = "Hamadan Red Guard"
     location = 1087 #Hamadan
     Division = 
     {  id       = {  type = 16600 id = 15  } 
       name     = "1st Red Guard" 
       strength = 100 
       type     = infantry
       model    = 5
      } 
     Division = 
     {  id       = {  type = 16600 id = 16  } 
       name     = "2nd Red Guard" 
       strength = 80 
       type     = infantry
       model    = 5
      } 
     Division = 
     {  id       = {  type = 16600 id = 17  } 
       name     = "3rd Red Guard" 
       strength = 50 
       type     = infantry
       model    = 5
      } 
  }


    landunit = {
     id = { type = 16600 id = 18 }
     name = "1st Army Corps"
     location = 1085 #Tehran
     Division = 
     {  id       = {  type = 16600 id = 19  } 
       name     = "1st Infantry Division" 
       strength = 100 
       type     = infantry
       model    = 7
      } 
     Division = 
     {  id       = {  type = 16600 id = 20  } 
       name     = "2nd Infantry Division" 
       strength = 80 
       type     = infantry
       model    = 7
      } 
     Division = 
     {  id       = {  type = 16600 id = 21  } 
       name     = "3rd Infantry Division" 
       strength = 70 
       type     = infantry
       model    = 7
      } 
      Division = 
      {  id       = {  type = 16600 id = 22  } 
       name     = "4th Infantry Division" 
       strength = 70 
       type     = infantry
       model    = 7
      } 
     Division = 
     {  id       = {  type = 16600 id = 23  } 
       name     = "5th Infantry Division" 
       strength = 70 
       type     = infantry
       model    = 7
      } 
  }
 
 airunit = { 
  id = { type = 16600 id = 24 } 
  name = "1 PBAD" 
  location = 1085 
  base = 1085 
  division = { 
  id = { type = 16600 id = 25 } 
    name = "1.PBAD" 
    strength = 100
    type = tactical_bomber 
    model = 3 
      } 
  }


 airunit = { 
  id = { type = 10848 id = 7037 } 
  name = "1 PIABR " 
  location = 1085 
  base = 1085 
  division = { 
  id = { type = 10848 id = 7038 } 
    name = "1.PIABR" 
    strength = 80 
    type = interceptor 
    model = 5 
      } 
    }




 }
