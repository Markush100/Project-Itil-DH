##############################
# Country definition for SOV #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SOV
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes SOVBuildLand = yes } }
  intrinsic_gov_type = leninist
  capital            = 553 # Petrograd
  dissent            = 20
  manpower           = 1953
  # Resource Reserves
  energy         = 12000
  metal          = 6000
  rare_materials = 3000
  oil            = 500
  supplies       = 500
  money          = 30
  transports     = 300
  escorts        = 20

  diplomacy = {
    relation = { tag = AFG value = -200 }
    relation = { tag = BRA value = -200 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CHC value = 150 }
    relation = { tag = CZE value = -200 }
    relation = { tag = ENG value = -200 }
    relation = { tag = EST value = -200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = FRA value = -200 }
    relation = { tag = GER value = -200 }
    relation = { tag = GRE value = -200 }
    relation = { tag = IRE value = -200 }
    relation = { tag = JAP value = -200 }
    relation = {
      tag        = LAT
      value      = 200
      access     = yes
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = LIT value = -150 }
    relation = { tag = MON value = -150 }
    relation = {
      tag        = PER
      value      = 200
      access     = yes
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = POL value = -50 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SAU value = -200 }
    relation = { tag = SIK value = -125 }
    relation = { tag = SPR value = 10 }
    relation = { tag = TUR value = -200 }
    relation = { tag = URU value = -100 }
    relation = { tag = USA value = -100 }
    relation = { tag = U00 value = -200 }
    relation = { tag = SCH value = 1 }
    relation = { tag = ALB value = -200 }
    relation = { tag = ALG value = -200 }
    relation = { tag = ARA value = -200 }
    relation = { tag = ARG value = -200 }
    relation = { tag = ARM value = -200 }
    relation = { tag = AST value = -200 }
    relation = { tag = AUS value = -200 }
    relation = { tag = AZB value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CHL value = -200 }
    relation = { tag = DEN value = -200 }
    relation = { tag = HOL value = -200 }
    relation = { tag = HUN value = -200 }
    relation = { tag = ISR value = 50 }
    relation = { tag = ITA value = 75 }
    relation = { tag = LBY value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = POR value = -200 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 10 }

  nationalprovinces      = { 247 248 251 253 255 256 257 498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 }
  ownedprovinces         = { 247 248 251 253 255 256 257 498 499 501 502 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 642 643 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 697 698 699 700 701 702 703 704 705 706 1069 1070 1113 1114 1115 1116 1117 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1162 1164 1165 1166 696 695 }
  controlledprovinces    = { 247 248 251 253 255 256 257 498 499 501 502 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 642 643 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 697 698 699 700 701 702 703 704 705 706 1069 1070 1113 1114 1115 1116 1117 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1162 1164 1165 1166 696 695 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1670 1830 1840 1850 1910 1920 1930 1940 1950 1960 1970 7600 7610 2620 2010 2630 2640 2646 2650 2030 2100 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2940 2800 2450 21180 2810 2820 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3650 12100 3720 3730 3736 3740 3750 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4400 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4290 4740 4750 4760 4770 5700 5710 5310 54010 54020 54030 5316 5326 5810 5820 5830 5800 5080 5190 5600 5610 5620 5560 14000 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6570 6300 6900 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8550 8560 8600 8610 81300 81310 81320 81330 81340 8100 8110 8120 8150 8160 8200 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 9
    freedom           = 3
    free_market       = 4
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 9
  }
  peacetime_ic_mod       = 0.6
  wartime_ic_mod         = 1.1
  industrial_modifier    = 1.1
  headofstate            = { type = 9 id = 30001 } # Lev Trotsky
  headofgovernment       = { type = 9 id = 30002 } # Nikolai Bukharin
  foreignminister        = { type = 9 id = 30003 } # Raphael Abramovitch
  armamentminister       = { type = 9 id = 30004 } # Yevgeni Preobrazhensky
  ministerofsecurity     = { type = 9 id = 30005 } # Sergey Kirov
  ministerofintelligence = { type = 9 id = 30006 } # Yakov Peters
  chiefofstaff           = { type = 9 id = 30007 } # Mikhail Tukhachevsky
  chiefofarmy            = { type = 9 id = 30008 } # Mikhail Frunze
  chiefofnavy            = { type = 9 id = 30009 } # Nikolay Kuznetsov
  chiefofair             = { type = 9 id = 30010 } # Yakov Alksnis

  landunit = {
    id       = { type = 10848 id = 1 }
    name     = "Petrogradskyi Voennyi Okrug"
    location = 553
    leader   = 30572
    division = {
      id             = { type = 10848 id = 2 }
      name           = "Petrogradskyi Voennyi Okrug"
      type           = hq
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 3 }
      name           = "1-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 1
    }
    division = {
      id             = { type = 10848 id = 4 }
      name           = "2-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 1
    }
    division = {
      id             = { type = 10848 id = 5 }
      name           = "3-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 6 }
    name     = "Belorusskyi Voennyi Okrug"
    location = 253
    leader   = 30543
    division = {
      id             = { type = 10848 id = 7 }
      name           = "Belorusskyi Voennyi Okrug"
      type           = hq
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 8 }
      name           = "4-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 2
    }
    division = {
      id             = { type = 10848 id = 9 }
      name           = "5-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 2
    }
    division = {
      id             = { type = 10848 id = 10 }
      name           = "1-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 11 }
      name           = "2-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 12 }
    name     = "Ukrainskiy Voennyi Okrug"
    location = 601
    leader   = 30735
    division = {
      id             = { type = 10848 id = 13 }
      name           = "Ukrainskiy Voennyi Okrug"
      type           = hq
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 14 }
      name           = "6-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 1
    }
    division = {
      id             = { type = 10848 id = 15 }
      name           = "7-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 1
    }
    division = {
      id             = { type = 10848 id = 16 }
      name           = "3-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 17 }
    name     = "Don Voennyi Okrug"
    location = 643
    leader   = 30193
    division = {
      id             = { type = 10848 id = 18 }
      name           = "Don Voennyi Okrug"
      type           = hq
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 19 }
      name           = "8-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 1
    }
    division = {
      id             = { type = 10848 id = 20 }
      name           = "9-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 1
    }
    division = {
      id             = { type = 10848 id = 21 }
      name           = "4-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 22 }
    name     = "Generalshtab RKKA"
    location = 572
    leader   = 30232
    division = {
      id             = { type = 10848 id = 23 }
      name           = "Generalshtab RKKA"
      type           = hq
      model          = 3
      extra          = anti_air
      brigade_model  = 3
      strength       = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 24 }
    name     = "I Korpus"
    location = 550
    division = {
      id             = { type = 10848 id = 25 }
      name           = "1-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 26 }
      name           = "2-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 27 }
      name           = "3-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 28 }
    name     = "IV Korpus"
    location = 552
    division = {
      id             = { type = 10848 id = 29 }
      name           = "4-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 30 }
      name           = "5-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 31 }
      name           = "6-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 32 }
    name     = "II Korpus"
    location = 566
    division = {
      id             = { type = 10848 id = 33 }
      name           = "7-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 34 }
      name           = "8-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 35 }
      name           = "9-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 36 }
    name     = "III Korpus"
    location = 268
    division = {
      id             = { type = 10848 id = 37 }
      name           = "10-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 38 }
      name           = "11-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = medium_armor
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 39 }
      name           = "12-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 40 }
    name     = "V Korpus"
    location = 267
    division = {
      id             = { type = 10848 id = 41 }
      name           = "13-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 42 }
      name           = "14-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 43 }
      name           = "15-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 44 }
    name     = "VII Korpus"
    location = 269
    division = {
      id             = { type = 10848 id = 45 }
      name           = "16-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 46 }
      name           = "17-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 47 }
      name           = "18-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 48 }
    name     = "VI Korpus"
    location = 255
    division = {
      id             = { type = 10848 id = 49 }
      name           = "19-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 50 }
      name           = "20-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 51 }
      name           = "21-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 52 }
    name     = "IX Korpus"
    location = 248
    division = {
      id             = { type = 10848 id = 53 }
      name           = "22-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 54 }
      name           = "23-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 55 }
      name           = "24-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 56 }
    name     = "X Korpus"
    location = 597
    division = {
      id             = { type = 10848 id = 57 }
      name           = "33-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 25
    }
    division = {
      id             = { type = 10848 id = 58 }
      name           = "26-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 59 }
      name           = "27-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 60 }
    name     = "VIII Korpus"
    location = 598
    division = {
      id             = { type = 10848 id = 61 }
      name           = "28-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 62 }
      name           = "29-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 63 }
      name           = "30-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 64 }
    name     = "XII Korpus"
    location = 602
    division = {
      id             = { type = 10848 id = 65 }
      name           = "31-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 66 }
      name           = "32-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 67 }
      name           = "33-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 68 }
    name     = "XI Korpus"
    location = 603
    division = {
      id             = { type = 10848 id = 69 }
      name           = "34-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 70 }
      name           = "35-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 71 }
      name           = "36-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 72 }
    name     = "XVI Korpus"
    location = 257
    division = {
      id             = { type = 10848 id = 73 }
      name           = "37-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 74 }
      name           = "38-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 75 }
      name           = "39-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 76 }
    name     = "XIV Korpus"
    location = 648
    division = {
      id             = { type = 10848 id = 77 }
      name           = "40-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 78 }
      name           = "41-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 79 }
      name           = "42-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 80 }
    name     = "XV Korpus"
    location = 649
    division = {
      id             = { type = 10848 id = 81 }
      name           = "43-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 82 }
      name           = "44-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 83 }
      name           = "45-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 84 }
    name     = "XVII Korpus"
    location = 645
    division = {
      id             = { type = 10848 id = 85 }
      name           = "46-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 86 }
      name           = "47-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 87 }
      name           = "48-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 88 }
    name     = "I Motokorpus"
    location = 265
    leader   = 30023
    division = {
      id             = { type = 10848 id = 89 }
      name           = "9-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 90 }
      name           = "10-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 91 }
      name           = "5-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 92 }
    name     = "II Motokorpus"
    location = 256
    leader   = 30053
    division = {
      id             = { type = 10848 id = 93 }
      name           = "11-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 94 }
      name           = "12-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 95 }
      name           = "6-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 96 }
    name     = "III Motokorpus"
    location = 587
    leader   = 30203
    division = {
      id             = { type = 10848 id = 97 }
      name           = "13-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 98 }
      name           = "14-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 99 }
      name           = "7-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 100 }
    name     = "IV Motokorpus"
    location = 646
    leader   = 30458
    division = {
      id             = { type = 10848 id = 101 }
      name           = "15-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 102 }
      name           = "16-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 103 }
      name           = "7-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 104 }
    name     = "XVIII Korpus"
    location = 695
    division = {
      id             = { type = 10848 id = 105 }
      name           = "49-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 106 }
      name           = "50-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 107 }
      name           = "51-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 108 }
    name     = "XIX Korpus"
    location = 696
    division = {
      id             = { type = 10848 id = 109 }
      name           = "52-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 110 }
      name           = "53-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 111 }
      name           = "54-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 7
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 112 }
    name     = "XX Korpus"
    location = 698
    division = {
      id             = { type = 10848 id = 113 }
      name           = "55-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 114 }
      name           = "56-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 115 }
      name           = "57-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 116 }
    name     = "XXI Korpus"
    location = 697
    division = {
      id             = { type = 10848 id = 117 }
      name           = "58-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 118 }
      name           = "59-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 119 }
      name           = "60-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 120 }
    name     = "V Motokorpus"
    location = 247
    leader   = 30437
    division = {
      id             = { type = 10848 id = 121 }
      name           = "17-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 2
    }
    division = {
      id             = { type = 10848 id = 122 }
      name           = "18-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      extra          = light_armor_brigade
      brigade_model  = 2
    }
    division = {
      id             = { type = 10848 id = 123 }
      name           = "8-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 10848 id = 1132 }
      name           = "8-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10848 id = 124 }
    name     = "I Kavkazskiy korpus"
    location = 703
    division = {
      id             = { type = 10848 id = 125 }
      name           = "1-ya  Gornaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 126 }
      name           = "2-ya  Gornaya Diviziya"
      type           = bergsjaeger
      model          = 8
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 127 }
      name           = "3-ya  Gornaya Diviziya"
      type           = bergsjaeger
      model          = 8
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 128 }
    name     = "II Kavkazskiy korpus"
    location = 712
    division = {
      id             = { type = 10848 id = 129 }
      name           = "4-ya  Gornaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 130 }
      name           = "5-ya  Gornaya Diviziya"
      type           = bergsjaeger
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 131 }
      name           = "6-ya  Gornaya Diviziya"
      type           = bergsjaeger
      model          = 8
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 132 }
    name     = "II Kavaleriyskiy Korpus"
    location = 1114
    leader   = 30732
    division = {
      id             = { type = 10848 id = 133 }
      name           = "3-ya Kustanayska Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 134 }
      name           = "5-ya Cherkasskaya Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 135 }
      name           = "1-ya Astrakhanskaya Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 136 }
    name     = "I Kavaleriyskiy Korpus"
    location = 502
    leader   = 30534
    division = {
      id             = { type = 10848 id = 137 }
      name           = "2-ya Barnaulskaya Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 138 }
      name           = "7-ya Buryatskaya Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      strength       = 60
    }
    division = {
      id             = { type = 10848 id = 139 }
      name           = "4-ya Derzhavinskaya Kavaleriyskaya Diviziya"
      type           = cavalry
      model          = 9
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 140 }
    name     = "Irkutskiy Voyennyy Okrug"
    location = 1162
    leader   = 30819
    division = {
      id             = { type = 10848 id = 141 }
      name           = "Irkutskiy Voennyi Okrug"
      type           = hq
      model          = 3
      extra          = police
      brigade_model  = 2
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 142 }
      name           = "9-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = medium_armor
      brigade_model  = 2
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 143 }
      name           = "10-ya Mekhanizirovannaya Diviziya"
      type           = motorized
      model          = 0
      extra          = heavy_armor
      brigade_model  = 1
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 144 }
      name           = "8-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 145 }
      name           = "9-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 146 }
      name           = "19-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 147 }
    name     = "XXII Korpus"
    location = 1070
    division = {
      id             = { type = 10848 id = 148 }
      name           = "61-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 149 }
      name           = "62-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 150 }
      name           = "63-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 151 }
    name     = "XXIII Korpus"
    location = 1164
    division = {
      id             = { type = 10848 id = 152 }
      name           = "64-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 153 }
      name           = "65-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 70
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 154 }
      name           = "66-ya  Strelkovaya Diviziya"
      type           = infantry
      model          = 8
      strength       = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 155 }
    name     = "1-ya Nzv. Tankovaya Armiya"
    location = 1070
    leader   = 30403
    division = {
      id             = { type = 10848 id = 156 }
      name           = "13-y Kavaleriyskiy Polk"
      type           = cavalry
      model          = 11
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 157 }
      name           = "10-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 60
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 158 }
      name           = "11-ya Tankovaya Diviziya"
      type           = armor
      model          = 0
      strength       = 60
      locked         = yes
    }
    division = {
      id             = { type = 10848 id = 159 }
      name           = "12-ya Tankovaya Diviziya"
      type           = light_armor
      model          = 0
      strength       = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 10848 id = 1032 }
    name     = "Vozdushno-Desantnaya Armiya"
    location = 553
    division = {
      id             = { type = 10848 id = 1033 }
      name           = "1-ya Gv. Vozdushno-Desantnaya"
      type           = paratrooper
      model          = 0
      extra          = glider_armor
      brigade_model  = 0
    }
    division = {
      id             = { type = 10848 id = 1034 }
      name           = "2-ya Gv. Vozdushno-Desantnaya"
      type           = paratrooper
      model          = 0
    }
  }

  navalunit = {
    id       = { type = 10848 id = 5100 }
    name     = "Krasnoznamenny Baltijsky Flot"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 5101 }
      name           = "Marat"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_fire_controll_l
      brigade_model1 = 4
      brigade_model2 = 0
    }
    division = {
      id             = { type = 10848 id = 5102 }
      name           = "Oktyabrskaya Revolutsiya"
      type           = battleship
      model          = 2
      extra1         = floatplane
      extra2         = naval_fire_controll_l
      brigade_model1 = 4
      brigade_model2 = 0
    }
    division = {
      id             = { type = 10848 id = 5103 }
      name           = "1 Brigada Esmintsev"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 5104 }
      name           = "2 Brigada Esmintsev"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5150 }
    name     = "1ya Brigada PL KBF"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 5151 }
      name           = "1. Divizion Podlodok"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5160 }
    name     = "2ya Brigada PL KBF"
    location = 641
    base     = 641
    division = {
      id             = { type = 10848 id = 5161 }
      name           = "2. Divizion Podlodok"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5200 }
    name     = "Chernomorskiy Flot"
    location = 645
    base     = 645
    division = {
      id             = { type = 10848 id = 5201 }
      name           = "Parizhskaya Kommuna"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5202 }
      name           = "Krasni Kavkaz"
      type           = heavy_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 3
    }
    division = {
      id             = { type = 10848 id = 5203 }
      name           = "Profintern"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5204 }
      name           = "Komintern"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 5205 }
      name           = "Chervonaya Ukraina"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5206 }
      name           = "1. Divizion Esmintsev"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5207 }
      name           = "2. Divizion Esmintsev"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10848 id = 5400 }
    name     = "Severnaya Voennaya Flotiliya"
    location = 535
    base     = 535
    division = {
      id             = { type = 10848 id = 5401 }
      name           = "3. Divizion Esmintsev"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 5402 }
      name           = "3. Divizion Podlodok"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 10848 id = 7000 }
    name     = "1 AviaKorpus"
    location = 572
    base     = 572
    division = {
      id             = { type = 10848 id = 7001 }
      name           = "403.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7002 }
      name           = "23.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7003 }
    name     = "11 TBABR MVO"
    location = 654
    base     = 654
    division = {
      id             = { type = 10848 id = 7004 }
      name           = "11.TBABR"
      type           = strategic_bomber
      model          = 2
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7005 }
    name     = "4 AviaKorpus"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 7006 }
      name           = "1.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7007 }
      name           = "2.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7008 }
    name     = "LVO"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 7009 }
      name           = "53.LBABR"
      type           = multi_role
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 7010 }
      name           = "100.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7011 }
    name     = "3 ABRON LVO"
    location = 553
    base     = 553
    division = {
      id             = { type = 10848 id = 7012 }
      name           = "3.ABRON"
      type           = transport_plane
      model          = 1
    }
    division = {
      id             = { type = 10848 id = 9012 }
      name           = "4.ABRON"
      type           = transport_plane
      model          = 1
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7013 }
    name     = "200 IABR LVO"
    location = 566
    base     = 566
    division = {
      id             = { type = 10848 id = 7014 }
      name           = "3.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7015 }
    name     = "6 AviaKorpus"
    location = 588
    base     = 588
    division = {
      id             = { type = 10848 id = 7016 }
      name           = "5.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7017 }
      name           = "9.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7018 }
      name           = "402.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7019 }
    name     = "40 LBABR BVO"
    location = 590
    base     = 590
    division = {
      id             = { type = 10848 id = 7020 }
      name           = "40.LBABR"
      type           = multi_role
      model          = 3
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7021 }
    name     = "49 TBABR BVO"
    location = 590
    base     = 590
    division = {
      id             = { type = 10848 id = 7022 }
      name           = "49.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7023 }
    name     = "132 IABR BVO"
    location = 600
    base     = 600
    division = {
      id             = { type = 10848 id = 7024 }
      name           = "132. IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7025 }
    name     = "252 LSHABR BVO"
    location = 600
    base     = 600
    division = {
      id             = { type = 10848 id = 7026 }
      name           = "252.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7027 }
    name     = "116 TBABR BVO"
    location = 589
    base     = 589
    division = {
      id             = { type = 10848 id = 7028 }
      name           = "116.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7029 }
    name     = "47 ABRON BVO"
    location = 589
    base     = 589
    division = {
      id             = { type = 10848 id = 7030 }
      name           = "47.ABRON"
      type           = transport_plane
      model          = 1
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7031 }
    name     = "93 TBABR BVO"
    location = 563
    base     = 563
    division = {
      id             = { type = 10848 id = 7032 }
      name           = "93.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7033 }
    name     = "13 ABRON KVO"
    location = 617
    base     = 617
    division = {
      id             = { type = 10848 id = 7034 }
      name           = "13.ABRON"
      type           = transport_plane
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7035 }
    name     = "5 IABR KVO"
    location = 617
    base     = 617
    division = {
      id             = { type = 10848 id = 7036 }
      name           = "5.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7037 }
    name     = "404 IABR KVO"
    location = 611
    base     = 611
    division = {
      id             = { type = 10848 id = 7038 }
      name           = "404.IABR"
      type           = interceptor
      model          = 5
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7039 }
    name     = "256 LSHABR KVO"
    location = 617
    base     = 617
    division = {
      id             = { type = 10848 id = 7040 }
      name           = "256.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7041 }
    name     = "10 AviaKorpus"
    location = 628
    base     = 628
    division = {
      id             = { type = 10848 id = 7042 }
      name           = "15.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7043 }
    name     = "18 TBABR KVO"
    location = 654
    base     = 654
    division = {
      id             = { type = 10848 id = 7044 }
      name           = "18.TBABR"
      type           = strategic_bomber
      model          = 2
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7045 }
    name     = "43 TBABR KhVO"
    location = 636
    base     = 636
    division = {
      id             = { type = 10848 id = 7046 }
      name           = "43.TBABR"
      type           = tactical_bomber
      model          = 3
      extra          = escort
      brigade_model  = 0
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7047 }
    name     = "16 TBABR KhVO"
    location = 636
    base     = 636
    division = {
      id             = { type = 10848 id = 7048 }
      name           = "16.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7049 }
    name     = "5 AviaKorpus"
    location = 1162
    base     = 1162
    division = {
      id             = { type = 10848 id = 7050 }
      name           = "29.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7051 }
      name           = "32.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7052 }
    name     = "26 TBABR DVO"
    location = 1162
    base     = 1162
    division = {
      id             = { type = 10848 id = 7053 }
      name           = "26.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7054 }
    name     = "50 LSHABR DVO"
    location = 1162
    base     = 1162
    division = {
      id             = { type = 10848 id = 7055 }
      name           = "50.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7056 }
    name     = "134 LSHABR  SibVO"
    location = 1143
    base     = 1143
    division = {
      id             = { type = 10848 id = 7057 }
      name           = "134.LSHABR"
      type           = cas
      model          = 0
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7058 }
    name     = "21 TBABR SKVO"
    location = 644
    base     = 644
    division = {
      id             = { type = 10848 id = 7059 }
      name           = "21.TBABR"
      type           = tactical_bomber
      model          = 3
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7080 }
    name     = "55 LBABR SKVO"
    location = 644
    base     = 644
    division = {
      id             = { type = 10848 id = 7081 }
      name           = "55.LBABR"
      type           = multi_role
      model          = 3
      strength       = 70
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7082 }
    name     = "20 TBABR TOF"
    location = 1162
    base     = 1162
    division = {
      id             = { type = 10848 id = 7083 }
      name           = "20.TBABR"
      type           = naval_bomber
      model          = 1
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 10848 id = 7084 }
    name     = "106 TBABR CHF"
    location = 663
    base     = 663
    division = {
      id             = { type = 10848 id = 7085 }
      name           = "106.TBABR"
      type           = naval_bomber
      model          = 1
      strength       = 80
    }
  }

  division_development = {
    id             = { type = 10848 id = 8501 }
    name           = "5. Flotiliya Podlodok"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = february day = 1 }
  }
  division_development = {
    id             = { type = 10848 id = 8502 }
    name           = "6. Flotiliya Podlodok"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 10848 id = 8503 }
    name           = "Odessa"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1938 month = september day = 23 }
    extra1         = floatplane
    brigade_model1 = 3
  }
  division_development = {
    id             = { type = 10848 id = 8504 }
    name           = "Matushenko"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1940 month = june day = 20 }
    extra1         = floatplane
    brigade_model1 = 3
  }
  division_development = {
    id             = { type = 10848 id = 8505 }
    name           = "13-ya Tankovaya Diviziya"
    type           = armor
    model          = 0
    cost           = 10.0
    date           = { year = 1937 month = july day = 30 }
  }
  division_development = {
    id             = { type = 10848 id = 8506 }
    name           = "14-ya Tankovaya Diviziya"
    type           = armor
    model          = 0
    cost           = 10.0
    date           = { year = 1937 month = july day = 30 }
  }
  division_development = {
    id             = { type = 10848 id = 8507 }
    name           = "15-ya Tankovaya Diviziya"
    type           = armor
    model          = 0
    cost           = 10.0
    date           = { year = 1937 month = july day = 30 }
  }
  division_development = {
    id             = { type = 10848 id = 8508 }
    name           = "16-ya Tankovaya Diviziya"
    type           = armor
    model          = 0
    cost           = 10.0
    date           = { year = 1937 month = july day = 30 }
  }
  division_development = {
    id             = { type = 10848 id = 8509 }
    name           = "17-ya Tankovaya Diviziya"
    type           = armor
    model          = 0
    cost           = 10.0
    date           = { year = 1937 month = july day = 30 }
  }
  division_development = {
    id             = { type = 10848 id = 8510 }
    name           = "18-ya Tankovaya Diviziya"
    type           = armor
    model          = 0
    cost           = 10.0
    date           = { year = 1937 month = july day = 30 }
  }
}
