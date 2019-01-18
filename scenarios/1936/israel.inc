 ############################## 
 # Country definition for ISR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = ISR
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1045 
	manpower               = 3 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7
     political_left    = 7 
     freedom           = 6 
     free_market       = 5 
     professional_army = 8 
     defense_lobby     = 6 
     interventionism   = 1 
    } 

   nationalprovinces      = {  1008 1009 1010 1011 1013 1172 } 
   ownedprovinces         = {  1008 1009 1010 1011 1013 1172 } 
   controlledprovinces    = {  1008 1009 1010 1011 1013 1172 } 



   techapps               = {  
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060    
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240  
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370

#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960

#Basic Armoured Car  
2860 2870 2880 2020

#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Anti-Tank Artillery 
#2400
#Early Static Anti-Air Artillery 
2800 2450
#SW Tank 
7600 7610
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230

#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
# Interwar Bomber 
4600 4610 4620 4630 4120

#Improved Construction Engineering 
5800 5080 
 
#Engineers
1830 1840 
#Firepower Focus Doctrine 
6010 
#Grand Battleplan Doctrine 
6030
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600
# Land Doctrines WW1 - Entente (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines
8010 8020 8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 


} 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 50  } 
     relation = {  tag = AST value = 50  } 
     relation = {  tag = ENG value = 100  } 
     relation = {  tag = FRA value = 10  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = ITA value = -25  } 
     relation = {  tag = OMN value = 125  } 
     relation = {  tag = PER value = 100  } 
     relation = {  tag = SOV value = 1  } 
     relation = {  tag = TUR value = 50  } 
     relation = {  tag = YEM value = 125  } 
    } 
   SpyInfo                = {  country = "SAU" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 675001  } 
   headofgovernment       = {  type = 9 id = 675002  } 
   foreignminister        = {  type = 9 id = 675003  } 
   armamentminister       = {  type = 9 id = 675004  } 
   ministerofsecurity     = {  type = 9 id = 675005  } 
   ministerofintelligence = {  type = 9 id = 675006  } 
   chiefofstaff           = {  type = 9 id = 675007  } 
   chiefofarmy            = {  type = 9 id = 675008  } 
   chiefofnavy            = {  type = 9 id = 675009  } 
   chiefofair             = {  type = 9 id = 675010  } 

}