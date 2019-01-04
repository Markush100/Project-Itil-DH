 
 ############################## 
 # Country definition for U74 # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U74 
   regular_id             = CHI 
   puppet                 = JAP
   name = EHAC
   flag_ext = _EHAC

   # Resource Reserves 
	energy                 = 5
	metal                  = 5
	rare_materials         = 5
   oil                    = 5
   supplies               = 100 
   money                  = 5
   capital                = 1247 # Beijing
   manpower               = 20
   dissent                = 30
  
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 8 
    }

   nationalprovinces      = { 1247 1246 1241 1245 } 
   ownedprovinces         = { 1247 1246 1241 1245 } 
   controlledprovinces    = { 1247 1246 1241 1245 }
  

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
   headofstate            = {  type = 9 id = 1185001  }
   headofgovernment       = {  type = 9 id = 1185002  }
   foreignminister        = {  type = 9 id = 1185003  }
   armamentminister       = {  type = 9 id = 1185004 }
   ministerofsecurity     = {  type = 9 id = 1185005 }
   ministerofintelligence = {  type = 9 id = 1185006 }
   chiefofstaff           = {  type = 9 id = 1185007 }
   chiefofarmy            = {  type = 9 id = 1185008 }
   landunit = 
   {  location = 1247 # Beijing
     name     = "East Hebei Security Group" 
     id       = {  type = 22001 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22001 id = 2  } 
       name       = "1st 2nd Divisions" 
       type       = infantry 
	   strength  = 80
       model     = 5
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22001 id = 3  } 
       name       = "3rd 4th 5th Divisions" 
       type       = militia 
	   strength  = 40
       model     = 5
      }
	}
}
  
 