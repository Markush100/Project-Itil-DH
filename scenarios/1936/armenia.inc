######################################### 
 # Country definition for Armenia       # 
 #########################################
 ## Made by Markush ##
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = ARM 
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
     democratic        = 6 
     political_left    = 3 
     free_market       = 4 
     freedom           = 6 
     professional_army = 9 
     defense_lobby     = 9
     interventionism   = 1 
    } 	
	
	
   diplomacy = 
   {  
 
    } 
   SpyInfo                = {  country = "ARM" NumberOfSpies = 6  } 
   nationalprovinces      = {  711 714 386 1063 1067  } 
   ownedprovinces         = {  711 714 386 1063 1067  } 
   controlledprovinces    = {  711 714 386 1063 1067  } 
  # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Medicine
5600
#Engineers
1830 1840 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
inventions = { 3000027 } 

   headofstate            = {  type = 9 id = 455001  } 
   headofgovernment       = {  type = 9 id = 455002  } 
   foreignminister        = {  type = 9 id = 455003  } 
   armamentminister       = {  type = 9 id = 455004  } 
   ministerofsecurity     = {  type = 9 id = 455005  } 
   ministerofintelligence = {  type = 9 id = 455006  } 
   chiefofstaff           = {  type = 9 id = 455007  } 
   chiefofarmy            = {  type = 9 id = 455008  } 
   chiefofnavy            = {  type = 9 id = 455026  } 
   chiefofair             = {  type = 9 id = 455027  } 


##LAND UNITS


landunit = 
   {  location = 711 
     name     = "Armenian National Army" 
     id       = {  type = 91000 id = 1  } 
     Division = 
     {  id    = {  type = 91000 id = 2  } 
       name  = "1-in Hakarrakordi Bazhanumy" 
       type  = infantry 
     model    = 8
       extra = artillery 
     brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 91000 id = 3  } 
       name = "2-rd Hakarrakordi Hazhanumy" 
       strength = 75
       type  = infantry 
       model    = 7
      } 
     Division = 
     {  id   = {  type = 91000 id = 4  } 
       name = "3-rd Hakarrakordi Hazhanumy" 
       strength = 75
       type  = infantry 
       model    = 7
      } 
     Division = 
     {  id   = {  type = 91000 id = 5  } 
       name = "1-in Jokati Bazhin" 
       model    = 8
       type = cavalry 
      } 
    } 

landunit = 
   {  location = 1063 
     name     = "Erzerum Garrison" 
     id       = {  type = 91000 id = 6  } 
     Division = 
     {  id    = {  type = 91000 id = 7  } 
       name  = "4-rd Hakarrakordi Bazhanumy" 
       type  = infantry 
     model    = 7
       extra = artillery 
     brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 91000 id = 8  } 
       name = "5-rd Hakarrakordi Hazhanumy" 
       strength = 75
       type  = infantry 
       model    = 7
      } 
     Division = 
     {  id   = {  type = 91000 id = 9  } 
       name = "6-rd Hakarrakordi Hazhanumy" 
       strength = 75
       type  = infantry 
       model    = 7
      } 
}

  navalunit = { 
    id = { type = 91000 id = 140 } 
    name = "Ap’i Pahakakhumb" 
    location = 1067 
    base = 1067 
    division = { 
      id = { type = 91000 id = 142 } 
      name = "Andranik" 
      type = light_cruiser
      model = 1
      } 
    division = { 
      id = { type = 91000 id = 142 } 
      name = "Nazarbekian" 
      type = light_cruiser
      model = 1
      } 
  }

}
